.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global EndofProgramInstruction$162
EndofProgramInstruction$162:
	.4byte 0x00454E44
.global lbl_80479C4C
lbl_80479C4C:
	.4byte 0x25730A00
	.4byte 0x4465766B
	.4byte 0x69742073
	.4byte 0x65742074
	.4byte 0x6F203A20
	.4byte 0x256C640A
	.4byte 0x00000000
	.4byte 0x4D657472
	.4byte 0x6F54524B
	.4byte 0x203A2053
	.4byte 0x65742074
	.4byte 0x6F204242
	.4byte 0x410A0000
	.4byte 0x4D657472
	.4byte 0x6F54524B
	.4byte 0x203A2053
	.4byte 0x65742074
	.4byte 0x6F204744
	.4byte 0x45562068
	.4byte 0x61726477
	.4byte 0x6172650A
	.4byte 0x00000000
	.4byte 0x4D657472
	.4byte 0x6F54524B
	.4byte 0x203A2053
	.4byte 0x65742074
	.4byte 0x6F20414D
	.4byte 0x43204444
	.4byte 0x48206861
	.4byte 0x72647761
	.4byte 0x72650A00
	.4byte 0x4D657472
	.4byte 0x6F54524B
	.4byte 0x203A2053
	.4byte 0x65742074
	.4byte 0x6F20554E
	.4byte 0x4B4E4F57
	.4byte 0x4E206861
	.4byte 0x72647761
	.4byte 0x72652E20
	.4byte 0x28256C64
	.4byte 0x290A0000
	.4byte 0x4D657472
	.4byte 0x6F54524B
	.4byte 0x203A2049
	.4byte 0x6E76616C
	.4byte 0x69642068
	.4byte 0x61726477
	.4byte 0x61726520
	.4byte 0x49442070
	.4byte 0x61737365
	.4byte 0x64206672
	.4byte 0x6F6D204F
	.4byte 0x530A0000
	.4byte 0x4D657472
	.4byte 0x6F54524B
	.4byte 0x203A2044
	.4byte 0x65666175
	.4byte 0x6C74696E
	.4byte 0x6720746F
	.4byte 0x20474445
	.4byte 0x56204861
	.4byte 0x72647761
	.4byte 0x72650A00
	.4byte 0x00000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global gDBCommTable
gDBCommTable:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000

.section .bss  # 0x804EFC20 - 0x8051467C
.balign 8
.global TRK_Use_BBA
TRK_Use_BBA:
	.skip 0x4
.global _MetroTRK_Has_Framing
_MetroTRK_Has_Framing:
	.skip 0x4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global TRKLoadContext
TRKLoadContext:
/* 800C0464 000BD3A4  80 03 00 00 */	lwz r0, 0(r3)
/* 800C0468 000BD3A8  80 23 00 04 */	lwz r1, 4(r3)
/* 800C046C 000BD3AC  80 43 00 08 */	lwz r2, 8(r3)
/* 800C0470 000BD3B0  A0 A3 01 A2 */	lhz r5, 0x1a2(r3)
/* 800C0474 000BD3B4  54 A6 07 BD */	rlwinm. r6, r5, 0, 0x1e, 0x1e
/* 800C0478 000BD3B8  41 82 00 14 */	beq .L_800C048C
/* 800C047C 000BD3BC  54 A5 07 FA */	rlwinm r5, r5, 0, 0x1f, 0x1d
/* 800C0480 000BD3C0  B0 A3 01 A2 */	sth r5, 0x1a2(r3)
/* 800C0484 000BD3C4  B8 A3 00 14 */	lmw r5, 0x14(r3)
/* 800C0488 000BD3C8  48 00 00 08 */	b .L_800C0490
.L_800C048C:
/* 800C048C 000BD3CC  B9 A3 00 34 */	lmw r13, 0x34(r3)
.L_800C0490:
/* 800C0490 000BD3D0  7C 7F 1B 78 */	mr r31, r3
/* 800C0494 000BD3D4  7C 83 23 78 */	mr r3, r4
/* 800C0498 000BD3D8  80 9F 00 80 */	lwz r4, 0x80(r31)
/* 800C049C 000BD3DC  7C 8F F1 20 */	mtcrf 0xff, r4
/* 800C04A0 000BD3E0  80 9F 00 84 */	lwz r4, 0x84(r31)
/* 800C04A4 000BD3E4  7C 88 03 A6 */	mtlr r4
/* 800C04A8 000BD3E8  80 9F 00 88 */	lwz r4, 0x88(r31)
/* 800C04AC 000BD3EC  7C 89 03 A6 */	mtctr r4
/* 800C04B0 000BD3F0  80 9F 00 8C */	lwz r4, 0x8c(r31)
/* 800C04B4 000BD3F4  7C 81 03 A6 */	mtxer r4
/* 800C04B8 000BD3F8  7C 80 00 A6 */	mfmsr r4
/* 800C04BC 000BD3FC  54 84 04 5E */	rlwinm r4, r4, 0, 0x11, 0xf
/* 800C04C0 000BD400  54 84 07 FA */	rlwinm r4, r4, 0, 0x1f, 0x1d
/* 800C04C4 000BD404  7C 80 01 24 */	mtmsr r4
/* 800C04C8 000BD408  7C 51 43 A6 */	mtspr 0x111, r2
/* 800C04CC 000BD40C  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 800C04D0 000BD410  7C 92 43 A6 */	mtspr 0x112, r4
/* 800C04D4 000BD414  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 800C04D8 000BD418  7C 93 43 A6 */	mtspr 0x113, r4
/* 800C04DC 000BD41C  80 5F 01 98 */	lwz r2, 0x198(r31)
/* 800C04E0 000BD420  80 9F 01 9C */	lwz r4, 0x19c(r31)
/* 800C04E4 000BD424  83 FF 00 7C */	lwz r31, 0x7c(r31)
/* 800C04E8 000BD428  4B FF DA 0C */	b TRKInterruptHandler

.global TRKUARTInterruptHandler
TRKUARTInterruptHandler:
/* 800C04EC 000BD42C  4E 80 00 20 */	blr 

.global InitializeProgramEndTrap
InitializeProgramEndTrap:
/* 800C04F0 000BD430  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C04F4 000BD434  7C 08 02 A6 */	mflr r0
/* 800C04F8 000BD438  3C 80 80 0D */	lis r4, PPCHalt@ha
/* 800C04FC 000BD43C  3C 60 80 48 */	lis r3, EndofProgramInstruction$162@ha
/* 800C0500 000BD440  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C0504 000BD444  38 A0 00 04 */	li r5, 4
/* 800C0508 000BD448  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800C050C 000BD44C  3B E4 45 98 */	addi r31, r4, PPCHalt@l
/* 800C0510 000BD450  38 83 9C 48 */	addi r4, r3, EndofProgramInstruction$162@l
/* 800C0514 000BD454  38 7F 00 04 */	addi r3, r31, 4
/* 800C0518 000BD458  4B F4 2C 19 */	bl TRK_memcpy
/* 800C051C 000BD45C  38 7F 00 04 */	addi r3, r31, 4
/* 800C0520 000BD460  38 80 00 04 */	li r4, 4
/* 800C0524 000BD464  48 02 C2 D9 */	bl ICInvalidateRange
/* 800C0528 000BD468  38 7F 00 04 */	addi r3, r31, 4
/* 800C052C 000BD46C  38 80 00 04 */	li r4, 4
/* 800C0530 000BD470  48 02 C1 E9 */	bl DCFlushRange
/* 800C0534 000BD474  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C0538 000BD478  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800C053C 000BD47C  7C 08 03 A6 */	mtlr r0
/* 800C0540 000BD480  38 21 00 10 */	addi r1, r1, 0x10
/* 800C0544 000BD484  4E 80 00 20 */	blr 

.global TRK_board_display
TRK_board_display:
/* 800C0548 000BD488  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C054C 000BD48C  7C 08 02 A6 */	mflr r0
/* 800C0550 000BD490  3C A0 80 48 */	lis r5, lbl_80479C4C@ha
/* 800C0554 000BD494  7C 64 1B 78 */	mr r4, r3
/* 800C0558 000BD498  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C055C 000BD49C  38 65 9C 4C */	addi r3, r5, lbl_80479C4C@l
/* 800C0560 000BD4A0  4C C6 31 82 */	crclr 6
/* 800C0564 000BD4A4  48 02 D1 89 */	bl OSReport
/* 800C0568 000BD4A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C056C 000BD4AC  7C 08 03 A6 */	mtlr r0
/* 800C0570 000BD4B0  38 21 00 10 */	addi r1, r1, 0x10
/* 800C0574 000BD4B4  4E 80 00 20 */	blr 

.global UnreserveEXI2Port
UnreserveEXI2Port:
/* 800C0578 000BD4B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C057C 000BD4BC  7C 08 02 A6 */	mflr r0
/* 800C0580 000BD4C0  3C 60 80 4A */	lis r3, gDBCommTable@ha
/* 800C0584 000BD4C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C0588 000BD4C8  38 63 69 20 */	addi r3, r3, gDBCommTable@l
/* 800C058C 000BD4CC  81 83 00 20 */	lwz r12, 0x20(r3)
/* 800C0590 000BD4D0  7D 89 03 A6 */	mtctr r12
/* 800C0594 000BD4D4  4E 80 04 21 */	bctrl 
/* 800C0598 000BD4D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C059C 000BD4DC  7C 08 03 A6 */	mtlr r0
/* 800C05A0 000BD4E0  38 21 00 10 */	addi r1, r1, 0x10
/* 800C05A4 000BD4E4  4E 80 00 20 */	blr 

.global ReserveEXI2Port
ReserveEXI2Port:
/* 800C05A8 000BD4E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C05AC 000BD4EC  7C 08 02 A6 */	mflr r0
/* 800C05B0 000BD4F0  3C 60 80 4A */	lis r3, gDBCommTable@ha
/* 800C05B4 000BD4F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C05B8 000BD4F8  38 63 69 20 */	addi r3, r3, gDBCommTable@l
/* 800C05BC 000BD4FC  81 83 00 24 */	lwz r12, 0x24(r3)
/* 800C05C0 000BD500  7D 89 03 A6 */	mtctr r12
/* 800C05C4 000BD504  4E 80 04 21 */	bctrl 
/* 800C05C8 000BD508  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C05CC 000BD50C  7C 08 03 A6 */	mtlr r0
/* 800C05D0 000BD510  38 21 00 10 */	addi r1, r1, 0x10
/* 800C05D4 000BD514  4E 80 00 20 */	blr 

.global TRKWriteUARTN
TRKWriteUARTN:
/* 800C05D8 000BD518  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C05DC 000BD51C  7C 08 02 A6 */	mflr r0
/* 800C05E0 000BD520  3C A0 80 4A */	lis r5, gDBCommTable@ha
/* 800C05E4 000BD524  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C05E8 000BD528  38 A5 69 20 */	addi r5, r5, gDBCommTable@l
/* 800C05EC 000BD52C  81 85 00 14 */	lwz r12, 0x14(r5)
/* 800C05F0 000BD530  7D 89 03 A6 */	mtctr r12
/* 800C05F4 000BD534  4E 80 04 21 */	bctrl 
/* 800C05F8 000BD538  7C 03 00 D0 */	neg r0, r3
/* 800C05FC 000BD53C  7C 00 1B 78 */	or r0, r0, r3
/* 800C0600 000BD540  7C 03 FE 70 */	srawi r3, r0, 0x1f
/* 800C0604 000BD544  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C0608 000BD548  7C 08 03 A6 */	mtlr r0
/* 800C060C 000BD54C  38 21 00 10 */	addi r1, r1, 0x10
/* 800C0610 000BD550  4E 80 00 20 */	blr 

.global TRKReadUARTN
TRKReadUARTN:
/* 800C0614 000BD554  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C0618 000BD558  7C 08 02 A6 */	mflr r0
/* 800C061C 000BD55C  3C A0 80 4A */	lis r5, gDBCommTable@ha
/* 800C0620 000BD560  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C0624 000BD564  38 A5 69 20 */	addi r5, r5, gDBCommTable@l
/* 800C0628 000BD568  81 85 00 10 */	lwz r12, 0x10(r5)
/* 800C062C 000BD56C  7D 89 03 A6 */	mtctr r12
/* 800C0630 000BD570  4E 80 04 21 */	bctrl 
/* 800C0634 000BD574  7C 03 00 D0 */	neg r0, r3
/* 800C0638 000BD578  7C 00 1B 78 */	or r0, r0, r3
/* 800C063C 000BD57C  7C 03 FE 70 */	srawi r3, r0, 0x1f
/* 800C0640 000BD580  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C0644 000BD584  7C 08 03 A6 */	mtlr r0
/* 800C0648 000BD588  38 21 00 10 */	addi r1, r1, 0x10
/* 800C064C 000BD58C  4E 80 00 20 */	blr 

.global TRKPollUART
TRKPollUART:
/* 800C0650 000BD590  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C0654 000BD594  7C 08 02 A6 */	mflr r0
/* 800C0658 000BD598  3C 60 80 4A */	lis r3, gDBCommTable@ha
/* 800C065C 000BD59C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C0660 000BD5A0  38 63 69 20 */	addi r3, r3, gDBCommTable@l
/* 800C0664 000BD5A4  81 83 00 0C */	lwz r12, 0xc(r3)
/* 800C0668 000BD5A8  7D 89 03 A6 */	mtctr r12
/* 800C066C 000BD5AC  4E 80 04 21 */	bctrl 
/* 800C0670 000BD5B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C0674 000BD5B4  7C 08 03 A6 */	mtlr r0
/* 800C0678 000BD5B8  38 21 00 10 */	addi r1, r1, 0x10
/* 800C067C 000BD5BC  4E 80 00 20 */	blr 

.global EnableEXI2Interrupts
EnableEXI2Interrupts:
/* 800C0680 000BD5C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C0684 000BD5C4  7C 08 02 A6 */	mflr r0
/* 800C0688 000BD5C8  3C 60 80 4F */	lis r3, TRK_Use_BBA@ha
/* 800C068C 000BD5CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C0690 000BD5D0  88 03 48 10 */	lbz r0, TRK_Use_BBA@l(r3)
/* 800C0694 000BD5D4  28 00 00 00 */	cmplwi r0, 0
/* 800C0698 000BD5D8  40 82 00 20 */	bne .L_800C06B8
/* 800C069C 000BD5DC  3C 60 80 4A */	lis r3, gDBCommTable@ha
/* 800C06A0 000BD5E0  38 63 69 20 */	addi r3, r3, gDBCommTable@l
/* 800C06A4 000BD5E4  81 83 00 04 */	lwz r12, 4(r3)
/* 800C06A8 000BD5E8  28 0C 00 00 */	cmplwi r12, 0
/* 800C06AC 000BD5EC  41 82 00 0C */	beq .L_800C06B8
/* 800C06B0 000BD5F0  7D 89 03 A6 */	mtctr r12
/* 800C06B4 000BD5F4  4E 80 04 21 */	bctrl 
.L_800C06B8:
/* 800C06B8 000BD5F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C06BC 000BD5FC  7C 08 03 A6 */	mtlr r0
/* 800C06C0 000BD600  38 21 00 10 */	addi r1, r1, 0x10
/* 800C06C4 000BD604  4E 80 00 20 */	blr 

.global TRKInitializeIntDrivenUART
TRKInitializeIntDrivenUART:
/* 800C06C8 000BD608  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C06CC 000BD60C  7C 08 02 A6 */	mflr r0
/* 800C06D0 000BD610  3C 80 80 0C */	lis r4, TRKEXICallBack@ha
/* 800C06D4 000BD614  3C 60 80 4A */	lis r3, gDBCommTable@ha
/* 800C06D8 000BD618  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C06DC 000BD61C  38 84 09 84 */	addi r4, r4, TRKEXICallBack@l
/* 800C06E0 000BD620  81 83 69 20 */	lwz r12, gDBCommTable@l(r3)
/* 800C06E4 000BD624  7C C3 33 78 */	mr r3, r6
/* 800C06E8 000BD628  7D 89 03 A6 */	mtctr r12
/* 800C06EC 000BD62C  4E 80 04 21 */	bctrl 
/* 800C06F0 000BD630  3C 60 80 4A */	lis r3, gDBCommTable@ha
/* 800C06F4 000BD634  38 63 69 20 */	addi r3, r3, gDBCommTable@l
/* 800C06F8 000BD638  81 83 00 18 */	lwz r12, 0x18(r3)
/* 800C06FC 000BD63C  7D 89 03 A6 */	mtctr r12
/* 800C0700 000BD640  4E 80 04 21 */	bctrl 
/* 800C0704 000BD644  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C0708 000BD648  38 60 00 00 */	li r3, 0
/* 800C070C 000BD64C  7C 08 03 A6 */	mtlr r0
/* 800C0710 000BD650  38 21 00 10 */	addi r1, r1, 0x10
/* 800C0714 000BD654  4E 80 00 20 */	blr 

.global InitMetroTRKCommTable
InitMetroTRKCommTable:
/* 800C0718 000BD658  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800C071C 000BD65C  7C 08 02 A6 */	mflr r0
/* 800C0720 000BD660  3C 80 80 48 */	lis r4, EndofProgramInstruction$162@ha
/* 800C0724 000BD664  90 01 00 24 */	stw r0, 0x24(r1)
/* 800C0728 000BD668  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800C072C 000BD66C  3B E0 00 01 */	li r31, 1
/* 800C0730 000BD670  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800C0734 000BD674  7C 7E 1B 78 */	mr r30, r3
/* 800C0738 000BD678  93 A1 00 14 */	stw r29, 0x14(r1)
/* 800C073C 000BD67C  3B A4 9C 48 */	addi r29, r4, EndofProgramInstruction$162@l
/* 800C0740 000BD680  7F C4 F3 78 */	mr r4, r30
/* 800C0744 000BD684  38 7D 00 08 */	addi r3, r29, 8
/* 800C0748 000BD688  4C C6 31 82 */	crclr 6
/* 800C074C 000BD68C  48 02 CF A1 */	bl OSReport
/* 800C0750 000BD690  3C 60 80 4F */	lis r3, TRK_Use_BBA@ha
/* 800C0754 000BD694  38 00 00 00 */	li r0, 0
/* 800C0758 000BD698  2C 1E 00 02 */	cmpwi r30, 2
/* 800C075C 000BD69C  98 03 48 10 */	stb r0, TRK_Use_BBA@l(r3)
/* 800C0760 000BD6A0  40 82 00 A4 */	bne .L_800C0804
/* 800C0764 000BD6A4  38 7D 00 20 */	addi r3, r29, 0x20
/* 800C0768 000BD6A8  4C C6 31 82 */	crclr 6
/* 800C076C 000BD6AC  48 02 CF 81 */	bl OSReport
/* 800C0770 000BD6B0  3F C0 80 4F */	lis r30, TRK_Use_BBA@ha
/* 800C0774 000BD6B4  3D 80 80 0C */	lis r12, udp_cc_initialize@ha
/* 800C0778 000BD6B8  3D 60 80 4A */	lis r11, gDBCommTable@ha
/* 800C077C 000BD6BC  3D 40 80 0C */	lis r10, udp_cc_open@ha
/* 800C0780 000BD6C0  3D 20 80 0C */	lis r9, udp_cc_close@ha
/* 800C0784 000BD6C4  3D 00 80 0C */	lis r8, udp_cc_read@ha
/* 800C0788 000BD6C8  3C E0 80 0C */	lis r7, udp_cc_write@ha
/* 800C078C 000BD6CC  3C C0 80 0C */	lis r6, udp_cc_shutdown@ha
/* 800C0790 000BD6D0  3C A0 80 0C */	lis r5, udp_cc_peek@ha
/* 800C0794 000BD6D4  3C 80 80 0C */	lis r4, udp_cc_pre_continue@ha
/* 800C0798 000BD6D8  3C 60 80 0C */	lis r3, udp_cc_post_stop@ha
/* 800C079C 000BD6DC  3B FE 48 10 */	addi r31, r30, TRK_Use_BBA@l
/* 800C07A0 000BD6E0  3B A0 00 01 */	li r29, 1
/* 800C07A4 000BD6E4  3B CC 0C 48 */	addi r30, r12, udp_cc_initialize@l
/* 800C07A8 000BD6E8  39 8B 69 20 */	addi r12, r11, gDBCommTable@l
/* 800C07AC 000BD6EC  39 6A 0C 38 */	addi r11, r10, udp_cc_open@l
/* 800C07B0 000BD6F0  39 49 0C 30 */	addi r10, r9, udp_cc_close@l
/* 800C07B4 000BD6F4  39 28 0C 28 */	addi r9, r8, udp_cc_read@l
/* 800C07B8 000BD6F8  39 07 0C 20 */	addi r8, r7, udp_cc_write@l
/* 800C07BC 000BD6FC  38 E6 0C 40 */	addi r7, r6, udp_cc_shutdown@l
/* 800C07C0 000BD700  38 C5 0C 18 */	addi r6, r5, udp_cc_peek@l
/* 800C07C4 000BD704  38 A4 0C 10 */	addi r5, r4, udp_cc_pre_continue@l
/* 800C07C8 000BD708  38 83 0C 08 */	addi r4, r3, udp_cc_post_stop@l
/* 800C07CC 000BD70C  38 00 00 00 */	li r0, 0
/* 800C07D0 000BD710  9B BF 00 00 */	stb r29, 0(r31)
/* 800C07D4 000BD714  38 60 00 00 */	li r3, 0
/* 800C07D8 000BD718  93 CC 00 00 */	stw r30, 0(r12)
/* 800C07DC 000BD71C  91 6C 00 18 */	stw r11, 0x18(r12)
/* 800C07E0 000BD720  91 4C 00 1C */	stw r10, 0x1c(r12)
/* 800C07E4 000BD724  91 2C 00 10 */	stw r9, 0x10(r12)
/* 800C07E8 000BD728  91 0C 00 14 */	stw r8, 0x14(r12)
/* 800C07EC 000BD72C  90 EC 00 08 */	stw r7, 8(r12)
/* 800C07F0 000BD730  90 CC 00 0C */	stw r6, 0xc(r12)
/* 800C07F4 000BD734  90 AC 00 20 */	stw r5, 0x20(r12)
/* 800C07F8 000BD738  90 8C 00 24 */	stw r4, 0x24(r12)
/* 800C07FC 000BD73C  90 0C 00 04 */	stw r0, 4(r12)
/* 800C0800 000BD740  48 00 01 68 */	b .L_800C0968
.L_800C0804:
/* 800C0804 000BD744  2C 1E 00 01 */	cmpwi r30, 1
/* 800C0808 000BD748  40 82 00 98 */	bne .L_800C08A0
/* 800C080C 000BD74C  38 7D 00 38 */	addi r3, r29, 0x38
/* 800C0810 000BD750  4C C6 31 82 */	crclr 6
/* 800C0814 000BD754  48 02 CE D9 */	bl OSReport
/* 800C0818 000BD758  48 02 A7 A9 */	bl Hu_IsStub
/* 800C081C 000BD75C  3F E0 80 0C */	lis r31, gdev_cc_initialize@ha
/* 800C0820 000BD760  3D 80 80 0C */	lis r12, gdev_cc_open@ha
/* 800C0824 000BD764  3B FF 14 C0 */	addi r31, r31, gdev_cc_initialize@l
/* 800C0828 000BD768  3F C0 80 4A */	lis r30, gDBCommTable@ha
/* 800C082C 000BD76C  3D 60 80 0C */	lis r11, gdev_cc_close@ha
/* 800C0830 000BD770  3D 40 80 0C */	lis r10, gdev_cc_read@ha
/* 800C0834 000BD774  3D 20 80 0C */	lis r9, gdev_cc_write@ha
/* 800C0838 000BD778  3D 00 80 0C */	lis r8, gdev_cc_shutdown@ha
/* 800C083C 000BD77C  3C E0 80 0C */	lis r7, gdev_cc_peek@ha
/* 800C0840 000BD780  3C C0 80 0C */	lis r6, gdev_cc_pre_continue@ha
/* 800C0844 000BD784  3C A0 80 0C */	lis r5, gdev_cc_post_stop@ha
/* 800C0848 000BD788  3C 80 80 0C */	lis r4, gdev_cc_initinterrupts@ha
/* 800C084C 000BD78C  97 FE 69 20 */	stwu r31, gDBCommTable@l(r30)
/* 800C0850 000BD790  39 8C 14 94 */	addi r12, r12, gdev_cc_open@l
/* 800C0854 000BD794  39 6B 14 8C */	addi r11, r11, gdev_cc_close@l
/* 800C0858 000BD798  39 4A 13 98 */	addi r10, r10, gdev_cc_read@l
/* 800C085C 000BD79C  39 29 12 D8 */	addi r9, r9, gdev_cc_write@l
/* 800C0860 000BD7A0  39 08 14 B8 */	addi r8, r8, gdev_cc_shutdown@l
/* 800C0864 000BD7A4  38 E7 12 20 */	addi r7, r7, gdev_cc_peek@l
/* 800C0868 000BD7A8  38 C6 12 B4 */	addi r6, r6, gdev_cc_pre_continue@l
/* 800C086C 000BD7AC  38 A5 12 90 */	addi r5, r5, gdev_cc_post_stop@l
/* 800C0870 000BD7B0  38 04 11 FC */	addi r0, r4, gdev_cc_initinterrupts@l
/* 800C0874 000BD7B4  91 9E 00 18 */	stw r12, 0x18(r30)
/* 800C0878 000BD7B8  7C 7F 1B 78 */	mr r31, r3
/* 800C087C 000BD7BC  91 7E 00 1C */	stw r11, 0x1c(r30)
/* 800C0880 000BD7C0  91 5E 00 10 */	stw r10, 0x10(r30)
/* 800C0884 000BD7C4  91 3E 00 14 */	stw r9, 0x14(r30)
/* 800C0888 000BD7C8  91 1E 00 08 */	stw r8, 8(r30)
/* 800C088C 000BD7CC  90 FE 00 0C */	stw r7, 0xc(r30)
/* 800C0890 000BD7D0  90 DE 00 20 */	stw r6, 0x20(r30)
/* 800C0894 000BD7D4  90 BE 00 24 */	stw r5, 0x24(r30)
/* 800C0898 000BD7D8  90 1E 00 04 */	stw r0, 4(r30)
/* 800C089C 000BD7DC  48 00 00 C8 */	b .L_800C0964
.L_800C08A0:
/* 800C08A0 000BD7E0  2C 1E 00 00 */	cmpwi r30, 0
/* 800C08A4 000BD7E4  40 82 00 98 */	bne .L_800C093C
/* 800C08A8 000BD7E8  38 7D 00 5C */	addi r3, r29, 0x5c
/* 800C08AC 000BD7EC  4C C6 31 82 */	crclr 6
/* 800C08B0 000BD7F0  48 02 CE 3D */	bl OSReport
/* 800C08B4 000BD7F4  48 01 1D B9 */	bl AMC_IsStub
/* 800C08B8 000BD7F8  3F E0 80 0C */	lis r31, ddh_cc_initialize@ha
/* 800C08BC 000BD7FC  3D 80 80 0C */	lis r12, ddh_cc_open@ha
/* 800C08C0 000BD800  3B FF 0F 0C */	addi r31, r31, ddh_cc_initialize@l
/* 800C08C4 000BD804  3F C0 80 4A */	lis r30, gDBCommTable@ha
/* 800C08C8 000BD808  3D 60 80 0C */	lis r11, ddh_cc_close@ha
/* 800C08CC 000BD80C  3D 40 80 0C */	lis r10, ddh_cc_read@ha
/* 800C08D0 000BD810  3D 20 80 0C */	lis r9, ddh_cc_write@ha
/* 800C08D4 000BD814  3D 00 80 0C */	lis r8, ddh_cc_shutdown@ha
/* 800C08D8 000BD818  3C E0 80 0C */	lis r7, ddh_cc_peek@ha
/* 800C08DC 000BD81C  3C C0 80 0C */	lis r6, ddh_cc_pre_continue@ha
/* 800C08E0 000BD820  3C A0 80 0C */	lis r5, ddh_cc_post_stop@ha
/* 800C08E4 000BD824  3C 80 80 0C */	lis r4, ddh_cc_initinterrupts@ha
/* 800C08E8 000BD828  97 FE 69 20 */	stwu r31, gDBCommTable@l(r30)
/* 800C08EC 000BD82C  39 8C 0E E0 */	addi r12, r12, ddh_cc_open@l
/* 800C08F0 000BD830  39 6B 0E D8 */	addi r11, r11, ddh_cc_close@l
/* 800C08F4 000BD834  39 4A 0D EC */	addi r10, r10, ddh_cc_read@l
/* 800C08F8 000BD838  39 29 0D 2C */	addi r9, r9, ddh_cc_write@l
/* 800C08FC 000BD83C  39 08 0F 04 */	addi r8, r8, ddh_cc_shutdown@l
/* 800C0900 000BD840  38 E7 0C 74 */	addi r7, r7, ddh_cc_peek@l
/* 800C0904 000BD844  38 C6 0D 08 */	addi r6, r6, ddh_cc_pre_continue@l
/* 800C0908 000BD848  38 A5 0C E4 */	addi r5, r5, ddh_cc_post_stop@l
/* 800C090C 000BD84C  38 04 0C 50 */	addi r0, r4, ddh_cc_initinterrupts@l
/* 800C0910 000BD850  91 9E 00 18 */	stw r12, 0x18(r30)
/* 800C0914 000BD854  7C 7F 1B 78 */	mr r31, r3
/* 800C0918 000BD858  91 7E 00 1C */	stw r11, 0x1c(r30)
/* 800C091C 000BD85C  91 5E 00 10 */	stw r10, 0x10(r30)
/* 800C0920 000BD860  91 3E 00 14 */	stw r9, 0x14(r30)
/* 800C0924 000BD864  91 1E 00 08 */	stw r8, 8(r30)
/* 800C0928 000BD868  90 FE 00 0C */	stw r7, 0xc(r30)
/* 800C092C 000BD86C  90 DE 00 20 */	stw r6, 0x20(r30)
/* 800C0930 000BD870  90 BE 00 24 */	stw r5, 0x24(r30)
/* 800C0934 000BD874  90 1E 00 04 */	stw r0, 4(r30)
/* 800C0938 000BD878  48 00 00 2C */	b .L_800C0964
.L_800C093C:
/* 800C093C 000BD87C  7F C4 F3 78 */	mr r4, r30
/* 800C0940 000BD880  38 7D 00 80 */	addi r3, r29, 0x80
/* 800C0944 000BD884  4C C6 31 82 */	crclr 6
/* 800C0948 000BD888  48 02 CD A5 */	bl OSReport
/* 800C094C 000BD88C  38 7D 00 AC */	addi r3, r29, 0xac
/* 800C0950 000BD890  4C C6 31 82 */	crclr 6
/* 800C0954 000BD894  48 02 CD 99 */	bl OSReport
/* 800C0958 000BD898  38 7D 00 DC */	addi r3, r29, 0xdc
/* 800C095C 000BD89C  4C C6 31 82 */	crclr 6
/* 800C0960 000BD8A0  48 02 CD 8D */	bl OSReport
.L_800C0964:
/* 800C0964 000BD8A4  7F E3 FB 78 */	mr r3, r31
.L_800C0968:
/* 800C0968 000BD8A8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800C096C 000BD8AC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800C0970 000BD8B0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800C0974 000BD8B4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 800C0978 000BD8B8  7C 08 03 A6 */	mtlr r0
/* 800C097C 000BD8BC  38 21 00 20 */	addi r1, r1, 0x20
/* 800C0980 000BD8C0  4E 80 00 20 */	blr 

.global TRKEXICallBack
TRKEXICallBack:
/* 800C0984 000BD8C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C0988 000BD8C8  7C 08 02 A6 */	mflr r0
/* 800C098C 000BD8CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C0990 000BD8D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800C0994 000BD8D4  7C 9F 23 78 */	mr r31, r4
/* 800C0998 000BD8D8  48 03 10 AD */	bl OSEnableScheduler
/* 800C099C 000BD8DC  7F E3 FB 78 */	mr r3, r31
/* 800C09A0 000BD8E0  38 80 05 00 */	li r4, 0x500
/* 800C09A4 000BD8E4  4B FF FA C1 */	bl TRKLoadContext
/* 800C09A8 000BD8E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C09AC 000BD8EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800C09B0 000BD8F0  7C 08 03 A6 */	mtlr r0
/* 800C09B4 000BD8F4  38 21 00 10 */	addi r1, r1, 0x10
/* 800C09B8 000BD8F8  4E 80 00 20 */	blr 
