.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_kingChappyState_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_804910F0, local
	.asciz "PSMainSide_ObjSound.h"
.endobj lbl_804910F0
.balign 4
.obj lbl_80491108, local
	.asciz "P2Assert"
.endobj lbl_80491108
.balign 4
.obj lbl_80491114, local
	.asciz "hidewait"
.endobj lbl_80491114
.balign 4
.obj lbl_80491120, local
	.asciz "ArgRotYScale"
.endobj lbl_80491120

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj __vt__Q34Game10KingChappy12StateSwallow, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10KingChappy12StateSwallowFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10KingChappy12StateSwallowFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10KingChappy12StateSwallow
.obj __vt__Q34Game10KingChappy12StateCaution, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10KingChappy12StateCautionFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10KingChappy12StateCautionFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10KingChappy12StateCaution
.obj __vt__Q34Game10KingChappy11StateAppear, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10KingChappy11StateAppearFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10KingChappy11StateAppearFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10KingChappy11StateAppear
.obj __vt__Q34Game10KingChappy13StateHideWait, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10KingChappy13StateHideWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10KingChappy13StateHideWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10KingChappy13StateHideWaitFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10KingChappy13StateHideWait
.obj __vt__Q34Game10KingChappy9StateHide, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10KingChappy9StateHideFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10KingChappy9StateHideFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10KingChappy9StateHideFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10KingChappy9StateHide
.obj __vt__Q34Game10KingChappy8StateEat, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10KingChappy8StateEatFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10KingChappy8StateEatFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10KingChappy8StateEat
.obj __vt__Q34Game10KingChappy9StateTurn, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10KingChappy9StateTurnFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10KingChappy9StateTurnFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10KingChappy9StateTurn
.obj __vt__Q34Game10KingChappy11StateDamage, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10KingChappy11StateDamageFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10KingChappy11StateDamageFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10KingChappy11StateDamageFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10KingChappy11StateDamage
.obj __vt__Q34Game10KingChappy11StateWarCry, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10KingChappy11StateWarCryFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10KingChappy11StateWarCryFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10KingChappy11StateWarCryFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10KingChappy11StateWarCry
.obj __vt__Q23efx12ArgRotYScale, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q23efx12ArgRotYScaleFv
.endobj __vt__Q23efx12ArgRotYScale
.obj __vt__Q34Game10KingChappy10StateFlick, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10KingChappy10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10KingChappy10StateFlickFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10KingChappy10StateFlickFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10KingChappy10StateFlick
.obj __vt__Q34Game10KingChappy9StateDead, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10KingChappy9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10KingChappy9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10KingChappy9StateDeadFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10KingChappy9StateDead
.obj __vt__Q34Game10KingChappy11StateAttack, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10KingChappy11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10KingChappy11StateAttackFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10KingChappy11StateAttackFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10KingChappy11StateAttack
.obj __vt__Q34Game10KingChappy9StateWalk, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10KingChappy9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10KingChappy9StateWalkFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10KingChappy9StateWalkFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10KingChappy9StateWalk
.obj __vt__Q34Game10KingChappy5State, weak
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10KingChappy5State
.obj __vt__Q34Game10KingChappy3FSM, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10KingChappy3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
.endobj __vt__Q34Game10KingChappy3FSM

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
.obj lbl_8051E568, local
	.asciz "walk"
.endobj lbl_8051E568
.balign 4
.obj lbl_8051E570, local
	.float 1.0
.endobj lbl_8051E570
.obj lbl_8051E574, local
	.float 20.0
.endobj lbl_8051E574
.obj lbl_8051E578, local
	.float 0.0
.endobj lbl_8051E578
.balign 4
.obj lbl_8051E57C, local
	.asciz "attack"
.endobj lbl_8051E57C
.balign 4
.obj lbl_8051E584, local
	.float 5.0
.endobj lbl_8051E584
.obj lbl_8051E588, local
	.float 0.6
.endobj lbl_8051E588
.balign 4
.obj lbl_8051E58C, local
	.asciz "dead"
.endobj lbl_8051E58C
.balign 4
.obj lbl_8051E594, local
	.asciz "flick"
.endobj lbl_8051E594
.balign 4
.obj lbl_8051E59C, local
	.float 25.0
.endobj lbl_8051E59C
.obj lbl_8051E5A0, local
	.float 30.0
.endobj lbl_8051E5A0
.obj lbl_8051E5A4, local
	.float -1000.0
.endobj lbl_8051E5A4
.balign 4
.obj lbl_8051E5A8, local
	.asciz "warcry"
.endobj lbl_8051E5A8
.balign 4
.obj lbl_8051E5B0, local # pi
	.float 3.1415927
.endobj lbl_8051E5B0
.obj lbl_8051E5B4, local
	.float 0.0055555557
.endobj lbl_8051E5B4
.obj lbl_8051E5B8, local
	.float 100.0
.endobj lbl_8051E5B8
.balign 4
.obj lbl_8051E5BC, local
	.asciz "damage"
.endobj lbl_8051E5BC
.balign 8
.obj lbl_8051E5C8, local
	.8byte 0x4330000080000000
.endobj lbl_8051E5C8
.balign 4
.obj lbl_8051E5D0, local
	.asciz "turn"
.endobj lbl_8051E5D0
.balign 4
.obj lbl_8051E5D8, local
	.float 0.5
.endobj lbl_8051E5D8
.balign 4
.obj lbl_8051E5DC, local
	.asciz "eat"
.endobj lbl_8051E5DC
.balign 4
.obj lbl_8051E5E0, local
	.asciz "hide"
.endobj lbl_8051E5E0
.balign 4
.obj lbl_8051E5E8, local
	.asciz "appear"
.endobj lbl_8051E5E8
.balign 4
.obj lbl_8051E5F0, local
	.asciz "caution"
.endobj lbl_8051E5F0
.balign 4
.obj lbl_8051E5F8, local
	.asciz "swallow"
.endobj lbl_8051E5F8
.balign 4
.obj lbl_8051E600, local
	.float 300.0
.endobj lbl_8051E600

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn init__Q34Game10KingChappy3FSMFPQ24Game9EnemyBase, global
/* 803591BC 003560FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803591C0 00356100  7C 08 02 A6 */	mflr r0
/* 803591C4 00356104  38 80 00 0D */	li r4, 0xd
/* 803591C8 00356108  90 01 00 14 */	stw r0, 0x14(r1)
/* 803591CC 0035610C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803591D0 00356110  7C 7F 1B 78 */	mr r31, r3
/* 803591D4 00356114  4B DD 76 91 */	bl create__Q24Game17EnemyStateMachineFi
/* 803591D8 00356118  38 60 00 18 */	li r3, 0x18
/* 803591DC 0035611C  4B CC AC C9 */	bl __nw__FUl
/* 803591E0 00356120  7C 64 1B 79 */	or. r4, r3, r3
/* 803591E4 00356124  41 82 00 10 */	beq .L_803591F4
/* 803591E8 00356128  38 80 00 00 */	li r4, 0
/* 803591EC 0035612C  48 00 01 D5 */	bl __ct__Q34Game10KingChappy9StateWalkFi
/* 803591F0 00356130  7C 64 1B 78 */	mr r4, r3
.L_803591F4:
/* 803591F4 00356134  7F E3 FB 78 */	mr r3, r31
/* 803591F8 00356138  4B DD 77 11 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 803591FC 0035613C  38 60 00 20 */	li r3, 0x20
/* 80359200 00356140  4B CC AC A5 */	bl __nw__FUl
/* 80359204 00356144  7C 64 1B 79 */	or. r4, r3, r3
/* 80359208 00356148  41 82 00 10 */	beq .L_80359218
/* 8035920C 0035614C  38 80 00 01 */	li r4, 1
/* 80359210 00356150  48 00 04 39 */	bl __ct__Q34Game10KingChappy11StateAttackFi
/* 80359214 00356154  7C 64 1B 78 */	mr r4, r3
.L_80359218:
/* 80359218 00356158  7F E3 FB 78 */	mr r3, r31
/* 8035921C 0035615C  4B DD 76 ED */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80359220 00356160  38 60 00 10 */	li r3, 0x10
/* 80359224 00356164  4B CC AC 81 */	bl __nw__FUl
/* 80359228 00356168  7C 64 1B 79 */	or. r4, r3, r3
/* 8035922C 0035616C  41 82 00 10 */	beq .L_8035923C
/* 80359230 00356170  38 80 00 02 */	li r4, 2
/* 80359234 00356174  48 00 0B A5 */	bl __ct__Q34Game10KingChappy9StateDeadFi
/* 80359238 00356178  7C 64 1B 78 */	mr r4, r3
.L_8035923C:
/* 8035923C 0035617C  7F E3 FB 78 */	mr r3, r31
/* 80359240 00356180  4B DD 76 C9 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80359244 00356184  38 60 00 10 */	li r3, 0x10
/* 80359248 00356188  4B CC AC 5D */	bl __nw__FUl
/* 8035924C 0035618C  7C 64 1B 79 */	or. r4, r3, r3
/* 80359250 00356190  41 82 00 10 */	beq .L_80359260
/* 80359254 00356194  38 80 00 03 */	li r4, 3
/* 80359258 00356198  48 00 0D 8D */	bl __ct__Q34Game10KingChappy10StateFlickFi
/* 8035925C 0035619C  7C 64 1B 78 */	mr r4, r3
.L_80359260:
/* 80359260 003561A0  7F E3 FB 78 */	mr r3, r31
/* 80359264 003561A4  4B DD 76 A5 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80359268 003561A8  38 60 00 10 */	li r3, 0x10
/* 8035926C 003561AC  4B CC AC 39 */	bl __nw__FUl
/* 80359270 003561B0  7C 64 1B 79 */	or. r4, r3, r3
/* 80359274 003561B4  41 82 00 10 */	beq .L_80359284
/* 80359278 003561B8  38 80 00 04 */	li r4, 4
/* 8035927C 003561BC  48 00 17 01 */	bl __ct__Q34Game10KingChappy11StateWarCryFi
/* 80359280 003561C0  7C 64 1B 78 */	mr r4, r3
.L_80359284:
/* 80359284 003561C4  7F E3 FB 78 */	mr r3, r31
/* 80359288 003561C8  4B DD 76 81 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8035928C 003561CC  38 60 00 14 */	li r3, 0x14
/* 80359290 003561D0  4B CC AC 15 */	bl __nw__FUl
/* 80359294 003561D4  7C 64 1B 79 */	or. r4, r3, r3
/* 80359298 003561D8  41 82 00 10 */	beq .L_803592A8
/* 8035929C 003561DC  38 80 00 05 */	li r4, 5
/* 803592A0 003561E0  48 00 1E 7D */	bl __ct__Q34Game10KingChappy11StateDamageFi
/* 803592A4 003561E4  7C 64 1B 78 */	mr r4, r3
.L_803592A8:
/* 803592A8 003561E8  7F E3 FB 78 */	mr r3, r31
/* 803592AC 003561EC  4B DD 76 5D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 803592B0 003561F0  38 60 00 10 */	li r3, 0x10
/* 803592B4 003561F4  4B CC AB F1 */	bl __nw__FUl
/* 803592B8 003561F8  7C 64 1B 79 */	or. r4, r3, r3
/* 803592BC 003561FC  41 82 00 10 */	beq .L_803592CC
/* 803592C0 00356200  38 80 00 06 */	li r4, 6
/* 803592C4 00356204  48 00 20 C9 */	bl __ct__Q34Game10KingChappy9StateTurnFi
/* 803592C8 00356208  7C 64 1B 78 */	mr r4, r3
.L_803592CC:
/* 803592CC 0035620C  7F E3 FB 78 */	mr r3, r31
/* 803592D0 00356210  4B DD 76 39 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 803592D4 00356214  38 60 00 14 */	li r3, 0x14
/* 803592D8 00356218  4B CC AB CD */	bl __nw__FUl
/* 803592DC 0035621C  7C 64 1B 79 */	or. r4, r3, r3
/* 803592E0 00356220  41 82 00 10 */	beq .L_803592F0
/* 803592E4 00356224  38 80 00 07 */	li r4, 7
/* 803592E8 00356228  48 00 22 21 */	bl __ct__Q34Game10KingChappy8StateEatFi
/* 803592EC 0035622C  7C 64 1B 78 */	mr r4, r3
.L_803592F0:
/* 803592F0 00356230  7F E3 FB 78 */	mr r3, r31
/* 803592F4 00356234  4B DD 76 15 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 803592F8 00356238  38 60 00 10 */	li r3, 0x10
/* 803592FC 0035623C  4B CC AB A9 */	bl __nw__FUl
/* 80359300 00356240  7C 64 1B 79 */	or. r4, r3, r3
/* 80359304 00356244  41 82 00 10 */	beq .L_80359314
/* 80359308 00356248  38 80 00 08 */	li r4, 8
/* 8035930C 0035624C  48 00 23 2D */	bl __ct__Q34Game10KingChappy9StateHideFi
/* 80359310 00356250  7C 64 1B 78 */	mr r4, r3
.L_80359314:
/* 80359314 00356254  7F E3 FB 78 */	mr r3, r31
/* 80359318 00356258  4B DD 75 F1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8035931C 0035625C  38 60 00 18 */	li r3, 0x18
/* 80359320 00356260  4B CC AB 85 */	bl __nw__FUl
/* 80359324 00356264  7C 64 1B 79 */	or. r4, r3, r3
/* 80359328 00356268  41 82 00 10 */	beq .L_80359338
/* 8035932C 0035626C  38 80 00 09 */	li r4, 9
/* 80359330 00356270  48 00 26 0D */	bl __ct__Q34Game10KingChappy13StateHideWaitFi
/* 80359334 00356274  7C 64 1B 78 */	mr r4, r3
.L_80359338:
/* 80359338 00356278  7F E3 FB 78 */	mr r3, r31
/* 8035933C 0035627C  4B DD 75 CD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80359340 00356280  38 60 00 14 */	li r3, 0x14
/* 80359344 00356284  4B CC AB 61 */	bl __nw__FUl
/* 80359348 00356288  7C 64 1B 79 */	or. r4, r3, r3
/* 8035934C 0035628C  41 82 00 10 */	beq .L_8035935C
/* 80359350 00356290  38 80 00 0A */	li r4, 0xa
/* 80359354 00356294  48 00 28 75 */	bl __ct__Q34Game10KingChappy11StateAppearFi
/* 80359358 00356298  7C 64 1B 78 */	mr r4, r3
.L_8035935C:
/* 8035935C 0035629C  7F E3 FB 78 */	mr r3, r31
/* 80359360 003562A0  4B DD 75 A9 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80359364 003562A4  38 60 00 10 */	li r3, 0x10
/* 80359368 003562A8  4B CC AB 3D */	bl __nw__FUl
/* 8035936C 003562AC  7C 64 1B 79 */	or. r4, r3, r3
/* 80359370 003562B0  41 82 00 10 */	beq .L_80359380
/* 80359374 003562B4  38 80 00 0B */	li r4, 0xb
/* 80359378 003562B8  48 00 2D 15 */	bl __ct__Q34Game10KingChappy12StateCautionFi
/* 8035937C 003562BC  7C 64 1B 78 */	mr r4, r3
.L_80359380:
/* 80359380 003562C0  7F E3 FB 78 */	mr r3, r31
/* 80359384 003562C4  4B DD 75 85 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80359388 003562C8  38 60 00 10 */	li r3, 0x10
/* 8035938C 003562CC  4B CC AB 19 */	bl __nw__FUl
/* 80359390 003562D0  7C 64 1B 79 */	or. r4, r3, r3
/* 80359394 003562D4  41 82 00 10 */	beq .L_803593A4
/* 80359398 003562D8  38 80 00 0C */	li r4, 0xc
/* 8035939C 003562DC  48 00 2D BD */	bl __ct__Q34Game10KingChappy12StateSwallowFi
/* 803593A0 003562E0  7C 64 1B 78 */	mr r4, r3
.L_803593A4:
/* 803593A4 003562E4  7F E3 FB 78 */	mr r3, r31
/* 803593A8 003562E8  4B DD 75 61 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 803593AC 003562EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803593B0 003562F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803593B4 003562F4  7C 08 03 A6 */	mtlr r0
/* 803593B8 003562F8  38 21 00 10 */	addi r1, r1, 0x10
/* 803593BC 003562FC  4E 80 00 20 */	blr 
.endfn init__Q34Game10KingChappy3FSMFPQ24Game9EnemyBase

.fn __ct__Q34Game10KingChappy9StateWalkFi, global
/* 803593C0 00356300  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 803593C4 00356304  3C C0 80 4E */	lis r6, __vt__Q34Game10KingChappy5State@ha
/* 803593C8 00356308  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 803593CC 0035630C  3C A0 80 4E */	lis r5, __vt__Q34Game10KingChappy9StateWalk@ha
/* 803593D0 00356310  90 03 00 00 */	stw r0, 0(r3)
/* 803593D4 00356314  38 E0 00 00 */	li r7, 0
/* 803593D8 00356318  38 C6 1B EC */	addi r6, r6, __vt__Q34Game10KingChappy5State@l
/* 803593DC 0035631C  38 A5 1B C8 */	addi r5, r5, __vt__Q34Game10KingChappy9StateWalk@l
/* 803593E0 00356320  90 83 00 04 */	stw r4, 4(r3)
/* 803593E4 00356324  38 02 02 08 */	addi r0, r2, lbl_8051E568@sda21
/* 803593E8 00356328  90 E3 00 08 */	stw r7, 8(r3)
/* 803593EC 0035632C  90 C3 00 00 */	stw r6, 0(r3)
/* 803593F0 00356330  90 A3 00 00 */	stw r5, 0(r3)
/* 803593F4 00356334  90 03 00 0C */	stw r0, 0xc(r3)
/* 803593F8 00356338  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10KingChappy9StateWalkFi

.fn init__Q34Game10KingChappy9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 803593FC 0035633C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80359400 00356340  7C 08 02 A6 */	mflr r0
/* 80359404 00356344  38 A0 00 00 */	li r5, 0
/* 80359408 00356348  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035940C 0035634C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80359410 00356350  7C 9F 23 78 */	mr r31, r4
/* 80359414 00356354  38 80 00 06 */	li r4, 6
/* 80359418 00356358  93 C1 00 08 */	stw r30, 8(r1)
/* 8035941C 0035635C  7C 7E 1B 78 */	mr r30, r3
/* 80359420 00356360  7F E3 FB 78 */	mr r3, r31
/* 80359424 00356364  48 00 7D A1 */	bl startMotionSelf__Q34Game10KingChappy3ObjFiPQ28SysShape14MotionListener
/* 80359428 00356368  7F E3 FB 78 */	mr r3, r31
/* 8035942C 0035636C  48 00 81 85 */	bl resetFootPos__Q34Game10KingChappy3ObjFv
/* 80359430 00356370  80 1F 02 30 */	lwz r0, 0x230(r31)
/* 80359434 00356374  28 00 00 00 */	cmplwi r0, 0
/* 80359438 00356378  41 82 00 0C */	beq .L_80359444
/* 8035943C 0035637C  38 00 00 00 */	li r0, 0
/* 80359440 00356380  90 1E 00 10 */	stw r0, 0x10(r30)
.L_80359444:
/* 80359444 00356384  38 00 FF FF */	li r0, -1
/* 80359448 00356388  C0 22 9C 38 */	lfs f1, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
/* 8035944C 0035638C  90 1F 02 E8 */	stw r0, 0x2e8(r31)
/* 80359450 00356390  7F E3 FB 78 */	mr r3, r31
/* 80359454 00356394  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80359458 00356398  C0 04 09 AC */	lfs f0, 0x9ac(r4)
/* 8035945C 0035639C  EC 21 00 32 */	fmuls f1, f1, f0
/* 80359460 003563A0  4B DA DF 31 */	bl setAnimSpeed__Q24Game9EnemyBaseFf
/* 80359464 003563A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80359468 003563A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035946C 003563AC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80359470 003563B0  7C 08 03 A6 */	mtlr r0
/* 80359474 003563B4  38 21 00 10 */	addi r1, r1, 0x10
/* 80359478 003563B8  4E 80 00 20 */	blr 
.endfn init__Q34Game10KingChappy9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10KingChappy9StateWalkFPQ24Game9EnemyBase, global
/* 8035947C 003563BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80359480 003563C0  7C 08 02 A6 */	mflr r0
/* 80359484 003563C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80359488 003563C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035948C 003563CC  7C 9F 23 78 */	mr r31, r4
/* 80359490 003563D0  93 C1 00 08 */	stw r30, 8(r1)
/* 80359494 003563D4  7C 7E 1B 78 */	mr r30, r3
/* 80359498 003563D8  80 04 02 E8 */	lwz r0, 0x2e8(r4)
/* 8035949C 003563DC  2C 00 00 00 */	cmpwi r0, 0
/* 803594A0 003563E0  40 80 00 D0 */	bge .L_80359570
/* 803594A4 003563E4  7F E3 FB 78 */	mr r3, r31
/* 803594A8 003563E8  48 00 6B 8D */	bl walkFunc__Q34Game10KingChappy3ObjFv
/* 803594AC 003563EC  7F E3 FB 78 */	mr r3, r31
/* 803594B0 003563F0  38 80 00 01 */	li r4, 1
/* 803594B4 003563F4  48 00 7B E9 */	bl checkTurn__Q34Game10KingChappy3ObjFb
/* 803594B8 003563F8  80 1F 02 30 */	lwz r0, 0x230(r31)
/* 803594BC 003563FC  28 00 00 00 */	cmplwi r0, 0
/* 803594C0 00356400  40 82 00 10 */	bne .L_803594D0
/* 803594C4 00356404  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 803594C8 00356408  38 03 00 01 */	addi r0, r3, 1
/* 803594CC 0035640C  90 1E 00 10 */	stw r0, 0x10(r30)
.L_803594D0:
/* 803594D0 00356410  C0 22 02 10 */	lfs f1, lbl_8051E570@sda21(r2)
/* 803594D4 00356414  7F E3 FB 78 */	mr r3, r31
/* 803594D8 00356418  48 00 6A 11 */	bl isOutOfTerritory__Q34Game10KingChappy3ObjFf
/* 803594DC 0035641C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803594E0 00356420  40 82 00 24 */	bne .L_80359504
/* 803594E4 00356424  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 803594E8 00356428  88 04 0B C9 */	lbz r0, 0xbc9(r4)
/* 803594EC 0035642C  28 00 00 00 */	cmplwi r0, 0
/* 803594F0 00356430  40 82 00 14 */	bne .L_80359504
/* 803594F4 00356434  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 803594F8 00356438  80 04 0B 64 */	lwz r0, 0xb64(r4)
/* 803594FC 0035643C  7C 03 00 00 */	cmpw r3, r0
/* 80359500 00356440  40 81 00 54 */	ble .L_80359554
.L_80359504:
/* 80359504 00356444  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 80359508 00356448  7F E3 FB 78 */	mr r3, r31
/* 8035950C 0035644C  D0 1F 02 BC */	stfs f0, 0x2bc(r31)
/* 80359510 00356450  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 80359514 00356454  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 80359518 00356458  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 8035951C 0035645C  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 80359520 00356460  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80359524 00356464  80 04 0B 64 */	lwz r0, 0xb64(r4)
/* 80359528 00356468  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8035952C 0035646C  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80359530 00356470  C0 24 03 84 */	lfs f1, 0x384(r4)
/* 80359534 00356474  48 00 6D D9 */	bl isReachToGoal__Q34Game10KingChappy3ObjFf
/* 80359538 00356478  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035953C 0035647C  41 82 00 34 */	beq .L_80359570
/* 80359540 00356480  38 60 00 08 */	li r3, 8
/* 80359544 00356484  38 00 00 00 */	li r0, 0
/* 80359548 00356488  90 7F 02 E8 */	stw r3, 0x2e8(r31)
/* 8035954C 0035648C  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80359550 00356490  48 00 00 20 */	b .L_80359570
.L_80359554:
/* 80359554 00356494  C0 22 02 14 */	lfs f1, lbl_8051E574@sda21(r2)
/* 80359558 00356498  7F E3 FB 78 */	mr r3, r31
/* 8035955C 0035649C  48 00 6D B1 */	bl isReachToGoal__Q34Game10KingChappy3ObjFf
/* 80359560 003564A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80359564 003564A4  41 82 00 0C */	beq .L_80359570
/* 80359568 003564A8  7F E3 FB 78 */	mr r3, r31
/* 8035956C 003564AC  48 00 62 8D */	bl setNextGoal__Q34Game10KingChappy3ObjFv
.L_80359570:
/* 80359570 003564B0  7F E3 FB 78 */	mr r3, r31
/* 80359574 003564B4  38 80 00 01 */	li r4, 1
/* 80359578 003564B8  48 00 7A 39 */	bl checkDead__Q34Game10KingChappy3ObjFb
/* 8035957C 003564BC  7F E3 FB 78 */	mr r3, r31
/* 80359580 003564C0  38 80 00 01 */	li r4, 1
/* 80359584 003564C4  48 00 76 01 */	bl checkFlick__Q34Game10KingChappy3ObjFb
/* 80359588 003564C8  7F E3 FB 78 */	mr r3, r31
/* 8035958C 003564CC  38 80 00 01 */	li r4, 1
/* 80359590 003564D0  48 00 6D B1 */	bl checkAttack__Q34Game10KingChappy3ObjFb
/* 80359594 003564D4  80 1F 02 E8 */	lwz r0, 0x2e8(r31)
/* 80359598 003564D8  2C 00 00 00 */	cmpwi r0, 0
/* 8035959C 003564DC  41 80 00 1C */	blt .L_803595B8
/* 803595A0 003564E0  7F E3 FB 78 */	mr r3, r31
/* 803595A4 003564E4  4B DA BC FD */	bl finishMotion__Q24Game9EnemyBaseFv
/* 803595A8 003564E8  C0 02 02 18 */	lfs f0, lbl_8051E578@sda21(r2)
/* 803595AC 003564EC  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 803595B0 003564F0  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 803595B4 003564F4  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_803595B8:
/* 803595B8 003564F8  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 803595BC 003564FC  88 03 00 24 */	lbz r0, 0x24(r3)
/* 803595C0 00356500  28 00 00 00 */	cmplwi r0, 0
/* 803595C4 00356504  41 82 00 44 */	beq .L_80359608
/* 803595C8 00356508  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 803595CC 0035650C  28 00 07 D0 */	cmplwi r0, 0x7d0
/* 803595D0 00356510  40 82 00 10 */	bne .L_803595E0
/* 803595D4 00356514  7F E3 FB 78 */	mr r3, r31
/* 803595D8 00356518  48 00 7D 29 */	bl endBlendAnimation__Q34Game10KingChappy3ObjFv
/* 803595DC 0035651C  48 00 00 2C */	b .L_80359608
.L_803595E0:
/* 803595E0 00356520  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 803595E4 00356524  40 82 00 24 */	bne .L_80359608
/* 803595E8 00356528  7F C3 F3 78 */	mr r3, r30
/* 803595EC 0035652C  7F E4 FB 78 */	mr r4, r31
/* 803595F0 00356530  81 9E 00 00 */	lwz r12, 0(r30)
/* 803595F4 00356534  38 C0 00 00 */	li r6, 0
/* 803595F8 00356538  80 BF 02 E8 */	lwz r5, 0x2e8(r31)
/* 803595FC 0035653C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80359600 00356540  7D 89 03 A6 */	mtctr r12
/* 80359604 00356544  4E 80 04 21 */	bctrl 
.L_80359608:
/* 80359608 00356548  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035960C 0035654C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80359610 00356550  83 C1 00 08 */	lwz r30, 8(r1)
/* 80359614 00356554  7C 08 03 A6 */	mtlr r0
/* 80359618 00356558  38 21 00 10 */	addi r1, r1, 0x10
/* 8035961C 0035655C  4E 80 00 20 */	blr 
.endfn exec__Q34Game10KingChappy9StateWalkFPQ24Game9EnemyBase

.fn cleanup__Q34Game10KingChappy9StateWalkFPQ24Game9EnemyBase, global
/* 80359620 00356560  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80359624 00356564  7C 08 02 A6 */	mflr r0
/* 80359628 00356568  C0 22 9C 38 */	lfs f1, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
/* 8035962C 0035656C  7C 83 23 78 */	mr r3, r4
/* 80359630 00356570  90 01 00 14 */	stw r0, 0x14(r1)
/* 80359634 00356574  4B DA DD 5D */	bl setAnimSpeed__Q24Game9EnemyBaseFf
/* 80359638 00356578  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035963C 0035657C  7C 08 03 A6 */	mtlr r0
/* 80359640 00356580  38 21 00 10 */	addi r1, r1, 0x10
/* 80359644 00356584  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10KingChappy9StateWalkFPQ24Game9EnemyBase

.fn __ct__Q34Game10KingChappy11StateAttackFi, global
/* 80359648 00356588  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 8035964C 0035658C  3C C0 80 4E */	lis r6, __vt__Q34Game10KingChappy5State@ha
/* 80359650 00356590  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80359654 00356594  3C A0 80 4E */	lis r5, __vt__Q34Game10KingChappy11StateAttack@ha
/* 80359658 00356598  90 03 00 00 */	stw r0, 0(r3)
/* 8035965C 0035659C  38 E0 00 00 */	li r7, 0
/* 80359660 003565A0  38 C6 1B EC */	addi r6, r6, __vt__Q34Game10KingChappy5State@l
/* 80359664 003565A4  38 A5 1B A4 */	addi r5, r5, __vt__Q34Game10KingChappy11StateAttack@l
/* 80359668 003565A8  90 83 00 04 */	stw r4, 4(r3)
/* 8035966C 003565AC  38 02 02 1C */	addi r0, r2, lbl_8051E57C@sda21
/* 80359670 003565B0  90 E3 00 08 */	stw r7, 8(r3)
/* 80359674 003565B4  90 C3 00 00 */	stw r6, 0(r3)
/* 80359678 003565B8  90 A3 00 00 */	stw r5, 0(r3)
/* 8035967C 003565BC  90 03 00 0C */	stw r0, 0xc(r3)
/* 80359680 003565C0  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10KingChappy11StateAttackFi

.fn init__Q34Game10KingChappy11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80359684 003565C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80359688 003565C8  7C 08 02 A6 */	mflr r0
/* 8035968C 003565CC  38 A0 00 00 */	li r5, 0
/* 80359690 003565D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80359694 003565D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80359698 003565D8  7C 9F 23 78 */	mr r31, r4
/* 8035969C 003565DC  38 80 00 00 */	li r4, 0
/* 803596A0 003565E0  93 C1 00 08 */	stw r30, 8(r1)
/* 803596A4 003565E4  7C 7E 1B 78 */	mr r30, r3
/* 803596A8 003565E8  7F E3 FB 78 */	mr r3, r31
/* 803596AC 003565EC  48 00 7B 19 */	bl startMotionSelf__Q34Game10KingChappy3ObjFiPQ28SysShape14MotionListener
/* 803596B0 003565F0  C0 02 02 18 */	lfs f0, lbl_8051E578@sda21(r2)
/* 803596B4 003565F4  38 00 00 00 */	li r0, 0
/* 803596B8 003565F8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 803596BC 003565FC  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 803596C0 00356600  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 803596C4 00356604  90 1E 00 10 */	stw r0, 0x10(r30)
/* 803596C8 00356608  90 1E 00 14 */	stw r0, 0x14(r30)
/* 803596CC 0035660C  90 1E 00 18 */	stw r0, 0x18(r30)
/* 803596D0 00356610  98 1E 00 1C */	stb r0, 0x1c(r30)
/* 803596D4 00356614  98 1F 03 38 */	stb r0, 0x338(r31)
/* 803596D8 00356618  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803596DC 0035661C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803596E0 00356620  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803596E4 00356624  7C 08 03 A6 */	mtlr r0
/* 803596E8 00356628  38 21 00 10 */	addi r1, r1, 0x10
/* 803596EC 0035662C  4E 80 00 20 */	blr 
.endfn init__Q34Game10KingChappy11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10KingChappy11StateAttackFPQ24Game9EnemyBase, global
/* 803596F0 00356630  94 21 FE C0 */	stwu r1, -0x140(r1)
/* 803596F4 00356634  7C 08 02 A6 */	mflr r0
/* 803596F8 00356638  90 01 01 44 */	stw r0, 0x144(r1)
/* 803596FC 0035663C  DB E1 01 30 */	stfd f31, 0x130(r1)
/* 80359700 00356640  F3 E1 01 38 */	psq_st f31, 312(r1), 0, qr0
/* 80359704 00356644  BF 61 01 1C */	stmw r27, 0x11c(r1)
/* 80359708 00356648  7C 7E 1B 78 */	mr r30, r3
/* 8035970C 0035664C  7C 9F 23 78 */	mr r31, r4
/* 80359710 00356650  88 03 00 1C */	lbz r0, 0x1c(r3)
/* 80359714 00356654  28 00 00 00 */	cmplwi r0, 0
/* 80359718 00356658  41 82 00 38 */	beq .L_80359750
/* 8035971C 0035665C  7F E3 FB 78 */	mr r3, r31
/* 80359720 00356660  48 00 5B 49 */	bl eatBomb__Q34Game10KingChappy3ObjFv
/* 80359724 00356664  80 1E 00 18 */	lwz r0, 0x18(r30)
/* 80359728 00356668  7C 03 00 00 */	cmpw r3, r0
/* 8035972C 0035666C  40 81 00 08 */	ble .L_80359734
/* 80359730 00356670  90 7E 00 18 */	stw r3, 0x18(r30)
.L_80359734:
/* 80359734 00356674  7F E3 FB 78 */	mr r3, r31
/* 80359738 00356678  38 80 00 00 */	li r4, 0
/* 8035973C 0035667C  4B DB A3 F9 */	bl "eatPikmin__Q24Game9EnemyFuncFPQ24Game9EnemyBaseP23Condition<Q24Game4Piki>"
/* 80359740 00356680  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 80359744 00356684  7C 03 00 00 */	cmpw r3, r0
/* 80359748 00356688  40 81 00 08 */	ble .L_80359750
/* 8035974C 0035668C  90 7E 00 10 */	stw r3, 0x10(r30)
.L_80359750:
/* 80359750 00356690  7F E3 FB 78 */	mr r3, r31
/* 80359754 00356694  38 81 00 64 */	addi r4, r1, 0x64
/* 80359758 00356698  38 A1 00 58 */	addi r5, r1, 0x58
/* 8035975C 0035669C  48 00 5F 81 */	bl "getTonguePosVel__Q34Game10KingChappy3ObjFR10Vector3<f>R10Vector3<f>"
/* 80359760 003566A0  C0 A2 02 24 */	lfs f5, lbl_8051E584@sda21(r2)
/* 80359764 003566A4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80359768 003566A8  C0 21 00 68 */	lfs f1, 0x68(r1)
/* 8035976C 003566AC  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80359770 003566B0  C0 01 00 64 */	lfs f0, 0x64(r1)
/* 80359774 003566B4  39 01 00 48 */	addi r8, r1, 0x48
/* 80359778 003566B8  EC 81 28 2A */	fadds f4, f1, f5
/* 8035977C 003566BC  C0 61 00 6C */	lfs f3, 0x6c(r1)
/* 80359780 003566C0  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 80359784 003566C4  38 E1 00 58 */	addi r7, r1, 0x58
/* 80359788 003566C8  C0 42 02 18 */	lfs f2, lbl_8051E578@sda21(r2)
/* 8035978C 003566CC  38 C0 00 00 */	li r6, 0
/* 80359790 003566D0  D0 81 00 68 */	stfs f4, 0x68(r1)
/* 80359794 003566D4  38 00 FF FF */	li r0, -1
/* 80359798 003566D8  C0 23 08 00 */	lfs f1, 0x800(r3)
/* 8035979C 003566DC  38 81 00 70 */	addi r4, r1, 0x70
/* 803597A0 003566E0  D0 81 00 4C */	stfs f4, 0x4c(r1)
/* 803597A4 003566E4  C0 02 02 28 */	lfs f0, lbl_8051E588@sda21(r2)
/* 803597A8 003566E8  D0 61 00 50 */	stfs f3, 0x50(r1)
/* 803597AC 003566EC  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 803597B0 003566F0  D0 A1 00 54 */	stfs f5, 0x54(r1)
/* 803597B4 003566F4  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 803597B8 003566F8  81 3F 00 C0 */	lwz r9, 0xc0(r31)
/* 803597BC 003566FC  C0 69 00 4C */	lfs f3, 0x4c(r9)
/* 803597C0 00356700  91 01 00 70 */	stw r8, 0x70(r1)
/* 803597C4 00356704  90 E1 00 74 */	stw r7, 0x74(r1)
/* 803597C8 00356708  D0 61 00 78 */	stfs f3, 0x78(r1)
/* 803597CC 0035670C  D0 41 00 7C */	stfs f2, 0x7c(r1)
/* 803597D0 00356710  90 C1 00 80 */	stw r6, 0x80(r1)
/* 803597D4 00356714  90 C1 00 B4 */	stw r6, 0xb4(r1)
/* 803597D8 00356718  98 C1 00 E4 */	stb r6, 0xe4(r1)
/* 803597DC 0035671C  98 C1 00 89 */	stb r6, 0x89(r1)
/* 803597E0 00356720  98 C1 00 88 */	stb r6, 0x88(r1)
/* 803597E4 00356724  90 C1 00 B8 */	stw r6, 0xb8(r1)
/* 803597E8 00356728  90 C1 00 84 */	stw r6, 0x84(r1)
/* 803597EC 0035672C  98 C1 01 00 */	stb r6, 0x100(r1)
/* 803597F0 00356730  90 C1 01 04 */	stw r6, 0x104(r1)
/* 803597F4 00356734  D0 21 00 9C */	stfs f1, 0x9c(r1)
/* 803597F8 00356738  D0 01 00 A0 */	stfs f0, 0xa0(r1)
/* 803597FC 0035673C  90 01 01 08 */	stw r0, 0x108(r1)
/* 80359800 00356740  90 C1 00 BC */	stw r6, 0xbc(r1)
/* 80359804 00356744  98 C1 00 8A */	stb r6, 0x8a(r1)
/* 80359808 00356748  81 83 00 04 */	lwz r12, 4(r3)
/* 8035980C 0035674C  C0 25 00 54 */	lfs f1, 0x54(r5)
/* 80359810 00356750  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80359814 00356754  7D 89 03 A6 */	mtctr r12
/* 80359818 00356758  4E 80 04 21 */	bctrl 
/* 8035981C 0035675C  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 80359820 00356760  28 00 00 00 */	cmplwi r0, 0
/* 80359824 00356764  40 82 00 10 */	bne .L_80359834
/* 80359828 00356768  80 01 00 B8 */	lwz r0, 0xb8(r1)
/* 8035982C 0035676C  28 00 00 00 */	cmplwi r0, 0
/* 80359830 00356770  41 82 00 A4 */	beq .L_803598D4
.L_80359834:
/* 80359834 00356774  38 00 00 01 */	li r0, 1
/* 80359838 00356778  7F E3 FB 78 */	mr r3, r31
/* 8035983C 0035677C  98 1F 02 E4 */	stb r0, 0x2e4(r31)
/* 80359840 00356780  38 80 00 06 */	li r4, 6
/* 80359844 00356784  48 00 83 89 */	bl fadeEffect__Q34Game10KingChappy3ObjFi
/* 80359848 00356788  80 1E 00 18 */	lwz r0, 0x18(r30)
/* 8035984C 0035678C  2C 00 00 00 */	cmpwi r0, 0
/* 80359850 00356790  40 81 00 30 */	ble .L_80359880
/* 80359854 00356794  38 00 00 01 */	li r0, 1
/* 80359858 00356798  7F C3 F3 78 */	mr r3, r30
/* 8035985C 0035679C  98 01 00 0C */	stb r0, 0xc(r1)
/* 80359860 003567A0  7F E4 FB 78 */	mr r4, r31
/* 80359864 003567A4  38 C1 00 0C */	addi r6, r1, 0xc
/* 80359868 003567A8  38 A0 00 07 */	li r5, 7
/* 8035986C 003567AC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80359870 003567B0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80359874 003567B4  7D 89 03 A6 */	mtctr r12
/* 80359878 003567B8  4E 80 04 21 */	bctrl 
/* 8035987C 003567BC  48 00 05 04 */	b .L_80359D80
.L_80359880:
/* 80359880 003567C0  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 80359884 003567C4  2C 00 00 00 */	cmpwi r0, 0
/* 80359888 003567C8  40 81 00 28 */	ble .L_803598B0
/* 8035988C 003567CC  7F C3 F3 78 */	mr r3, r30
/* 80359890 003567D0  7F E4 FB 78 */	mr r4, r31
/* 80359894 003567D4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80359898 003567D8  38 A0 00 0C */	li r5, 0xc
/* 8035989C 003567DC  38 C0 00 00 */	li r6, 0
/* 803598A0 003567E0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803598A4 003567E4  7D 89 03 A6 */	mtctr r12
/* 803598A8 003567E8  4E 80 04 21 */	bctrl 
/* 803598AC 003567EC  48 00 04 D4 */	b .L_80359D80
.L_803598B0:
/* 803598B0 003567F0  7F C3 F3 78 */	mr r3, r30
/* 803598B4 003567F4  7F E4 FB 78 */	mr r4, r31
/* 803598B8 003567F8  81 9E 00 00 */	lwz r12, 0(r30)
/* 803598BC 003567FC  38 A0 00 00 */	li r5, 0
/* 803598C0 00356800  38 C0 00 00 */	li r6, 0
/* 803598C4 00356804  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803598C8 00356808  7D 89 03 A6 */	mtctr r12
/* 803598CC 0035680C  4E 80 04 21 */	bctrl 
/* 803598D0 00356810  48 00 04 B0 */	b .L_80359D80
.L_803598D4:
/* 803598D4 00356814  38 00 00 00 */	li r0, 0
/* 803598D8 00356818  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 803598DC 0035681C  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Navi>"@ha
/* 803598E0 00356820  90 01 00 44 */	stw r0, 0x44(r1)
/* 803598E4 00356824  38 84 BC B4 */	addi r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
/* 803598E8 00356828  28 00 00 00 */	cmplwi r0, 0
/* 803598EC 0035682C  90 81 00 38 */	stw r4, 0x38(r1)
/* 803598F0 00356830  90 01 00 3C */	stw r0, 0x3c(r1)
/* 803598F4 00356834  90 61 00 40 */	stw r3, 0x40(r1)
/* 803598F8 00356838  40 82 00 1C */	bne .L_80359914
/* 803598FC 0035683C  81 83 00 00 */	lwz r12, 0(r3)
/* 80359900 00356840  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80359904 00356844  7D 89 03 A6 */	mtctr r12
/* 80359908 00356848  4E 80 04 21 */	bctrl 
/* 8035990C 0035684C  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80359910 00356850  48 00 00 8C */	b .L_8035999C
.L_80359914:
/* 80359914 00356854  81 83 00 00 */	lwz r12, 0(r3)
/* 80359918 00356858  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8035991C 0035685C  7D 89 03 A6 */	mtctr r12
/* 80359920 00356860  4E 80 04 21 */	bctrl 
/* 80359924 00356864  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80359928 00356868  48 00 00 58 */	b .L_80359980
.L_8035992C:
/* 8035992C 0035686C  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80359930 00356870  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80359934 00356874  81 83 00 00 */	lwz r12, 0(r3)
/* 80359938 00356878  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8035993C 0035687C  7D 89 03 A6 */	mtctr r12
/* 80359940 00356880  4E 80 04 21 */	bctrl 
/* 80359944 00356884  7C 64 1B 78 */	mr r4, r3
/* 80359948 00356888  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8035994C 0035688C  81 83 00 00 */	lwz r12, 0(r3)
/* 80359950 00356890  81 8C 00 08 */	lwz r12, 8(r12)
/* 80359954 00356894  7D 89 03 A6 */	mtctr r12
/* 80359958 00356898  4E 80 04 21 */	bctrl 
/* 8035995C 0035689C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80359960 003568A0  40 82 00 3C */	bne .L_8035999C
/* 80359964 003568A4  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80359968 003568A8  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 8035996C 003568AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80359970 003568B0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80359974 003568B4  7D 89 03 A6 */	mtctr r12
/* 80359978 003568B8  4E 80 04 21 */	bctrl 
/* 8035997C 003568BC  90 61 00 3C */	stw r3, 0x3c(r1)
.L_80359980:
/* 80359980 003568C0  81 81 00 38 */	lwz r12, 0x38(r1)
/* 80359984 003568C4  38 61 00 38 */	addi r3, r1, 0x38
/* 80359988 003568C8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8035998C 003568CC  7D 89 03 A6 */	mtctr r12
/* 80359990 003568D0  4E 80 04 21 */	bctrl 
/* 80359994 003568D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80359998 003568D8  41 82 FF 94 */	beq .L_8035992C
.L_8035999C:
/* 8035999C 003568DC  C3 E2 02 18 */	lfs f31, lbl_8051E578@sda21(r2)
/* 803599A0 003568E0  48 00 01 E8 */	b .L_80359B88
.L_803599A4:
/* 803599A4 003568E4  80 61 00 40 */	lwz r3, 0x40(r1)
/* 803599A8 003568E8  81 83 00 00 */	lwz r12, 0(r3)
/* 803599AC 003568EC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803599B0 003568F0  7D 89 03 A6 */	mtctr r12
/* 803599B4 003568F4  4E 80 04 21 */	bctrl 
/* 803599B8 003568F8  3B 60 00 00 */	li r27, 0
/* 803599BC 003568FC  7C 7C 1B 78 */	mr r28, r3
/* 803599C0 00356900  48 00 00 EC */	b .L_80359AAC
.L_803599C4:
/* 803599C4 00356904  7F E3 FB 78 */	mr r3, r31
/* 803599C8 00356908  81 9F 00 00 */	lwz r12, 0(r31)
/* 803599CC 0035690C  81 8C 02 5C */	lwz r12, 0x25c(r12)
/* 803599D0 00356910  7D 89 03 A6 */	mtctr r12
/* 803599D4 00356914  4E 80 04 21 */	bctrl 
/* 803599D8 00356918  7F 64 DB 78 */	mr r4, r27
/* 803599DC 0035691C  4B DD ED 9D */	bl getSlot__10MouthSlotsFi
/* 803599E0 00356920  7C 7D 1B 78 */	mr r29, r3
/* 803599E4 00356924  38 81 00 2C */	addi r4, r1, 0x2c
/* 803599E8 00356928  4B DD EA E1 */	bl "getPosition__13MouthCollPartFR10Vector3<f>"
/* 803599EC 0035692C  7F 84 E3 78 */	mr r4, r28
/* 803599F0 00356930  38 61 00 10 */	addi r3, r1, 0x10
/* 803599F4 00356934  81 9C 00 00 */	lwz r12, 0(r28)
/* 803599F8 00356938  81 8C 00 08 */	lwz r12, 8(r12)
/* 803599FC 0035693C  7D 89 03 A6 */	mtctr r12
/* 80359A00 00356940  4E 80 04 21 */	bctrl 
/* 80359A04 00356944  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 80359A08 00356948  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80359A0C 0035694C  C0 61 00 2C */	lfs f3, 0x2c(r1)
/* 80359A10 00356950  EC 81 00 28 */	fsubs f4, f1, f0
/* 80359A14 00356954  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 80359A18 00356958  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 80359A1C 0035695C  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80359A20 00356960  EC 43 10 28 */	fsubs f2, f3, f2
/* 80359A24 00356964  EC 64 01 32 */	fmuls f3, f4, f4
/* 80359A28 00356968  EC 21 00 28 */	fsubs f1, f1, f0
/* 80359A2C 0035696C  EC 02 18 BA */	fmadds f0, f2, f2, f3
/* 80359A30 00356970  EC 21 00 72 */	fmuls f1, f1, f1
/* 80359A34 00356974  EC 21 00 2A */	fadds f1, f1, f0
/* 80359A38 00356978  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 80359A3C 0035697C  40 81 00 14 */	ble .L_80359A50
/* 80359A40 00356980  40 81 00 14 */	ble .L_80359A54
/* 80359A44 00356984  FC 00 08 34 */	frsqrte f0, f1
/* 80359A48 00356988  EC 20 00 72 */	fmuls f1, f0, f1
/* 80359A4C 0035698C  48 00 00 08 */	b .L_80359A54
.L_80359A50:
/* 80359A50 00356990  FC 20 F8 90 */	fmr f1, f31
.L_80359A54:
/* 80359A54 00356994  C0 1D 00 1C */	lfs f0, 0x1c(r29)
/* 80359A58 00356998  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80359A5C 0035699C  40 80 00 4C */	bge .L_80359AA8
/* 80359A60 003569A0  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80359A64 003569A4  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 80359A68 003569A8  3C 60 80 4B */	lis r3, __vt__Q24Game14InteractAttack@ha
/* 80359A6C 003569AC  38 00 00 00 */	li r0, 0
/* 80359A70 003569B0  C0 05 06 04 */	lfs f0, 0x604(r5)
/* 80359A74 003569B4  38 84 A3 00 */	addi r4, r4, __vt__Q24Game11Interaction@l
/* 80359A78 003569B8  38 A3 4D E0 */	addi r5, r3, __vt__Q24Game14InteractAttack@l
/* 80359A7C 003569BC  7F 83 E3 78 */	mr r3, r28
/* 80359A80 003569C0  90 81 00 1C */	stw r4, 0x1c(r1)
/* 80359A84 003569C4  38 81 00 1C */	addi r4, r1, 0x1c
/* 80359A88 003569C8  93 E1 00 20 */	stw r31, 0x20(r1)
/* 80359A8C 003569CC  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 80359A90 003569D0  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80359A94 003569D4  90 01 00 28 */	stw r0, 0x28(r1)
/* 80359A98 003569D8  81 9C 00 00 */	lwz r12, 0(r28)
/* 80359A9C 003569DC  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 80359AA0 003569E0  7D 89 03 A6 */	mtctr r12
/* 80359AA4 003569E4  4E 80 04 21 */	bctrl 
.L_80359AA8:
/* 80359AA8 003569E8  3B 7B 00 01 */	addi r27, r27, 1
.L_80359AAC:
/* 80359AAC 003569EC  7F E3 FB 78 */	mr r3, r31
/* 80359AB0 003569F0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80359AB4 003569F4  81 8C 02 5C */	lwz r12, 0x25c(r12)
/* 80359AB8 003569F8  7D 89 03 A6 */	mtctr r12
/* 80359ABC 003569FC  4E 80 04 21 */	bctrl 
/* 80359AC0 00356A00  80 03 00 00 */	lwz r0, 0(r3)
/* 80359AC4 00356A04  7C 1B 00 00 */	cmpw r27, r0
/* 80359AC8 00356A08  41 80 FE FC */	blt .L_803599C4
/* 80359ACC 00356A0C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80359AD0 00356A10  28 00 00 00 */	cmplwi r0, 0
/* 80359AD4 00356A14  40 82 00 24 */	bne .L_80359AF8
/* 80359AD8 00356A18  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80359ADC 00356A1C  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80359AE0 00356A20  81 83 00 00 */	lwz r12, 0(r3)
/* 80359AE4 00356A24  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80359AE8 00356A28  7D 89 03 A6 */	mtctr r12
/* 80359AEC 00356A2C  4E 80 04 21 */	bctrl 
/* 80359AF0 00356A30  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80359AF4 00356A34  48 00 00 94 */	b .L_80359B88
.L_80359AF8:
/* 80359AF8 00356A38  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80359AFC 00356A3C  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80359B00 00356A40  81 83 00 00 */	lwz r12, 0(r3)
/* 80359B04 00356A44  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80359B08 00356A48  7D 89 03 A6 */	mtctr r12
/* 80359B0C 00356A4C  4E 80 04 21 */	bctrl 
/* 80359B10 00356A50  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80359B14 00356A54  48 00 00 58 */	b .L_80359B6C
.L_80359B18:
/* 80359B18 00356A58  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80359B1C 00356A5C  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80359B20 00356A60  81 83 00 00 */	lwz r12, 0(r3)
/* 80359B24 00356A64  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80359B28 00356A68  7D 89 03 A6 */	mtctr r12
/* 80359B2C 00356A6C  4E 80 04 21 */	bctrl 
/* 80359B30 00356A70  7C 64 1B 78 */	mr r4, r3
/* 80359B34 00356A74  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80359B38 00356A78  81 83 00 00 */	lwz r12, 0(r3)
/* 80359B3C 00356A7C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80359B40 00356A80  7D 89 03 A6 */	mtctr r12
/* 80359B44 00356A84  4E 80 04 21 */	bctrl 
/* 80359B48 00356A88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80359B4C 00356A8C  40 82 00 3C */	bne .L_80359B88
/* 80359B50 00356A90  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80359B54 00356A94  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80359B58 00356A98  81 83 00 00 */	lwz r12, 0(r3)
/* 80359B5C 00356A9C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80359B60 00356AA0  7D 89 03 A6 */	mtctr r12
/* 80359B64 00356AA4  4E 80 04 21 */	bctrl 
/* 80359B68 00356AA8  90 61 00 3C */	stw r3, 0x3c(r1)
.L_80359B6C:
/* 80359B6C 00356AAC  81 81 00 38 */	lwz r12, 0x38(r1)
/* 80359B70 00356AB0  38 61 00 38 */	addi r3, r1, 0x38
/* 80359B74 00356AB4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80359B78 00356AB8  7D 89 03 A6 */	mtctr r12
/* 80359B7C 00356ABC  4E 80 04 21 */	bctrl 
/* 80359B80 00356AC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80359B84 00356AC4  41 82 FF 94 */	beq .L_80359B18
.L_80359B88:
/* 80359B88 00356AC8  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80359B8C 00356ACC  81 83 00 00 */	lwz r12, 0(r3)
/* 80359B90 00356AD0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80359B94 00356AD4  7D 89 03 A6 */	mtctr r12
/* 80359B98 00356AD8  4E 80 04 21 */	bctrl 
/* 80359B9C 00356ADC  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80359BA0 00356AE0  7C 04 18 40 */	cmplw r4, r3
/* 80359BA4 00356AE4  40 82 FE 00 */	bne .L_803599A4
/* 80359BA8 00356AE8  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80359BAC 00356AEC  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80359BB0 00356AF0  28 00 00 00 */	cmplwi r0, 0
/* 80359BB4 00356AF4  41 82 01 C0 */	beq .L_80359D74
/* 80359BB8 00356AF8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80359BBC 00356AFC  2C 00 00 06 */	cmpwi r0, 6
/* 80359BC0 00356B00  41 82 01 20 */	beq .L_80359CE0
/* 80359BC4 00356B04  40 80 00 28 */	bge .L_80359BEC
/* 80359BC8 00356B08  2C 00 00 03 */	cmpwi r0, 3
/* 80359BCC 00356B0C  41 82 00 EC */	beq .L_80359CB8
/* 80359BD0 00356B10  40 80 00 10 */	bge .L_80359BE0
/* 80359BD4 00356B14  2C 00 00 02 */	cmpwi r0, 2
/* 80359BD8 00356B18  40 80 00 38 */	bge .L_80359C10
/* 80359BDC 00356B1C  48 00 01 98 */	b .L_80359D74
.L_80359BE0:
/* 80359BE0 00356B20  2C 00 00 05 */	cmpwi r0, 5
/* 80359BE4 00356B24  40 80 00 EC */	bge .L_80359CD0
/* 80359BE8 00356B28  48 00 01 8C */	b .L_80359D74
.L_80359BEC:
/* 80359BEC 00356B2C  2C 00 07 D0 */	cmpwi r0, 0x7d0
/* 80359BF0 00356B30  41 82 00 14 */	beq .L_80359C04
/* 80359BF4 00356B34  40 80 01 80 */	bge .L_80359D74
/* 80359BF8 00356B38  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 80359BFC 00356B3C  41 82 00 F0 */	beq .L_80359CEC
/* 80359C00 00356B40  48 00 01 74 */	b .L_80359D74
.L_80359C04:
/* 80359C04 00356B44  7F E3 FB 78 */	mr r3, r31
/* 80359C08 00356B48  48 00 76 F9 */	bl endBlendAnimation__Q34Game10KingChappy3ObjFv
/* 80359C0C 00356B4C  48 00 01 68 */	b .L_80359D74
.L_80359C10:
/* 80359C10 00356B50  83 9F 02 8C */	lwz r28, 0x28c(r31)
/* 80359C14 00356B54  3B C0 00 00 */	li r30, 0
/* 80359C18 00356B58  7F 83 E3 78 */	mr r3, r28
/* 80359C1C 00356B5C  81 9C 00 28 */	lwz r12, 0x28(r28)
/* 80359C20 00356B60  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80359C24 00356B64  7D 89 03 A6 */	mtctr r12
/* 80359C28 00356B68  4E 80 04 21 */	bctrl 
/* 80359C2C 00356B6C  2C 03 00 05 */	cmpwi r3, 5
/* 80359C30 00356B70  41 82 00 3C */	beq .L_80359C6C
/* 80359C34 00356B74  7F 83 E3 78 */	mr r3, r28
/* 80359C38 00356B78  81 9C 00 28 */	lwz r12, 0x28(r28)
/* 80359C3C 00356B7C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80359C40 00356B80  7D 89 03 A6 */	mtctr r12
/* 80359C44 00356B84  4E 80 04 21 */	bctrl 
/* 80359C48 00356B88  2C 03 00 06 */	cmpwi r3, 6
/* 80359C4C 00356B8C  41 82 00 20 */	beq .L_80359C6C
/* 80359C50 00356B90  7F 83 E3 78 */	mr r3, r28
/* 80359C54 00356B94  81 9C 00 28 */	lwz r12, 0x28(r28)
/* 80359C58 00356B98  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80359C5C 00356B9C  7D 89 03 A6 */	mtctr r12
/* 80359C60 00356BA0  4E 80 04 21 */	bctrl 
/* 80359C64 00356BA4  2C 03 00 07 */	cmpwi r3, 7
/* 80359C68 00356BA8  40 82 00 08 */	bne .L_80359C70
.L_80359C6C:
/* 80359C6C 00356BAC  3B C0 00 01 */	li r30, 1
.L_80359C70:
/* 80359C70 00356BB0  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 80359C74 00356BB4  40 82 00 20 */	bne .L_80359C94
/* 80359C78 00356BB8  3C 60 80 49 */	lis r3, lbl_804910F0@ha
/* 80359C7C 00356BBC  3C A0 80 49 */	lis r5, lbl_80491108@ha
/* 80359C80 00356BC0  38 63 10 F0 */	addi r3, r3, lbl_804910F0@l
/* 80359C84 00356BC4  38 80 04 54 */	li r4, 0x454
/* 80359C88 00356BC8  38 A5 11 08 */	addi r5, r5, lbl_80491108@l
/* 80359C8C 00356BCC  4C C6 31 82 */	crclr 6
/* 80359C90 00356BD0  4B CD 09 B1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80359C94:
/* 80359C94 00356BD4  28 1C 00 00 */	cmplwi r28, 0
/* 80359C98 00356BD8  41 82 00 DC */	beq .L_80359D74
/* 80359C9C 00356BDC  7F 83 E3 78 */	mr r3, r28
/* 80359CA0 00356BE0  38 80 00 03 */	li r4, 3
/* 80359CA4 00356BE4  81 9C 00 28 */	lwz r12, 0x28(r28)
/* 80359CA8 00356BE8  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 80359CAC 00356BEC  7D 89 03 A6 */	mtctr r12
/* 80359CB0 00356BF0  4E 80 04 21 */	bctrl 
/* 80359CB4 00356BF4  48 00 00 C0 */	b .L_80359D74
.L_80359CB8:
/* 80359CB8 00356BF8  38 00 00 01 */	li r0, 1
/* 80359CBC 00356BFC  7F E3 FB 78 */	mr r3, r31
/* 80359CC0 00356C00  98 1E 00 1C */	stb r0, 0x1c(r30)
/* 80359CC4 00356C04  38 80 00 06 */	li r4, 6
/* 80359CC8 00356C08  48 00 7A 91 */	bl createEffect__Q34Game10KingChappy3ObjFi
/* 80359CCC 00356C0C  48 00 00 A8 */	b .L_80359D74
.L_80359CD0:
/* 80359CD0 00356C10  7F E3 FB 78 */	mr r3, r31
/* 80359CD4 00356C14  38 80 00 06 */	li r4, 6
/* 80359CD8 00356C18  48 00 7E F5 */	bl fadeEffect__Q34Game10KingChappy3ObjFi
/* 80359CDC 00356C1C  48 00 00 98 */	b .L_80359D74
.L_80359CE0:
/* 80359CE0 00356C20  38 00 00 01 */	li r0, 1
/* 80359CE4 00356C24  98 1F 03 38 */	stb r0, 0x338(r31)
/* 80359CE8 00356C28  48 00 00 8C */	b .L_80359D74
.L_80359CEC:
/* 80359CEC 00356C2C  80 1E 00 18 */	lwz r0, 0x18(r30)
/* 80359CF0 00356C30  2C 00 00 00 */	cmpwi r0, 0
/* 80359CF4 00356C34  40 81 00 30 */	ble .L_80359D24
/* 80359CF8 00356C38  38 00 00 01 */	li r0, 1
/* 80359CFC 00356C3C  7F C3 F3 78 */	mr r3, r30
/* 80359D00 00356C40  98 01 00 08 */	stb r0, 8(r1)
/* 80359D04 00356C44  7F E4 FB 78 */	mr r4, r31
/* 80359D08 00356C48  38 C1 00 08 */	addi r6, r1, 8
/* 80359D0C 00356C4C  38 A0 00 07 */	li r5, 7
/* 80359D10 00356C50  81 9E 00 00 */	lwz r12, 0(r30)
/* 80359D14 00356C54  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80359D18 00356C58  7D 89 03 A6 */	mtctr r12
/* 80359D1C 00356C5C  4E 80 04 21 */	bctrl 
/* 80359D20 00356C60  48 00 00 54 */	b .L_80359D74
.L_80359D24:
/* 80359D24 00356C64  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 80359D28 00356C68  2C 00 00 00 */	cmpwi r0, 0
/* 80359D2C 00356C6C  40 81 00 28 */	ble .L_80359D54
/* 80359D30 00356C70  7F C3 F3 78 */	mr r3, r30
/* 80359D34 00356C74  7F E4 FB 78 */	mr r4, r31
/* 80359D38 00356C78  81 9E 00 00 */	lwz r12, 0(r30)
/* 80359D3C 00356C7C  38 A0 00 0C */	li r5, 0xc
/* 80359D40 00356C80  38 C0 00 00 */	li r6, 0
/* 80359D44 00356C84  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80359D48 00356C88  7D 89 03 A6 */	mtctr r12
/* 80359D4C 00356C8C  4E 80 04 21 */	bctrl 
/* 80359D50 00356C90  48 00 00 24 */	b .L_80359D74
.L_80359D54:
/* 80359D54 00356C94  7F C3 F3 78 */	mr r3, r30
/* 80359D58 00356C98  7F E4 FB 78 */	mr r4, r31
/* 80359D5C 00356C9C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80359D60 00356CA0  38 A0 00 00 */	li r5, 0
/* 80359D64 00356CA4  38 C0 00 00 */	li r6, 0
/* 80359D68 00356CA8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80359D6C 00356CAC  7D 89 03 A6 */	mtctr r12
/* 80359D70 00356CB0  4E 80 04 21 */	bctrl 
.L_80359D74:
/* 80359D74 00356CB4  7F E3 FB 78 */	mr r3, r31
/* 80359D78 00356CB8  38 80 00 01 */	li r4, 1
/* 80359D7C 00356CBC  48 00 72 35 */	bl checkDead__Q34Game10KingChappy3ObjFb
.L_80359D80:
/* 80359D80 00356CC0  E3 E1 01 38 */	psq_l f31, 312(r1), 0, qr0
/* 80359D84 00356CC4  CB E1 01 30 */	lfd f31, 0x130(r1)
/* 80359D88 00356CC8  BB 61 01 1C */	lmw r27, 0x11c(r1)
/* 80359D8C 00356CCC  80 01 01 44 */	lwz r0, 0x144(r1)
/* 80359D90 00356CD0  7C 08 03 A6 */	mtlr r0
/* 80359D94 00356CD4  38 21 01 40 */	addi r1, r1, 0x140
/* 80359D98 00356CD8  4E 80 00 20 */	blr 
.endfn exec__Q34Game10KingChappy11StateAttackFPQ24Game9EnemyBase

.fn cleanup__Q34Game10KingChappy11StateAttackFPQ24Game9EnemyBase, global
/* 80359D9C 00356CDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80359DA0 00356CE0  7C 08 02 A6 */	mflr r0
/* 80359DA4 00356CE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80359DA8 00356CE8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80359DAC 00356CEC  7C 9F 23 78 */	mr r31, r4
/* 80359DB0 00356CF0  38 80 00 06 */	li r4, 6
/* 80359DB4 00356CF4  7F E3 FB 78 */	mr r3, r31
/* 80359DB8 00356CF8  48 00 7E 15 */	bl fadeEffect__Q34Game10KingChappy3ObjFi
/* 80359DBC 00356CFC  38 00 00 01 */	li r0, 1
/* 80359DC0 00356D00  98 1F 03 38 */	stb r0, 0x338(r31)
/* 80359DC4 00356D04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80359DC8 00356D08  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80359DCC 00356D0C  7C 08 03 A6 */	mtlr r0
/* 80359DD0 00356D10  38 21 00 10 */	addi r1, r1, 0x10
/* 80359DD4 00356D14  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10KingChappy11StateAttackFPQ24Game9EnemyBase

.fn __ct__Q34Game10KingChappy9StateDeadFi, global
/* 80359DD8 00356D18  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 80359DDC 00356D1C  3C C0 80 4E */	lis r6, __vt__Q34Game10KingChappy5State@ha
/* 80359DE0 00356D20  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80359DE4 00356D24  3C A0 80 4E */	lis r5, __vt__Q34Game10KingChappy9StateDead@ha
/* 80359DE8 00356D28  90 03 00 00 */	stw r0, 0(r3)
/* 80359DEC 00356D2C  38 E0 00 00 */	li r7, 0
/* 80359DF0 00356D30  38 C6 1B EC */	addi r6, r6, __vt__Q34Game10KingChappy5State@l
/* 80359DF4 00356D34  38 A5 1B 80 */	addi r5, r5, __vt__Q34Game10KingChappy9StateDead@l
/* 80359DF8 00356D38  90 83 00 04 */	stw r4, 4(r3)
/* 80359DFC 00356D3C  38 02 02 2C */	addi r0, r2, lbl_8051E58C@sda21
/* 80359E00 00356D40  90 E3 00 08 */	stw r7, 8(r3)
/* 80359E04 00356D44  90 C3 00 00 */	stw r6, 0(r3)
/* 80359E08 00356D48  90 A3 00 00 */	stw r5, 0(r3)
/* 80359E0C 00356D4C  90 03 00 0C */	stw r0, 0xc(r3)
/* 80359E10 00356D50  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10KingChappy9StateDeadFi

.fn init__Q34Game10KingChappy9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80359E14 00356D54  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80359E18 00356D58  7C 08 02 A6 */	mflr r0
/* 80359E1C 00356D5C  38 A0 00 00 */	li r5, 0
/* 80359E20 00356D60  90 01 00 34 */	stw r0, 0x34(r1)
/* 80359E24 00356D64  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80359E28 00356D68  7C 9F 23 78 */	mr r31, r4
/* 80359E2C 00356D6C  38 80 00 03 */	li r4, 3
/* 80359E30 00356D70  7F E3 FB 78 */	mr r3, r31
/* 80359E34 00356D74  48 00 73 91 */	bl startMotionSelf__Q34Game10KingChappy3ObjFiPQ28SysShape14MotionListener
/* 80359E38 00356D78  C0 02 02 18 */	lfs f0, lbl_8051E578@sda21(r2)
/* 80359E3C 00356D7C  7F E3 FB 78 */	mr r3, r31
/* 80359E40 00356D80  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 80359E44 00356D84  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 80359E48 00356D88  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 80359E4C 00356D8C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80359E50 00356D90  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80359E54 00356D94  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80359E58 00356D98  4B DA B8 C9 */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 80359E5C 00356D9C  7F E3 FB 78 */	mr r3, r31
/* 80359E60 00356DA0  38 80 00 07 */	li r4, 7
/* 80359E64 00356DA4  48 00 78 F5 */	bl createEffect__Q34Game10KingChappy3ObjFi
/* 80359E68 00356DA8  7F E4 FB 78 */	mr r4, r31
/* 80359E6C 00356DAC  38 61 00 08 */	addi r3, r1, 8
/* 80359E70 00356DB0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80359E74 00356DB4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80359E78 00356DB8  7D 89 03 A6 */	mtctr r12
/* 80359E7C 00356DBC  4E 80 04 21 */	bctrl 
/* 80359E80 00356DC0  C0 41 00 08 */	lfs f2, 8(r1)
/* 80359E84 00356DC4  38 A1 00 14 */	addi r5, r1, 0x14
/* 80359E88 00356DC8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80359E8C 00356DCC  38 80 00 0C */	li r4, 0xc
/* 80359E90 00356DD0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80359E94 00356DD4  38 C0 00 02 */	li r6, 2
/* 80359E98 00356DD8  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80359E9C 00356DDC  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 80359EA0 00356DE0  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80359EA4 00356DE4  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80359EA8 00356DE8  4B EF 83 95 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 80359EAC 00356DEC  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80359EB0 00356DF0  38 A1 00 14 */	addi r5, r1, 0x14
/* 80359EB4 00356DF4  38 80 00 0D */	li r4, 0xd
/* 80359EB8 00356DF8  38 C0 00 02 */	li r6, 2
/* 80359EBC 00356DFC  4B EF 98 C5 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 80359EC0 00356E00  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80359EC4 00356E04  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 80359EC8 00356E08  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80359ECC 00356E0C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80359ED0 00356E10  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80359ED4 00356E14  7C 08 03 A6 */	mtlr r0
/* 80359ED8 00356E18  38 21 00 30 */	addi r1, r1, 0x30
/* 80359EDC 00356E1C  4E 80 00 20 */	blr 
.endfn init__Q34Game10KingChappy9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10KingChappy9StateDeadFPQ24Game9EnemyBase, global
/* 80359EE0 00356E20  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80359EE4 00356E24  7C 08 02 A6 */	mflr r0
/* 80359EE8 00356E28  90 01 00 34 */	stw r0, 0x34(r1)
/* 80359EEC 00356E2C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80359EF0 00356E30  7C 9F 23 78 */	mr r31, r4
/* 80359EF4 00356E34  80 64 01 88 */	lwz r3, 0x188(r4)
/* 80359EF8 00356E38  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80359EFC 00356E3C  28 00 00 00 */	cmplwi r0, 0
/* 80359F00 00356E40  41 82 00 A8 */	beq .L_80359FA8
/* 80359F04 00356E44  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80359F08 00356E48  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 80359F0C 00356E4C  41 82 00 90 */	beq .L_80359F9C
/* 80359F10 00356E50  40 80 00 10 */	bge .L_80359F20
/* 80359F14 00356E54  2C 00 00 02 */	cmpwi r0, 2
/* 80359F18 00356E58  41 82 00 20 */	beq .L_80359F38
/* 80359F1C 00356E5C  48 00 00 8C */	b .L_80359FA8
.L_80359F20:
/* 80359F20 00356E60  2C 00 07 D0 */	cmpwi r0, 0x7d0
/* 80359F24 00356E64  41 82 00 08 */	beq .L_80359F2C
/* 80359F28 00356E68  48 00 00 80 */	b .L_80359FA8
.L_80359F2C:
/* 80359F2C 00356E6C  7F E3 FB 78 */	mr r3, r31
/* 80359F30 00356E70  48 00 73 D1 */	bl endBlendAnimation__Q34Game10KingChappy3ObjFv
/* 80359F34 00356E74  48 00 00 74 */	b .L_80359FA8
.L_80359F38:
/* 80359F38 00356E78  7F E3 FB 78 */	mr r3, r31
/* 80359F3C 00356E7C  48 00 7D D1 */	bl createBounceEffect__Q34Game10KingChappy3ObjFv
/* 80359F40 00356E80  7F E4 FB 78 */	mr r4, r31
/* 80359F44 00356E84  38 61 00 08 */	addi r3, r1, 8
/* 80359F48 00356E88  81 9F 00 00 */	lwz r12, 0(r31)
/* 80359F4C 00356E8C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80359F50 00356E90  7D 89 03 A6 */	mtctr r12
/* 80359F54 00356E94  4E 80 04 21 */	bctrl 
/* 80359F58 00356E98  C0 41 00 08 */	lfs f2, 8(r1)
/* 80359F5C 00356E9C  38 A1 00 14 */	addi r5, r1, 0x14
/* 80359F60 00356EA0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80359F64 00356EA4  38 80 00 03 */	li r4, 3
/* 80359F68 00356EA8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80359F6C 00356EAC  38 C0 00 02 */	li r6, 2
/* 80359F70 00356EB0  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80359F74 00356EB4  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 80359F78 00356EB8  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80359F7C 00356EBC  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80359F80 00356EC0  4B EF 82 BD */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 80359F84 00356EC4  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80359F88 00356EC8  38 A1 00 14 */	addi r5, r1, 0x14
/* 80359F8C 00356ECC  38 80 00 0B */	li r4, 0xb
/* 80359F90 00356ED0  38 C0 00 02 */	li r6, 2
/* 80359F94 00356ED4  4B EF 97 ED */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 80359F98 00356ED8  48 00 00 10 */	b .L_80359FA8
.L_80359F9C:
/* 80359F9C 00356EDC  7F E3 FB 78 */	mr r3, r31
/* 80359FA0 00356EE0  38 80 00 00 */	li r4, 0
/* 80359FA4 00356EE4  4B DE 11 4D */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_80359FA8:
/* 80359FA8 00356EE8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80359FAC 00356EEC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80359FB0 00356EF0  7C 08 03 A6 */	mtlr r0
/* 80359FB4 00356EF4  38 21 00 30 */	addi r1, r1, 0x30
/* 80359FB8 00356EF8  4E 80 00 20 */	blr 
.endfn exec__Q34Game10KingChappy9StateDeadFPQ24Game9EnemyBase

.fn cleanup__Q34Game10KingChappy9StateDeadFPQ24Game9EnemyBase, global
/* 80359FBC 00356EFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80359FC0 00356F00  7C 08 02 A6 */	mflr r0
/* 80359FC4 00356F04  7C 83 23 78 */	mr r3, r4
/* 80359FC8 00356F08  38 80 00 07 */	li r4, 7
/* 80359FCC 00356F0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80359FD0 00356F10  48 00 7B FD */	bl fadeEffect__Q34Game10KingChappy3ObjFi
/* 80359FD4 00356F14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80359FD8 00356F18  7C 08 03 A6 */	mtlr r0
/* 80359FDC 00356F1C  38 21 00 10 */	addi r1, r1, 0x10
/* 80359FE0 00356F20  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10KingChappy9StateDeadFPQ24Game9EnemyBase

.fn __ct__Q34Game10KingChappy10StateFlickFi, global
/* 80359FE4 00356F24  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 80359FE8 00356F28  3C C0 80 4E */	lis r6, __vt__Q34Game10KingChappy5State@ha
/* 80359FEC 00356F2C  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80359FF0 00356F30  3C A0 80 4E */	lis r5, __vt__Q34Game10KingChappy10StateFlick@ha
/* 80359FF4 00356F34  90 03 00 00 */	stw r0, 0(r3)
/* 80359FF8 00356F38  38 E0 00 00 */	li r7, 0
/* 80359FFC 00356F3C  38 C6 1B EC */	addi r6, r6, __vt__Q34Game10KingChappy5State@l
/* 8035A000 00356F40  38 A5 1B 5C */	addi r5, r5, __vt__Q34Game10KingChappy10StateFlick@l
/* 8035A004 00356F44  90 83 00 04 */	stw r4, 4(r3)
/* 8035A008 00356F48  38 02 02 34 */	addi r0, r2, lbl_8051E594@sda21
/* 8035A00C 00356F4C  90 E3 00 08 */	stw r7, 8(r3)
/* 8035A010 00356F50  90 C3 00 00 */	stw r6, 0(r3)
/* 8035A014 00356F54  90 A3 00 00 */	stw r5, 0(r3)
/* 8035A018 00356F58  90 03 00 0C */	stw r0, 0xc(r3)
/* 8035A01C 00356F5C  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10KingChappy10StateFlickFi

.fn init__Q34Game10KingChappy10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8035A020 00356F60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035A024 00356F64  7C 08 02 A6 */	mflr r0
/* 8035A028 00356F68  38 A0 00 00 */	li r5, 0
/* 8035A02C 00356F6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035A030 00356F70  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035A034 00356F74  7C 9F 23 78 */	mr r31, r4
/* 8035A038 00356F78  38 80 00 05 */	li r4, 5
/* 8035A03C 00356F7C  7F E3 FB 78 */	mr r3, r31
/* 8035A040 00356F80  48 00 71 85 */	bl startMotionSelf__Q34Game10KingChappy3ObjFiPQ28SysShape14MotionListener
/* 8035A044 00356F84  C0 02 02 18 */	lfs f0, lbl_8051E578@sda21(r2)
/* 8035A048 00356F88  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 8035A04C 00356F8C  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 8035A050 00356F90  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 8035A054 00356F94  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8035A058 00356F98  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 8035A05C 00356F9C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8035A060 00356FA0  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8035A064 00356FA4  64 00 00 20 */	oris r0, r0, 0x20
/* 8035A068 00356FA8  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8035A06C 00356FAC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035A070 00356FB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035A074 00356FB4  7C 08 03 A6 */	mtlr r0
/* 8035A078 00356FB8  38 21 00 10 */	addi r1, r1, 0x10
/* 8035A07C 00356FBC  4E 80 00 20 */	blr 
.endfn init__Q34Game10KingChappy10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10KingChappy10StateFlickFPQ24Game9EnemyBase, global
/* 8035A080 00356FC0  94 21 FE D0 */	stwu r1, -0x130(r1)
/* 8035A084 00356FC4  7C 08 02 A6 */	mflr r0
/* 8035A088 00356FC8  90 01 01 34 */	stw r0, 0x134(r1)
/* 8035A08C 00356FCC  DB E1 01 20 */	stfd f31, 0x120(r1)
/* 8035A090 00356FD0  F3 E1 01 28 */	psq_st f31, 296(r1), 0, qr0
/* 8035A094 00356FD4  DB C1 01 10 */	stfd f30, 0x110(r1)
/* 8035A098 00356FD8  F3 C1 01 18 */	psq_st f30, 280(r1), 0, qr0
/* 8035A09C 00356FDC  DB A1 01 00 */	stfd f29, 0x100(r1)
/* 8035A0A0 00356FE0  F3 A1 01 08 */	psq_st f29, 264(r1), 0, qr0
/* 8035A0A4 00356FE4  DB 81 00 F0 */	stfd f28, 0xf0(r1)
/* 8035A0A8 00356FE8  F3 81 00 F8 */	psq_st f28, 248(r1), 0, qr0
/* 8035A0AC 00356FEC  DB 61 00 E0 */	stfd f27, 0xe0(r1)
/* 8035A0B0 00356FF0  F3 61 00 E8 */	psq_st f27, 232(r1), 0, qr0
/* 8035A0B4 00356FF4  93 E1 00 DC */	stw r31, 0xdc(r1)
/* 8035A0B8 00356FF8  93 C1 00 D8 */	stw r30, 0xd8(r1)
/* 8035A0BC 00356FFC  93 A1 00 D4 */	stw r29, 0xd4(r1)
/* 8035A0C0 00357000  7C 9F 23 78 */	mr r31, r4
/* 8035A0C4 00357004  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 8035A0C8 00357008  88 05 00 24 */	lbz r0, 0x24(r5)
/* 8035A0CC 0035700C  28 00 00 00 */	cmplwi r0, 0
/* 8035A0D0 00357010  41 82 08 4C */	beq .L_8035A91C
/* 8035A0D4 00357014  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 8035A0D8 00357018  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 8035A0DC 0035701C  41 82 08 28 */	beq .L_8035A904
/* 8035A0E0 00357020  40 80 00 1C */	bge .L_8035A0FC
/* 8035A0E4 00357024  2C 00 00 03 */	cmpwi r0, 3
/* 8035A0E8 00357028  41 82 02 60 */	beq .L_8035A348
/* 8035A0EC 0035702C  40 80 08 30 */	bge .L_8035A91C
/* 8035A0F0 00357030  2C 00 00 02 */	cmpwi r0, 2
/* 8035A0F4 00357034  40 80 00 20 */	bge .L_8035A114
/* 8035A0F8 00357038  48 00 08 24 */	b .L_8035A91C
.L_8035A0FC:
/* 8035A0FC 0035703C  2C 00 07 D0 */	cmpwi r0, 0x7d0
/* 8035A100 00357040  41 82 00 08 */	beq .L_8035A108
/* 8035A104 00357044  48 00 08 18 */	b .L_8035A91C
.L_8035A108:
/* 8035A108 00357048  7F E3 FB 78 */	mr r3, r31
/* 8035A10C 0035704C  48 00 71 F5 */	bl endBlendAnimation__Q34Game10KingChappy3ObjFv
/* 8035A110 00357050  48 00 08 0C */	b .L_8035A91C
.L_8035A114:
/* 8035A114 00357054  81 84 00 00 */	lwz r12, 0(r4)
/* 8035A118 00357058  38 61 00 20 */	addi r3, r1, 0x20
/* 8035A11C 0035705C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035A120 00357060  7D 89 03 A6 */	mtctr r12
/* 8035A124 00357064  4E 80 04 21 */	bctrl 
/* 8035A128 00357068  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 8035A12C 0035706C  7F E3 FB 78 */	mr r3, r31
/* 8035A130 00357070  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 8035A134 00357074  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8035A138 00357078  D0 41 00 7C */	stfs f2, 0x7c(r1)
/* 8035A13C 0035707C  D0 21 00 80 */	stfs f1, 0x80(r1)
/* 8035A140 00357080  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 8035A144 00357084  81 9F 00 00 */	lwz r12, 0(r31)
/* 8035A148 00357088  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8035A14C 0035708C  7D 89 03 A6 */	mtctr r12
/* 8035A150 00357090  4E 80 04 21 */	bctrl 
/* 8035A154 00357094  C0 9F 01 F8 */	lfs f4, 0x1f8(r31)
/* 8035A158 00357098  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 8035A15C 0035709C  38 83 A7 EC */	addi r4, r3, __vt__Q23efx3Arg@l
/* 8035A160 003570A0  C0 61 00 7C */	lfs f3, 0x7c(r1)
/* 8035A164 003570A4  C0 41 00 80 */	lfs f2, 0x80(r1)
/* 8035A168 003570A8  3C 60 80 4E */	lis r3, __vt__Q23efx12ArgRotYScale@ha
/* 8035A16C 003570AC  C0 01 00 84 */	lfs f0, 0x84(r1)
/* 8035A170 003570B0  38 03 1B 50 */	addi r0, r3, __vt__Q23efx12ArgRotYScale@l
/* 8035A174 003570B4  90 81 00 88 */	stw r4, 0x88(r1)
/* 8035A178 003570B8  D0 61 00 8C */	stfs f3, 0x8c(r1)
/* 8035A17C 003570BC  D0 41 00 90 */	stfs f2, 0x90(r1)
/* 8035A180 003570C0  D0 01 00 94 */	stfs f0, 0x94(r1)
/* 8035A184 003570C4  90 01 00 88 */	stw r0, 0x88(r1)
/* 8035A188 003570C8  D0 21 00 98 */	stfs f1, 0x98(r1)
/* 8035A18C 003570CC  D0 81 00 9C */	stfs f4, 0x9c(r1)
/* 8035A190 003570D0  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 8035A194 003570D4  28 00 00 00 */	cmplwi r0, 0
/* 8035A198 003570D8  41 82 00 94 */	beq .L_8035A22C
/* 8035A19C 003570DC  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 8035A1A0 003570E0  38 A0 00 00 */	li r5, 0
/* 8035A1A4 003570E4  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 8035A1A8 003570E8  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple5@ha
/* 8035A1AC 003570EC  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 8035A1B0 003570F0  38 03 6A 28 */	addi r0, r3, __vt__Q23efx8TSimple5@l
/* 8035A1B4 003570F4  3C 60 80 4F */	lis r3, __vt__Q23efx9TKchApWat@ha
/* 8035A1B8 003570F8  38 80 02 11 */	li r4, 0x211
/* 8035A1BC 003570FC  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 8035A1C0 00357100  38 03 A0 E0 */	addi r0, r3, __vt__Q23efx9TKchApWat@l
/* 8035A1C4 00357104  39 20 02 12 */	li r9, 0x212
/* 8035A1C8 00357108  39 00 02 13 */	li r8, 0x213
/* 8035A1CC 0035710C  38 E0 02 14 */	li r7, 0x214
/* 8035A1D0 00357110  38 C0 02 15 */	li r6, 0x215
/* 8035A1D4 00357114  B0 81 00 A4 */	sth r4, 0xa4(r1)
/* 8035A1D8 00357118  38 61 00 A0 */	addi r3, r1, 0xa0
/* 8035A1DC 0035711C  38 81 00 88 */	addi r4, r1, 0x88
/* 8035A1E0 00357120  B1 21 00 A6 */	sth r9, 0xa6(r1)
/* 8035A1E4 00357124  B1 01 00 A8 */	sth r8, 0xa8(r1)
/* 8035A1E8 00357128  B0 E1 00 AA */	sth r7, 0xaa(r1)
/* 8035A1EC 0035712C  B0 C1 00 AC */	sth r6, 0xac(r1)
/* 8035A1F0 00357130  90 A1 00 B0 */	stw r5, 0xb0(r1)
/* 8035A1F4 00357134  90 A1 00 B4 */	stw r5, 0xb4(r1)
/* 8035A1F8 00357138  90 A1 00 B8 */	stw r5, 0xb8(r1)
/* 8035A1FC 0035713C  90 A1 00 BC */	stw r5, 0xbc(r1)
/* 8035A200 00357140  90 A1 00 C0 */	stw r5, 0xc0(r1)
/* 8035A204 00357144  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 8035A208 00357148  48 09 1A E5 */	bl create__Q23efx9TKchApWatFPQ23efx3Arg
/* 8035A20C 0035714C  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 8035A210 00357150  38 80 58 06 */	li r4, 0x5806
/* 8035A214 00357154  38 A0 00 00 */	li r5, 0
/* 8035A218 00357158  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8035A21C 0035715C  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 8035A220 00357160  7D 89 03 A6 */	mtctr r12
/* 8035A224 00357164  4E 80 04 21 */	bctrl 
/* 8035A228 00357168  48 00 00 50 */	b .L_8035A278
.L_8035A22C:
/* 8035A22C 0035716C  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 8035A230 00357170  38 A0 00 00 */	li r5, 0
/* 8035A234 00357174  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 8035A238 00357178  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple2@ha
/* 8035A23C 0035717C  90 01 00 6C */	stw r0, 0x6c(r1)
/* 8035A240 00357180  38 03 6A 64 */	addi r0, r3, __vt__Q23efx8TSimple2@l
/* 8035A244 00357184  3C 60 80 4F */	lis r3, __vt__Q23efx13TKchFlickSand@ha
/* 8035A248 00357188  38 80 02 28 */	li r4, 0x228
/* 8035A24C 0035718C  90 01 00 6C */	stw r0, 0x6c(r1)
/* 8035A250 00357190  38 03 A1 08 */	addi r0, r3, __vt__Q23efx13TKchFlickSand@l
/* 8035A254 00357194  38 C0 02 29 */	li r6, 0x229
/* 8035A258 00357198  38 61 00 6C */	addi r3, r1, 0x6c
/* 8035A25C 0035719C  B0 81 00 70 */	sth r4, 0x70(r1)
/* 8035A260 003571A0  38 81 00 88 */	addi r4, r1, 0x88
/* 8035A264 003571A4  B0 C1 00 72 */	sth r6, 0x72(r1)
/* 8035A268 003571A8  90 A1 00 74 */	stw r5, 0x74(r1)
/* 8035A26C 003571AC  90 A1 00 78 */	stw r5, 0x78(r1)
/* 8035A270 003571B0  90 01 00 6C */	stw r0, 0x6c(r1)
/* 8035A274 003571B4  48 09 17 D1 */	bl create__Q23efx13TKchFlickSandFPQ23efx3Arg
.L_8035A278:
/* 8035A278 003571B8  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8035A27C 003571BC  38 A1 00 7C */	addi r5, r1, 0x7c
/* 8035A280 003571C0  38 80 00 03 */	li r4, 3
/* 8035A284 003571C4  38 C0 00 02 */	li r6, 2
/* 8035A288 003571C8  4B EF 7F B5 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 8035A28C 003571CC  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 8035A290 003571D0  38 A1 00 7C */	addi r5, r1, 0x7c
/* 8035A294 003571D4  38 80 00 0B */	li r4, 0xb
/* 8035A298 003571D8  38 C0 00 02 */	li r6, 2
/* 8035A29C 003571DC  4B EF 94 E5 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 8035A2A0 003571E0  83 BF 02 8C */	lwz r29, 0x28c(r31)
/* 8035A2A4 003571E4  3B C0 00 00 */	li r30, 0
/* 8035A2A8 003571E8  7F A3 EB 78 */	mr r3, r29
/* 8035A2AC 003571EC  81 9D 00 28 */	lwz r12, 0x28(r29)
/* 8035A2B0 003571F0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035A2B4 003571F4  7D 89 03 A6 */	mtctr r12
/* 8035A2B8 003571F8  4E 80 04 21 */	bctrl 
/* 8035A2BC 003571FC  2C 03 00 05 */	cmpwi r3, 5
/* 8035A2C0 00357200  41 82 00 3C */	beq .L_8035A2FC
/* 8035A2C4 00357204  7F A3 EB 78 */	mr r3, r29
/* 8035A2C8 00357208  81 9D 00 28 */	lwz r12, 0x28(r29)
/* 8035A2CC 0035720C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035A2D0 00357210  7D 89 03 A6 */	mtctr r12
/* 8035A2D4 00357214  4E 80 04 21 */	bctrl 
/* 8035A2D8 00357218  2C 03 00 06 */	cmpwi r3, 6
/* 8035A2DC 0035721C  41 82 00 20 */	beq .L_8035A2FC
/* 8035A2E0 00357220  7F A3 EB 78 */	mr r3, r29
/* 8035A2E4 00357224  81 9D 00 28 */	lwz r12, 0x28(r29)
/* 8035A2E8 00357228  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035A2EC 0035722C  7D 89 03 A6 */	mtctr r12
/* 8035A2F0 00357230  4E 80 04 21 */	bctrl 
/* 8035A2F4 00357234  2C 03 00 07 */	cmpwi r3, 7
/* 8035A2F8 00357238  40 82 00 08 */	bne .L_8035A300
.L_8035A2FC:
/* 8035A2FC 0035723C  3B C0 00 01 */	li r30, 1
.L_8035A300:
/* 8035A300 00357240  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 8035A304 00357244  40 82 00 20 */	bne .L_8035A324
/* 8035A308 00357248  3C 60 80 49 */	lis r3, lbl_804910F0@ha
/* 8035A30C 0035724C  3C A0 80 49 */	lis r5, lbl_80491108@ha
/* 8035A310 00357250  38 63 10 F0 */	addi r3, r3, lbl_804910F0@l
/* 8035A314 00357254  38 80 04 54 */	li r4, 0x454
/* 8035A318 00357258  38 A5 11 08 */	addi r5, r5, lbl_80491108@l
/* 8035A31C 0035725C  4C C6 31 82 */	crclr 6
/* 8035A320 00357260  4B CD 03 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8035A324:
/* 8035A324 00357264  28 1D 00 00 */	cmplwi r29, 0
/* 8035A328 00357268  41 82 05 F4 */	beq .L_8035A91C
/* 8035A32C 0035726C  7F A3 EB 78 */	mr r3, r29
/* 8035A330 00357270  38 80 00 04 */	li r4, 4
/* 8035A334 00357274  81 9D 00 28 */	lwz r12, 0x28(r29)
/* 8035A338 00357278  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 8035A33C 0035727C  7D 89 03 A6 */	mtctr r12
/* 8035A340 00357280  4E 80 04 21 */	bctrl 
/* 8035A344 00357284  48 00 05 D8 */	b .L_8035A91C
.L_8035A348:
/* 8035A348 00357288  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8035A34C 0035728C  3C 60 80 4B */	lis r3, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 8035A350 00357290  38 00 00 00 */	li r0, 0
/* 8035A354 00357294  C0 62 02 3C */	lfs f3, lbl_8051E59C@sda21(r2)
/* 8035A358 00357298  C0 5F 03 04 */	lfs f2, 0x304(r31)
/* 8035A35C 0035729C  28 00 00 00 */	cmplwi r0, 0
/* 8035A360 003572A0  C0 24 09 34 */	lfs f1, 0x934(r4)
/* 8035A364 003572A4  38 83 BC 9C */	addi r4, r3, "__vt__22Iterator<Q24Game4Piki>"@l
/* 8035A368 003572A8  C0 1F 01 F8 */	lfs f0, 0x1f8(r31)
/* 8035A36C 003572AC  EF E3 10 2A */	fadds f31, f3, f2
/* 8035A370 003572B0  C0 42 02 40 */	lfs f2, lbl_8051E5A0@sda21(r2)
/* 8035A374 003572B4  EC 01 00 32 */	fmuls f0, f1, f0
/* 8035A378 003572B8  C3 9F 03 00 */	lfs f28, 0x300(r31)
/* 8035A37C 003572BC  C3 7F 03 08 */	lfs f27, 0x308(r31)
/* 8035A380 003572C0  EF DF 10 28 */	fsubs f30, f31, f2
/* 8035A384 003572C4  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8035A388 003572C8  EF A0 00 32 */	fmuls f29, f0, f0
/* 8035A38C 003572CC  90 81 00 5C */	stw r4, 0x5c(r1)
/* 8035A390 003572D0  90 01 00 68 */	stw r0, 0x68(r1)
/* 8035A394 003572D4  90 01 00 60 */	stw r0, 0x60(r1)
/* 8035A398 003572D8  90 61 00 64 */	stw r3, 0x64(r1)
/* 8035A39C 003572DC  40 82 00 1C */	bne .L_8035A3B8
/* 8035A3A0 003572E0  81 83 00 00 */	lwz r12, 0(r3)
/* 8035A3A4 003572E4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8035A3A8 003572E8  7D 89 03 A6 */	mtctr r12
/* 8035A3AC 003572EC  4E 80 04 21 */	bctrl 
/* 8035A3B0 003572F0  90 61 00 60 */	stw r3, 0x60(r1)
/* 8035A3B4 003572F4  48 00 02 10 */	b .L_8035A5C4
.L_8035A3B8:
/* 8035A3B8 003572F8  81 83 00 00 */	lwz r12, 0(r3)
/* 8035A3BC 003572FC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8035A3C0 00357300  7D 89 03 A6 */	mtctr r12
/* 8035A3C4 00357304  4E 80 04 21 */	bctrl 
/* 8035A3C8 00357308  90 61 00 60 */	stw r3, 0x60(r1)
/* 8035A3CC 0035730C  48 00 00 58 */	b .L_8035A424
.L_8035A3D0:
/* 8035A3D0 00357310  80 61 00 64 */	lwz r3, 0x64(r1)
/* 8035A3D4 00357314  80 81 00 60 */	lwz r4, 0x60(r1)
/* 8035A3D8 00357318  81 83 00 00 */	lwz r12, 0(r3)
/* 8035A3DC 0035731C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8035A3E0 00357320  7D 89 03 A6 */	mtctr r12
/* 8035A3E4 00357324  4E 80 04 21 */	bctrl 
/* 8035A3E8 00357328  7C 64 1B 78 */	mr r4, r3
/* 8035A3EC 0035732C  80 61 00 68 */	lwz r3, 0x68(r1)
/* 8035A3F0 00357330  81 83 00 00 */	lwz r12, 0(r3)
/* 8035A3F4 00357334  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035A3F8 00357338  7D 89 03 A6 */	mtctr r12
/* 8035A3FC 0035733C  4E 80 04 21 */	bctrl 
/* 8035A400 00357340  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035A404 00357344  40 82 01 C0 */	bne .L_8035A5C4
/* 8035A408 00357348  80 61 00 64 */	lwz r3, 0x64(r1)
/* 8035A40C 0035734C  80 81 00 60 */	lwz r4, 0x60(r1)
/* 8035A410 00357350  81 83 00 00 */	lwz r12, 0(r3)
/* 8035A414 00357354  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8035A418 00357358  7D 89 03 A6 */	mtctr r12
/* 8035A41C 0035735C  4E 80 04 21 */	bctrl 
/* 8035A420 00357360  90 61 00 60 */	stw r3, 0x60(r1)
.L_8035A424:
/* 8035A424 00357364  81 81 00 5C */	lwz r12, 0x5c(r1)
/* 8035A428 00357368  38 61 00 5C */	addi r3, r1, 0x5c
/* 8035A42C 0035736C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8035A430 00357370  7D 89 03 A6 */	mtctr r12
/* 8035A434 00357374  4E 80 04 21 */	bctrl 
/* 8035A438 00357378  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035A43C 0035737C  41 82 FF 94 */	beq .L_8035A3D0
/* 8035A440 00357380  48 00 01 84 */	b .L_8035A5C4
.L_8035A444:
/* 8035A444 00357384  80 61 00 64 */	lwz r3, 0x64(r1)
/* 8035A448 00357388  81 83 00 00 */	lwz r12, 0(r3)
/* 8035A44C 0035738C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8035A450 00357390  7D 89 03 A6 */	mtctr r12
/* 8035A454 00357394  4E 80 04 21 */	bctrl 
/* 8035A458 00357398  81 83 00 00 */	lwz r12, 0(r3)
/* 8035A45C 0035739C  7C 7D 1B 78 */	mr r29, r3
/* 8035A460 003573A0  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8035A464 003573A4  7D 89 03 A6 */	mtctr r12
/* 8035A468 003573A8  4E 80 04 21 */	bctrl 
/* 8035A46C 003573AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035A470 003573B0  41 82 00 98 */	beq .L_8035A508
/* 8035A474 003573B4  7F A4 EB 78 */	mr r4, r29
/* 8035A478 003573B8  38 61 00 14 */	addi r3, r1, 0x14
/* 8035A47C 003573BC  81 9D 00 00 */	lwz r12, 0(r29)
/* 8035A480 003573C0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035A484 003573C4  7D 89 03 A6 */	mtctr r12
/* 8035A488 003573C8  4E 80 04 21 */	bctrl 
/* 8035A48C 003573CC  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8035A490 003573D0  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8035A494 003573D4  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8035A498 003573D8  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 8035A49C 003573DC  40 81 00 6C */	ble .L_8035A508
/* 8035A4A0 003573E0  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 8035A4A4 003573E4  40 80 00 64 */	bge .L_8035A508
/* 8035A4A8 003573E8  EC 1B 10 28 */	fsubs f0, f27, f2
/* 8035A4AC 003573EC  EC 3C 08 28 */	fsubs f1, f28, f1
/* 8035A4B0 003573F0  EC 00 00 32 */	fmuls f0, f0, f0
/* 8035A4B4 003573F4  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 8035A4B8 003573F8  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 8035A4BC 003573FC  40 80 00 4C */	bge .L_8035A508
/* 8035A4C0 00357400  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8035A4C4 00357404  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 8035A4C8 00357408  3C 60 80 4B */	lis r3, __vt__Q24Game13InteractPress@ha
/* 8035A4CC 0035740C  38 00 00 00 */	li r0, 0
/* 8035A4D0 00357410  C0 05 06 04 */	lfs f0, 0x604(r5)
/* 8035A4D4 00357414  38 84 A3 00 */	addi r4, r4, __vt__Q24Game11Interaction@l
/* 8035A4D8 00357418  38 A3 B3 20 */	addi r5, r3, __vt__Q24Game13InteractPress@l
/* 8035A4DC 0035741C  7F A3 EB 78 */	mr r3, r29
/* 8035A4E0 00357420  90 81 00 4C */	stw r4, 0x4c(r1)
/* 8035A4E4 00357424  38 81 00 4C */	addi r4, r1, 0x4c
/* 8035A4E8 00357428  93 E1 00 50 */	stw r31, 0x50(r1)
/* 8035A4EC 0035742C  90 A1 00 4C */	stw r5, 0x4c(r1)
/* 8035A4F0 00357430  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 8035A4F4 00357434  90 01 00 58 */	stw r0, 0x58(r1)
/* 8035A4F8 00357438  81 9D 00 00 */	lwz r12, 0(r29)
/* 8035A4FC 0035743C  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8035A500 00357440  7D 89 03 A6 */	mtctr r12
/* 8035A504 00357444  4E 80 04 21 */	bctrl 
.L_8035A508:
/* 8035A508 00357448  80 01 00 68 */	lwz r0, 0x68(r1)
/* 8035A50C 0035744C  28 00 00 00 */	cmplwi r0, 0
/* 8035A510 00357450  40 82 00 24 */	bne .L_8035A534
/* 8035A514 00357454  80 61 00 64 */	lwz r3, 0x64(r1)
/* 8035A518 00357458  80 81 00 60 */	lwz r4, 0x60(r1)
/* 8035A51C 0035745C  81 83 00 00 */	lwz r12, 0(r3)
/* 8035A520 00357460  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8035A524 00357464  7D 89 03 A6 */	mtctr r12
/* 8035A528 00357468  4E 80 04 21 */	bctrl 
/* 8035A52C 0035746C  90 61 00 60 */	stw r3, 0x60(r1)
/* 8035A530 00357470  48 00 00 94 */	b .L_8035A5C4
.L_8035A534:
/* 8035A534 00357474  80 61 00 64 */	lwz r3, 0x64(r1)
/* 8035A538 00357478  80 81 00 60 */	lwz r4, 0x60(r1)
/* 8035A53C 0035747C  81 83 00 00 */	lwz r12, 0(r3)
/* 8035A540 00357480  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8035A544 00357484  7D 89 03 A6 */	mtctr r12
/* 8035A548 00357488  4E 80 04 21 */	bctrl 
/* 8035A54C 0035748C  90 61 00 60 */	stw r3, 0x60(r1)
/* 8035A550 00357490  48 00 00 58 */	b .L_8035A5A8
.L_8035A554:
/* 8035A554 00357494  80 61 00 64 */	lwz r3, 0x64(r1)
/* 8035A558 00357498  80 81 00 60 */	lwz r4, 0x60(r1)
/* 8035A55C 0035749C  81 83 00 00 */	lwz r12, 0(r3)
/* 8035A560 003574A0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8035A564 003574A4  7D 89 03 A6 */	mtctr r12
/* 8035A568 003574A8  4E 80 04 21 */	bctrl 
/* 8035A56C 003574AC  7C 64 1B 78 */	mr r4, r3
/* 8035A570 003574B0  80 61 00 68 */	lwz r3, 0x68(r1)
/* 8035A574 003574B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8035A578 003574B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035A57C 003574BC  7D 89 03 A6 */	mtctr r12
/* 8035A580 003574C0  4E 80 04 21 */	bctrl 
/* 8035A584 003574C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035A588 003574C8  40 82 00 3C */	bne .L_8035A5C4
/* 8035A58C 003574CC  80 61 00 64 */	lwz r3, 0x64(r1)
/* 8035A590 003574D0  80 81 00 60 */	lwz r4, 0x60(r1)
/* 8035A594 003574D4  81 83 00 00 */	lwz r12, 0(r3)
/* 8035A598 003574D8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8035A59C 003574DC  7D 89 03 A6 */	mtctr r12
/* 8035A5A0 003574E0  4E 80 04 21 */	bctrl 
/* 8035A5A4 003574E4  90 61 00 60 */	stw r3, 0x60(r1)
.L_8035A5A8:
/* 8035A5A8 003574E8  81 81 00 5C */	lwz r12, 0x5c(r1)
/* 8035A5AC 003574EC  38 61 00 5C */	addi r3, r1, 0x5c
/* 8035A5B0 003574F0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8035A5B4 003574F4  7D 89 03 A6 */	mtctr r12
/* 8035A5B8 003574F8  4E 80 04 21 */	bctrl 
/* 8035A5BC 003574FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035A5C0 00357500  41 82 FF 94 */	beq .L_8035A554
.L_8035A5C4:
/* 8035A5C4 00357504  80 61 00 64 */	lwz r3, 0x64(r1)
/* 8035A5C8 00357508  81 83 00 00 */	lwz r12, 0(r3)
/* 8035A5CC 0035750C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035A5D0 00357510  7D 89 03 A6 */	mtctr r12
/* 8035A5D4 00357514  4E 80 04 21 */	bctrl 
/* 8035A5D8 00357518  80 81 00 60 */	lwz r4, 0x60(r1)
/* 8035A5DC 0035751C  7C 04 18 40 */	cmplw r4, r3
/* 8035A5E0 00357520  40 82 FE 64 */	bne .L_8035A444
/* 8035A5E4 00357524  38 00 00 00 */	li r0, 0
/* 8035A5E8 00357528  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8035A5EC 0035752C  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Navi>"@ha
/* 8035A5F0 00357530  90 01 00 48 */	stw r0, 0x48(r1)
/* 8035A5F4 00357534  38 84 BC B4 */	addi r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
/* 8035A5F8 00357538  28 00 00 00 */	cmplwi r0, 0
/* 8035A5FC 0035753C  90 81 00 3C */	stw r4, 0x3c(r1)
/* 8035A600 00357540  3B C0 00 01 */	li r30, 1
/* 8035A604 00357544  90 01 00 40 */	stw r0, 0x40(r1)
/* 8035A608 00357548  90 61 00 44 */	stw r3, 0x44(r1)
/* 8035A60C 0035754C  40 82 00 1C */	bne .L_8035A628
/* 8035A610 00357550  81 83 00 00 */	lwz r12, 0(r3)
/* 8035A614 00357554  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8035A618 00357558  7D 89 03 A6 */	mtctr r12
/* 8035A61C 0035755C  4E 80 04 21 */	bctrl 
/* 8035A620 00357560  90 61 00 40 */	stw r3, 0x40(r1)
/* 8035A624 00357564  48 00 02 14 */	b .L_8035A838
.L_8035A628:
/* 8035A628 00357568  81 83 00 00 */	lwz r12, 0(r3)
/* 8035A62C 0035756C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8035A630 00357570  7D 89 03 A6 */	mtctr r12
/* 8035A634 00357574  4E 80 04 21 */	bctrl 
/* 8035A638 00357578  90 61 00 40 */	stw r3, 0x40(r1)
/* 8035A63C 0035757C  48 00 00 58 */	b .L_8035A694
.L_8035A640:
/* 8035A640 00357580  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8035A644 00357584  80 81 00 40 */	lwz r4, 0x40(r1)
/* 8035A648 00357588  81 83 00 00 */	lwz r12, 0(r3)
/* 8035A64C 0035758C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8035A650 00357590  7D 89 03 A6 */	mtctr r12
/* 8035A654 00357594  4E 80 04 21 */	bctrl 
/* 8035A658 00357598  7C 64 1B 78 */	mr r4, r3
/* 8035A65C 0035759C  80 61 00 48 */	lwz r3, 0x48(r1)
/* 8035A660 003575A0  81 83 00 00 */	lwz r12, 0(r3)
/* 8035A664 003575A4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035A668 003575A8  7D 89 03 A6 */	mtctr r12
/* 8035A66C 003575AC  4E 80 04 21 */	bctrl 
/* 8035A670 003575B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035A674 003575B4  40 82 01 C4 */	bne .L_8035A838
/* 8035A678 003575B8  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8035A67C 003575BC  80 81 00 40 */	lwz r4, 0x40(r1)
/* 8035A680 003575C0  81 83 00 00 */	lwz r12, 0(r3)
/* 8035A684 003575C4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8035A688 003575C8  7D 89 03 A6 */	mtctr r12
/* 8035A68C 003575CC  4E 80 04 21 */	bctrl 
/* 8035A690 003575D0  90 61 00 40 */	stw r3, 0x40(r1)
.L_8035A694:
/* 8035A694 003575D4  81 81 00 3C */	lwz r12, 0x3c(r1)
/* 8035A698 003575D8  38 61 00 3C */	addi r3, r1, 0x3c
/* 8035A69C 003575DC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8035A6A0 003575E0  7D 89 03 A6 */	mtctr r12
/* 8035A6A4 003575E4  4E 80 04 21 */	bctrl 
/* 8035A6A8 003575E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035A6AC 003575EC  41 82 FF 94 */	beq .L_8035A640
/* 8035A6B0 003575F0  48 00 01 88 */	b .L_8035A838
.L_8035A6B4:
/* 8035A6B4 003575F4  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8035A6B8 003575F8  81 83 00 00 */	lwz r12, 0(r3)
/* 8035A6BC 003575FC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8035A6C0 00357600  7D 89 03 A6 */	mtctr r12
/* 8035A6C4 00357604  4E 80 04 21 */	bctrl 
/* 8035A6C8 00357608  81 83 00 00 */	lwz r12, 0(r3)
/* 8035A6CC 0035760C  7C 7D 1B 78 */	mr r29, r3
/* 8035A6D0 00357610  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8035A6D4 00357614  7D 89 03 A6 */	mtctr r12
/* 8035A6D8 00357618  4E 80 04 21 */	bctrl 
/* 8035A6DC 0035761C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035A6E0 00357620  41 82 00 9C */	beq .L_8035A77C
/* 8035A6E4 00357624  7F A4 EB 78 */	mr r4, r29
/* 8035A6E8 00357628  38 61 00 08 */	addi r3, r1, 8
/* 8035A6EC 0035762C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8035A6F0 00357630  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035A6F4 00357634  7D 89 03 A6 */	mtctr r12
/* 8035A6F8 00357638  4E 80 04 21 */	bctrl 
/* 8035A6FC 0035763C  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8035A700 00357640  C0 21 00 08 */	lfs f1, 8(r1)
/* 8035A704 00357644  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8035A708 00357648  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8035A70C 0035764C  40 81 00 70 */	ble .L_8035A77C
/* 8035A710 00357650  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 8035A714 00357654  40 80 00 68 */	bge .L_8035A77C
/* 8035A718 00357658  EC 1B 10 28 */	fsubs f0, f27, f2
/* 8035A71C 0035765C  EC 3C 08 28 */	fsubs f1, f28, f1
/* 8035A720 00357660  EC 00 00 32 */	fmuls f0, f0, f0
/* 8035A724 00357664  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 8035A728 00357668  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 8035A72C 0035766C  40 80 00 50 */	bge .L_8035A77C
/* 8035A730 00357670  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8035A734 00357674  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 8035A738 00357678  3C 60 80 4B */	lis r3, __vt__Q24Game13InteractPress@ha
/* 8035A73C 0035767C  38 00 00 00 */	li r0, 0
/* 8035A740 00357680  C0 05 06 04 */	lfs f0, 0x604(r5)
/* 8035A744 00357684  38 84 A3 00 */	addi r4, r4, __vt__Q24Game11Interaction@l
/* 8035A748 00357688  38 A3 B3 20 */	addi r5, r3, __vt__Q24Game13InteractPress@l
/* 8035A74C 0035768C  7F A3 EB 78 */	mr r3, r29
/* 8035A750 00357690  90 81 00 2C */	stw r4, 0x2c(r1)
/* 8035A754 00357694  38 81 00 2C */	addi r4, r1, 0x2c
/* 8035A758 00357698  93 E1 00 30 */	stw r31, 0x30(r1)
/* 8035A75C 0035769C  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 8035A760 003576A0  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8035A764 003576A4  90 01 00 38 */	stw r0, 0x38(r1)
/* 8035A768 003576A8  81 9D 00 00 */	lwz r12, 0(r29)
/* 8035A76C 003576AC  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8035A770 003576B0  7D 89 03 A6 */	mtctr r12
/* 8035A774 003576B4  4E 80 04 21 */	bctrl 
/* 8035A778 003576B8  3B C0 00 00 */	li r30, 0
.L_8035A77C:
/* 8035A77C 003576BC  80 01 00 48 */	lwz r0, 0x48(r1)
/* 8035A780 003576C0  28 00 00 00 */	cmplwi r0, 0
/* 8035A784 003576C4  40 82 00 24 */	bne .L_8035A7A8
/* 8035A788 003576C8  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8035A78C 003576CC  80 81 00 40 */	lwz r4, 0x40(r1)
/* 8035A790 003576D0  81 83 00 00 */	lwz r12, 0(r3)
/* 8035A794 003576D4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8035A798 003576D8  7D 89 03 A6 */	mtctr r12
/* 8035A79C 003576DC  4E 80 04 21 */	bctrl 
/* 8035A7A0 003576E0  90 61 00 40 */	stw r3, 0x40(r1)
/* 8035A7A4 003576E4  48 00 00 94 */	b .L_8035A838
.L_8035A7A8:
/* 8035A7A8 003576E8  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8035A7AC 003576EC  80 81 00 40 */	lwz r4, 0x40(r1)
/* 8035A7B0 003576F0  81 83 00 00 */	lwz r12, 0(r3)
/* 8035A7B4 003576F4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8035A7B8 003576F8  7D 89 03 A6 */	mtctr r12
/* 8035A7BC 003576FC  4E 80 04 21 */	bctrl 
/* 8035A7C0 00357700  90 61 00 40 */	stw r3, 0x40(r1)
/* 8035A7C4 00357704  48 00 00 58 */	b .L_8035A81C
.L_8035A7C8:
/* 8035A7C8 00357708  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8035A7CC 0035770C  80 81 00 40 */	lwz r4, 0x40(r1)
/* 8035A7D0 00357710  81 83 00 00 */	lwz r12, 0(r3)
/* 8035A7D4 00357714  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8035A7D8 00357718  7D 89 03 A6 */	mtctr r12
/* 8035A7DC 0035771C  4E 80 04 21 */	bctrl 
/* 8035A7E0 00357720  7C 64 1B 78 */	mr r4, r3
/* 8035A7E4 00357724  80 61 00 48 */	lwz r3, 0x48(r1)
/* 8035A7E8 00357728  81 83 00 00 */	lwz r12, 0(r3)
/* 8035A7EC 0035772C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035A7F0 00357730  7D 89 03 A6 */	mtctr r12
/* 8035A7F4 00357734  4E 80 04 21 */	bctrl 
/* 8035A7F8 00357738  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035A7FC 0035773C  40 82 00 3C */	bne .L_8035A838
/* 8035A800 00357740  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8035A804 00357744  80 81 00 40 */	lwz r4, 0x40(r1)
/* 8035A808 00357748  81 83 00 00 */	lwz r12, 0(r3)
/* 8035A80C 0035774C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8035A810 00357750  7D 89 03 A6 */	mtctr r12
/* 8035A814 00357754  4E 80 04 21 */	bctrl 
/* 8035A818 00357758  90 61 00 40 */	stw r3, 0x40(r1)
.L_8035A81C:
/* 8035A81C 0035775C  81 81 00 3C */	lwz r12, 0x3c(r1)
/* 8035A820 00357760  38 61 00 3C */	addi r3, r1, 0x3c
/* 8035A824 00357764  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8035A828 00357768  7D 89 03 A6 */	mtctr r12
/* 8035A82C 0035776C  4E 80 04 21 */	bctrl 
/* 8035A830 00357770  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035A834 00357774  41 82 FF 94 */	beq .L_8035A7C8
.L_8035A838:
/* 8035A838 00357778  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8035A83C 0035777C  81 83 00 00 */	lwz r12, 0(r3)
/* 8035A840 00357780  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035A844 00357784  7D 89 03 A6 */	mtctr r12
/* 8035A848 00357788  4E 80 04 21 */	bctrl 
/* 8035A84C 0035778C  80 81 00 40 */	lwz r4, 0x40(r1)
/* 8035A850 00357790  7C 04 18 40 */	cmplw r4, r3
/* 8035A854 00357794  40 82 FE 60 */	bne .L_8035A6B4
/* 8035A858 00357798  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8035A85C 0035779C  7F E3 FB 78 */	mr r3, r31
/* 8035A860 003577A0  C0 1F 01 F8 */	lfs f0, 0x1f8(r31)
/* 8035A864 003577A4  38 80 00 00 */	li r4, 0
/* 8035A868 003577A8  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 8035A86C 003577AC  C3 85 04 C4 */	lfs f28, 0x4c4(r5)
/* 8035A870 003577B0  EF C1 00 32 */	fmuls f30, f1, f0
/* 8035A874 003577B4  C3 A5 04 EC */	lfs f29, 0x4ec(r5)
/* 8035A878 003577B8  FC 40 E0 90 */	fmr f2, f28
/* 8035A87C 003577BC  C3 65 05 3C */	lfs f27, 0x53c(r5)
/* 8035A880 003577C0  FC 60 E8 90 */	fmr f3, f29
/* 8035A884 003577C4  C0 82 02 44 */	lfs f4, lbl_8051E5A4@sda21(r2)
/* 8035A888 003577C8  FC 20 F0 90 */	fmr f1, f30
/* 8035A88C 003577CC  4B DB 8C 49 */	bl "flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 8035A890 003577D0  7F E3 FB 78 */	mr r3, r31
/* 8035A894 003577D4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8035A898 003577D8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8035A89C 003577DC  7D 89 03 A6 */	mtctr r12
/* 8035A8A0 003577E0  4E 80 04 21 */	bctrl 
/* 8035A8A4 003577E4  FC 80 08 90 */	fmr f4, f1
/* 8035A8A8 003577E8  7F E3 FB 78 */	mr r3, r31
/* 8035A8AC 003577EC  FC 20 D8 90 */	fmr f1, f27
/* 8035A8B0 003577F0  38 80 00 00 */	li r4, 0
/* 8035A8B4 003577F4  FC 40 E0 90 */	fmr f2, f28
/* 8035A8B8 003577F8  FC 60 E8 90 */	fmr f3, f29
/* 8035A8BC 003577FC  4B DB 88 61 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 8035A8C0 00357800  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 8035A8C4 00357804  41 82 00 20 */	beq .L_8035A8E4
/* 8035A8C8 00357808  FC 20 F0 90 */	fmr f1, f30
/* 8035A8CC 0035780C  C0 82 02 44 */	lfs f4, lbl_8051E5A4@sda21(r2)
/* 8035A8D0 00357810  FC 40 E0 90 */	fmr f2, f28
/* 8035A8D4 00357814  7F E3 FB 78 */	mr r3, r31
/* 8035A8D8 00357818  FC 60 E8 90 */	fmr f3, f29
/* 8035A8DC 0035781C  38 80 00 00 */	li r4, 0
/* 8035A8E0 00357820  4B DB 8E B1 */	bl "flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
.L_8035A8E4:
/* 8035A8E4 00357824  C0 02 02 18 */	lfs f0, lbl_8051E578@sda21(r2)
/* 8035A8E8 00357828  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 8035A8EC 0035782C  80 7F 01 E0 */	lwz r3, 0x1e0(r31)
/* 8035A8F0 00357830  54 60 01 4B */	rlwinm. r0, r3, 0, 5, 5
/* 8035A8F4 00357834  40 82 00 28 */	bne .L_8035A91C
/* 8035A8F8 00357838  54 60 02 D2 */	rlwinm r0, r3, 0, 0xb, 9
/* 8035A8FC 0035783C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8035A900 00357840  48 00 00 1C */	b .L_8035A91C
.L_8035A904:
/* 8035A904 00357844  81 83 00 00 */	lwz r12, 0(r3)
/* 8035A908 00357848  38 A0 00 00 */	li r5, 0
/* 8035A90C 0035784C  38 C0 00 00 */	li r6, 0
/* 8035A910 00357850  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035A914 00357854  7D 89 03 A6 */	mtctr r12
/* 8035A918 00357858  4E 80 04 21 */	bctrl 
.L_8035A91C:
/* 8035A91C 0035785C  7F E3 FB 78 */	mr r3, r31
/* 8035A920 00357860  38 80 00 01 */	li r4, 1
/* 8035A924 00357864  48 00 66 8D */	bl checkDead__Q34Game10KingChappy3ObjFb
/* 8035A928 00357868  E3 E1 01 28 */	psq_l f31, 296(r1), 0, qr0
/* 8035A92C 0035786C  CB E1 01 20 */	lfd f31, 0x120(r1)
/* 8035A930 00357870  E3 C1 01 18 */	psq_l f30, 280(r1), 0, qr0
/* 8035A934 00357874  CB C1 01 10 */	lfd f30, 0x110(r1)
/* 8035A938 00357878  E3 A1 01 08 */	psq_l f29, 264(r1), 0, qr0
/* 8035A93C 0035787C  CB A1 01 00 */	lfd f29, 0x100(r1)
/* 8035A940 00357880  E3 81 00 F8 */	psq_l f28, 248(r1), 0, qr0
/* 8035A944 00357884  CB 81 00 F0 */	lfd f28, 0xf0(r1)
/* 8035A948 00357888  E3 61 00 E8 */	psq_l f27, 232(r1), 0, qr0
/* 8035A94C 0035788C  CB 61 00 E0 */	lfd f27, 0xe0(r1)
/* 8035A950 00357890  83 E1 00 DC */	lwz r31, 0xdc(r1)
/* 8035A954 00357894  83 C1 00 D8 */	lwz r30, 0xd8(r1)
/* 8035A958 00357898  80 01 01 34 */	lwz r0, 0x134(r1)
/* 8035A95C 0035789C  83 A1 00 D4 */	lwz r29, 0xd4(r1)
/* 8035A960 003578A0  7C 08 03 A6 */	mtlr r0
/* 8035A964 003578A4  38 21 01 30 */	addi r1, r1, 0x130
/* 8035A968 003578A8  4E 80 00 20 */	blr 
.endfn exec__Q34Game10KingChappy10StateFlickFPQ24Game9EnemyBase

.fn cleanup__Q34Game10KingChappy10StateFlickFPQ24Game9EnemyBase, global
/* 8035A96C 003578AC  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 8035A970 003578B0  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 8035A974 003578B4  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 8035A978 003578B8  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10KingChappy10StateFlickFPQ24Game9EnemyBase

.fn __ct__Q34Game10KingChappy11StateWarCryFi, global
/* 8035A97C 003578BC  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 8035A980 003578C0  3C C0 80 4E */	lis r6, __vt__Q34Game10KingChappy5State@ha
/* 8035A984 003578C4  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 8035A988 003578C8  3C A0 80 4E */	lis r5, __vt__Q34Game10KingChappy11StateWarCry@ha
/* 8035A98C 003578CC  90 03 00 00 */	stw r0, 0(r3)
/* 8035A990 003578D0  38 E0 00 00 */	li r7, 0
/* 8035A994 003578D4  38 C6 1B EC */	addi r6, r6, __vt__Q34Game10KingChappy5State@l
/* 8035A998 003578D8  38 A5 1B 2C */	addi r5, r5, __vt__Q34Game10KingChappy11StateWarCry@l
/* 8035A99C 003578DC  90 83 00 04 */	stw r4, 4(r3)
/* 8035A9A0 003578E0  38 02 02 48 */	addi r0, r2, lbl_8051E5A8@sda21
/* 8035A9A4 003578E4  90 E3 00 08 */	stw r7, 8(r3)
/* 8035A9A8 003578E8  90 C3 00 00 */	stw r6, 0(r3)
/* 8035A9AC 003578EC  90 A3 00 00 */	stw r5, 0(r3)
/* 8035A9B0 003578F0  90 03 00 0C */	stw r0, 0xc(r3)
/* 8035A9B4 003578F4  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10KingChappy11StateWarCryFi

.fn init__Q34Game10KingChappy11StateWarCryFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8035A9B8 003578F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035A9BC 003578FC  7C 08 02 A6 */	mflr r0
/* 8035A9C0 00357900  38 A0 00 00 */	li r5, 0
/* 8035A9C4 00357904  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035A9C8 00357908  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035A9CC 0035790C  7C 9F 23 78 */	mr r31, r4
/* 8035A9D0 00357910  38 80 00 01 */	li r4, 1
/* 8035A9D4 00357914  7F E3 FB 78 */	mr r3, r31
/* 8035A9D8 00357918  48 00 67 ED */	bl startMotionSelf__Q34Game10KingChappy3ObjFiPQ28SysShape14MotionListener
/* 8035A9DC 0035791C  C0 02 02 18 */	lfs f0, lbl_8051E578@sda21(r2)
/* 8035A9E0 00357920  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 8035A9E4 00357924  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 8035A9E8 00357928  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 8035A9EC 0035792C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8035A9F0 00357930  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 8035A9F4 00357934  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8035A9F8 00357938  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035A9FC 0035793C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035AA00 00357940  7C 08 03 A6 */	mtlr r0
/* 8035AA04 00357944  38 21 00 10 */	addi r1, r1, 0x10
/* 8035AA08 00357948  4E 80 00 20 */	blr 
.endfn init__Q34Game10KingChappy11StateWarCryFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10KingChappy11StateWarCryFPQ24Game9EnemyBase, global
/* 8035AA0C 0035794C  94 21 FE A0 */	stwu r1, -0x160(r1)
/* 8035AA10 00357950  7C 08 02 A6 */	mflr r0
/* 8035AA14 00357954  90 01 01 64 */	stw r0, 0x164(r1)
/* 8035AA18 00357958  DB E1 01 50 */	stfd f31, 0x150(r1)
/* 8035AA1C 0035795C  F3 E1 01 58 */	psq_st f31, 344(r1), 0, qr0
/* 8035AA20 00357960  DB C1 01 40 */	stfd f30, 0x140(r1)
/* 8035AA24 00357964  F3 C1 01 48 */	psq_st f30, 328(r1), 0, qr0
/* 8035AA28 00357968  DB A1 01 30 */	stfd f29, 0x130(r1)
/* 8035AA2C 0035796C  F3 A1 01 38 */	psq_st f29, 312(r1), 0, qr0
/* 8035AA30 00357970  DB 81 01 20 */	stfd f28, 0x120(r1)
/* 8035AA34 00357974  F3 81 01 28 */	psq_st f28, 296(r1), 0, qr0
/* 8035AA38 00357978  DB 61 01 10 */	stfd f27, 0x110(r1)
/* 8035AA3C 0035797C  F3 61 01 18 */	psq_st f27, 280(r1), 0, qr0
/* 8035AA40 00357980  DB 41 01 00 */	stfd f26, 0x100(r1)
/* 8035AA44 00357984  F3 41 01 08 */	psq_st f26, 264(r1), 0, qr0
/* 8035AA48 00357988  DB 21 00 F0 */	stfd f25, 0xf0(r1)
/* 8035AA4C 0035798C  F3 21 00 F8 */	psq_st f25, 248(r1), 0, qr0
/* 8035AA50 00357990  DB 01 00 E0 */	stfd f24, 0xe0(r1)
/* 8035AA54 00357994  F3 01 00 E8 */	psq_st f24, 232(r1), 0, qr0
/* 8035AA58 00357998  93 E1 00 DC */	stw r31, 0xdc(r1)
/* 8035AA5C 0035799C  93 C1 00 D8 */	stw r30, 0xd8(r1)
/* 8035AA60 003579A0  93 A1 00 D4 */	stw r29, 0xd4(r1)
/* 8035AA64 003579A4  7C 9F 23 78 */	mr r31, r4
/* 8035AA68 003579A8  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 8035AA6C 003579AC  88 05 00 24 */	lbz r0, 0x24(r5)
/* 8035AA70 003579B0  28 00 00 00 */	cmplwi r0, 0
/* 8035AA74 003579B4  41 82 06 00 */	beq .L_8035B074
/* 8035AA78 003579B8  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 8035AA7C 003579BC  2C 00 00 06 */	cmpwi r0, 6
/* 8035AA80 003579C0  41 82 05 9C */	beq .L_8035B01C
/* 8035AA84 003579C4  40 80 00 28 */	bge .L_8035AAAC
/* 8035AA88 003579C8  2C 00 00 03 */	cmpwi r0, 3
/* 8035AA8C 003579CC  41 82 00 54 */	beq .L_8035AAE0
/* 8035AA90 003579D0  40 80 00 10 */	bge .L_8035AAA0
/* 8035AA94 003579D4  2C 00 00 02 */	cmpwi r0, 2
/* 8035AA98 003579D8  40 80 00 38 */	bge .L_8035AAD0
/* 8035AA9C 003579DC  48 00 05 D8 */	b .L_8035B074
.L_8035AAA0:
/* 8035AAA0 003579E0  2C 00 00 05 */	cmpwi r0, 5
/* 8035AAA4 003579E4  40 80 05 68 */	bge .L_8035B00C
/* 8035AAA8 003579E8  48 00 00 B8 */	b .L_8035AB60
.L_8035AAAC:
/* 8035AAAC 003579EC  2C 00 07 D0 */	cmpwi r0, 0x7d0
/* 8035AAB0 003579F0  41 82 00 14 */	beq .L_8035AAC4
/* 8035AAB4 003579F4  40 80 05 C0 */	bge .L_8035B074
/* 8035AAB8 003579F8  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 8035AABC 003579FC  41 82 05 70 */	beq .L_8035B02C
/* 8035AAC0 00357A00  48 00 05 B4 */	b .L_8035B074
.L_8035AAC4:
/* 8035AAC4 00357A04  7F E3 FB 78 */	mr r3, r31
/* 8035AAC8 00357A08  48 00 68 39 */	bl endBlendAnimation__Q34Game10KingChappy3ObjFv
/* 8035AACC 00357A0C  48 00 05 A8 */	b .L_8035B074
.L_8035AAD0:
/* 8035AAD0 00357A10  7F E3 FB 78 */	mr r3, r31
/* 8035AAD4 00357A14  38 80 00 03 */	li r4, 3
/* 8035AAD8 00357A18  48 00 6C 81 */	bl createEffect__Q34Game10KingChappy3ObjFi
/* 8035AADC 00357A1C  48 00 05 98 */	b .L_8035B074
.L_8035AAE0:
/* 8035AAE0 00357A20  7F E3 FB 78 */	mr r3, r31
/* 8035AAE4 00357A24  38 80 00 02 */	li r4, 2
/* 8035AAE8 00357A28  48 00 6C 71 */	bl createEffect__Q34Game10KingChappy3ObjFi
/* 8035AAEC 00357A2C  7F E3 FB 78 */	mr r3, r31
/* 8035AAF0 00357A30  38 80 00 0A */	li r4, 0xa
/* 8035AAF4 00357A34  48 00 55 11 */	bl requestTransit__Q34Game10KingChappy3ObjFi
/* 8035AAF8 00357A38  7F E3 FB 78 */	mr r3, r31
/* 8035AAFC 00357A3C  38 80 00 04 */	li r4, 4
/* 8035AB00 00357A40  48 00 55 05 */	bl requestTransit__Q34Game10KingChappy3ObjFi
/* 8035AB04 00357A44  7F E4 FB 78 */	mr r4, r31
/* 8035AB08 00357A48  38 61 00 98 */	addi r3, r1, 0x98
/* 8035AB0C 00357A4C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8035AB10 00357A50  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035AB14 00357A54  7D 89 03 A6 */	mtctr r12
/* 8035AB18 00357A58  4E 80 04 21 */	bctrl 
/* 8035AB1C 00357A5C  C0 41 00 98 */	lfs f2, 0x98(r1)
/* 8035AB20 00357A60  38 A1 00 C0 */	addi r5, r1, 0xc0
/* 8035AB24 00357A64  C0 21 00 9C */	lfs f1, 0x9c(r1)
/* 8035AB28 00357A68  38 80 00 1A */	li r4, 0x1a
/* 8035AB2C 00357A6C  C0 01 00 A0 */	lfs f0, 0xa0(r1)
/* 8035AB30 00357A70  38 C0 00 02 */	li r6, 2
/* 8035AB34 00357A74  D0 41 00 C0 */	stfs f2, 0xc0(r1)
/* 8035AB38 00357A78  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8035AB3C 00357A7C  D0 21 00 C4 */	stfs f1, 0xc4(r1)
/* 8035AB40 00357A80  D0 01 00 C8 */	stfs f0, 0xc8(r1)
/* 8035AB44 00357A84  4B EF 76 F9 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 8035AB48 00357A88  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 8035AB4C 00357A8C  38 A1 00 C0 */	addi r5, r1, 0xc0
/* 8035AB50 00357A90  38 80 00 03 */	li r4, 3
/* 8035AB54 00357A94  38 C0 00 02 */	li r6, 2
/* 8035AB58 00357A98  4B EF 8C 29 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 8035AB5C 00357A9C  48 00 05 18 */	b .L_8035B074
.L_8035AB60:
/* 8035AB60 00357AA0  81 84 00 00 */	lwz r12, 0(r4)
/* 8035AB64 00357AA4  38 61 00 8C */	addi r3, r1, 0x8c
/* 8035AB68 00357AA8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035AB6C 00357AAC  7D 89 03 A6 */	mtctr r12
/* 8035AB70 00357AB0  4E 80 04 21 */	bctrl 
/* 8035AB74 00357AB4  C0 21 00 90 */	lfs f1, 0x90(r1)
/* 8035AB78 00357AB8  38 00 00 00 */	li r0, 0
/* 8035AB7C 00357ABC  C0 02 02 14 */	lfs f0, lbl_8051E574@sda21(r2)
/* 8035AB80 00357AC0  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 8035AB84 00357AC4  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8035AB88 00357AC8  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 8035AB8C 00357ACC  EF A1 00 28 */	fsubs f29, f1, f0
/* 8035AB90 00357AD0  C0 02 02 40 */	lfs f0, lbl_8051E5A0@sda21(r2)
/* 8035AB94 00357AD4  28 00 00 00 */	cmplwi r0, 0
/* 8035AB98 00357AD8  90 81 00 B0 */	stw r4, 0xb0(r1)
/* 8035AB9C 00357ADC  EF 80 E8 2A */	fadds f28, f0, f29
/* 8035ABA0 00357AE0  90 01 00 BC */	stw r0, 0xbc(r1)
/* 8035ABA4 00357AE4  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 8035ABA8 00357AE8  90 61 00 B8 */	stw r3, 0xb8(r1)
/* 8035ABAC 00357AEC  40 82 00 1C */	bne .L_8035ABC8
/* 8035ABB0 00357AF0  81 83 00 00 */	lwz r12, 0(r3)
/* 8035ABB4 00357AF4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8035ABB8 00357AF8  7D 89 03 A6 */	mtctr r12
/* 8035ABBC 00357AFC  4E 80 04 21 */	bctrl 
/* 8035ABC0 00357B00  90 61 00 B4 */	stw r3, 0xb4(r1)
/* 8035ABC4 00357B04  48 00 03 98 */	b .L_8035AF5C
.L_8035ABC8:
/* 8035ABC8 00357B08  81 83 00 00 */	lwz r12, 0(r3)
/* 8035ABCC 00357B0C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8035ABD0 00357B10  7D 89 03 A6 */	mtctr r12
/* 8035ABD4 00357B14  4E 80 04 21 */	bctrl 
/* 8035ABD8 00357B18  90 61 00 B4 */	stw r3, 0xb4(r1)
/* 8035ABDC 00357B1C  48 00 00 58 */	b .L_8035AC34
.L_8035ABE0:
/* 8035ABE0 00357B20  80 61 00 B8 */	lwz r3, 0xb8(r1)
/* 8035ABE4 00357B24  80 81 00 B4 */	lwz r4, 0xb4(r1)
/* 8035ABE8 00357B28  81 83 00 00 */	lwz r12, 0(r3)
/* 8035ABEC 00357B2C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8035ABF0 00357B30  7D 89 03 A6 */	mtctr r12
/* 8035ABF4 00357B34  4E 80 04 21 */	bctrl 
/* 8035ABF8 00357B38  7C 64 1B 78 */	mr r4, r3
/* 8035ABFC 00357B3C  80 61 00 BC */	lwz r3, 0xbc(r1)
/* 8035AC00 00357B40  81 83 00 00 */	lwz r12, 0(r3)
/* 8035AC04 00357B44  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035AC08 00357B48  7D 89 03 A6 */	mtctr r12
/* 8035AC0C 00357B4C  4E 80 04 21 */	bctrl 
/* 8035AC10 00357B50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035AC14 00357B54  40 82 03 48 */	bne .L_8035AF5C
/* 8035AC18 00357B58  80 61 00 B8 */	lwz r3, 0xb8(r1)
/* 8035AC1C 00357B5C  80 81 00 B4 */	lwz r4, 0xb4(r1)
/* 8035AC20 00357B60  81 83 00 00 */	lwz r12, 0(r3)
/* 8035AC24 00357B64  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8035AC28 00357B68  7D 89 03 A6 */	mtctr r12
/* 8035AC2C 00357B6C  4E 80 04 21 */	bctrl 
/* 8035AC30 00357B70  90 61 00 B4 */	stw r3, 0xb4(r1)
.L_8035AC34:
/* 8035AC34 00357B74  81 81 00 B0 */	lwz r12, 0xb0(r1)
/* 8035AC38 00357B78  38 61 00 B0 */	addi r3, r1, 0xb0
/* 8035AC3C 00357B7C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8035AC40 00357B80  7D 89 03 A6 */	mtctr r12
/* 8035AC44 00357B84  4E 80 04 21 */	bctrl 
/* 8035AC48 00357B88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035AC4C 00357B8C  41 82 FF 94 */	beq .L_8035ABE0
/* 8035AC50 00357B90  48 00 03 0C */	b .L_8035AF5C
.L_8035AC54:
/* 8035AC54 00357B94  80 61 00 B8 */	lwz r3, 0xb8(r1)
/* 8035AC58 00357B98  81 83 00 00 */	lwz r12, 0(r3)
/* 8035AC5C 00357B9C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8035AC60 00357BA0  7D 89 03 A6 */	mtctr r12
/* 8035AC64 00357BA4  4E 80 04 21 */	bctrl 
/* 8035AC68 00357BA8  81 83 00 00 */	lwz r12, 0(r3)
/* 8035AC6C 00357BAC  7C 7E 1B 78 */	mr r30, r3
/* 8035AC70 00357BB0  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8035AC74 00357BB4  7D 89 03 A6 */	mtctr r12
/* 8035AC78 00357BB8  4E 80 04 21 */	bctrl 
/* 8035AC7C 00357BBC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035AC80 00357BC0  41 82 02 20 */	beq .L_8035AEA0
/* 8035AC84 00357BC4  7F C4 F3 78 */	mr r4, r30
/* 8035AC88 00357BC8  38 61 00 80 */	addi r3, r1, 0x80
/* 8035AC8C 00357BCC  81 9E 00 00 */	lwz r12, 0(r30)
/* 8035AC90 00357BD0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035AC94 00357BD4  7D 89 03 A6 */	mtctr r12
/* 8035AC98 00357BD8  4E 80 04 21 */	bctrl 
/* 8035AC9C 00357BDC  C0 01 00 84 */	lfs f0, 0x84(r1)
/* 8035ACA0 00357BE0  FC 1C 00 40 */	fcmpo cr0, f28, f0
/* 8035ACA4 00357BE4  40 81 01 FC */	ble .L_8035AEA0
/* 8035ACA8 00357BE8  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 8035ACAC 00357BEC  40 80 01 F4 */	bge .L_8035AEA0
/* 8035ACB0 00357BF0  7F C4 F3 78 */	mr r4, r30
/* 8035ACB4 00357BF4  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8035ACB8 00357BF8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8035ACBC 00357BFC  38 61 00 68 */	addi r3, r1, 0x68
/* 8035ACC0 00357C00  C3 C5 08 6C */	lfs f30, 0x86c(r5)
/* 8035ACC4 00357C04  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035ACC8 00357C08  C3 E5 08 94 */	lfs f31, 0x894(r5)
/* 8035ACCC 00357C0C  7D 89 03 A6 */	mtctr r12
/* 8035ACD0 00357C10  4E 80 04 21 */	bctrl 
/* 8035ACD4 00357C14  7F E4 FB 78 */	mr r4, r31
/* 8035ACD8 00357C18  C0 41 00 68 */	lfs f2, 0x68(r1)
/* 8035ACDC 00357C1C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8035ACE0 00357C20  38 61 00 74 */	addi r3, r1, 0x74
/* 8035ACE4 00357C24  C0 21 00 6C */	lfs f1, 0x6c(r1)
/* 8035ACE8 00357C28  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 8035ACEC 00357C2C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035ACF0 00357C30  D0 41 00 50 */	stfs f2, 0x50(r1)
/* 8035ACF4 00357C34  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 8035ACF8 00357C38  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 8035ACFC 00357C3C  7D 89 03 A6 */	mtctr r12
/* 8035AD00 00357C40  4E 80 04 21 */	bctrl 
/* 8035AD04 00357C44  C0 A1 00 74 */	lfs f5, 0x74(r1)
/* 8035AD08 00357C48  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8035AD0C 00357C4C  C0 61 00 7C */	lfs f3, 0x7c(r1)
/* 8035AD10 00357C50  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8035AD14 00357C54  C0 21 00 50 */	lfs f1, 0x50(r1)
/* 8035AD18 00357C58  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 8035AD1C 00357C5C  C0 81 00 78 */	lfs f4, 0x78(r1)
/* 8035AD20 00357C60  EC 21 28 28 */	fsubs f1, f1, f5
/* 8035AD24 00357C64  EC 40 18 28 */	fsubs f2, f0, f3
/* 8035AD28 00357C68  D0 A1 00 5C */	stfs f5, 0x5c(r1)
/* 8035AD2C 00357C6C  D0 81 00 60 */	stfs f4, 0x60(r1)
/* 8035AD30 00357C70  D0 61 00 64 */	stfs f3, 0x64(r1)
/* 8035AD34 00357C74  4B CD A3 D5 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8035AD38 00357C78  48 0B 6E 99 */	bl roundAng__Ff
/* 8035AD3C 00357C7C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8035AD40 00357C80  FF 00 08 90 */	fmr f24, f1
/* 8035AD44 00357C84  7F E3 FB 78 */	mr r3, r31
/* 8035AD48 00357C88  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8035AD4C 00357C8C  7D 89 03 A6 */	mtctr r12
/* 8035AD50 00357C90  4E 80 04 21 */	bctrl 
/* 8035AD54 00357C94  FC 40 08 90 */	fmr f2, f1
/* 8035AD58 00357C98  FC 20 C0 90 */	fmr f1, f24
/* 8035AD5C 00357C9C  48 0B 6E A1 */	bl angDist__Fff
/* 8035AD60 00357CA0  7F E4 FB 78 */	mr r4, r31
/* 8035AD64 00357CA4  FF 40 08 90 */	fmr f26, f1
/* 8035AD68 00357CA8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8035AD6C 00357CAC  38 61 00 14 */	addi r3, r1, 0x14
/* 8035AD70 00357CB0  3B A0 00 00 */	li r29, 0
/* 8035AD74 00357CB4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035AD78 00357CB8  7D 89 03 A6 */	mtctr r12
/* 8035AD7C 00357CBC  4E 80 04 21 */	bctrl 
/* 8035AD80 00357CC0  7F C4 F3 78 */	mr r4, r30
/* 8035AD84 00357CC4  38 61 00 08 */	addi r3, r1, 8
/* 8035AD88 00357CC8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8035AD8C 00357CCC  C3 61 00 14 */	lfs f27, 0x14(r1)
/* 8035AD90 00357CD0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035AD94 00357CD4  7D 89 03 A6 */	mtctr r12
/* 8035AD98 00357CD8  4E 80 04 21 */	bctrl 
/* 8035AD9C 00357CDC  7F E4 FB 78 */	mr r4, r31
/* 8035ADA0 00357CE0  C0 01 00 08 */	lfs f0, 8(r1)
/* 8035ADA4 00357CE4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8035ADA8 00357CE8  38 61 00 2C */	addi r3, r1, 0x2c
/* 8035ADAC 00357CEC  EF 00 D8 28 */	fsubs f24, f0, f27
/* 8035ADB0 00357CF0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035ADB4 00357CF4  7D 89 03 A6 */	mtctr r12
/* 8035ADB8 00357CF8  4E 80 04 21 */	bctrl 
/* 8035ADBC 00357CFC  7F C4 F3 78 */	mr r4, r30
/* 8035ADC0 00357D00  38 61 00 20 */	addi r3, r1, 0x20
/* 8035ADC4 00357D04  81 9E 00 00 */	lwz r12, 0(r30)
/* 8035ADC8 00357D08  C3 61 00 30 */	lfs f27, 0x30(r1)
/* 8035ADCC 00357D0C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035ADD0 00357D10  7D 89 03 A6 */	mtctr r12
/* 8035ADD4 00357D14  4E 80 04 21 */	bctrl 
/* 8035ADD8 00357D18  7F E4 FB 78 */	mr r4, r31
/* 8035ADDC 00357D1C  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 8035ADE0 00357D20  81 9F 00 00 */	lwz r12, 0(r31)
/* 8035ADE4 00357D24  38 61 00 44 */	addi r3, r1, 0x44
/* 8035ADE8 00357D28  EF 20 D8 28 */	fsubs f25, f0, f27
/* 8035ADEC 00357D2C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035ADF0 00357D30  7D 89 03 A6 */	mtctr r12
/* 8035ADF4 00357D34  4E 80 04 21 */	bctrl 
/* 8035ADF8 00357D38  7F C4 F3 78 */	mr r4, r30
/* 8035ADFC 00357D3C  38 61 00 38 */	addi r3, r1, 0x38
/* 8035AE00 00357D40  81 9E 00 00 */	lwz r12, 0(r30)
/* 8035AE04 00357D44  C3 61 00 4C */	lfs f27, 0x4c(r1)
/* 8035AE08 00357D48  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035AE0C 00357D4C  7D 89 03 A6 */	mtctr r12
/* 8035AE10 00357D50  4E 80 04 21 */	bctrl 
/* 8035AE14 00357D54  EC 39 06 72 */	fmuls f1, f25, f25
/* 8035AE18 00357D58  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 8035AE1C 00357D5C  EC 1F 07 F2 */	fmuls f0, f31, f31
/* 8035AE20 00357D60  EC 42 D8 28 */	fsubs f2, f2, f27
/* 8035AE24 00357D64  EC 38 0E 3A */	fmadds f1, f24, f24, f1
/* 8035AE28 00357D68  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 8035AE2C 00357D6C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8035AE30 00357D70  40 80 00 2C */	bge .L_8035AE5C
/* 8035AE34 00357D74  C0 02 02 54 */	lfs f0, lbl_8051E5B4@sda21(r2)
/* 8035AE38 00357D78  FC 40 D2 10 */	fabs f2, f26
/* 8035AE3C 00357D7C  C0 22 02 50 */	lfs f1, lbl_8051E5B0@sda21(r2)
/* 8035AE40 00357D80  EC 00 07 B2 */	fmuls f0, f0, f30
/* 8035AE44 00357D84  FC 40 10 18 */	frsp f2, f2
/* 8035AE48 00357D88  EC 01 00 32 */	fmuls f0, f1, f0
/* 8035AE4C 00357D8C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8035AE50 00357D90  4C 40 13 82 */	cror 2, 0, 2
/* 8035AE54 00357D94  40 82 00 08 */	bne .L_8035AE5C
/* 8035AE58 00357D98  3B A0 00 01 */	li r29, 1
.L_8035AE5C:
/* 8035AE5C 00357D9C  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8035AE60 00357DA0  41 82 00 40 */	beq .L_8035AEA0
/* 8035AE64 00357DA4  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 8035AE68 00357DA8  C0 02 02 58 */	lfs f0, lbl_8051E5B8@sda21(r2)
/* 8035AE6C 00357DAC  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 8035AE70 00357DB0  3C 60 80 4B */	lis r3, __vt__Q24Game16InteractAstonish@ha
/* 8035AE74 00357DB4  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8035AE78 00357DB8  38 03 48 54 */	addi r0, r3, __vt__Q24Game16InteractAstonish@l
/* 8035AE7C 00357DBC  7F C3 F3 78 */	mr r3, r30
/* 8035AE80 00357DC0  38 81 00 A4 */	addi r4, r1, 0xa4
/* 8035AE84 00357DC4  93 E1 00 A8 */	stw r31, 0xa8(r1)
/* 8035AE88 00357DC8  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8035AE8C 00357DCC  D0 01 00 AC */	stfs f0, 0xac(r1)
/* 8035AE90 00357DD0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8035AE94 00357DD4  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8035AE98 00357DD8  7D 89 03 A6 */	mtctr r12
/* 8035AE9C 00357DDC  4E 80 04 21 */	bctrl 
.L_8035AEA0:
/* 8035AEA0 00357DE0  80 01 00 BC */	lwz r0, 0xbc(r1)
/* 8035AEA4 00357DE4  28 00 00 00 */	cmplwi r0, 0
/* 8035AEA8 00357DE8  40 82 00 24 */	bne .L_8035AECC
/* 8035AEAC 00357DEC  80 61 00 B8 */	lwz r3, 0xb8(r1)
/* 8035AEB0 00357DF0  80 81 00 B4 */	lwz r4, 0xb4(r1)
/* 8035AEB4 00357DF4  81 83 00 00 */	lwz r12, 0(r3)
/* 8035AEB8 00357DF8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8035AEBC 00357DFC  7D 89 03 A6 */	mtctr r12
/* 8035AEC0 00357E00  4E 80 04 21 */	bctrl 
/* 8035AEC4 00357E04  90 61 00 B4 */	stw r3, 0xb4(r1)
/* 8035AEC8 00357E08  48 00 00 94 */	b .L_8035AF5C
.L_8035AECC:
/* 8035AECC 00357E0C  80 61 00 B8 */	lwz r3, 0xb8(r1)
/* 8035AED0 00357E10  80 81 00 B4 */	lwz r4, 0xb4(r1)
/* 8035AED4 00357E14  81 83 00 00 */	lwz r12, 0(r3)
/* 8035AED8 00357E18  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8035AEDC 00357E1C  7D 89 03 A6 */	mtctr r12
/* 8035AEE0 00357E20  4E 80 04 21 */	bctrl 
/* 8035AEE4 00357E24  90 61 00 B4 */	stw r3, 0xb4(r1)
/* 8035AEE8 00357E28  48 00 00 58 */	b .L_8035AF40
.L_8035AEEC:
/* 8035AEEC 00357E2C  80 61 00 B8 */	lwz r3, 0xb8(r1)
/* 8035AEF0 00357E30  80 81 00 B4 */	lwz r4, 0xb4(r1)
/* 8035AEF4 00357E34  81 83 00 00 */	lwz r12, 0(r3)
/* 8035AEF8 00357E38  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8035AEFC 00357E3C  7D 89 03 A6 */	mtctr r12
/* 8035AF00 00357E40  4E 80 04 21 */	bctrl 
/* 8035AF04 00357E44  7C 64 1B 78 */	mr r4, r3
/* 8035AF08 00357E48  80 61 00 BC */	lwz r3, 0xbc(r1)
/* 8035AF0C 00357E4C  81 83 00 00 */	lwz r12, 0(r3)
/* 8035AF10 00357E50  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035AF14 00357E54  7D 89 03 A6 */	mtctr r12
/* 8035AF18 00357E58  4E 80 04 21 */	bctrl 
/* 8035AF1C 00357E5C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035AF20 00357E60  40 82 00 3C */	bne .L_8035AF5C
/* 8035AF24 00357E64  80 61 00 B8 */	lwz r3, 0xb8(r1)
/* 8035AF28 00357E68  80 81 00 B4 */	lwz r4, 0xb4(r1)
/* 8035AF2C 00357E6C  81 83 00 00 */	lwz r12, 0(r3)
/* 8035AF30 00357E70  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8035AF34 00357E74  7D 89 03 A6 */	mtctr r12
/* 8035AF38 00357E78  4E 80 04 21 */	bctrl 
/* 8035AF3C 00357E7C  90 61 00 B4 */	stw r3, 0xb4(r1)
.L_8035AF40:
/* 8035AF40 00357E80  81 81 00 B0 */	lwz r12, 0xb0(r1)
/* 8035AF44 00357E84  38 61 00 B0 */	addi r3, r1, 0xb0
/* 8035AF48 00357E88  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8035AF4C 00357E8C  7D 89 03 A6 */	mtctr r12
/* 8035AF50 00357E90  4E 80 04 21 */	bctrl 
/* 8035AF54 00357E94  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035AF58 00357E98  41 82 FF 94 */	beq .L_8035AEEC
.L_8035AF5C:
/* 8035AF5C 00357E9C  80 61 00 B8 */	lwz r3, 0xb8(r1)
/* 8035AF60 00357EA0  81 83 00 00 */	lwz r12, 0(r3)
/* 8035AF64 00357EA4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035AF68 00357EA8  7D 89 03 A6 */	mtctr r12
/* 8035AF6C 00357EAC  4E 80 04 21 */	bctrl 
/* 8035AF70 00357EB0  80 81 00 B4 */	lwz r4, 0xb4(r1)
/* 8035AF74 00357EB4  7C 04 18 40 */	cmplw r4, r3
/* 8035AF78 00357EB8  40 82 FC DC */	bne .L_8035AC54
/* 8035AF7C 00357EBC  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8035AF80 00357EC0  7F E3 FB 78 */	mr r3, r31
/* 8035AF84 00357EC4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8035AF88 00357EC8  C0 24 05 14 */	lfs f1, 0x514(r4)
/* 8035AF8C 00357ECC  C0 1F 01 F8 */	lfs f0, 0x1f8(r31)
/* 8035AF90 00357ED0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8035AF94 00357ED4  EF 61 00 32 */	fmuls f27, f1, f0
/* 8035AF98 00357ED8  C3 04 05 3C */	lfs f24, 0x53c(r4)
/* 8035AF9C 00357EDC  C3 24 04 C4 */	lfs f25, 0x4c4(r4)
/* 8035AFA0 00357EE0  C3 44 04 EC */	lfs f26, 0x4ec(r4)
/* 8035AFA4 00357EE4  7D 89 03 A6 */	mtctr r12
/* 8035AFA8 00357EE8  4E 80 04 21 */	bctrl 
/* 8035AFAC 00357EEC  FC 80 08 90 */	fmr f4, f1
/* 8035AFB0 00357EF0  7F E3 FB 78 */	mr r3, r31
/* 8035AFB4 00357EF4  FC 20 C0 90 */	fmr f1, f24
/* 8035AFB8 00357EF8  38 80 00 00 */	li r4, 0
/* 8035AFBC 00357EFC  FC 40 C8 90 */	fmr f2, f25
/* 8035AFC0 00357F00  FC 60 D0 90 */	fmr f3, f26
/* 8035AFC4 00357F04  4B DB 81 59 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 8035AFC8 00357F08  FC 20 D8 90 */	fmr f1, f27
/* 8035AFCC 00357F0C  C0 82 02 44 */	lfs f4, lbl_8051E5A4@sda21(r2)
/* 8035AFD0 00357F10  FC 40 C8 90 */	fmr f2, f25
/* 8035AFD4 00357F14  7F E3 FB 78 */	mr r3, r31
/* 8035AFD8 00357F18  FC 60 D0 90 */	fmr f3, f26
/* 8035AFDC 00357F1C  38 80 00 00 */	li r4, 0
/* 8035AFE0 00357F20  4B DB 84 F5 */	bl "flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 8035AFE4 00357F24  FC 20 D8 90 */	fmr f1, f27
/* 8035AFE8 00357F28  C0 82 02 44 */	lfs f4, lbl_8051E5A4@sda21(r2)
/* 8035AFEC 00357F2C  FC 40 C8 90 */	fmr f2, f25
/* 8035AFF0 00357F30  7F E3 FB 78 */	mr r3, r31
/* 8035AFF4 00357F34  FC 60 D0 90 */	fmr f3, f26
/* 8035AFF8 00357F38  38 80 00 00 */	li r4, 0
/* 8035AFFC 00357F3C  4B DB 87 95 */	bl "flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
/* 8035B000 00357F40  C0 02 02 18 */	lfs f0, lbl_8051E578@sda21(r2)
/* 8035B004 00357F44  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 8035B008 00357F48  48 00 00 6C */	b .L_8035B074
.L_8035B00C:
/* 8035B00C 00357F4C  7F E3 FB 78 */	mr r3, r31
/* 8035B010 00357F50  38 80 00 02 */	li r4, 2
/* 8035B014 00357F54  48 00 6B B9 */	bl fadeEffect__Q34Game10KingChappy3ObjFi
/* 8035B018 00357F58  48 00 00 5C */	b .L_8035B074
.L_8035B01C:
/* 8035B01C 00357F5C  7F E3 FB 78 */	mr r3, r31
/* 8035B020 00357F60  38 80 00 03 */	li r4, 3
/* 8035B024 00357F64  48 00 6B A9 */	bl fadeEffect__Q34Game10KingChappy3ObjFi
/* 8035B028 00357F68  48 00 00 4C */	b .L_8035B074
.L_8035B02C:
/* 8035B02C 00357F6C  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 8035B030 00357F70  C0 02 02 18 */	lfs f0, lbl_8051E578@sda21(r2)
/* 8035B034 00357F74  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8035B038 00357F78  4C 40 13 82 */	cror 2, 0, 2
/* 8035B03C 00357F7C  40 82 00 20 */	bne .L_8035B05C
/* 8035B040 00357F80  81 83 00 00 */	lwz r12, 0(r3)
/* 8035B044 00357F84  38 A0 00 02 */	li r5, 2
/* 8035B048 00357F88  38 C0 00 00 */	li r6, 0
/* 8035B04C 00357F8C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035B050 00357F90  7D 89 03 A6 */	mtctr r12
/* 8035B054 00357F94  4E 80 04 21 */	bctrl 
/* 8035B058 00357F98  48 00 00 1C */	b .L_8035B074
.L_8035B05C:
/* 8035B05C 00357F9C  81 83 00 00 */	lwz r12, 0(r3)
/* 8035B060 00357FA0  38 A0 00 00 */	li r5, 0
/* 8035B064 00357FA4  38 C0 00 00 */	li r6, 0
/* 8035B068 00357FA8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035B06C 00357FAC  7D 89 03 A6 */	mtctr r12
/* 8035B070 00357FB0  4E 80 04 21 */	bctrl 
.L_8035B074:
/* 8035B074 00357FB4  7F E3 FB 78 */	mr r3, r31
/* 8035B078 00357FB8  38 80 00 01 */	li r4, 1
/* 8035B07C 00357FBC  48 00 5F 35 */	bl checkDead__Q34Game10KingChappy3ObjFb
/* 8035B080 00357FC0  E3 E1 01 58 */	psq_l f31, 344(r1), 0, qr0
/* 8035B084 00357FC4  CB E1 01 50 */	lfd f31, 0x150(r1)
/* 8035B088 00357FC8  E3 C1 01 48 */	psq_l f30, 328(r1), 0, qr0
/* 8035B08C 00357FCC  CB C1 01 40 */	lfd f30, 0x140(r1)
/* 8035B090 00357FD0  E3 A1 01 38 */	psq_l f29, 312(r1), 0, qr0
/* 8035B094 00357FD4  CB A1 01 30 */	lfd f29, 0x130(r1)
/* 8035B098 00357FD8  E3 81 01 28 */	psq_l f28, 296(r1), 0, qr0
/* 8035B09C 00357FDC  CB 81 01 20 */	lfd f28, 0x120(r1)
/* 8035B0A0 00357FE0  E3 61 01 18 */	psq_l f27, 280(r1), 0, qr0
/* 8035B0A4 00357FE4  CB 61 01 10 */	lfd f27, 0x110(r1)
/* 8035B0A8 00357FE8  E3 41 01 08 */	psq_l f26, 264(r1), 0, qr0
/* 8035B0AC 00357FEC  CB 41 01 00 */	lfd f26, 0x100(r1)
/* 8035B0B0 00357FF0  E3 21 00 F8 */	psq_l f25, 248(r1), 0, qr0
/* 8035B0B4 00357FF4  CB 21 00 F0 */	lfd f25, 0xf0(r1)
/* 8035B0B8 00357FF8  E3 01 00 E8 */	psq_l f24, 232(r1), 0, qr0
/* 8035B0BC 00357FFC  CB 01 00 E0 */	lfd f24, 0xe0(r1)
/* 8035B0C0 00358000  83 E1 00 DC */	lwz r31, 0xdc(r1)
/* 8035B0C4 00358004  83 C1 00 D8 */	lwz r30, 0xd8(r1)
/* 8035B0C8 00358008  80 01 01 64 */	lwz r0, 0x164(r1)
/* 8035B0CC 0035800C  83 A1 00 D4 */	lwz r29, 0xd4(r1)
/* 8035B0D0 00358010  7C 08 03 A6 */	mtlr r0
/* 8035B0D4 00358014  38 21 01 60 */	addi r1, r1, 0x160
/* 8035B0D8 00358018  4E 80 00 20 */	blr 
.endfn exec__Q34Game10KingChappy11StateWarCryFPQ24Game9EnemyBase

.fn cleanup__Q34Game10KingChappy11StateWarCryFPQ24Game9EnemyBase, global
/* 8035B0DC 0035801C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035B0E0 00358020  7C 08 02 A6 */	mflr r0
/* 8035B0E4 00358024  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035B0E8 00358028  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035B0EC 0035802C  7C 9F 23 78 */	mr r31, r4
/* 8035B0F0 00358030  38 80 00 02 */	li r4, 2
/* 8035B0F4 00358034  7F E3 FB 78 */	mr r3, r31
/* 8035B0F8 00358038  48 00 6A D5 */	bl fadeEffect__Q34Game10KingChappy3ObjFi
/* 8035B0FC 0035803C  7F E3 FB 78 */	mr r3, r31
/* 8035B100 00358040  38 80 00 03 */	li r4, 3
/* 8035B104 00358044  48 00 6A C9 */	bl fadeEffect__Q34Game10KingChappy3ObjFi
/* 8035B108 00358048  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035B10C 0035804C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035B110 00358050  7C 08 03 A6 */	mtlr r0
/* 8035B114 00358054  38 21 00 10 */	addi r1, r1, 0x10
/* 8035B118 00358058  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10KingChappy11StateWarCryFPQ24Game9EnemyBase

.fn __ct__Q34Game10KingChappy11StateDamageFi, global
/* 8035B11C 0035805C  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 8035B120 00358060  3C C0 80 4E */	lis r6, __vt__Q34Game10KingChappy5State@ha
/* 8035B124 00358064  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 8035B128 00358068  3C A0 80 4E */	lis r5, __vt__Q34Game10KingChappy11StateDamage@ha
/* 8035B12C 0035806C  90 03 00 00 */	stw r0, 0(r3)
/* 8035B130 00358070  38 E0 00 00 */	li r7, 0
/* 8035B134 00358074  38 C6 1B EC */	addi r6, r6, __vt__Q34Game10KingChappy5State@l
/* 8035B138 00358078  38 A5 1B 08 */	addi r5, r5, __vt__Q34Game10KingChappy11StateDamage@l
/* 8035B13C 0035807C  90 83 00 04 */	stw r4, 4(r3)
/* 8035B140 00358080  38 02 02 5C */	addi r0, r2, lbl_8051E5BC@sda21
/* 8035B144 00358084  90 E3 00 08 */	stw r7, 8(r3)
/* 8035B148 00358088  90 C3 00 00 */	stw r6, 0(r3)
/* 8035B14C 0035808C  90 A3 00 00 */	stw r5, 0(r3)
/* 8035B150 00358090  90 03 00 0C */	stw r0, 0xc(r3)
/* 8035B154 00358094  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10KingChappy11StateDamageFi

.fn init__Q34Game10KingChappy11StateDamageFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8035B158 00358098  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035B15C 0035809C  7C 08 02 A6 */	mflr r0
/* 8035B160 003580A0  38 A0 00 00 */	li r5, 0
/* 8035B164 003580A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035B168 003580A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035B16C 003580AC  7C 7F 1B 78 */	mr r31, r3
/* 8035B170 003580B0  7C 83 23 78 */	mr r3, r4
/* 8035B174 003580B4  38 80 00 02 */	li r4, 2
/* 8035B178 003580B8  48 00 60 4D */	bl startMotionSelf__Q34Game10KingChappy3ObjFiPQ28SysShape14MotionListener
/* 8035B17C 003580BC  38 00 00 00 */	li r0, 0
/* 8035B180 003580C0  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8035B184 003580C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035B188 003580C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035B18C 003580CC  7C 08 03 A6 */	mtlr r0
/* 8035B190 003580D0  38 21 00 10 */	addi r1, r1, 0x10
/* 8035B194 003580D4  4E 80 00 20 */	blr 
.endfn init__Q34Game10KingChappy11StateDamageFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10KingChappy11StateDamageFPQ24Game9EnemyBase, global
/* 8035B198 003580D8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8035B19C 003580DC  7C 08 02 A6 */	mflr r0
/* 8035B1A0 003580E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8035B1A4 003580E4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8035B1A8 003580E8  7C 9F 23 78 */	mr r31, r4
/* 8035B1AC 003580EC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8035B1B0 003580F0  7C 7E 1B 78 */	mr r30, r3
/* 8035B1B4 003580F4  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8035B1B8 003580F8  2C 03 00 00 */	cmpwi r3, 0
/* 8035B1BC 003580FC  40 81 00 28 */	ble .L_8035B1E4
/* 8035B1C0 00358100  38 03 00 01 */	addi r0, r3, 1
/* 8035B1C4 00358104  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8035B1C8 00358108  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8035B1CC 0035810C  80 9E 00 10 */	lwz r4, 0x10(r30)
/* 8035B1D0 00358110  80 03 0B B4 */	lwz r0, 0xbb4(r3)
/* 8035B1D4 00358114  7C 04 00 00 */	cmpw r4, r0
/* 8035B1D8 00358118  40 81 00 0C */	ble .L_8035B1E4
/* 8035B1DC 0035811C  7F E3 FB 78 */	mr r3, r31
/* 8035B1E0 00358120  4B DA A0 C1 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_8035B1E4:
/* 8035B1E4 00358124  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 8035B1E8 00358128  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8035B1EC 0035812C  28 00 00 00 */	cmplwi r0, 0
/* 8035B1F0 00358130  41 82 01 38 */	beq .L_8035B328
/* 8035B1F4 00358134  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8035B1F8 00358138  2C 00 00 06 */	cmpwi r0, 6
/* 8035B1FC 0035813C  41 82 00 C8 */	beq .L_8035B2C4
/* 8035B200 00358140  40 80 00 28 */	bge .L_8035B228
/* 8035B204 00358144  2C 00 00 03 */	cmpwi r0, 3
/* 8035B208 00358148  41 82 00 54 */	beq .L_8035B25C
/* 8035B20C 0035814C  40 80 00 10 */	bge .L_8035B21C
/* 8035B210 00358150  2C 00 00 02 */	cmpwi r0, 2
/* 8035B214 00358154  40 80 00 38 */	bge .L_8035B24C
/* 8035B218 00358158  48 00 01 10 */	b .L_8035B328
.L_8035B21C:
/* 8035B21C 0035815C  2C 00 00 05 */	cmpwi r0, 5
/* 8035B220 00358160  40 80 00 98 */	bge .L_8035B2B8
/* 8035B224 00358164  48 00 00 48 */	b .L_8035B26C
.L_8035B228:
/* 8035B228 00358168  2C 00 07 D0 */	cmpwi r0, 0x7d0
/* 8035B22C 0035816C  41 82 00 14 */	beq .L_8035B240
/* 8035B230 00358170  40 80 00 F8 */	bge .L_8035B328
/* 8035B234 00358174  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 8035B238 00358178  41 82 00 98 */	beq .L_8035B2D0
/* 8035B23C 0035817C  48 00 00 EC */	b .L_8035B328
.L_8035B240:
/* 8035B240 00358180  7F E3 FB 78 */	mr r3, r31
/* 8035B244 00358184  48 00 60 BD */	bl endBlendAnimation__Q34Game10KingChappy3ObjFv
/* 8035B248 00358188  48 00 00 E0 */	b .L_8035B328
.L_8035B24C:
/* 8035B24C 0035818C  7F E3 FB 78 */	mr r3, r31
/* 8035B250 00358190  38 80 00 04 */	li r4, 4
/* 8035B254 00358194  48 00 65 05 */	bl createEffect__Q34Game10KingChappy3ObjFi
/* 8035B258 00358198  48 00 00 D0 */	b .L_8035B328
.L_8035B25C:
/* 8035B25C 0035819C  7F E3 FB 78 */	mr r3, r31
/* 8035B260 003581A0  38 80 00 05 */	li r4, 5
/* 8035B264 003581A4  48 00 64 F5 */	bl createEffect__Q34Game10KingChappy3ObjFi
/* 8035B268 003581A8  48 00 00 C0 */	b .L_8035B328
.L_8035B26C:
/* 8035B26C 003581AC  7F E3 FB 78 */	mr r3, r31
/* 8035B270 003581B0  38 80 00 01 */	li r4, 1
/* 8035B274 003581B4  48 00 41 A1 */	bl getPikminInMouth__Q34Game10KingChappy3ObjFb
/* 8035B278 003581B8  3C 00 43 30 */	lis r0, 0x4330
/* 8035B27C 003581BC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8035B280 003581C0  90 61 00 0C */	stw r3, 0xc(r1)
/* 8035B284 003581C4  7F E3 FB 78 */	mr r3, r31
/* 8035B288 003581C8  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8035B28C 003581CC  90 01 00 08 */	stw r0, 8(r1)
/* 8035B290 003581D0  C8 62 02 68 */	lfd f3, lbl_8051E5C8@sda21(r2)
/* 8035B294 003581D4  C8 21 00 08 */	lfd f1, 8(r1)
/* 8035B298 003581D8  C0 04 08 BC */	lfs f0, 0x8bc(r4)
/* 8035B29C 003581DC  EC 21 18 28 */	fsubs f1, f1, f3
/* 8035B2A0 003581E0  C0 42 02 10 */	lfs f2, lbl_8051E570@sda21(r2)
/* 8035B2A4 003581E4  EC 21 00 32 */	fmuls f1, f1, f0
/* 8035B2A8 003581E8  4B DA AD 85 */	bl addDamage__Q24Game9EnemyBaseFff
/* 8035B2AC 003581EC  C0 02 02 18 */	lfs f0, lbl_8051E578@sda21(r2)
/* 8035B2B0 003581F0  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 8035B2B4 003581F4  48 00 00 74 */	b .L_8035B328
.L_8035B2B8:
/* 8035B2B8 003581F8  7F E3 FB 78 */	mr r3, r31
/* 8035B2BC 003581FC  48 00 6A 51 */	bl createBounceEffect__Q34Game10KingChappy3ObjFv
/* 8035B2C0 00358200  48 00 00 68 */	b .L_8035B328
.L_8035B2C4:
/* 8035B2C4 00358204  38 00 00 01 */	li r0, 1
/* 8035B2C8 00358208  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8035B2CC 0035820C  48 00 00 5C */	b .L_8035B328
.L_8035B2D0:
/* 8035B2D0 00358210  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 8035B2D4 00358214  C0 02 02 18 */	lfs f0, lbl_8051E578@sda21(r2)
/* 8035B2D8 00358218  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8035B2DC 0035821C  4C 40 13 82 */	cror 2, 0, 2
/* 8035B2E0 00358220  40 82 00 28 */	bne .L_8035B308
/* 8035B2E4 00358224  7F C3 F3 78 */	mr r3, r30
/* 8035B2E8 00358228  7F E4 FB 78 */	mr r4, r31
/* 8035B2EC 0035822C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8035B2F0 00358230  38 A0 00 02 */	li r5, 2
/* 8035B2F4 00358234  38 C0 00 00 */	li r6, 0
/* 8035B2F8 00358238  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035B2FC 0035823C  7D 89 03 A6 */	mtctr r12
/* 8035B300 00358240  4E 80 04 21 */	bctrl 
/* 8035B304 00358244  48 00 00 24 */	b .L_8035B328
.L_8035B308:
/* 8035B308 00358248  7F C3 F3 78 */	mr r3, r30
/* 8035B30C 0035824C  7F E4 FB 78 */	mr r4, r31
/* 8035B310 00358250  81 9E 00 00 */	lwz r12, 0(r30)
/* 8035B314 00358254  38 A0 00 00 */	li r5, 0
/* 8035B318 00358258  38 C0 00 00 */	li r6, 0
/* 8035B31C 0035825C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035B320 00358260  7D 89 03 A6 */	mtctr r12
/* 8035B324 00358264  4E 80 04 21 */	bctrl 
.L_8035B328:
/* 8035B328 00358268  7F E3 FB 78 */	mr r3, r31
/* 8035B32C 0035826C  38 80 00 01 */	li r4, 1
/* 8035B330 00358270  48 00 5C 81 */	bl checkDead__Q34Game10KingChappy3ObjFb
/* 8035B334 00358274  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8035B338 00358278  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8035B33C 0035827C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8035B340 00358280  7C 08 03 A6 */	mtlr r0
/* 8035B344 00358284  38 21 00 20 */	addi r1, r1, 0x20
/* 8035B348 00358288  4E 80 00 20 */	blr 
.endfn exec__Q34Game10KingChappy11StateDamageFPQ24Game9EnemyBase

.fn cleanup__Q34Game10KingChappy11StateDamageFPQ24Game9EnemyBase, global
/* 8035B34C 0035828C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035B350 00358290  7C 08 02 A6 */	mflr r0
/* 8035B354 00358294  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035B358 00358298  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035B35C 0035829C  7C 9F 23 78 */	mr r31, r4
/* 8035B360 003582A0  38 80 00 05 */	li r4, 5
/* 8035B364 003582A4  7F E3 FB 78 */	mr r3, r31
/* 8035B368 003582A8  48 00 68 65 */	bl fadeEffect__Q34Game10KingChappy3ObjFi
/* 8035B36C 003582AC  7F E3 FB 78 */	mr r3, r31
/* 8035B370 003582B0  38 80 00 04 */	li r4, 4
/* 8035B374 003582B4  48 00 68 59 */	bl fadeEffect__Q34Game10KingChappy3ObjFi
/* 8035B378 003582B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035B37C 003582BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035B380 003582C0  7C 08 03 A6 */	mtlr r0
/* 8035B384 003582C4  38 21 00 10 */	addi r1, r1, 0x10
/* 8035B388 003582C8  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10KingChappy11StateDamageFPQ24Game9EnemyBase

.fn __ct__Q34Game10KingChappy9StateTurnFi, global
/* 8035B38C 003582CC  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 8035B390 003582D0  3C C0 80 4E */	lis r6, __vt__Q34Game10KingChappy5State@ha
/* 8035B394 003582D4  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 8035B398 003582D8  3C A0 80 4E */	lis r5, __vt__Q34Game10KingChappy9StateTurn@ha
/* 8035B39C 003582DC  90 03 00 00 */	stw r0, 0(r3)
/* 8035B3A0 003582E0  38 E0 00 00 */	li r7, 0
/* 8035B3A4 003582E4  38 C6 1B EC */	addi r6, r6, __vt__Q34Game10KingChappy5State@l
/* 8035B3A8 003582E8  38 A5 1A E4 */	addi r5, r5, __vt__Q34Game10KingChappy9StateTurn@l
/* 8035B3AC 003582EC  90 83 00 04 */	stw r4, 4(r3)
/* 8035B3B0 003582F0  38 02 02 70 */	addi r0, r2, lbl_8051E5D0@sda21
/* 8035B3B4 003582F4  90 E3 00 08 */	stw r7, 8(r3)
/* 8035B3B8 003582F8  90 C3 00 00 */	stw r6, 0(r3)
/* 8035B3BC 003582FC  90 A3 00 00 */	stw r5, 0(r3)
/* 8035B3C0 00358300  90 03 00 0C */	stw r0, 0xc(r3)
/* 8035B3C4 00358304  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10KingChappy9StateTurnFi

.fn init__Q34Game10KingChappy9StateTurnFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8035B3C8 00358308  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035B3CC 0035830C  7C 08 02 A6 */	mflr r0
/* 8035B3D0 00358310  38 A0 00 00 */	li r5, 0
/* 8035B3D4 00358314  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035B3D8 00358318  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035B3DC 0035831C  7C 9F 23 78 */	mr r31, r4
/* 8035B3E0 00358320  38 80 00 0B */	li r4, 0xb
/* 8035B3E4 00358324  7F E3 FB 78 */	mr r3, r31
/* 8035B3E8 00358328  48 00 5D DD */	bl startMotionSelf__Q34Game10KingChappy3ObjFiPQ28SysShape14MotionListener
/* 8035B3EC 0035832C  C0 02 02 18 */	lfs f0, lbl_8051E578@sda21(r2)
/* 8035B3F0 00358330  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8035B3F4 00358334  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 8035B3F8 00358338  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8035B3FC 0035833C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035B400 00358340  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035B404 00358344  7C 08 03 A6 */	mtlr r0
/* 8035B408 00358348  38 21 00 10 */	addi r1, r1, 0x10
/* 8035B40C 0035834C  4E 80 00 20 */	blr 
.endfn init__Q34Game10KingChappy9StateTurnFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10KingChappy9StateTurnFPQ24Game9EnemyBase, global
/* 8035B410 00358350  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8035B414 00358354  7C 08 02 A6 */	mflr r0
/* 8035B418 00358358  90 01 00 24 */	stw r0, 0x24(r1)
/* 8035B41C 0035835C  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8035B420 00358360  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8035B424 00358364  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035B428 00358368  93 C1 00 08 */	stw r30, 8(r1)
/* 8035B42C 0035836C  7C 9F 23 78 */	mr r31, r4
/* 8035B430 00358370  C3 E2 02 78 */	lfs f31, lbl_8051E5D8@sda21(r2)
/* 8035B434 00358374  80 04 02 30 */	lwz r0, 0x230(r4)
/* 8035B438 00358378  7C 7E 1B 78 */	mr r30, r3
/* 8035B43C 0035837C  28 00 00 00 */	cmplwi r0, 0
/* 8035B440 00358380  41 82 00 1C */	beq .L_8035B45C
/* 8035B444 00358384  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8035B448 00358388  C0 22 02 54 */	lfs f1, lbl_8051E5B4@sda21(r2)
/* 8035B44C 0035838C  C0 03 09 0C */	lfs f0, 0x90c(r3)
/* 8035B450 00358390  C0 42 02 50 */	lfs f2, lbl_8051E5B0@sda21(r2)
/* 8035B454 00358394  EC 01 00 32 */	fmuls f0, f1, f0
/* 8035B458 00358398  EF E2 00 32 */	fmuls f31, f2, f0
.L_8035B45C:
/* 8035B45C 0035839C  C0 22 02 10 */	lfs f1, lbl_8051E570@sda21(r2)
/* 8035B460 003583A0  7F E3 FB 78 */	mr r3, r31
/* 8035B464 003583A4  48 00 4C FD */	bl turnFunc__Q34Game10KingChappy3ObjFf
/* 8035B468 003583A8  FC 00 0A 10 */	fabs f0, f1
/* 8035B46C 003583AC  FC 00 00 18 */	frsp f0, f0
/* 8035B470 003583B0  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8035B474 003583B4  40 80 00 0C */	bge .L_8035B480
/* 8035B478 003583B8  7F E3 FB 78 */	mr r3, r31
/* 8035B47C 003583BC  4B DA 9E 25 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_8035B480:
/* 8035B480 003583C0  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 8035B484 003583C4  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8035B488 003583C8  28 00 00 00 */	cmplwi r0, 0
/* 8035B48C 003583CC  41 82 00 44 */	beq .L_8035B4D0
/* 8035B490 003583D0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8035B494 003583D4  28 00 07 D0 */	cmplwi r0, 0x7d0
/* 8035B498 003583D8  40 82 00 10 */	bne .L_8035B4A8
/* 8035B49C 003583DC  7F E3 FB 78 */	mr r3, r31
/* 8035B4A0 003583E0  48 00 5E 61 */	bl endBlendAnimation__Q34Game10KingChappy3ObjFv
/* 8035B4A4 003583E4  48 00 00 2C */	b .L_8035B4D0
.L_8035B4A8:
/* 8035B4A8 003583E8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8035B4AC 003583EC  40 82 00 24 */	bne .L_8035B4D0
/* 8035B4B0 003583F0  7F C3 F3 78 */	mr r3, r30
/* 8035B4B4 003583F4  7F E4 FB 78 */	mr r4, r31
/* 8035B4B8 003583F8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8035B4BC 003583FC  38 A0 00 00 */	li r5, 0
/* 8035B4C0 00358400  38 C0 00 00 */	li r6, 0
/* 8035B4C4 00358404  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035B4C8 00358408  7D 89 03 A6 */	mtctr r12
/* 8035B4CC 0035840C  4E 80 04 21 */	bctrl 
.L_8035B4D0:
/* 8035B4D0 00358410  7F E3 FB 78 */	mr r3, r31
/* 8035B4D4 00358414  38 80 00 01 */	li r4, 1
/* 8035B4D8 00358418  48 00 5A D9 */	bl checkDead__Q34Game10KingChappy3ObjFb
/* 8035B4DC 0035841C  7F E3 FB 78 */	mr r3, r31
/* 8035B4E0 00358420  38 80 00 01 */	li r4, 1
/* 8035B4E4 00358424  48 00 56 A1 */	bl checkFlick__Q34Game10KingChappy3ObjFb
/* 8035B4E8 00358428  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8035B4EC 0035842C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8035B4F0 00358430  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8035B4F4 00358434  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035B4F8 00358438  83 C1 00 08 */	lwz r30, 8(r1)
/* 8035B4FC 0035843C  7C 08 03 A6 */	mtlr r0
/* 8035B500 00358440  38 21 00 20 */	addi r1, r1, 0x20
/* 8035B504 00358444  4E 80 00 20 */	blr 
.endfn exec__Q34Game10KingChappy9StateTurnFPQ24Game9EnemyBase

.fn __ct__Q34Game10KingChappy8StateEatFi, global
/* 8035B508 00358448  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 8035B50C 0035844C  3C C0 80 4E */	lis r6, __vt__Q34Game10KingChappy5State@ha
/* 8035B510 00358450  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 8035B514 00358454  3C A0 80 4E */	lis r5, __vt__Q34Game10KingChappy8StateEat@ha
/* 8035B518 00358458  90 03 00 00 */	stw r0, 0(r3)
/* 8035B51C 0035845C  38 E0 00 00 */	li r7, 0
/* 8035B520 00358460  38 C6 1B EC */	addi r6, r6, __vt__Q34Game10KingChappy5State@l
/* 8035B524 00358464  38 A5 1A C0 */	addi r5, r5, __vt__Q34Game10KingChappy8StateEat@l
/* 8035B528 00358468  90 83 00 04 */	stw r4, 4(r3)
/* 8035B52C 0035846C  38 02 02 7C */	addi r0, r2, lbl_8051E5DC@sda21
/* 8035B530 00358470  90 E3 00 08 */	stw r7, 8(r3)
/* 8035B534 00358474  90 C3 00 00 */	stw r6, 0(r3)
/* 8035B538 00358478  90 A3 00 00 */	stw r5, 0(r3)
/* 8035B53C 0035847C  90 03 00 0C */	stw r0, 0xc(r3)
/* 8035B540 00358480  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10KingChappy8StateEatFi

.fn init__Q34Game10KingChappy8StateEatFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8035B544 00358484  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035B548 00358488  7C 08 02 A6 */	mflr r0
/* 8035B54C 0035848C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035B550 00358490  7C 80 23 78 */	mr r0, r4
/* 8035B554 00358494  38 80 00 08 */	li r4, 8
/* 8035B558 00358498  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035B55C 0035849C  7C BF 2B 78 */	mr r31, r5
/* 8035B560 003584A0  38 A0 00 00 */	li r5, 0
/* 8035B564 003584A4  93 C1 00 08 */	stw r30, 8(r1)
/* 8035B568 003584A8  7C 7E 1B 78 */	mr r30, r3
/* 8035B56C 003584AC  7C 03 03 78 */	mr r3, r0
/* 8035B570 003584B0  48 00 5C 55 */	bl startMotionSelf__Q34Game10KingChappy3ObjFiPQ28SysShape14MotionListener
/* 8035B574 003584B4  88 1F 00 00 */	lbz r0, 0(r31)
/* 8035B578 003584B8  98 1E 00 10 */	stb r0, 0x10(r30)
/* 8035B57C 003584BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035B580 003584C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035B584 003584C4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8035B588 003584C8  7C 08 03 A6 */	mtlr r0
/* 8035B58C 003584CC  38 21 00 10 */	addi r1, r1, 0x10
/* 8035B590 003584D0  4E 80 00 20 */	blr 
.endfn init__Q34Game10KingChappy8StateEatFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10KingChappy8StateEatFPQ24Game9EnemyBase, global
/* 8035B594 003584D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035B598 003584D8  7C 08 02 A6 */	mflr r0
/* 8035B59C 003584DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035B5A0 003584E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035B5A4 003584E4  7C 9F 23 78 */	mr r31, r4
/* 8035B5A8 003584E8  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 8035B5AC 003584EC  88 05 00 24 */	lbz r0, 0x24(r5)
/* 8035B5B0 003584F0  28 00 00 00 */	cmplwi r0, 0
/* 8035B5B4 003584F4  41 82 00 64 */	beq .L_8035B618
/* 8035B5B8 003584F8  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 8035B5BC 003584FC  28 00 07 D0 */	cmplwi r0, 0x7d0
/* 8035B5C0 00358500  40 82 00 10 */	bne .L_8035B5D0
/* 8035B5C4 00358504  7F E3 FB 78 */	mr r3, r31
/* 8035B5C8 00358508  48 00 5D 39 */	bl endBlendAnimation__Q34Game10KingChappy3ObjFv
/* 8035B5CC 0035850C  48 00 00 4C */	b .L_8035B618
.L_8035B5D0:
/* 8035B5D0 00358510  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8035B5D4 00358514  40 82 00 44 */	bne .L_8035B618
/* 8035B5D8 00358518  88 03 00 10 */	lbz r0, 0x10(r3)
/* 8035B5DC 0035851C  28 00 00 00 */	cmplwi r0, 0
/* 8035B5E0 00358520  41 82 00 20 */	beq .L_8035B600
/* 8035B5E4 00358524  81 83 00 00 */	lwz r12, 0(r3)
/* 8035B5E8 00358528  38 A0 00 05 */	li r5, 5
/* 8035B5EC 0035852C  38 C0 00 00 */	li r6, 0
/* 8035B5F0 00358530  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035B5F4 00358534  7D 89 03 A6 */	mtctr r12
/* 8035B5F8 00358538  4E 80 04 21 */	bctrl 
/* 8035B5FC 0035853C  48 00 00 1C */	b .L_8035B618
.L_8035B600:
/* 8035B600 00358540  81 83 00 00 */	lwz r12, 0(r3)
/* 8035B604 00358544  38 A0 00 0C */	li r5, 0xc
/* 8035B608 00358548  38 C0 00 00 */	li r6, 0
/* 8035B60C 0035854C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035B610 00358550  7D 89 03 A6 */	mtctr r12
/* 8035B614 00358554  4E 80 04 21 */	bctrl 
.L_8035B618:
/* 8035B618 00358558  7F E3 FB 78 */	mr r3, r31
/* 8035B61C 0035855C  38 80 00 01 */	li r4, 1
/* 8035B620 00358560  48 00 59 91 */	bl checkDead__Q34Game10KingChappy3ObjFb
/* 8035B624 00358564  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035B628 00358568  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035B62C 0035856C  7C 08 03 A6 */	mtlr r0
/* 8035B630 00358570  38 21 00 10 */	addi r1, r1, 0x10
/* 8035B634 00358574  4E 80 00 20 */	blr 
.endfn exec__Q34Game10KingChappy8StateEatFPQ24Game9EnemyBase

.fn __ct__Q34Game10KingChappy9StateHideFi, global
/* 8035B638 00358578  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 8035B63C 0035857C  3C C0 80 4E */	lis r6, __vt__Q34Game10KingChappy5State@ha
/* 8035B640 00358580  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 8035B644 00358584  3C A0 80 4E */	lis r5, __vt__Q34Game10KingChappy9StateHide@ha
/* 8035B648 00358588  90 03 00 00 */	stw r0, 0(r3)
/* 8035B64C 0035858C  38 E0 00 00 */	li r7, 0
/* 8035B650 00358590  38 C6 1B EC */	addi r6, r6, __vt__Q34Game10KingChappy5State@l
/* 8035B654 00358594  38 A5 1A 9C */	addi r5, r5, __vt__Q34Game10KingChappy9StateHide@l
/* 8035B658 00358598  90 83 00 04 */	stw r4, 4(r3)
/* 8035B65C 0035859C  38 02 02 80 */	addi r0, r2, lbl_8051E5E0@sda21
/* 8035B660 003585A0  90 E3 00 08 */	stw r7, 8(r3)
/* 8035B664 003585A4  90 C3 00 00 */	stw r6, 0(r3)
/* 8035B668 003585A8  90 A3 00 00 */	stw r5, 0(r3)
/* 8035B66C 003585AC  90 03 00 0C */	stw r0, 0xc(r3)
/* 8035B670 003585B0  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10KingChappy9StateHideFi

.fn init__Q34Game10KingChappy9StateHideFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8035B674 003585B4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8035B678 003585B8  7C 08 02 A6 */	mflr r0
/* 8035B67C 003585BC  38 A0 00 00 */	li r5, 0
/* 8035B680 003585C0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8035B684 003585C4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8035B688 003585C8  7C 9F 23 78 */	mr r31, r4
/* 8035B68C 003585CC  38 80 00 04 */	li r4, 4
/* 8035B690 003585D0  7F E3 FB 78 */	mr r3, r31
/* 8035B694 003585D4  48 00 5B 31 */	bl startMotionSelf__Q34Game10KingChappy3ObjFiPQ28SysShape14MotionListener
/* 8035B698 003585D8  7F E3 FB 78 */	mr r3, r31
/* 8035B69C 003585DC  4B DA 62 E1 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 8035B6A0 003585E0  C0 02 02 18 */	lfs f0, lbl_8051E578@sda21(r2)
/* 8035B6A4 003585E4  7F E3 FB 78 */	mr r3, r31
/* 8035B6A8 003585E8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8035B6AC 003585EC  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 8035B6B0 003585F0  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8035B6B4 003585F4  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8035B6B8 003585F8  64 00 00 40 */	oris r0, r0, 0x40
/* 8035B6BC 003585FC  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8035B6C0 00358600  4B DA C0 BD */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 8035B6C4 00358604  7F E4 FB 78 */	mr r4, r31
/* 8035B6C8 00358608  38 61 00 08 */	addi r3, r1, 8
/* 8035B6CC 0035860C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8035B6D0 00358610  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035B6D4 00358614  7D 89 03 A6 */	mtctr r12
/* 8035B6D8 00358618  4E 80 04 21 */	bctrl 
/* 8035B6DC 0035861C  C0 41 00 08 */	lfs f2, 8(r1)
/* 8035B6E0 00358620  38 A1 00 14 */	addi r5, r1, 0x14
/* 8035B6E4 00358624  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8035B6E8 00358628  38 80 00 06 */	li r4, 6
/* 8035B6EC 0035862C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8035B6F0 00358630  38 C0 00 02 */	li r6, 2
/* 8035B6F4 00358634  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8035B6F8 00358638  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8035B6FC 0035863C  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8035B700 00358640  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8035B704 00358644  4B EF 6B 39 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 8035B708 00358648  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 8035B70C 0035864C  38 A1 00 14 */	addi r5, r1, 0x14
/* 8035B710 00358650  38 80 00 0D */	li r4, 0xd
/* 8035B714 00358654  38 C0 00 02 */	li r6, 2
/* 8035B718 00358658  4B EF 80 69 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 8035B71C 0035865C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8035B720 00358660  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8035B724 00358664  7C 08 03 A6 */	mtlr r0
/* 8035B728 00358668  38 21 00 30 */	addi r1, r1, 0x30
/* 8035B72C 0035866C  4E 80 00 20 */	blr 
.endfn init__Q34Game10KingChappy9StateHideFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10KingChappy9StateHideFPQ24Game9EnemyBase, global
/* 8035B730 00358670  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8035B734 00358674  7C 08 02 A6 */	mflr r0
/* 8035B738 00358678  90 01 00 24 */	stw r0, 0x24(r1)
/* 8035B73C 0035867C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8035B740 00358680  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8035B744 00358684  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8035B748 00358688  7C 9D 23 78 */	mr r29, r4
/* 8035B74C 0035868C  93 81 00 10 */	stw r28, 0x10(r1)
/* 8035B750 00358690  7C 7C 1B 78 */	mr r28, r3
/* 8035B754 00358694  80 64 01 88 */	lwz r3, 0x188(r4)
/* 8035B758 00358698  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8035B75C 0035869C  28 00 00 00 */	cmplwi r0, 0
/* 8035B760 003586A0  41 82 01 68 */	beq .L_8035B8C8
/* 8035B764 003586A4  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8035B768 003586A8  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 8035B76C 003586AC  41 82 00 AC */	beq .L_8035B818
/* 8035B770 003586B0  40 80 00 28 */	bge .L_8035B798
/* 8035B774 003586B4  2C 00 00 03 */	cmpwi r0, 3
/* 8035B778 003586B8  41 82 01 50 */	beq .L_8035B8C8
/* 8035B77C 003586BC  40 80 00 10 */	bge .L_8035B78C
/* 8035B780 003586C0  2C 00 00 02 */	cmpwi r0, 2
/* 8035B784 003586C4  40 80 00 2C */	bge .L_8035B7B0
/* 8035B788 003586C8  48 00 01 40 */	b .L_8035B8C8
.L_8035B78C:
/* 8035B78C 003586CC  2C 00 00 05 */	cmpwi r0, 5
/* 8035B790 003586D0  40 80 01 38 */	bge .L_8035B8C8
/* 8035B794 003586D4  48 00 00 74 */	b .L_8035B808
.L_8035B798:
/* 8035B798 003586D8  2C 00 07 D0 */	cmpwi r0, 0x7d0
/* 8035B79C 003586DC  41 82 00 08 */	beq .L_8035B7A4
/* 8035B7A0 003586E0  48 00 01 28 */	b .L_8035B8C8
.L_8035B7A4:
/* 8035B7A4 003586E4  7F A3 EB 78 */	mr r3, r29
/* 8035B7A8 003586E8  48 00 5B 59 */	bl endBlendAnimation__Q34Game10KingChappy3ObjFv
/* 8035B7AC 003586EC  48 00 01 1C */	b .L_8035B8C8
.L_8035B7B0:
/* 8035B7B0 003586F0  7F A3 EB 78 */	mr r3, r29
/* 8035B7B4 003586F4  38 80 00 01 */	li r4, 1
/* 8035B7B8 003586F8  48 00 5F A1 */	bl createEffect__Q34Game10KingChappy3ObjFi
/* 8035B7BC 003586FC  80 1D 02 80 */	lwz r0, 0x280(r29)
/* 8035B7C0 00358700  28 00 00 00 */	cmplwi r0, 0
/* 8035B7C4 00358704  41 82 00 24 */	beq .L_8035B7E8
/* 8035B7C8 00358708  80 7D 02 8C */	lwz r3, 0x28c(r29)
/* 8035B7CC 0035870C  38 80 58 06 */	li r4, 0x5806
/* 8035B7D0 00358710  38 A0 00 00 */	li r5, 0
/* 8035B7D4 00358714  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8035B7D8 00358718  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 8035B7DC 0035871C  7D 89 03 A6 */	mtctr r12
/* 8035B7E0 00358720  4E 80 04 21 */	bctrl 
/* 8035B7E4 00358724  48 00 00 E4 */	b .L_8035B8C8
.L_8035B7E8:
/* 8035B7E8 00358728  80 7D 02 8C */	lwz r3, 0x28c(r29)
/* 8035B7EC 0035872C  38 80 58 5A */	li r4, 0x585a
/* 8035B7F0 00358730  38 A0 00 00 */	li r5, 0
/* 8035B7F4 00358734  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8035B7F8 00358738  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 8035B7FC 0035873C  7D 89 03 A6 */	mtctr r12
/* 8035B800 00358740  4E 80 04 21 */	bctrl 
/* 8035B804 00358744  48 00 00 C4 */	b .L_8035B8C8
.L_8035B808:
/* 8035B808 00358748  7F A3 EB 78 */	mr r3, r29
/* 8035B80C 0035874C  38 80 00 01 */	li r4, 1
/* 8035B810 00358750  48 00 63 BD */	bl fadeEffect__Q34Game10KingChappy3ObjFi
/* 8035B814 00358754  48 00 00 B4 */	b .L_8035B8C8
.L_8035B818:
/* 8035B818 00358758  83 DD 02 8C */	lwz r30, 0x28c(r29)
/* 8035B81C 0035875C  3B E0 00 00 */	li r31, 0
/* 8035B820 00358760  7F C3 F3 78 */	mr r3, r30
/* 8035B824 00358764  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8035B828 00358768  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035B82C 0035876C  7D 89 03 A6 */	mtctr r12
/* 8035B830 00358770  4E 80 04 21 */	bctrl 
/* 8035B834 00358774  2C 03 00 05 */	cmpwi r3, 5
/* 8035B838 00358778  41 82 00 3C */	beq .L_8035B874
/* 8035B83C 0035877C  7F C3 F3 78 */	mr r3, r30
/* 8035B840 00358780  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8035B844 00358784  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035B848 00358788  7D 89 03 A6 */	mtctr r12
/* 8035B84C 0035878C  4E 80 04 21 */	bctrl 
/* 8035B850 00358790  2C 03 00 06 */	cmpwi r3, 6
/* 8035B854 00358794  41 82 00 20 */	beq .L_8035B874
/* 8035B858 00358798  7F C3 F3 78 */	mr r3, r30
/* 8035B85C 0035879C  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8035B860 003587A0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035B864 003587A4  7D 89 03 A6 */	mtctr r12
/* 8035B868 003587A8  4E 80 04 21 */	bctrl 
/* 8035B86C 003587AC  2C 03 00 07 */	cmpwi r3, 7
/* 8035B870 003587B0  40 82 00 08 */	bne .L_8035B878
.L_8035B874:
/* 8035B874 003587B4  3B E0 00 01 */	li r31, 1
.L_8035B878:
/* 8035B878 003587B8  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8035B87C 003587BC  40 82 00 20 */	bne .L_8035B89C
/* 8035B880 003587C0  3C 60 80 49 */	lis r3, lbl_804910F0@ha
/* 8035B884 003587C4  3C A0 80 49 */	lis r5, lbl_80491108@ha
/* 8035B888 003587C8  38 63 10 F0 */	addi r3, r3, lbl_804910F0@l
/* 8035B88C 003587CC  38 80 04 54 */	li r4, 0x454
/* 8035B890 003587D0  38 A5 11 08 */	addi r5, r5, lbl_80491108@l
/* 8035B894 003587D4  4C C6 31 82 */	crclr 6
/* 8035B898 003587D8  4B CC ED A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8035B89C:
/* 8035B89C 003587DC  7F C3 F3 78 */	mr r3, r30
/* 8035B8A0 003587E0  38 80 00 00 */	li r4, 0
/* 8035B8A4 003587E4  48 10 41 4D */	bl setAppearFlag__Q23PSM9EnemyBossFb
/* 8035B8A8 003587E8  7F 83 E3 78 */	mr r3, r28
/* 8035B8AC 003587EC  7F A4 EB 78 */	mr r4, r29
/* 8035B8B0 003587F0  81 9C 00 00 */	lwz r12, 0(r28)
/* 8035B8B4 003587F4  38 A0 00 09 */	li r5, 9
/* 8035B8B8 003587F8  38 C0 00 00 */	li r6, 0
/* 8035B8BC 003587FC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035B8C0 00358800  7D 89 03 A6 */	mtctr r12
/* 8035B8C4 00358804  4E 80 04 21 */	bctrl 
.L_8035B8C8:
/* 8035B8C8 00358808  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8035B8CC 0035880C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8035B8D0 00358810  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8035B8D4 00358814  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8035B8D8 00358818  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8035B8DC 0035881C  7C 08 03 A6 */	mtlr r0
/* 8035B8E0 00358820  38 21 00 20 */	addi r1, r1, 0x20
/* 8035B8E4 00358824  4E 80 00 20 */	blr 
.endfn exec__Q34Game10KingChappy9StateHideFPQ24Game9EnemyBase

.fn cleanup__Q34Game10KingChappy9StateHideFPQ24Game9EnemyBase, global
/* 8035B8E8 00358828  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035B8EC 0035882C  7C 08 02 A6 */	mflr r0
/* 8035B8F0 00358830  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035B8F4 00358834  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035B8F8 00358838  7C 9F 23 78 */	mr r31, r4
/* 8035B8FC 0035883C  38 80 00 01 */	li r4, 1
/* 8035B900 00358840  7F E3 FB 78 */	mr r3, r31
/* 8035B904 00358844  48 00 62 C9 */	bl fadeEffect__Q34Game10KingChappy3ObjFi
/* 8035B908 00358848  7F E3 FB 78 */	mr r3, r31
/* 8035B90C 0035884C  38 80 00 00 */	li r4, 0
/* 8035B910 00358850  48 00 62 BD */	bl fadeEffect__Q34Game10KingChappy3ObjFi
/* 8035B914 00358854  7F E3 FB 78 */	mr r3, r31
/* 8035B918 00358858  81 9F 00 00 */	lwz r12, 0(r31)
/* 8035B91C 0035885C  81 8C 02 54 */	lwz r12, 0x254(r12)
/* 8035B920 00358860  7D 89 03 A6 */	mtctr r12
/* 8035B924 00358864  4E 80 04 21 */	bctrl 
/* 8035B928 00358868  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035B92C 0035886C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035B930 00358870  7C 08 03 A6 */	mtlr r0
/* 8035B934 00358874  38 21 00 10 */	addi r1, r1, 0x10
/* 8035B938 00358878  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10KingChappy9StateHideFPQ24Game9EnemyBase

.fn __ct__Q34Game10KingChappy13StateHideWaitFi, global
/* 8035B93C 0035887C  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 8035B940 00358880  3C E0 80 4E */	lis r7, __vt__Q34Game10KingChappy5State@ha
/* 8035B944 00358884  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 8035B948 00358888  3C C0 80 4E */	lis r6, __vt__Q34Game10KingChappy13StateHideWait@ha
/* 8035B94C 0035888C  90 03 00 00 */	stw r0, 0(r3)
/* 8035B950 00358890  3C A0 80 49 */	lis r5, lbl_80491114@ha
/* 8035B954 00358894  39 00 00 00 */	li r8, 0
/* 8035B958 00358898  38 E7 1B EC */	addi r7, r7, __vt__Q34Game10KingChappy5State@l
/* 8035B95C 0035889C  90 83 00 04 */	stw r4, 4(r3)
/* 8035B960 003588A0  38 86 1A 78 */	addi r4, r6, __vt__Q34Game10KingChappy13StateHideWait@l
/* 8035B964 003588A4  38 05 11 14 */	addi r0, r5, lbl_80491114@l
/* 8035B968 003588A8  91 03 00 08 */	stw r8, 8(r3)
/* 8035B96C 003588AC  90 E3 00 00 */	stw r7, 0(r3)
/* 8035B970 003588B0  90 83 00 00 */	stw r4, 0(r3)
/* 8035B974 003588B4  90 03 00 0C */	stw r0, 0xc(r3)
/* 8035B978 003588B8  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10KingChappy13StateHideWaitFi

.fn init__Q34Game10KingChappy13StateHideWaitFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8035B97C 003588BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035B980 003588C0  7C 08 02 A6 */	mflr r0
/* 8035B984 003588C4  38 A0 00 00 */	li r5, 0
/* 8035B988 003588C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035B98C 003588CC  38 00 00 00 */	li r0, 0
/* 8035B990 003588D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035B994 003588D4  7C 9F 23 78 */	mr r31, r4
/* 8035B998 003588D8  38 80 00 0A */	li r4, 0xa
/* 8035B99C 003588DC  93 C1 00 08 */	stw r30, 8(r1)
/* 8035B9A0 003588E0  7C 7E 1B 78 */	mr r30, r3
/* 8035B9A4 003588E4  90 03 00 10 */	stw r0, 0x10(r3)
/* 8035B9A8 003588E8  7F E3 FB 78 */	mr r3, r31
/* 8035B9AC 003588EC  48 00 58 19 */	bl startMotionSelf__Q34Game10KingChappy3ObjFiPQ28SysShape14MotionListener
/* 8035B9B0 003588F0  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8035B9B4 003588F4  7F E3 FB 78 */	mr r3, r31
/* 8035B9B8 003588F8  54 00 05 66 */	rlwinm r0, r0, 0, 0x15, 0x13
/* 8035B9BC 003588FC  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8035B9C0 00358900  4B DA BD BD */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 8035B9C4 00358904  7F E3 FB 78 */	mr r3, r31
/* 8035B9C8 00358908  38 80 00 00 */	li r4, 0
/* 8035B9CC 0035890C  48 00 62 01 */	bl fadeEffect__Q34Game10KingChappy3ObjFi
/* 8035B9D0 00358910  38 00 00 00 */	li r0, 0
/* 8035B9D4 00358914  98 1E 00 14 */	stb r0, 0x14(r30)
/* 8035B9D8 00358918  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8035B9DC 0035891C  64 00 00 40 */	oris r0, r0, 0x40
/* 8035B9E0 00358920  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8035B9E4 00358924  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035B9E8 00358928  83 C1 00 08 */	lwz r30, 8(r1)
/* 8035B9EC 0035892C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035B9F0 00358930  7C 08 03 A6 */	mtlr r0
/* 8035B9F4 00358934  38 21 00 10 */	addi r1, r1, 0x10
/* 8035B9F8 00358938  4E 80 00 20 */	blr 
.endfn init__Q34Game10KingChappy13StateHideWaitFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10KingChappy13StateHideWaitFPQ24Game9EnemyBase, global
/* 8035B9FC 0035893C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8035BA00 00358940  7C 08 02 A6 */	mflr r0
/* 8035BA04 00358944  90 01 00 24 */	stw r0, 0x24(r1)
/* 8035BA08 00358948  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8035BA0C 0035894C  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8035BA10 00358950  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035BA14 00358954  93 C1 00 08 */	stw r30, 8(r1)
/* 8035BA18 00358958  7C 9F 23 78 */	mr r31, r4
/* 8035BA1C 0035895C  7C 7E 1B 78 */	mr r30, r3
/* 8035BA20 00358960  7F E3 FB 78 */	mr r3, r31
/* 8035BA24 00358964  81 9F 00 00 */	lwz r12, 0(r31)
/* 8035BA28 00358968  81 8C 02 54 */	lwz r12, 0x254(r12)
/* 8035BA2C 0035896C  7D 89 03 A6 */	mtctr r12
/* 8035BA30 00358970  4E 80 04 21 */	bctrl 
/* 8035BA34 00358974  88 1E 00 14 */	lbz r0, 0x14(r30)
/* 8035BA38 00358978  28 00 00 00 */	cmplwi r0, 0
/* 8035BA3C 0035897C  40 82 00 24 */	bne .L_8035BA60
/* 8035BA40 00358980  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 8035BA44 00358984  28 00 00 00 */	cmplwi r0, 0
/* 8035BA48 00358988  41 82 00 18 */	beq .L_8035BA60
/* 8035BA4C 0035898C  7F E3 FB 78 */	mr r3, r31
/* 8035BA50 00358990  38 80 00 08 */	li r4, 8
/* 8035BA54 00358994  48 00 5D 05 */	bl createEffect__Q34Game10KingChappy3ObjFi
/* 8035BA58 00358998  38 00 00 01 */	li r0, 1
/* 8035BA5C 0035899C  98 1E 00 14 */	stb r0, 0x14(r30)
.L_8035BA60:
/* 8035BA60 003589A0  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 8035BA64 003589A4  38 03 00 01 */	addi r0, r3, 1
/* 8035BA68 003589A8  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8035BA6C 003589AC  88 1F 02 EC */	lbz r0, 0x2ec(r31)
/* 8035BA70 003589B0  28 00 00 00 */	cmplwi r0, 0
/* 8035BA74 003589B4  40 82 00 18 */	bne .L_8035BA8C
/* 8035BA78 003589B8  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8035BA7C 003589BC  80 9E 00 10 */	lwz r4, 0x10(r30)
/* 8035BA80 003589C0  80 03 0B 8C */	lwz r0, 0xb8c(r3)
/* 8035BA84 003589C4  7C 04 00 00 */	cmpw r4, r0
/* 8035BA88 003589C8  40 81 00 88 */	ble .L_8035BB10
.L_8035BA8C:
/* 8035BA8C 003589CC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8035BA90 003589D0  7F E3 FB 78 */	mr r3, r31
/* 8035BA94 003589D4  C0 1F 01 F8 */	lfs f0, 0x1f8(r31)
/* 8035BA98 003589D8  38 80 00 00 */	li r4, 0
/* 8035BA9C 003589DC  C0 25 08 44 */	lfs f1, 0x844(r5)
/* 8035BAA0 003589E0  EF E1 00 32 */	fmuls f31, f1, f0
/* 8035BAA4 003589E4  FC 20 F8 90 */	fmr f1, f31
/* 8035BAA8 003589E8  4B DB 90 19 */	bl "isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
/* 8035BAAC 003589EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035BAB0 003589F0  41 82 00 0C */	beq .L_8035BABC
/* 8035BAB4 003589F4  38 00 00 01 */	li r0, 1
/* 8035BAB8 003589F8  48 00 00 28 */	b .L_8035BAE0
.L_8035BABC:
/* 8035BABC 003589FC  FC 20 F8 90 */	fmr f1, f31
/* 8035BAC0 00358A00  7F E3 FB 78 */	mr r3, r31
/* 8035BAC4 00358A04  38 80 00 00 */	li r4, 0
/* 8035BAC8 00358A08  4B DB 8C 6D */	bl "isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 8035BACC 00358A0C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8035BAD0 00358A10  41 82 00 0C */	beq .L_8035BADC
/* 8035BAD4 00358A14  38 00 00 01 */	li r0, 1
/* 8035BAD8 00358A18  48 00 00 08 */	b .L_8035BAE0
.L_8035BADC:
/* 8035BADC 00358A1C  38 00 00 00 */	li r0, 0
.L_8035BAE0:
/* 8035BAE0 00358A20  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8035BAE4 00358A24  41 82 00 2C */	beq .L_8035BB10
/* 8035BAE8 00358A28  7F C3 F3 78 */	mr r3, r30
/* 8035BAEC 00358A2C  7F E4 FB 78 */	mr r4, r31
/* 8035BAF0 00358A30  81 9E 00 00 */	lwz r12, 0(r30)
/* 8035BAF4 00358A34  38 A0 00 0A */	li r5, 0xa
/* 8035BAF8 00358A38  38 C0 00 00 */	li r6, 0
/* 8035BAFC 00358A3C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035BB00 00358A40  7D 89 03 A6 */	mtctr r12
/* 8035BB04 00358A44  4E 80 04 21 */	bctrl 
/* 8035BB08 00358A48  38 00 00 00 */	li r0, 0
/* 8035BB0C 00358A4C  98 1F 02 EC */	stb r0, 0x2ec(r31)
.L_8035BB10:
/* 8035BB10 00358A50  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 8035BB14 00358A54  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8035BB18 00358A58  28 00 00 00 */	cmplwi r0, 0
/* 8035BB1C 00358A5C  41 82 00 4C */	beq .L_8035BB68
/* 8035BB20 00358A60  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8035BB24 00358A64  28 00 07 D0 */	cmplwi r0, 0x7d0
/* 8035BB28 00358A68  40 82 00 10 */	bne .L_8035BB38
/* 8035BB2C 00358A6C  7F E3 FB 78 */	mr r3, r31
/* 8035BB30 00358A70  48 00 57 D1 */	bl endBlendAnimation__Q34Game10KingChappy3ObjFv
/* 8035BB34 00358A74  48 00 00 34 */	b .L_8035BB68
.L_8035BB38:
/* 8035BB38 00358A78  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8035BB3C 00358A7C  40 82 00 2C */	bne .L_8035BB68
/* 8035BB40 00358A80  7F C3 F3 78 */	mr r3, r30
/* 8035BB44 00358A84  7F E4 FB 78 */	mr r4, r31
/* 8035BB48 00358A88  81 9E 00 00 */	lwz r12, 0(r30)
/* 8035BB4C 00358A8C  38 A0 00 0A */	li r5, 0xa
/* 8035BB50 00358A90  38 C0 00 00 */	li r6, 0
/* 8035BB54 00358A94  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035BB58 00358A98  7D 89 03 A6 */	mtctr r12
/* 8035BB5C 00358A9C  4E 80 04 21 */	bctrl 
/* 8035BB60 00358AA0  38 00 00 00 */	li r0, 0
/* 8035BB64 00358AA4  98 1F 02 EC */	stb r0, 0x2ec(r31)
.L_8035BB68:
/* 8035BB68 00358AA8  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8035BB6C 00358AAC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8035BB70 00358AB0  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8035BB74 00358AB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035BB78 00358AB8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8035BB7C 00358ABC  7C 08 03 A6 */	mtlr r0
/* 8035BB80 00358AC0  38 21 00 20 */	addi r1, r1, 0x20
/* 8035BB84 00358AC4  4E 80 00 20 */	blr 
.endfn exec__Q34Game10KingChappy13StateHideWaitFPQ24Game9EnemyBase

.fn cleanup__Q34Game10KingChappy13StateHideWaitFPQ24Game9EnemyBase, global
/* 8035BB88 00358AC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035BB8C 00358ACC  7C 08 02 A6 */	mflr r0
/* 8035BB90 00358AD0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035BB94 00358AD4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035BB98 00358AD8  7C 9F 23 78 */	mr r31, r4
/* 8035BB9C 00358ADC  38 80 00 08 */	li r4, 8
/* 8035BBA0 00358AE0  7F E3 FB 78 */	mr r3, r31
/* 8035BBA4 00358AE4  48 00 60 29 */	bl fadeEffect__Q34Game10KingChappy3ObjFi
/* 8035BBA8 00358AE8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8035BBAC 00358AEC  54 00 02 90 */	rlwinm r0, r0, 0, 0xa, 8
/* 8035BBB0 00358AF0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8035BBB4 00358AF4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035BBB8 00358AF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035BBBC 00358AFC  7C 08 03 A6 */	mtlr r0
/* 8035BBC0 00358B00  38 21 00 10 */	addi r1, r1, 0x10
/* 8035BBC4 00358B04  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10KingChappy13StateHideWaitFPQ24Game9EnemyBase

.fn __ct__Q34Game10KingChappy11StateAppearFi, global
/* 8035BBC8 00358B08  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 8035BBCC 00358B0C  3C C0 80 4E */	lis r6, __vt__Q34Game10KingChappy5State@ha
/* 8035BBD0 00358B10  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 8035BBD4 00358B14  3C A0 80 4E */	lis r5, __vt__Q34Game10KingChappy11StateAppear@ha
/* 8035BBD8 00358B18  90 03 00 00 */	stw r0, 0(r3)
/* 8035BBDC 00358B1C  38 E0 00 00 */	li r7, 0
/* 8035BBE0 00358B20  38 C6 1B EC */	addi r6, r6, __vt__Q34Game10KingChappy5State@l
/* 8035BBE4 00358B24  38 A5 1A 54 */	addi r5, r5, __vt__Q34Game10KingChappy11StateAppear@l
/* 8035BBE8 00358B28  90 83 00 04 */	stw r4, 4(r3)
/* 8035BBEC 00358B2C  38 02 02 88 */	addi r0, r2, lbl_8051E5E8@sda21
/* 8035BBF0 00358B30  90 E3 00 08 */	stw r7, 8(r3)
/* 8035BBF4 00358B34  90 C3 00 00 */	stw r6, 0(r3)
/* 8035BBF8 00358B38  90 A3 00 00 */	stw r5, 0(r3)
/* 8035BBFC 00358B3C  90 03 00 0C */	stw r0, 0xc(r3)
/* 8035BC00 00358B40  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10KingChappy11StateAppearFi

.fn init__Q34Game10KingChappy11StateAppearFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8035BC04 00358B44  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8035BC08 00358B48  7C 08 02 A6 */	mflr r0
/* 8035BC0C 00358B4C  90 01 00 94 */	stw r0, 0x94(r1)
/* 8035BC10 00358B50  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 8035BC14 00358B54  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 8035BC18 00358B58  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 8035BC1C 00358B5C  93 C1 00 78 */	stw r30, 0x78(r1)
/* 8035BC20 00358B60  7C 9F 23 78 */	mr r31, r4
/* 8035BC24 00358B64  7C 7E 1B 78 */	mr r30, r3
/* 8035BC28 00358B68  7F E3 FB 78 */	mr r3, r31
/* 8035BC2C 00358B6C  38 80 00 09 */	li r4, 9
/* 8035BC30 00358B70  38 A0 00 00 */	li r5, 0
/* 8035BC34 00358B74  48 00 55 91 */	bl startMotionSelf__Q34Game10KingChappy3ObjFiPQ28SysShape14MotionListener
/* 8035BC38 00358B78  7F E3 FB 78 */	mr r3, r31
/* 8035BC3C 00358B7C  48 00 3D AD */	bl searchTarget__Q34Game10KingChappy3ObjFv
/* 8035BC40 00358B80  7F E3 FB 78 */	mr r3, r31
/* 8035BC44 00358B84  4B DA 5D 89 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 8035BC48 00358B88  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 8035BC4C 00358B8C  38 00 00 01 */	li r0, 1
/* 8035BC50 00358B90  7F E3 FB 78 */	mr r3, r31
/* 8035BC54 00358B94  54 84 02 90 */	rlwinm r4, r4, 0, 0xa, 8
/* 8035BC58 00358B98  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 8035BC5C 00358B9C  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 8035BC60 00358BA0  64 84 00 20 */	oris r4, r4, 0x20
/* 8035BC64 00358BA4  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 8035BC68 00358BA8  98 1E 00 10 */	stb r0, 0x10(r30)
/* 8035BC6C 00358BAC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8035BC70 00358BB0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8035BC74 00358BB4  7D 89 03 A6 */	mtctr r12
/* 8035BC78 00358BB8  4E 80 04 21 */	bctrl 
/* 8035BC7C 00358BBC  7F E4 FB 78 */	mr r4, r31
/* 8035BC80 00358BC0  FF E0 08 90 */	fmr f31, f1
/* 8035BC84 00358BC4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8035BC88 00358BC8  38 61 00 08 */	addi r3, r1, 8
/* 8035BC8C 00358BCC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035BC90 00358BD0  7D 89 03 A6 */	mtctr r12
/* 8035BC94 00358BD4  4E 80 04 21 */	bctrl 
/* 8035BC98 00358BD8  C0 41 00 08 */	lfs f2, 8(r1)
/* 8035BC9C 00358BDC  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 8035BCA0 00358BE0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8035BCA4 00358BE4  3C 60 80 4E */	lis r3, __vt__Q23efx12ArgRotYScale@ha
/* 8035BCA8 00358BE8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8035BCAC 00358BEC  38 84 A7 EC */	addi r4, r4, __vt__Q23efx3Arg@l
/* 8035BCB0 00358BF0  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8035BCB4 00358BF4  38 03 1B 50 */	addi r0, r3, __vt__Q23efx12ArgRotYScale@l
/* 8035BCB8 00358BF8  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8035BCBC 00358BFC  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8035BCC0 00358C00  C0 7F 01 F8 */	lfs f3, 0x1f8(r31)
/* 8035BCC4 00358C04  90 81 00 38 */	stw r4, 0x38(r1)
/* 8035BCC8 00358C08  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 8035BCCC 00358C0C  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 8035BCD0 00358C10  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 8035BCD4 00358C14  90 01 00 38 */	stw r0, 0x38(r1)
/* 8035BCD8 00358C18  D3 E1 00 48 */	stfs f31, 0x48(r1)
/* 8035BCDC 00358C1C  D0 61 00 4C */	stfs f3, 0x4c(r1)
/* 8035BCE0 00358C20  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 8035BCE4 00358C24  28 00 00 00 */	cmplwi r0, 0
/* 8035BCE8 00358C28  41 82 00 94 */	beq .L_8035BD7C
/* 8035BCEC 00358C2C  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 8035BCF0 00358C30  38 A0 00 00 */	li r5, 0
/* 8035BCF4 00358C34  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 8035BCF8 00358C38  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple5@ha
/* 8035BCFC 00358C3C  90 01 00 50 */	stw r0, 0x50(r1)
/* 8035BD00 00358C40  38 03 6A 28 */	addi r0, r3, __vt__Q23efx8TSimple5@l
/* 8035BD04 00358C44  3C 60 80 4F */	lis r3, __vt__Q23efx9TKchApWat@ha
/* 8035BD08 00358C48  38 80 02 11 */	li r4, 0x211
/* 8035BD0C 00358C4C  90 01 00 50 */	stw r0, 0x50(r1)
/* 8035BD10 00358C50  38 03 A0 E0 */	addi r0, r3, __vt__Q23efx9TKchApWat@l
/* 8035BD14 00358C54  39 20 02 12 */	li r9, 0x212
/* 8035BD18 00358C58  39 00 02 13 */	li r8, 0x213
/* 8035BD1C 00358C5C  38 E0 02 14 */	li r7, 0x214
/* 8035BD20 00358C60  38 C0 02 15 */	li r6, 0x215
/* 8035BD24 00358C64  B0 81 00 54 */	sth r4, 0x54(r1)
/* 8035BD28 00358C68  38 61 00 50 */	addi r3, r1, 0x50
/* 8035BD2C 00358C6C  38 81 00 38 */	addi r4, r1, 0x38
/* 8035BD30 00358C70  B1 21 00 56 */	sth r9, 0x56(r1)
/* 8035BD34 00358C74  B1 01 00 58 */	sth r8, 0x58(r1)
/* 8035BD38 00358C78  B0 E1 00 5A */	sth r7, 0x5a(r1)
/* 8035BD3C 00358C7C  B0 C1 00 5C */	sth r6, 0x5c(r1)
/* 8035BD40 00358C80  90 A1 00 60 */	stw r5, 0x60(r1)
/* 8035BD44 00358C84  90 A1 00 64 */	stw r5, 0x64(r1)
/* 8035BD48 00358C88  90 A1 00 68 */	stw r5, 0x68(r1)
/* 8035BD4C 00358C8C  90 A1 00 6C */	stw r5, 0x6c(r1)
/* 8035BD50 00358C90  90 A1 00 70 */	stw r5, 0x70(r1)
/* 8035BD54 00358C94  90 01 00 50 */	stw r0, 0x50(r1)
/* 8035BD58 00358C98  48 08 FF 95 */	bl create__Q23efx9TKchApWatFPQ23efx3Arg
/* 8035BD5C 00358C9C  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 8035BD60 00358CA0  38 80 58 06 */	li r4, 0x5806
/* 8035BD64 00358CA4  38 A0 00 00 */	li r5, 0
/* 8035BD68 00358CA8  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8035BD6C 00358CAC  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 8035BD70 00358CB0  7D 89 03 A6 */	mtctr r12
/* 8035BD74 00358CB4  4E 80 04 21 */	bctrl 
/* 8035BD78 00358CB8  48 00 00 78 */	b .L_8035BDF0
.L_8035BD7C:
/* 8035BD7C 00358CBC  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 8035BD80 00358CC0  38 A0 00 00 */	li r5, 0
/* 8035BD84 00358CC4  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 8035BD88 00358CC8  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple3@ha
/* 8035BD8C 00358CCC  90 01 00 20 */	stw r0, 0x20(r1)
/* 8035BD90 00358CD0  38 03 6A 50 */	addi r0, r3, __vt__Q23efx8TSimple3@l
/* 8035BD94 00358CD4  3C 60 80 4F */	lis r3, __vt__Q23efx10TKchApSand@ha
/* 8035BD98 00358CD8  38 80 02 0E */	li r4, 0x20e
/* 8035BD9C 00358CDC  90 01 00 20 */	stw r0, 0x20(r1)
/* 8035BDA0 00358CE0  38 03 A0 F4 */	addi r0, r3, __vt__Q23efx10TKchApSand@l
/* 8035BDA4 00358CE4  38 E0 02 0F */	li r7, 0x20f
/* 8035BDA8 00358CE8  38 C0 02 10 */	li r6, 0x210
/* 8035BDAC 00358CEC  B0 81 00 24 */	sth r4, 0x24(r1)
/* 8035BDB0 00358CF0  38 61 00 20 */	addi r3, r1, 0x20
/* 8035BDB4 00358CF4  38 81 00 38 */	addi r4, r1, 0x38
/* 8035BDB8 00358CF8  B0 E1 00 26 */	sth r7, 0x26(r1)
/* 8035BDBC 00358CFC  B0 C1 00 28 */	sth r6, 0x28(r1)
/* 8035BDC0 00358D00  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 8035BDC4 00358D04  90 A1 00 30 */	stw r5, 0x30(r1)
/* 8035BDC8 00358D08  90 A1 00 34 */	stw r5, 0x34(r1)
/* 8035BDCC 00358D0C  90 01 00 20 */	stw r0, 0x20(r1)
/* 8035BDD0 00358D10  48 08 FD C9 */	bl create__Q23efx10TKchApSandFPQ23efx3Arg
/* 8035BDD4 00358D14  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 8035BDD8 00358D18  38 80 58 5A */	li r4, 0x585a
/* 8035BDDC 00358D1C  38 A0 00 00 */	li r5, 0
/* 8035BDE0 00358D20  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8035BDE4 00358D24  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 8035BDE8 00358D28  7D 89 03 A6 */	mtctr r12
/* 8035BDEC 00358D2C  4E 80 04 21 */	bctrl 
.L_8035BDF0:
/* 8035BDF0 00358D30  7F E3 FB 78 */	mr r3, r31
/* 8035BDF4 00358D34  38 80 00 00 */	li r4, 0
/* 8035BDF8 00358D38  48 00 59 61 */	bl createEffect__Q34Game10KingChappy3ObjFi
/* 8035BDFC 00358D3C  7F E3 FB 78 */	mr r3, r31
/* 8035BE00 00358D40  81 9F 00 00 */	lwz r12, 0(r31)
/* 8035BE04 00358D44  81 8C 02 50 */	lwz r12, 0x250(r12)
/* 8035BE08 00358D48  7D 89 03 A6 */	mtctr r12
/* 8035BE0C 00358D4C  4E 80 04 21 */	bctrl 
/* 8035BE10 00358D50  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8035BE14 00358D54  38 A1 00 14 */	addi r5, r1, 0x14
/* 8035BE18 00358D58  38 80 00 0F */	li r4, 0xf
/* 8035BE1C 00358D5C  38 C0 00 02 */	li r6, 2
/* 8035BE20 00358D60  4B EF 64 1D */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 8035BE24 00358D64  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 8035BE28 00358D68  38 A1 00 14 */	addi r5, r1, 0x14
/* 8035BE2C 00358D6C  38 80 00 0C */	li r4, 0xc
/* 8035BE30 00358D70  38 C0 00 02 */	li r6, 2
/* 8035BE34 00358D74  4B EF 79 4D */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 8035BE38 00358D78  83 DF 02 8C */	lwz r30, 0x28c(r31)
/* 8035BE3C 00358D7C  3B E0 00 00 */	li r31, 0
/* 8035BE40 00358D80  7F C3 F3 78 */	mr r3, r30
/* 8035BE44 00358D84  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8035BE48 00358D88  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035BE4C 00358D8C  7D 89 03 A6 */	mtctr r12
/* 8035BE50 00358D90  4E 80 04 21 */	bctrl 
/* 8035BE54 00358D94  2C 03 00 05 */	cmpwi r3, 5
/* 8035BE58 00358D98  41 82 00 3C */	beq .L_8035BE94
/* 8035BE5C 00358D9C  7F C3 F3 78 */	mr r3, r30
/* 8035BE60 00358DA0  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8035BE64 00358DA4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035BE68 00358DA8  7D 89 03 A6 */	mtctr r12
/* 8035BE6C 00358DAC  4E 80 04 21 */	bctrl 
/* 8035BE70 00358DB0  2C 03 00 06 */	cmpwi r3, 6
/* 8035BE74 00358DB4  41 82 00 20 */	beq .L_8035BE94
/* 8035BE78 00358DB8  7F C3 F3 78 */	mr r3, r30
/* 8035BE7C 00358DBC  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8035BE80 00358DC0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035BE84 00358DC4  7D 89 03 A6 */	mtctr r12
/* 8035BE88 00358DC8  4E 80 04 21 */	bctrl 
/* 8035BE8C 00358DCC  2C 03 00 07 */	cmpwi r3, 7
/* 8035BE90 00358DD0  40 82 00 08 */	bne .L_8035BE98
.L_8035BE94:
/* 8035BE94 00358DD4  3B E0 00 01 */	li r31, 1
.L_8035BE98:
/* 8035BE98 00358DD8  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8035BE9C 00358DDC  40 82 00 20 */	bne .L_8035BEBC
/* 8035BEA0 00358DE0  3C 60 80 49 */	lis r3, lbl_804910F0@ha
/* 8035BEA4 00358DE4  3C A0 80 49 */	lis r5, lbl_80491108@ha
/* 8035BEA8 00358DE8  38 63 10 F0 */	addi r3, r3, lbl_804910F0@l
/* 8035BEAC 00358DEC  38 80 04 54 */	li r4, 0x454
/* 8035BEB0 00358DF0  38 A5 11 08 */	addi r5, r5, lbl_80491108@l
/* 8035BEB4 00358DF4  4C C6 31 82 */	crclr 6
/* 8035BEB8 00358DF8  4B CC E7 89 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8035BEBC:
/* 8035BEBC 00358DFC  28 1E 00 00 */	cmplwi r30, 0
/* 8035BEC0 00358E00  41 82 00 10 */	beq .L_8035BED0
/* 8035BEC4 00358E04  7F C3 F3 78 */	mr r3, r30
/* 8035BEC8 00358E08  38 80 00 01 */	li r4, 1
/* 8035BECC 00358E0C  48 10 3B 25 */	bl setAppearFlag__Q23PSM9EnemyBossFb
.L_8035BED0:
/* 8035BED0 00358E10  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 8035BED4 00358E14  80 01 00 94 */	lwz r0, 0x94(r1)
/* 8035BED8 00358E18  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 8035BEDC 00358E1C  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 8035BEE0 00358E20  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 8035BEE4 00358E24  7C 08 03 A6 */	mtlr r0
/* 8035BEE8 00358E28  38 21 00 90 */	addi r1, r1, 0x90
/* 8035BEEC 00358E2C  4E 80 00 20 */	blr 
.endfn init__Q34Game10KingChappy11StateAppearFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10KingChappy11StateAppearFPQ24Game9EnemyBase, global
/* 8035BEF0 00358E30  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8035BEF4 00358E34  7C 08 02 A6 */	mflr r0
/* 8035BEF8 00358E38  90 01 00 64 */	stw r0, 0x64(r1)
/* 8035BEFC 00358E3C  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8035BF00 00358E40  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 8035BF04 00358E44  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 8035BF08 00358E48  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 8035BF0C 00358E4C  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 8035BF10 00358E50  F3 A1 00 38 */	psq_st f29, 56(r1), 0, qr0
/* 8035BF14 00358E54  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8035BF18 00358E58  7C 9F 23 78 */	mr r31, r4
/* 8035BF1C 00358E5C  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 8035BF20 00358E60  88 05 00 24 */	lbz r0, 0x24(r5)
/* 8035BF24 00358E64  28 00 00 00 */	cmplwi r0, 0
/* 8035BF28 00358E68  41 82 01 38 */	beq .L_8035C060
/* 8035BF2C 00358E6C  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 8035BF30 00358E70  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 8035BF34 00358E74  41 82 00 F4 */	beq .L_8035C028
/* 8035BF38 00358E78  40 80 00 20 */	bge .L_8035BF58
/* 8035BF3C 00358E7C  2C 00 00 03 */	cmpwi r0, 3
/* 8035BF40 00358E80  41 82 00 30 */	beq .L_8035BF70
/* 8035BF44 00358E84  40 80 00 08 */	bge .L_8035BF4C
/* 8035BF48 00358E88  48 00 01 18 */	b .L_8035C060
.L_8035BF4C:
/* 8035BF4C 00358E8C  2C 00 00 05 */	cmpwi r0, 5
/* 8035BF50 00358E90  40 80 01 10 */	bge .L_8035C060
/* 8035BF54 00358E94  48 00 00 70 */	b .L_8035BFC4
.L_8035BF58:
/* 8035BF58 00358E98  2C 00 07 D0 */	cmpwi r0, 0x7d0
/* 8035BF5C 00358E9C  41 82 00 08 */	beq .L_8035BF64
/* 8035BF60 00358EA0  48 00 01 00 */	b .L_8035C060
.L_8035BF64:
/* 8035BF64 00358EA4  7F E3 FB 78 */	mr r3, r31
/* 8035BF68 00358EA8  48 00 53 99 */	bl endBlendAnimation__Q34Game10KingChappy3ObjFv
/* 8035BF6C 00358EAC  48 00 00 F4 */	b .L_8035C060
.L_8035BF70:
/* 8035BF70 00358EB0  38 00 00 00 */	li r0, 0
/* 8035BF74 00358EB4  C0 82 02 44 */	lfs f4, lbl_8051E5A4@sda21(r2)
/* 8035BF78 00358EB8  98 03 00 10 */	stb r0, 0x10(r3)
/* 8035BF7C 00358EBC  7F E3 FB 78 */	mr r3, r31
/* 8035BF80 00358EC0  38 80 00 00 */	li r4, 0
/* 8035BF84 00358EC4  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8035BF88 00358EC8  C3 E5 09 84 */	lfs f31, 0x984(r5)
/* 8035BF8C 00358ECC  C3 C5 04 EC */	lfs f30, 0x4ec(r5)
/* 8035BF90 00358ED0  C3 A5 09 5C */	lfs f29, 0x95c(r5)
/* 8035BF94 00358ED4  FC 40 F8 90 */	fmr f2, f31
/* 8035BF98 00358ED8  FC 60 F0 90 */	fmr f3, f30
/* 8035BF9C 00358EDC  FC 20 E8 90 */	fmr f1, f29
/* 8035BFA0 00358EE0  4B DB 75 35 */	bl "flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 8035BFA4 00358EE4  FC 20 E8 90 */	fmr f1, f29
/* 8035BFA8 00358EE8  C0 82 02 44 */	lfs f4, lbl_8051E5A4@sda21(r2)
/* 8035BFAC 00358EEC  FC 40 F8 90 */	fmr f2, f31
/* 8035BFB0 00358EF0  7F E3 FB 78 */	mr r3, r31
/* 8035BFB4 00358EF4  FC 60 F0 90 */	fmr f3, f30
/* 8035BFB8 00358EF8  38 80 00 00 */	li r4, 0
/* 8035BFBC 00358EFC  4B DB 77 D5 */	bl "flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
/* 8035BFC0 00358F00  48 00 00 A0 */	b .L_8035C060
.L_8035BFC4:
/* 8035BFC4 00358F04  7F E3 FB 78 */	mr r3, r31
/* 8035BFC8 00358F08  48 00 5D 45 */	bl createBounceEffect__Q34Game10KingChappy3ObjFv
/* 8035BFCC 00358F0C  7F E4 FB 78 */	mr r4, r31
/* 8035BFD0 00358F10  38 61 00 08 */	addi r3, r1, 8
/* 8035BFD4 00358F14  81 9F 00 00 */	lwz r12, 0(r31)
/* 8035BFD8 00358F18  81 8C 00 08 */	lwz r12, 8(r12)
/* 8035BFDC 00358F1C  7D 89 03 A6 */	mtctr r12
/* 8035BFE0 00358F20  4E 80 04 21 */	bctrl 
/* 8035BFE4 00358F24  C0 41 00 08 */	lfs f2, 8(r1)
/* 8035BFE8 00358F28  38 A1 00 14 */	addi r5, r1, 0x14
/* 8035BFEC 00358F2C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8035BFF0 00358F30  38 80 00 06 */	li r4, 6
/* 8035BFF4 00358F34  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8035BFF8 00358F38  38 C0 00 02 */	li r6, 2
/* 8035BFFC 00358F3C  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8035C000 00358F40  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8035C004 00358F44  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8035C008 00358F48  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8035C00C 00358F4C  4B EF 62 31 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 8035C010 00358F50  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 8035C014 00358F54  38 A1 00 14 */	addi r5, r1, 0x14
/* 8035C018 00358F58  38 80 00 0B */	li r4, 0xb
/* 8035C01C 00358F5C  38 C0 00 02 */	li r6, 2
/* 8035C020 00358F60  4B EF 77 61 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 8035C024 00358F64  48 00 00 3C */	b .L_8035C060
.L_8035C028:
/* 8035C028 00358F68  81 83 00 00 */	lwz r12, 0(r3)
/* 8035C02C 00358F6C  38 A0 00 0B */	li r5, 0xb
/* 8035C030 00358F70  38 C0 00 00 */	li r6, 0
/* 8035C034 00358F74  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035C038 00358F78  7D 89 03 A6 */	mtctr r12
/* 8035C03C 00358F7C  4E 80 04 21 */	bctrl 
/* 8035C040 00358F80  7F E3 FB 78 */	mr r3, r31
/* 8035C044 00358F84  4B DA B7 51 */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 8035C048 00358F88  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8035C04C 00358F8C  60 00 08 00 */	ori r0, r0, 0x800
/* 8035C050 00358F90  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8035C054 00358F94  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8035C058 00358F98  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 8035C05C 00358F9C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
.L_8035C060:
/* 8035C060 00358FA0  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 8035C064 00358FA4  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8035C068 00358FA8  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 8035C06C 00358FAC  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 8035C070 00358FB0  E3 A1 00 38 */	psq_l f29, 56(r1), 0, qr0
/* 8035C074 00358FB4  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 8035C078 00358FB8  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8035C07C 00358FBC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8035C080 00358FC0  7C 08 03 A6 */	mtlr r0
/* 8035C084 00358FC4  38 21 00 60 */	addi r1, r1, 0x60
/* 8035C088 00358FC8  4E 80 00 20 */	blr 
.endfn exec__Q34Game10KingChappy11StateAppearFPQ24Game9EnemyBase

.fn __ct__Q34Game10KingChappy12StateCautionFi, global
/* 8035C08C 00358FCC  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 8035C090 00358FD0  3C C0 80 4E */	lis r6, __vt__Q34Game10KingChappy5State@ha
/* 8035C094 00358FD4  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 8035C098 00358FD8  3C A0 80 4E */	lis r5, __vt__Q34Game10KingChappy12StateCaution@ha
/* 8035C09C 00358FDC  90 03 00 00 */	stw r0, 0(r3)
/* 8035C0A0 00358FE0  38 E0 00 00 */	li r7, 0
/* 8035C0A4 00358FE4  38 C6 1B EC */	addi r6, r6, __vt__Q34Game10KingChappy5State@l
/* 8035C0A8 00358FE8  38 A5 1A 30 */	addi r5, r5, __vt__Q34Game10KingChappy12StateCaution@l
/* 8035C0AC 00358FEC  90 83 00 04 */	stw r4, 4(r3)
/* 8035C0B0 00358FF0  38 02 02 90 */	addi r0, r2, lbl_8051E5F0@sda21
/* 8035C0B4 00358FF4  90 E3 00 08 */	stw r7, 8(r3)
/* 8035C0B8 00358FF8  90 C3 00 00 */	stw r6, 0(r3)
/* 8035C0BC 00358FFC  90 A3 00 00 */	stw r5, 0(r3)
/* 8035C0C0 00359000  90 03 00 0C */	stw r0, 0xc(r3)
/* 8035C0C4 00359004  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10KingChappy12StateCautionFi

.fn init__Q34Game10KingChappy12StateCautionFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8035C0C8 00359008  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035C0CC 0035900C  7C 08 02 A6 */	mflr r0
/* 8035C0D0 00359010  7C 83 23 78 */	mr r3, r4
/* 8035C0D4 00359014  38 80 00 0C */	li r4, 0xc
/* 8035C0D8 00359018  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035C0DC 0035901C  38 A0 00 00 */	li r5, 0
/* 8035C0E0 00359020  48 00 50 E5 */	bl startMotionSelf__Q34Game10KingChappy3ObjFiPQ28SysShape14MotionListener
/* 8035C0E4 00359024  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035C0E8 00359028  7C 08 03 A6 */	mtlr r0
/* 8035C0EC 0035902C  38 21 00 10 */	addi r1, r1, 0x10
/* 8035C0F0 00359030  4E 80 00 20 */	blr 
.endfn init__Q34Game10KingChappy12StateCautionFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10KingChappy12StateCautionFPQ24Game9EnemyBase, global
/* 8035C0F4 00359034  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035C0F8 00359038  7C 08 02 A6 */	mflr r0
/* 8035C0FC 0035903C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035C100 00359040  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 8035C104 00359044  88 05 00 24 */	lbz r0, 0x24(r5)
/* 8035C108 00359048  28 00 00 00 */	cmplwi r0, 0
/* 8035C10C 0035904C  41 82 00 3C */	beq .L_8035C148
/* 8035C110 00359050  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 8035C114 00359054  28 00 07 D0 */	cmplwi r0, 0x7d0
/* 8035C118 00359058  40 82 00 10 */	bne .L_8035C128
/* 8035C11C 0035905C  7C 83 23 78 */	mr r3, r4
/* 8035C120 00359060  48 00 51 E1 */	bl endBlendAnimation__Q34Game10KingChappy3ObjFv
/* 8035C124 00359064  48 00 00 24 */	b .L_8035C148
.L_8035C128:
/* 8035C128 00359068  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8035C12C 0035906C  40 82 00 1C */	bne .L_8035C148
/* 8035C130 00359070  81 83 00 00 */	lwz r12, 0(r3)
/* 8035C134 00359074  38 A0 00 00 */	li r5, 0
/* 8035C138 00359078  38 C0 00 00 */	li r6, 0
/* 8035C13C 0035907C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035C140 00359080  7D 89 03 A6 */	mtctr r12
/* 8035C144 00359084  4E 80 04 21 */	bctrl 
.L_8035C148:
/* 8035C148 00359088  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035C14C 0035908C  7C 08 03 A6 */	mtlr r0
/* 8035C150 00359090  38 21 00 10 */	addi r1, r1, 0x10
/* 8035C154 00359094  4E 80 00 20 */	blr 
.endfn exec__Q34Game10KingChappy12StateCautionFPQ24Game9EnemyBase

.fn __ct__Q34Game10KingChappy12StateSwallowFi, global
/* 8035C158 00359098  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 8035C15C 0035909C  3C C0 80 4E */	lis r6, __vt__Q34Game10KingChappy5State@ha
/* 8035C160 003590A0  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 8035C164 003590A4  3C A0 80 4E */	lis r5, __vt__Q34Game10KingChappy12StateSwallow@ha
/* 8035C168 003590A8  90 03 00 00 */	stw r0, 0(r3)
/* 8035C16C 003590AC  38 E0 00 00 */	li r7, 0
/* 8035C170 003590B0  38 C6 1B EC */	addi r6, r6, __vt__Q34Game10KingChappy5State@l
/* 8035C174 003590B4  38 A5 1A 0C */	addi r5, r5, __vt__Q34Game10KingChappy12StateSwallow@l
/* 8035C178 003590B8  90 83 00 04 */	stw r4, 4(r3)
/* 8035C17C 003590BC  38 02 02 98 */	addi r0, r2, lbl_8051E5F8@sda21
/* 8035C180 003590C0  90 E3 00 08 */	stw r7, 8(r3)
/* 8035C184 003590C4  90 C3 00 00 */	stw r6, 0(r3)
/* 8035C188 003590C8  90 A3 00 00 */	stw r5, 0(r3)
/* 8035C18C 003590CC  90 03 00 0C */	stw r0, 0xc(r3)
/* 8035C190 003590D0  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10KingChappy12StateSwallowFi

.fn init__Q34Game10KingChappy12StateSwallowFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8035C194 003590D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035C198 003590D8  7C 08 02 A6 */	mflr r0
/* 8035C19C 003590DC  7C 83 23 78 */	mr r3, r4
/* 8035C1A0 003590E0  38 80 00 07 */	li r4, 7
/* 8035C1A4 003590E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035C1A8 003590E8  38 A0 00 00 */	li r5, 0
/* 8035C1AC 003590EC  48 00 50 19 */	bl startMotionSelf__Q34Game10KingChappy3ObjFiPQ28SysShape14MotionListener
/* 8035C1B0 003590F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035C1B4 003590F4  7C 08 03 A6 */	mtlr r0
/* 8035C1B8 003590F8  38 21 00 10 */	addi r1, r1, 0x10
/* 8035C1BC 003590FC  4E 80 00 20 */	blr 
.endfn init__Q34Game10KingChappy12StateSwallowFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10KingChappy12StateSwallowFPQ24Game9EnemyBase, global
/* 8035C1C0 00359100  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035C1C4 00359104  7C 08 02 A6 */	mflr r0
/* 8035C1C8 00359108  90 01 00 14 */	stw r0, 0x14(r1)
/* 8035C1CC 0035910C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8035C1D0 00359110  7C 9F 23 78 */	mr r31, r4
/* 8035C1D4 00359114  93 C1 00 08 */	stw r30, 8(r1)
/* 8035C1D8 00359118  7C 7E 1B 78 */	mr r30, r3
/* 8035C1DC 0035911C  80 64 01 88 */	lwz r3, 0x188(r4)
/* 8035C1E0 00359120  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8035C1E4 00359124  28 00 00 00 */	cmplwi r0, 0
/* 8035C1E8 00359128  41 82 00 54 */	beq .L_8035C23C
/* 8035C1EC 0035912C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8035C1F0 00359130  28 00 07 D0 */	cmplwi r0, 0x7d0
/* 8035C1F4 00359134  40 82 00 10 */	bne .L_8035C204
/* 8035C1F8 00359138  7F E3 FB 78 */	mr r3, r31
/* 8035C1FC 0035913C  48 00 51 05 */	bl endBlendAnimation__Q34Game10KingChappy3ObjFv
/* 8035C200 00359140  48 00 00 3C */	b .L_8035C23C
.L_8035C204:
/* 8035C204 00359144  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8035C208 00359148  40 82 00 34 */	bne .L_8035C23C
/* 8035C20C 0035914C  C0 22 02 A0 */	lfs f1, lbl_8051E600@sda21(r2)
/* 8035C210 00359150  7F E3 FB 78 */	mr r3, r31
/* 8035C214 00359154  38 80 00 00 */	li r4, 0
/* 8035C218 00359158  4B DB 7C 6D */	bl "swallowPikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 8035C21C 0035915C  7F C3 F3 78 */	mr r3, r30
/* 8035C220 00359160  7F E4 FB 78 */	mr r4, r31
/* 8035C224 00359164  81 9E 00 00 */	lwz r12, 0(r30)
/* 8035C228 00359168  38 A0 00 00 */	li r5, 0
/* 8035C22C 0035916C  38 C0 00 00 */	li r6, 0
/* 8035C230 00359170  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8035C234 00359174  7D 89 03 A6 */	mtctr r12
/* 8035C238 00359178  4E 80 04 21 */	bctrl 
.L_8035C23C:
/* 8035C23C 0035917C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8035C240 00359180  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8035C244 00359184  83 C1 00 08 */	lwz r30, 8(r1)
/* 8035C248 00359188  7C 08 03 A6 */	mtlr r0
/* 8035C24C 0035918C  38 21 00 10 */	addi r1, r1, 0x10
/* 8035C250 00359190  4E 80 00 20 */	blr 
.endfn exec__Q34Game10KingChappy12StateSwallowFPQ24Game9EnemyBase

.fn getName__Q23efx12ArgRotYScaleFv, weak
/* 8035C254 00359194  3C 60 80 49 */	lis r3, lbl_80491120@ha
/* 8035C258 00359198  38 63 11 20 */	addi r3, r3, lbl_80491120@l
/* 8035C25C 0035919C  4E 80 00 20 */	blr 
.endfn getName__Q23efx12ArgRotYScaleFv

.fn __sinit_kingChappyState_cpp, local
/* 8035C260 003591A0  3C 80 80 51 */	lis r4, __float_nan@ha
/* 8035C264 003591A4  38 00 FF FF */	li r0, -1
/* 8035C268 003591A8  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 8035C26C 003591AC  3C 60 80 4E */	lis r3, govNAN___Q24Game5P2JST@ha
/* 8035C270 003591B0  90 0D 98 C0 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 8035C274 003591B4  D4 03 1A 00 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 8035C278 003591B8  D0 0D 98 C4 */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 8035C27C 003591BC  D0 03 00 04 */	stfs f0, 4(r3)
/* 8035C280 003591C0  D0 03 00 08 */	stfs f0, 8(r3)
/* 8035C284 003591C4  4E 80 00 20 */	blr 
.endfn __sinit_kingChappyState_cpp
