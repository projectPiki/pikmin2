.include "macros.inc"
.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
DSP_MIXERLEVEL:
	.2byte 0x4000

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
flag:
	.skip 4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_80516ED0:
	.float 4096.0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.balign 32, 0
.global DSPReleaseHalt2__FUl
DSPReleaseHalt2__FUl:
/* 800AA760 000A76A0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800AA764 000A76A4  7C 08 02 A6 */	mflr r0
/* 800AA768 000A76A8  90 01 00 24 */	stw r0, 0x24(r1)
/* 800AA76C 000A76AC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800AA770 000A76B0  7C 7F 1B 78 */	mr r31, r3
/* 800AA774 000A76B4  4B FF B3 85 */	bl DSP_CreateMap2__FUl
/* 800AA778 000A76B8  7C 60 1B 78 */	mr r0, r3
/* 800AA77C 000A76BC  38 61 00 08 */	addi r3, r1, 8
/* 800AA780 000A76C0  53 E0 80 1E */	rlwimi r0, r31, 0x10, 0, 0xf
/* 800AA784 000A76C4  38 80 00 00 */	li r4, 0
/* 800AA788 000A76C8  90 01 00 08 */	stw r0, 8(r1)
/* 800AA78C 000A76CC  38 A0 00 00 */	li r5, 0
/* 800AA790 000A76D0  48 00 02 71 */	bl DSPSendCommands2__FPUlUlPFUs_v
/* 800AA794 000A76D4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800AA798 000A76D8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800AA79C 000A76DC  7C 08 03 A6 */	mtlr r0
/* 800AA7A0 000A76E0  38 21 00 20 */	addi r1, r1, 0x20
/* 800AA7A4 000A76E4  4E 80 00 20 */	blr 

.balign 32, 0
.global setup_callback__FUs
setup_callback__FUs:
/* 800AA7C0 000A7700  38 00 00 00 */	li r0, 0
/* 800AA7C4 000A7704  90 0D 8B 30 */	stw r0, flag@sda21(r13)
/* 800AA7C8 000A7708  4E 80 00 20 */	blr 

.balign 32, 0
.global DsetupTable__FUlUlUlUlUl
DsetupTable__FUlUlUlUlUl:
/* 800AA7E0 000A7720  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800AA7E4 000A7724  7C 08 02 A6 */	mflr r0
/* 800AA7E8 000A7728  39 00 00 01 */	li r8, 1
/* 800AA7EC 000A772C  90 01 00 24 */	stw r0, 0x24(r1)
/* 800AA7F0 000A7730  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 800AA7F4 000A7734  64 09 81 00 */	oris r9, r0, 0x8100
/* 800AA7F8 000A7738  3C 60 80 0B */	lis r3, setup_callback__FUs@ha
/* 800AA7FC 000A773C  90 81 00 0C */	stw r4, 0xc(r1)
/* 800AA800 000A7740  38 03 A7 C0 */	addi r0, r3, setup_callback__FUs@l
/* 800AA804 000A7744  38 61 00 08 */	addi r3, r1, 8
/* 800AA808 000A7748  38 80 00 05 */	li r4, 5
/* 800AA80C 000A774C  90 A1 00 10 */	stw r5, 0x10(r1)
/* 800AA810 000A7750  7C 05 03 78 */	mr r5, r0
/* 800AA814 000A7754  91 21 00 08 */	stw r9, 8(r1)
/* 800AA818 000A7758  90 C1 00 14 */	stw r6, 0x14(r1)
/* 800AA81C 000A775C  90 E1 00 18 */	stw r7, 0x18(r1)
/* 800AA820 000A7760  91 0D 8B 30 */	stw r8, flag@sda21(r13)
/* 800AA824 000A7764  48 00 01 DD */	bl DSPSendCommands2__FPUlUlPFUs_v
.L_800AA828:
/* 800AA828 000A7768  80 0D 8B 30 */	lwz r0, flag@sda21(r13)
/* 800AA82C 000A776C  2C 00 00 00 */	cmpwi r0, 0
/* 800AA830 000A7770  40 82 FF F8 */	bne .L_800AA828
/* 800AA834 000A7774  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800AA838 000A7778  7C 08 03 A6 */	mtlr r0
/* 800AA83C 000A777C  38 21 00 20 */	addi r1, r1, 0x20
/* 800AA840 000A7780  4E 80 00 20 */	blr 

.balign 32, 0
.global DsetMixerLevel__Ff
DsetMixerLevel__Ff:
/* 800AA860 000A77A0  C0 02 8B 70 */	lfs f0, lbl_80516ED0@sda21(r2)
/* 800AA864 000A77A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AA868 000A77A8  EC 00 00 72 */	fmuls f0, f0, f1
/* 800AA86C 000A77AC  FC 00 00 1E */	fctiwz f0, f0
/* 800AA870 000A77B0  D8 01 00 08 */	stfd f0, 8(r1)
/* 800AA874 000A77B4  80 01 00 0C */	lwz r0, 0xc(r1)
/* 800AA878 000A77B8  B0 0D 81 38 */	sth r0, DSP_MIXERLEVEL@sda21(r13)
/* 800AA87C 000A77BC  38 21 00 10 */	addi r1, r1, 0x10
/* 800AA880 000A77C0  4E 80 00 20 */	blr 

.balign 32, 0
.global DsyncFrame__FUlUlUl
DsyncFrame__FUlUlUl:
/* 800AA8A0 000A77E0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800AA8A4 000A77E4  7C 08 02 A6 */	mflr r0
/* 800AA8A8 000A77E8  54 63 82 1E */	rlwinm r3, r3, 0x10, 8, 0xf
/* 800AA8AC 000A77EC  90 01 00 24 */	stw r0, 0x24(r1)
/* 800AA8B0 000A77F0  64 63 82 00 */	oris r3, r3, 0x8200
/* 800AA8B4 000A77F4  A0 0D 81 38 */	lhz r0, DSP_MIXERLEVEL@sda21(r13)
/* 800AA8B8 000A77F8  90 81 00 0C */	stw r4, 0xc(r1)
/* 800AA8BC 000A77FC  38 80 00 03 */	li r4, 3
/* 800AA8C0 000A7800  7C 60 03 78 */	or r0, r3, r0
/* 800AA8C4 000A7804  38 61 00 08 */	addi r3, r1, 8
/* 800AA8C8 000A7808  90 A1 00 10 */	stw r5, 0x10(r1)
/* 800AA8CC 000A780C  38 A0 00 00 */	li r5, 0
/* 800AA8D0 000A7810  90 01 00 08 */	stw r0, 8(r1)
/* 800AA8D4 000A7814  48 00 01 2D */	bl DSPSendCommands2__FPUlUlPFUs_v
/* 800AA8D8 000A7818  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800AA8DC 000A781C  7C 08 03 A6 */	mtlr r0
/* 800AA8E0 000A7820  38 21 00 20 */	addi r1, r1, 0x20
/* 800AA8E4 000A7824  4E 80 00 20 */	blr 
