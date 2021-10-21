.include "macros.inc"
.section .sbss # 0x80514D80 - 0x80516360
.balign 0x8
.global __aborting
__aborting:
	.skip 0x4
.global __atexit_curr_func
__atexit_curr_func:
	.skip 0x4
.global __stdio_exit
__stdio_exit:
	.skip 0x4
.global __console_exit
__console_exit:
	.skip 0x4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global exit
exit:
/* 800C2460 000BF3A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C2464 000BF3A4  7C 08 02 A6 */	mflr r0
/* 800C2468 000BF3A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C246C 000BF3AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800C2470 000BF3B0  80 0D 8C A8 */	lwz r0, __aborting@sda21(r13)
/* 800C2474 000BF3B4  2C 00 00 00 */	cmpwi r0, 0
/* 800C2478 000BF3B8  40 82 00 5C */	bne lbl_800C24D4
/* 800C247C 000BF3BC  38 60 00 00 */	li r3, 0
/* 800C2480 000BF3C0  48 00 3D DD */	bl __begin_critical_region
/* 800C2484 000BF3C4  38 60 00 00 */	li r3, 0
/* 800C2488 000BF3C8  48 00 3D D1 */	bl __end_critical_region
/* 800C248C 000BF3CC  4B FF F2 2D */	bl __destroy_global_chain
/* 800C2490 000BF3D0  3C 60 80 47 */	lis r3, __destroy_global_chain_reference@ha
/* 800C2494 000BF3D4  38 03 32 C0 */	addi r0, r3, __destroy_global_chain_reference@l
/* 800C2498 000BF3D8  7C 1F 03 78 */	mr r31, r0
/* 800C249C 000BF3DC  48 00 00 10 */	b lbl_800C24AC
lbl_800C24A0:
/* 800C24A0 000BF3E0  7D 89 03 A6 */	mtctr r12
/* 800C24A4 000BF3E4  4E 80 04 21 */	bctrl 
/* 800C24A8 000BF3E8  3B FF 00 04 */	addi r31, r31, 4
lbl_800C24AC:
/* 800C24AC 000BF3EC  81 9F 00 00 */	lwz r12, 0(r31)
/* 800C24B0 000BF3F0  28 0C 00 00 */	cmplwi r12, 0
/* 800C24B4 000BF3F4  40 82 FF EC */	bne lbl_800C24A0
/* 800C24B8 000BF3F8  81 8D 8C B0 */	lwz r12, __stdio_exit@sda21(r13)
/* 800C24BC 000BF3FC  28 0C 00 00 */	cmplwi r12, 0
/* 800C24C0 000BF400  41 82 00 14 */	beq lbl_800C24D4
/* 800C24C4 000BF404  7D 89 03 A6 */	mtctr r12
/* 800C24C8 000BF408  4E 80 04 21 */	bctrl 
/* 800C24CC 000BF40C  38 00 00 00 */	li r0, 0
/* 800C24D0 000BF410  90 0D 8C B0 */	stw r0, __stdio_exit@sda21(r13)
lbl_800C24D4:
/* 800C24D4 000BF414  38 60 00 00 */	li r3, 0
/* 800C24D8 000BF418  48 00 3D 85 */	bl __begin_critical_region
/* 800C24DC 000BF41C  3C 60 80 4F */	lis r3, __atexit_funcs@ha
/* 800C24E0 000BF420  3B E3 55 70 */	addi r31, r3, __atexit_funcs@l
/* 800C24E4 000BF424  48 00 00 20 */	b lbl_800C2504
lbl_800C24E8:
/* 800C24E8 000BF428  80 6D 8C AC */	lwz r3, __atexit_curr_func@sda21(r13)
/* 800C24EC 000BF42C  38 63 FF FF */	addi r3, r3, -1
/* 800C24F0 000BF430  54 60 10 3A */	slwi r0, r3, 2
/* 800C24F4 000BF434  90 6D 8C AC */	stw r3, __atexit_curr_func@sda21(r13)
/* 800C24F8 000BF438  7D 9F 00 2E */	lwzx r12, r31, r0
/* 800C24FC 000BF43C  7D 89 03 A6 */	mtctr r12
/* 800C2500 000BF440  4E 80 04 21 */	bctrl 
lbl_800C2504:
/* 800C2504 000BF444  80 0D 8C AC */	lwz r0, __atexit_curr_func@sda21(r13)
/* 800C2508 000BF448  2C 00 00 00 */	cmpwi r0, 0
/* 800C250C 000BF44C  41 81 FF DC */	bgt lbl_800C24E8
/* 800C2510 000BF450  38 60 00 00 */	li r3, 0
/* 800C2514 000BF454  48 00 3D 45 */	bl __end_critical_region
/* 800C2518 000BF458  48 00 3D 49 */	bl __kill_critical_regions
/* 800C251C 000BF45C  81 8D 8C B4 */	lwz r12, __console_exit@sda21(r13)
/* 800C2520 000BF460  28 0C 00 00 */	cmplwi r12, 0
/* 800C2524 000BF464  41 82 00 14 */	beq lbl_800C2538
/* 800C2528 000BF468  7D 89 03 A6 */	mtctr r12
/* 800C252C 000BF46C  4E 80 04 21 */	bctrl 
/* 800C2530 000BF470  38 00 00 00 */	li r0, 0
/* 800C2534 000BF474  90 0D 8C B4 */	stw r0, __console_exit@sda21(r13)
lbl_800C2538:
/* 800C2538 000BF478  48 03 0A F1 */	bl _ExitProcess
/* 800C253C 000BF47C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C2540 000BF480  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800C2544 000BF484  7C 08 03 A6 */	mtlr r0
/* 800C2548 000BF488  38 21 00 10 */	addi r1, r1, 0x10
/* 800C254C 000BF48C  4E 80 00 20 */	blr 
