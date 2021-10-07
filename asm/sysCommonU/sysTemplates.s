.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00

.global all_one__8BitFlagsFv
all_one__8BitFlagsFv:
/* 8041C374 004192B4  38 C0 00 00 */	li r6, 0
/* 8041C378 004192B8  38 A0 00 FF */	li r5, 0xff
/* 8041C37C 004192BC  48 00 00 10 */	b lbl_8041C38C
lbl_8041C380:
/* 8041C380 004192C0  80 83 00 00 */	lwz r4, 0(r3)
/* 8041C384 004192C4  7C A4 31 AE */	stbx r5, r4, r6
/* 8041C388 004192C8  38 C6 00 01 */	addi r6, r6, 1
lbl_8041C38C:
/* 8041C38C 004192CC  A0 03 00 06 */	lhz r0, 6(r3)
/* 8041C390 004192D0  7C 06 00 00 */	cmpw r6, r0
/* 8041C394 004192D4  41 80 FF EC */	blt lbl_8041C380
/* 8041C398 004192D8  4E 80 00 20 */	blr 

.global setFlag__8BitFlagsFUs
setFlag__8BitFlagsFUs:
/* 8041C39C 004192DC  54 85 04 3E */	clrlwi r5, r4, 0x10
/* 8041C3A0 004192E0  54 80 04 38 */	rlwinm r0, r4, 0, 0x10, 0x1c
/* 8041C3A4 004192E4  7C 00 28 50 */	subf r0, r0, r5
/* 8041C3A8 004192E8  80 A3 00 00 */	lwz r5, 0(r3)
/* 8041C3AC 004192EC  54 86 EC FE */	rlwinm r6, r4, 0x1d, 0x13, 0x1f
/* 8041C3B0 004192F0  38 60 00 01 */	li r3, 1
/* 8041C3B4 004192F4  54 00 04 3E */	clrlwi r0, r0, 0x10
/* 8041C3B8 004192F8  7C 85 30 AE */	lbzx r4, r5, r6
/* 8041C3BC 004192FC  7C 60 00 30 */	slw r0, r3, r0
/* 8041C3C0 00419300  7C 80 03 78 */	or r0, r4, r0
/* 8041C3C4 00419304  7C 05 31 AE */	stbx r0, r5, r6
/* 8041C3C8 00419308  4E 80 00 20 */	blr 

.global resetFlag__8BitFlagsFUs
resetFlag__8BitFlagsFUs:
/* 8041C3CC 0041930C  54 85 04 3E */	clrlwi r5, r4, 0x10
/* 8041C3D0 00419310  54 80 04 38 */	rlwinm r0, r4, 0, 0x10, 0x1c
/* 8041C3D4 00419314  7C 00 28 50 */	subf r0, r0, r5
/* 8041C3D8 00419318  80 A3 00 00 */	lwz r5, 0(r3)
/* 8041C3DC 0041931C  54 86 EC FE */	rlwinm r6, r4, 0x1d, 0x13, 0x1f
/* 8041C3E0 00419320  38 60 00 01 */	li r3, 1
/* 8041C3E4 00419324  54 00 04 3E */	clrlwi r0, r0, 0x10
/* 8041C3E8 00419328  7C 85 30 AE */	lbzx r4, r5, r6
/* 8041C3EC 0041932C  7C 60 00 30 */	slw r0, r3, r0
/* 8041C3F0 00419330  7C 80 00 78 */	andc r0, r4, r0
/* 8041C3F4 00419334  7C 05 31 AE */	stbx r0, r5, r6
/* 8041C3F8 00419338  4E 80 00 20 */	blr 

.global isFlag__8BitFlagsFUs
isFlag__8BitFlagsFUs:
/* 8041C3FC 0041933C  54 85 04 3E */	clrlwi r5, r4, 0x10
/* 8041C400 00419340  54 80 04 38 */	rlwinm r0, r4, 0, 0x10, 0x1c
/* 8041C404 00419344  7C 00 28 50 */	subf r0, r0, r5
/* 8041C408 00419348  80 63 00 00 */	lwz r3, 0(r3)
/* 8041C40C 0041934C  54 86 EC FE */	rlwinm r6, r4, 0x1d, 0x13, 0x1f
/* 8041C410 00419350  38 A0 00 01 */	li r5, 1
/* 8041C414 00419354  54 04 04 3E */	clrlwi r4, r0, 0x10
/* 8041C418 00419358  7C 03 30 AE */	lbzx r0, r3, r6
/* 8041C41C 0041935C  7C A3 20 30 */	slw r3, r5, r4
/* 8041C420 00419360  7C 63 00 38 */	and r3, r3, r0
/* 8041C424 00419364  7C 03 00 D0 */	neg r0, r3
/* 8041C428 00419368  7C 00 1B 78 */	or r0, r0, r3
/* 8041C42C 0041936C  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8041C430 00419370  4E 80 00 20 */	blr 
