.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_pelletBirthBuffer_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_80483F28:
	.asciz "pelletBirthBuffer.cpp"
.balign 4
lbl_80483F40:
	.asciz "too many birthbuffer\n"

.section .bss  # 0x804EFC20 - 0x8051467C
# pelletBirthBuffer.cpp
.comm sArgs__Q24Game17PelletBirthBuffer, 0x1400, 4

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global sNum__Q24Game17PelletBirthBuffer
sNum__Q24Game17PelletBirthBuffer:
	.skip 4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global clear__Q24Game17PelletBirthBufferFv
clear__Q24Game17PelletBirthBufferFv:
/* 8023D41C 0023A35C  38 00 00 00 */	li r0, 0
/* 8023D420 0023A360  90 0D 96 58 */	stw r0, sNum__Q24Game17PelletBirthBuffer@sda21(r13)
/* 8023D424 0023A364  4E 80 00 20 */	blr 

.global entry__Q24Game17PelletBirthBufferFRQ24Game13PelletInitArg
entry__Q24Game17PelletBirthBufferFRQ24Game13PelletInitArg:
/* 8023D428 0023A368  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8023D42C 0023A36C  7C 08 02 A6 */	mflr r0
/* 8023D430 0023A370  90 01 00 14 */	stw r0, 0x14(r1)
/* 8023D434 0023A374  88 0D 84 20 */	lbz r0, sFromTekiEnable__Q24Game6Pellet@sda21(r13)
/* 8023D438 0023A378  28 00 00 00 */	cmplwi r0, 0
/* 8023D43C 0023A37C  41 82 00 CC */	beq lbl_8023D508
/* 8023D440 0023A380  88 03 00 16 */	lbz r0, 0x16(r3)
/* 8023D444 0023A384  28 00 00 03 */	cmplwi r0, 3
/* 8023D448 0023A388  41 82 00 0C */	beq lbl_8023D454
/* 8023D44C 0023A38C  28 00 00 04 */	cmplwi r0, 4
/* 8023D450 0023A390  40 82 00 B8 */	bne lbl_8023D508
lbl_8023D454:
/* 8023D454 0023A394  80 AD 96 58 */	lwz r5, sNum__Q24Game17PelletBirthBuffer@sda21(r13)
/* 8023D458 0023A398  2C 05 00 80 */	cmpwi r5, 0x80
/* 8023D45C 0023A39C  40 80 00 90 */	bge lbl_8023D4EC
/* 8023D460 0023A3A0  38 05 00 01 */	addi r0, r5, 1
/* 8023D464 0023A3A4  3C 80 80 51 */	lis r4, sArgs__Q24Game17PelletBirthBuffer@ha
/* 8023D468 0023A3A8  90 0D 96 58 */	stw r0, sNum__Q24Game17PelletBirthBuffer@sda21(r13)
/* 8023D46C 0023A3AC  1C A5 00 28 */	mulli r5, r5, 0x28
/* 8023D470 0023A3B0  38 84 27 B0 */	addi r4, r4, sArgs__Q24Game17PelletBirthBuffer@l
/* 8023D474 0023A3B4  88 03 00 04 */	lbz r0, 4(r3)
/* 8023D478 0023A3B8  7C 84 2A 14 */	add r4, r4, r5
/* 8023D47C 0023A3BC  98 04 00 04 */	stb r0, 4(r4)
/* 8023D480 0023A3C0  80 03 00 08 */	lwz r0, 8(r3)
/* 8023D484 0023A3C4  90 04 00 08 */	stw r0, 8(r4)
/* 8023D488 0023A3C8  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8023D48C 0023A3CC  90 04 00 0C */	stw r0, 0xc(r4)
/* 8023D490 0023A3D0  80 03 00 10 */	lwz r0, 0x10(r3)
/* 8023D494 0023A3D4  90 04 00 10 */	stw r0, 0x10(r4)
/* 8023D498 0023A3D8  A0 03 00 14 */	lhz r0, 0x14(r3)
/* 8023D49C 0023A3DC  B0 04 00 14 */	sth r0, 0x14(r4)
/* 8023D4A0 0023A3E0  88 03 00 16 */	lbz r0, 0x16(r3)
/* 8023D4A4 0023A3E4  98 04 00 16 */	stb r0, 0x16(r4)
/* 8023D4A8 0023A3E8  88 03 00 17 */	lbz r0, 0x17(r3)
/* 8023D4AC 0023A3EC  98 04 00 17 */	stb r0, 0x17(r4)
/* 8023D4B0 0023A3F0  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8023D4B4 0023A3F4  90 04 00 18 */	stw r0, 0x18(r4)
/* 8023D4B8 0023A3F8  88 03 00 1C */	lbz r0, 0x1c(r3)
/* 8023D4BC 0023A3FC  98 04 00 1C */	stb r0, 0x1c(r4)
/* 8023D4C0 0023A400  88 03 00 1D */	lbz r0, 0x1d(r3)
/* 8023D4C4 0023A404  98 04 00 1D */	stb r0, 0x1d(r4)
/* 8023D4C8 0023A408  88 03 00 1E */	lbz r0, 0x1e(r3)
/* 8023D4CC 0023A40C  98 04 00 1E */	stb r0, 0x1e(r4)
/* 8023D4D0 0023A410  88 03 00 1F */	lbz r0, 0x1f(r3)
/* 8023D4D4 0023A414  98 04 00 1F */	stb r0, 0x1f(r4)
/* 8023D4D8 0023A418  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8023D4DC 0023A41C  90 04 00 20 */	stw r0, 0x20(r4)
/* 8023D4E0 0023A420  80 03 00 24 */	lwz r0, 0x24(r3)
/* 8023D4E4 0023A424  90 04 00 24 */	stw r0, 0x24(r4)
/* 8023D4E8 0023A428  48 00 00 20 */	b lbl_8023D508
lbl_8023D4EC:
/* 8023D4EC 0023A42C  3C 60 80 48 */	lis r3, lbl_80483F28@ha
/* 8023D4F0 0023A430  3C A0 80 48 */	lis r5, lbl_80483F40@ha
/* 8023D4F4 0023A434  38 63 3F 28 */	addi r3, r3, lbl_80483F28@l
/* 8023D4F8 0023A438  38 80 00 1F */	li r4, 0x1f
/* 8023D4FC 0023A43C  38 A5 3F 40 */	addi r5, r5, lbl_80483F40@l
/* 8023D500 0023A440  4C C6 31 82 */	crclr 6
/* 8023D504 0023A444  4B DE D1 3D */	bl panic_f__12JUTExceptionFPCciPCce
lbl_8023D508:
/* 8023D508 0023A448  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8023D50C 0023A44C  7C 08 03 A6 */	mtlr r0
/* 8023D510 0023A450  38 21 00 10 */	addi r1, r1, 0x10
/* 8023D514 0023A454  4E 80 00 20 */	blr 

.global birthAll__Q24Game17PelletBirthBufferFv
birthAll__Q24Game17PelletBirthBufferFv:
/* 8023D518 0023A458  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8023D51C 0023A45C  7C 08 02 A6 */	mflr r0
/* 8023D520 0023A460  90 01 00 24 */	stw r0, 0x24(r1)
/* 8023D524 0023A464  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8023D528 0023A468  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8023D52C 0023A46C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8023D530 0023A470  88 0D 84 20 */	lbz r0, sFromTekiEnable__Q24Game6Pellet@sda21(r13)
/* 8023D534 0023A474  28 00 00 00 */	cmplwi r0, 0
/* 8023D538 0023A478  41 82 00 64 */	beq lbl_8023D59C
/* 8023D53C 0023A47C  3C 60 80 51 */	lis r3, sArgs__Q24Game17PelletBirthBuffer@ha
/* 8023D540 0023A480  3B C0 00 00 */	li r30, 0
/* 8023D544 0023A484  3B E3 27 B0 */	addi r31, r3, sArgs__Q24Game17PelletBirthBuffer@l
/* 8023D548 0023A488  48 00 00 40 */	b lbl_8023D588
lbl_8023D54C:
/* 8023D54C 0023A48C  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 8023D550 0023A490  7F E4 FB 78 */	mr r4, r31
/* 8023D554 0023A494  4B F2 FF 6D */	bl birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
/* 8023D558 0023A498  7C 7D 1B 79 */	or. r29, r3, r3
/* 8023D55C 0023A49C  41 82 00 24 */	beq lbl_8023D580
/* 8023D560 0023A4A0  38 80 00 00 */	li r4, 0
/* 8023D564 0023A4A4  4B EF DB 8D */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 8023D568 0023A4A8  80 7D 04 54 */	lwz r3, 0x454(r29)
/* 8023D56C 0023A4AC  7F A4 EB 78 */	mr r4, r29
/* 8023D570 0023A4B0  81 83 00 00 */	lwz r12, 0(r3)
/* 8023D574 0023A4B4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8023D578 0023A4B8  7D 89 03 A6 */	mtctr r12
/* 8023D57C 0023A4BC  4E 80 04 21 */	bctrl 
lbl_8023D580:
/* 8023D580 0023A4C0  3B FF 00 28 */	addi r31, r31, 0x28
/* 8023D584 0023A4C4  3B DE 00 01 */	addi r30, r30, 1
lbl_8023D588:
/* 8023D588 0023A4C8  80 0D 96 58 */	lwz r0, sNum__Q24Game17PelletBirthBuffer@sda21(r13)
/* 8023D58C 0023A4CC  7C 1E 00 00 */	cmpw r30, r0
/* 8023D590 0023A4D0  41 80 FF BC */	blt lbl_8023D54C
/* 8023D594 0023A4D4  38 00 00 00 */	li r0, 0
/* 8023D598 0023A4D8  90 0D 96 58 */	stw r0, sNum__Q24Game17PelletBirthBuffer@sda21(r13)
lbl_8023D59C:
/* 8023D59C 0023A4DC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8023D5A0 0023A4E0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8023D5A4 0023A4E4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8023D5A8 0023A4E8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8023D5AC 0023A4EC  7C 08 03 A6 */	mtlr r0
/* 8023D5B0 0023A4F0  38 21 00 20 */	addi r1, r1, 0x20
/* 8023D5B4 0023A4F4  4E 80 00 20 */	blr 

__sinit_pelletBirthBuffer_cpp:
/* 8023D5B8 0023A4F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8023D5BC 0023A4FC  7C 08 02 A6 */	mflr r0
/* 8023D5C0 0023A500  3C 60 80 51 */	lis r3, sArgs__Q24Game17PelletBirthBuffer@ha
/* 8023D5C4 0023A504  3C 80 80 24 */	lis r4, __ct__Q24Game13PelletInitArgFv@ha
/* 8023D5C8 0023A508  90 01 00 14 */	stw r0, 0x14(r1)
/* 8023D5CC 0023A50C  38 63 27 B0 */	addi r3, r3, sArgs__Q24Game17PelletBirthBuffer@l
/* 8023D5D0 0023A510  38 A0 00 00 */	li r5, 0
/* 8023D5D4 0023A514  38 84 D5 F4 */	addi r4, r4, __ct__Q24Game13PelletInitArgFv@l
/* 8023D5D8 0023A518  38 C0 00 28 */	li r6, 0x28
/* 8023D5DC 0023A51C  38 E0 00 80 */	li r7, 0x80
/* 8023D5E0 0023A520  4B E8 42 5D */	bl __construct_array
/* 8023D5E4 0023A524  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8023D5E8 0023A528  7C 08 03 A6 */	mtlr r0
/* 8023D5EC 0023A52C  38 21 00 10 */	addi r1, r1, 0x10
/* 8023D5F0 0023A530  4E 80 00 20 */	blr 

.global __ct__Q24Game13PelletInitArgFv # weak function
__ct__Q24Game13PelletInitArgFv:
/* 8023D5F4 0023A534  3C A0 80 4B */	lis r5, __vt__Q24Game15CreatureInitArg@ha
/* 8023D5F8 0023A538  3C 80 80 4B */	lis r4, __vt__Q24Game13PelletInitArg@ha
/* 8023D5FC 0023A53C  38 05 A2 F4 */	addi r0, r5, __vt__Q24Game15CreatureInitArg@l
/* 8023D600 0023A540  38 C0 00 00 */	li r6, 0
/* 8023D604 0023A544  90 03 00 00 */	stw r0, 0(r3)
/* 8023D608 0023A548  38 04 A2 B8 */	addi r0, r4, __vt__Q24Game13PelletInitArg@l
/* 8023D60C 0023A54C  38 A0 00 FF */	li r5, 0xff
/* 8023D610 0023A550  38 80 00 01 */	li r4, 1
/* 8023D614 0023A554  90 03 00 00 */	stw r0, 0(r3)
/* 8023D618 0023A558  38 00 FF FF */	li r0, -1
/* 8023D61C 0023A55C  98 C3 00 1C */	stb r6, 0x1c(r3)
/* 8023D620 0023A560  B0 C3 00 14 */	sth r6, 0x14(r3)
/* 8023D624 0023A564  98 A3 00 16 */	stb r5, 0x16(r3)
/* 8023D628 0023A568  90 C3 00 18 */	stw r6, 0x18(r3)
/* 8023D62C 0023A56C  98 C3 00 17 */	stb r6, 0x17(r3)
/* 8023D630 0023A570  98 83 00 04 */	stb r4, 4(r3)
/* 8023D634 0023A574  98 C3 00 1D */	stb r6, 0x1d(r3)
/* 8023D638 0023A578  90 03 00 24 */	stw r0, 0x24(r3)
/* 8023D63C 0023A57C  90 03 00 20 */	stw r0, 0x20(r3)
/* 8023D640 0023A580  98 C3 00 1E */	stb r6, 0x1e(r3)
/* 8023D644 0023A584  98 C3 00 1F */	stb r6, 0x1f(r3)
/* 8023D648 0023A588  4E 80 00 20 */	blr 
