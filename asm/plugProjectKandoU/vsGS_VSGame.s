.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_vsGS_VSGame_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_80483850
lbl_80483850:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x76734753
	.4byte 0x5F47616D
	.4byte 0x65000000
	.4byte 0x50534761
	.4byte 0x6D652E68
	.4byte 0x00000000
	.asciz "P2Assert"
	.skip 3
	.4byte 0x50535363
	.4byte 0x656E652E
	.4byte 0x68000000
	.4byte 0x00000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global lbl_804C1158
lbl_804C1158:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.global __vt__Q34Game6VsGame7VSState
__vt__Q34Game6VsGame7VSState:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ24Game8StateArg
	.4byte exec__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
	.4byte cleanup__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
	.4byte "resume__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
	.4byte "restart__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
	.4byte "transit__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg"
	.4byte draw__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionR8Graphics
	.4byte pre2dDraw__Q34Game6VsGame9GameStateFR8GraphicsPQ24Game13VsGameSection
	.4byte onOrimaDown__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectioni
	.4byte onMovieStart__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl
	.4byte onMovieDone__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl
	.4byte onNextFloor__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ34Game8ItemHole4Item
	.4byte on_section_fadeout__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
	.4byte goingToCave__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
	.4byte onBattleFinished__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionib
	.4byte onRedOrBlueSuckStart__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionib
	.4byte isCardUsable__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
	.4byte drawStatus__Q34Game6VsGame9GameStateFR8GraphicsPQ24Game13VsGameSection
	.4byte do_init__Q34Game6VsGame7VSStateFPQ24Game13VsGameSection

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global lbl_80515C90
lbl_80515C90:
	.skip 0x4
.global lbl_80515C94
lbl_80515C94:
	.skip 0x4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game6VsGame7VSStateFv
__ct__Q34Game6VsGame7VSStateFv:
/* 8022EA94 0022B9D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8022EA98 0022B9D8  7C 08 02 A6 */	mflr r0
/* 8022EA9C 0022B9DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8022EAA0 0022B9E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8022EAA4 0022B9E4  7C 7F 1B 78 */	mr r31, r3
/* 8022EAA8 0022B9E8  4B FF A7 FD */	bl __ct__Q34Game6VsGame9GameStateFv
/* 8022EAAC 0022B9EC  3C 60 80 4C */	lis r3, __vt__Q34Game6VsGame7VSState@ha
/* 8022EAB0 0022B9F0  38 00 00 03 */	li r0, 3
/* 8022EAB4 0022B9F4  38 83 11 64 */	addi r4, r3, __vt__Q34Game6VsGame7VSState@l
/* 8022EAB8 0022B9F8  7F E3 FB 78 */	mr r3, r31
/* 8022EABC 0022B9FC  90 9F 00 00 */	stw r4, 0(r31)
/* 8022EAC0 0022BA00  90 1F 00 04 */	stw r0, 4(r31)
/* 8022EAC4 0022BA04  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8022EAC8 0022BA08  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8022EACC 0022BA0C  7C 08 03 A6 */	mtlr r0
/* 8022EAD0 0022BA10  38 21 00 10 */	addi r1, r1, 0x10
/* 8022EAD4 0022BA14  4E 80 00 20 */	blr 

.global do_init__Q34Game6VsGame7VSStateFPQ24Game13VsGameSection
do_init__Q34Game6VsGame7VSStateFPQ24Game13VsGameSection:
/* 8022EAD8 0022BA18  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8022EADC 0022BA1C  7C 08 02 A6 */	mflr r0
/* 8022EAE0 0022BA20  90 01 00 24 */	stw r0, 0x24(r1)
/* 8022EAE4 0022BA24  38 00 00 01 */	li r0, 1
/* 8022EAE8 0022BA28  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8022EAEC 0022BA2C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8022EAF0 0022BA30  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8022EAF4 0022BA34  7C 9D 23 78 */	mr r29, r4
/* 8022EAF8 0022BA38  3C 80 80 48 */	lis r4, lbl_80483850@ha
/* 8022EAFC 0022BA3C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022EB00 0022BA40  3B E4 38 50 */	addi r31, r4, lbl_80483850@l
/* 8022EB04 0022BA44  38 80 00 02 */	li r4, 2
/* 8022EB08 0022BA48  90 03 00 44 */	stw r0, 0x44(r3)
/* 8022EB0C 0022BA4C  7F A3 EB 78 */	mr r3, r29
/* 8022EB10 0022BA50  4B F1 EE 09 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
/* 8022EB14 0022BA54  7F A3 EB 78 */	mr r3, r29
/* 8022EB18 0022BA58  4B F1 F2 71 */	bl setCamController__Q24Game15BaseGameSectionFv
/* 8022EB1C 0022BA5C  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8022EB20 0022BA60  28 00 00 00 */	cmplwi r0, 0
/* 8022EB24 0022BA64  40 82 00 18 */	bne lbl_8022EB3C
/* 8022EB28 0022BA68  38 7F 00 18 */	addi r3, r31, 0x18
/* 8022EB2C 0022BA6C  38 BF 00 24 */	addi r5, r31, 0x24
/* 8022EB30 0022BA70  38 80 01 D3 */	li r4, 0x1d3
/* 8022EB34 0022BA74  4C C6 31 82 */	crclr 6
/* 8022EB38 0022BA78  4B DF BB 09 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_8022EB3C:
/* 8022EB3C 0022BA7C  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 8022EB40 0022BA80  80 1E 00 04 */	lwz r0, 4(r30)
/* 8022EB44 0022BA84  28 00 00 00 */	cmplwi r0, 0
/* 8022EB48 0022BA88  40 82 00 18 */	bne lbl_8022EB60
/* 8022EB4C 0022BA8C  38 7F 00 30 */	addi r3, r31, 0x30
/* 8022EB50 0022BA90  38 BF 00 24 */	addi r5, r31, 0x24
/* 8022EB54 0022BA94  38 80 00 C7 */	li r4, 0xc7
/* 8022EB58 0022BA98  4C C6 31 82 */	crclr 6
/* 8022EB5C 0022BA9C  4B DF BA E5 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_8022EB60:
/* 8022EB60 0022BAA0  80 7E 00 04 */	lwz r3, 4(r30)
/* 8022EB64 0022BAA4  80 63 00 04 */	lwz r3, 4(r3)
/* 8022EB68 0022BAA8  81 83 00 00 */	lwz r12, 0(r3)
/* 8022EB6C 0022BAAC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8022EB70 0022BAB0  7D 89 03 A6 */	mtctr r12
/* 8022EB74 0022BAB4  4E 80 04 21 */	bctrl 
/* 8022EB78 0022BAB8  7F A3 EB 78 */	mr r3, r29
/* 8022EB7C 0022BABC  38 9D 02 14 */	addi r4, r29, 0x214
/* 8022EB80 0022BAC0  38 A0 00 00 */	li r5, 0
/* 8022EB84 0022BAC4  4B F9 38 A5 */	bl createFallPikmins__Q24Game13VsGameSectionFRQ24Game13PikiContaineri
/* 8022EB88 0022BAC8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8022EB8C 0022BACC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8022EB90 0022BAD0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8022EB94 0022BAD4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8022EB98 0022BAD8  7C 08 03 A6 */	mtlr r0
/* 8022EB9C 0022BADC  38 21 00 20 */	addi r1, r1, 0x20
/* 8022EBA0 0022BAE0  4E 80 00 20 */	blr 

.global __sinit_vsGS_VSGame_cpp
__sinit_vsGS_VSGame_cpp:
/* 8022EBA4 0022BAE4  3C 80 80 51 */	lis r4, __float_nan@ha
/* 8022EBA8 0022BAE8  38 00 FF FF */	li r0, -1
/* 8022EBAC 0022BAEC  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 8022EBB0 0022BAF0  3C 60 80 4C */	lis r3, lbl_804C1158@ha
/* 8022EBB4 0022BAF4  90 0D 96 10 */	stw r0, lbl_80515C90@sda21(r13)
/* 8022EBB8 0022BAF8  D4 03 11 58 */	stfsu f0, lbl_804C1158@l(r3)
/* 8022EBBC 0022BAFC  D0 0D 96 14 */	stfs f0, lbl_80515C94@sda21(r13)
/* 8022EBC0 0022BB00  D0 03 00 04 */	stfs f0, 4(r3)
/* 8022EBC4 0022BB04  D0 03 00 08 */	stfs f0, 8(r3)
/* 8022EBC8 0022BB08  4E 80 00 20 */	blr 
