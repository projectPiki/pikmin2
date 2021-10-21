.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global lbl_804A7920
lbl_804A7920:
	.asciz "DBExceptionDestination\n"

.section .sbss # 0x80514D80 - 0x80516360
.balign 0x8
.global __DBInterface
__DBInterface:
	.skip 0x4
.global DBVerbose
DBVerbose:
	.skip 0x4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global DBInit
DBInit:
/* 800DABC4 000D7B04  3C 80 80 00 */	lis r4, 0x80000040@ha
/* 800DABC8 000D7B08  38 04 00 40 */	addi r0, r4, 0x80000040@l
/* 800DABCC 000D7B0C  3C 60 80 0E */	lis r3, __DBExceptionDestination@ha
/* 800DABD0 000D7B10  90 0D 8D A8 */	stw r0, __DBInterface@sda21(r13)
/* 800DABD4 000D7B14  38 63 AC 34 */	addi r3, r3, __DBExceptionDestination@l
/* 800DABD8 000D7B18  3C 03 80 00 */	addis r0, r3, 0x8000
/* 800DABDC 000D7B1C  90 04 00 48 */	stw r0, 0x48(r4)
/* 800DABE0 000D7B20  38 00 00 01 */	li r0, 1
/* 800DABE4 000D7B24  90 0D 8D AC */	stw r0, DBVerbose@sda21(r13)
/* 800DABE8 000D7B28  4E 80 00 20 */	blr 

.global __DBExceptionDestinationAux
__DBExceptionDestinationAux:
/* 800DABEC 000D7B2C  7C 08 02 A6 */	mflr r0
/* 800DABF0 000D7B30  3C 60 80 4A */	lis r3, lbl_804A7920@ha
/* 800DABF4 000D7B34  90 01 00 04 */	stw r0, 4(r1)
/* 800DABF8 000D7B38  38 63 79 20 */	addi r3, r3, lbl_804A7920@l
/* 800DABFC 000D7B3C  4C C6 31 82 */	crclr 6
/* 800DAC00 000D7B40  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 800DAC04 000D7B44  93 E1 00 14 */	stw r31, 0x14(r1)
/* 800DAC08 000D7B48  80 80 00 C0 */	lwz r4, 0xc0(0)
/* 800DAC0C 000D7B4C  3F E4 80 00 */	addis r31, r4, 0x8000
/* 800DAC10 000D7B50  48 01 2A DD */	bl OSReport
/* 800DAC14 000D7B54  7F E3 FB 78 */	mr r3, r31
/* 800DAC18 000D7B58  48 01 26 35 */	bl OSDumpContext
/* 800DAC1C 000D7B5C  4B FF 99 7D */	bl PPCHalt
/* 800DAC20 000D7B60  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 800DAC24 000D7B64  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 800DAC28 000D7B68  38 21 00 18 */	addi r1, r1, 0x18
/* 800DAC2C 000D7B6C  7C 08 03 A6 */	mtlr r0
/* 800DAC30 000D7B70  4E 80 00 20 */	blr 

.global __DBExceptionDestination
__DBExceptionDestination:
/* 800DAC34 000D7B74  7C 60 00 A6 */	mfmsr r3
/* 800DAC38 000D7B78  60 63 00 30 */	ori r3, r3, 0x30
/* 800DAC3C 000D7B7C  7C 60 01 24 */	mtmsr r3
/* 800DAC40 000D7B80  4B FF FF AC */	b __DBExceptionDestinationAux

.global __DBIsExceptionMarked
__DBIsExceptionMarked:
/* 800DAC44 000D7B84  80 8D 8D A8 */	lwz r4, __DBInterface@sda21(r13)
/* 800DAC48 000D7B88  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 800DAC4C 000D7B8C  38 60 00 01 */	li r3, 1
/* 800DAC50 000D7B90  80 84 00 04 */	lwz r4, 4(r4)
/* 800DAC54 000D7B94  7C 60 00 30 */	slw r0, r3, r0
/* 800DAC58 000D7B98  7C 83 00 38 */	and r3, r4, r0
/* 800DAC5C 000D7B9C  4E 80 00 20 */	blr 

.global DBPrintf
DBPrintf:
/* 800DAC60 000D7BA0  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 800DAC64 000D7BA4  40 86 00 24 */	bne cr1, lbl_800DAC88
/* 800DAC68 000D7BA8  D8 21 00 28 */	stfd f1, 0x28(r1)
/* 800DAC6C 000D7BAC  D8 41 00 30 */	stfd f2, 0x30(r1)
/* 800DAC70 000D7BB0  D8 61 00 38 */	stfd f3, 0x38(r1)
/* 800DAC74 000D7BB4  D8 81 00 40 */	stfd f4, 0x40(r1)
/* 800DAC78 000D7BB8  D8 A1 00 48 */	stfd f5, 0x48(r1)
/* 800DAC7C 000D7BBC  D8 C1 00 50 */	stfd f6, 0x50(r1)
/* 800DAC80 000D7BC0  D8 E1 00 58 */	stfd f7, 0x58(r1)
/* 800DAC84 000D7BC4  D9 01 00 60 */	stfd f8, 0x60(r1)
lbl_800DAC88:
/* 800DAC88 000D7BC8  90 61 00 08 */	stw r3, 8(r1)
/* 800DAC8C 000D7BCC  90 81 00 0C */	stw r4, 0xc(r1)
/* 800DAC90 000D7BD0  90 A1 00 10 */	stw r5, 0x10(r1)
/* 800DAC94 000D7BD4  90 C1 00 14 */	stw r6, 0x14(r1)
/* 800DAC98 000D7BD8  90 E1 00 18 */	stw r7, 0x18(r1)
/* 800DAC9C 000D7BDC  91 01 00 1C */	stw r8, 0x1c(r1)
/* 800DACA0 000D7BE0  91 21 00 20 */	stw r9, 0x20(r1)
/* 800DACA4 000D7BE4  91 41 00 24 */	stw r10, 0x24(r1)
/* 800DACA8 000D7BE8  38 21 00 70 */	addi r1, r1, 0x70
/* 800DACAC 000D7BEC  4E 80 00 20 */	blr 
