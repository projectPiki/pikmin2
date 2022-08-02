.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_singleGS_Load_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_80483D50:
	.asciz "singleGS_Load.cpp"
.balign 4
lbl_80483D64:
	.asciz "P2Assert"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
govNAN___Q24Game5P2JST:
	.float 0.0
	.float 0.0
	.float 0.0
.global __vt__Q32og6Screen20DispMemberCourseName
__vt__Q32og6Screen20DispMemberCourseName:
	.4byte 0
	.4byte 0
	.4byte getSize__Q32og6Screen20DispMemberCourseNameFv
	.4byte getOwnerID__Q32og6Screen20DispMemberCourseNameFv
	.4byte getMemberID__Q32og6Screen20DispMemberCourseNameFv
	.4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
.global __vt__Q34Game10SingleGame9LoadState
__vt__Q34Game10SingleGame9LoadState:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10SingleGame9LoadStateFPQ24Game17SingleGameSectionPQ24Game8StateArg
	.4byte exec__Q34Game10SingleGame9LoadStateFPQ24Game17SingleGameSection
	.4byte cleanup__Q34Game10SingleGame9LoadStateFPQ24Game17SingleGameSection
	.4byte "resume__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
	.4byte "restart__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
	.4byte "transit__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg"
	.4byte draw__Q34Game10SingleGame9LoadStateFPQ24Game17SingleGameSectionR8Graphics
	.4byte onOrimaDown__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectioni
	.4byte onMovieStart__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
	.4byte onMovieDone__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
	.4byte onMovieCommand__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectioni
	.4byte onHoleIn__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game8ItemCave4Item
	.4byte onNextFloor__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game8ItemHole4Item
	.4byte onFountainReturn__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game15ItemBigFountain4Item
	.4byte on_section_fadeout__Q34Game10SingleGame5StateFPQ24Game17SingleGameSection
	.4byte on_demo_timer__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionUl

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
gu32NAN___Q24Game5P2JST:
	.skip 4
gfNAN___Q24Game5P2JST:
	.skip 4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__Q34Game10SingleGame9LoadStateFPQ24Game17SingleGameSectionPQ24Game8StateArg
init__Q34Game10SingleGame9LoadStateFPQ24Game17SingleGameSectionPQ24Game8StateArg:
/* 80239E84 00236DC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80239E88 00236DC8  7C 08 02 A6 */	mflr r0
/* 80239E8C 00236DCC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80239E90 00236DD0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80239E94 00236DD4  7C BF 2B 78 */	mr r31, r5
/* 80239E98 00236DD8  93 C1 00 08 */	stw r30, 8(r1)
/* 80239E9C 00236DDC  7C 7E 1B 78 */	mr r30, r3
/* 80239EA0 00236DE0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80239EA4 00236DE4  48 1F 2A 0D */	bl reset__Q24Game11MoviePlayerFv
/* 80239EA8 00236DE8  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80239EAC 00236DEC  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80239EB0 00236DF0  81 83 00 00 */	lwz r12, 0(r3)
/* 80239EB4 00236DF4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80239EB8 00236DF8  7D 89 03 A6 */	mtctr r12
/* 80239EBC 00236DFC  4E 80 04 21 */	bctrl 
/* 80239EC0 00236E00  80 6D 95 B0 */	lwz r3, mgr__5Radar@sda21(r13)
/* 80239EC4 00236E04  28 03 00 00 */	cmplwi r3, 0
/* 80239EC8 00236E08  41 82 00 08 */	beq lbl_80239ED0
/* 80239ECC 00236E0C  4B FE 45 CD */	bl clear__Q25Radar3MgrFv
lbl_80239ED0:
/* 80239ED0 00236E10  28 1F 00 00 */	cmplwi r31, 0
/* 80239ED4 00236E14  40 82 00 20 */	bne lbl_80239EF4
/* 80239ED8 00236E18  3C 60 80 48 */	lis r3, lbl_80483D50@ha
/* 80239EDC 00236E1C  3C A0 80 48 */	lis r5, lbl_80483D64@ha
/* 80239EE0 00236E20  38 63 3D 50 */	addi r3, r3, lbl_80483D50@l
/* 80239EE4 00236E24  38 80 00 21 */	li r4, 0x21
/* 80239EE8 00236E28  38 A5 3D 64 */	addi r5, r5, lbl_80483D64@l
/* 80239EEC 00236E2C  4C C6 31 82 */	crclr 6
/* 80239EF0 00236E30  4B DF 07 51 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_80239EF4:
/* 80239EF4 00236E34  A0 7F 00 04 */	lhz r3, 4(r31)
/* 80239EF8 00236E38  38 00 00 00 */	li r0, 0
/* 80239EFC 00236E3C  B0 7E 00 24 */	sth r3, 0x24(r30)
/* 80239F00 00236E40  88 7F 00 01 */	lbz r3, 1(r31)
/* 80239F04 00236E44  98 7E 00 29 */	stb r3, 0x29(r30)
/* 80239F08 00236E48  88 7F 00 00 */	lbz r3, 0(r31)
/* 80239F0C 00236E4C  98 7E 00 27 */	stb r3, 0x27(r30)
/* 80239F10 00236E50  88 7F 00 02 */	lbz r3, 2(r31)
/* 80239F14 00236E54  98 7E 00 28 */	stb r3, 0x28(r30)
/* 80239F18 00236E58  98 1E 00 26 */	stb r0, 0x26(r30)
/* 80239F1C 00236E5C  98 1E 00 14 */	stb r0, 0x14(r30)
/* 80239F20 00236E60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80239F24 00236E64  83 C1 00 08 */	lwz r30, 8(r1)
/* 80239F28 00236E68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80239F2C 00236E6C  7C 08 03 A6 */	mtlr r0
/* 80239F30 00236E70  38 21 00 10 */	addi r1, r1, 0x10
/* 80239F34 00236E74  4E 80 00 20 */	blr 

.if version == 1
.global exec__Q34Game10SingleGame9LoadStateFPQ24Game17SingleGameSection
exec__Q34Game10SingleGame9LoadStateFPQ24Game17SingleGameSection:
/* 80239F38 00236E78  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80239F3C 00236E7C  7C 08 02 A6 */	mflr r0
/* 80239F40 00236E80  90 01 00 44 */	stw r0, 0x44(r1)
/* 80239F44 00236E84  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80239F48 00236E88  7C 9F 23 78 */	mr r31, r4
/* 80239F4C 00236E8C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80239F50 00236E90  7C 7E 1B 78 */	mr r30, r3
/* 80239F54 00236E94  88 03 00 26 */	lbz r0, 0x26(r3)
/* 80239F58 00236E98  28 00 00 00 */	cmplwi r0, 0
/* 80239F5C 00236E9C  40 82 01 34 */	bne lbl_8023A090
/* 80239F60 00236EA0  38 00 00 01 */	li r0, 1
/* 80239F64 00236EA4  98 1E 00 26 */	stb r0, 0x26(r30)
/* 80239F68 00236EA8  88 1E 00 29 */	lbz r0, 0x29(r30)
/* 80239F6C 00236EAC  28 00 00 00 */	cmplwi r0, 0
/* 80239F70 00236EB0  40 82 00 0C */	bne lbl_80239F7C
/* 80239F74 00236EB4  7F E3 FB 78 */	mr r3, r31
/* 80239F78 00236EB8  4B F1 5E 2D */	bl clearHeap__Q24Game15BaseGameSectionFv
lbl_80239F7C:
/* 80239F7C 00236EBC  88 1E 00 27 */	lbz r0, 0x27(r30)
/* 80239F80 00236EC0  28 00 00 00 */	cmplwi r0, 0
/* 80239F84 00236EC4  40 82 00 10 */	bne lbl_80239F94
/* 80239F88 00236EC8  88 1E 00 28 */	lbz r0, 0x28(r30)
/* 80239F8C 00236ECC  28 00 00 00 */	cmplwi r0, 0
/* 80239F90 00236ED0  41 82 00 94 */	beq lbl_8023A024
lbl_80239F94:
/* 80239F94 00236ED4  88 1E 00 28 */	lbz r0, 0x28(r30)
/* 80239F98 00236ED8  28 00 00 00 */	cmplwi r0, 0
/* 80239F9C 00236EDC  41 82 00 10 */	beq lbl_80239FAC
/* 80239FA0 00236EE0  80 7F 02 48 */	lwz r3, 0x26c(r31)
/* 80239FA4 00236EE4  38 03 00 01 */	addi r0, r3, 1
/* 80239FA8 00236EE8  90 1F 02 48 */	stw r0, 0x26c(r31)
lbl_80239FAC:
/* 80239FAC 00236EEC  38 00 00 01 */	li r0, 1
/* 80239FB0 00236EF0  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 80239FB4 00236EF4  98 1F 02 3C */	stb r0, 0x260(r31)
/* 80239FB8 00236EF8  38 E0 00 00 */	li r7, 0
/* 80239FBC 00236EFC  38 03 11 48 */	addi r0, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 80239FC0 00236F00  3C 80 80 4C */	lis r4, __vt__Q32og6Screen15DispMemberFloor@ha
/* 80239FC4 00236F04  3C 60 74 5F */	lis r3, 0x745F3031@ha
/* 80239FC8 00236F08  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80239FCC 00236F0C  38 C4 10 80 */	addi r6, r4, __vt__Q32og6Screen15DispMemberFloor@l
/* 80239FD0 00236F10  38 A0 00 37 */	li r5, 0x37
/* 80239FD4 00236F14  38 03 30 31 */	addi r0, r3, 0x745F3031@l
/* 80239FD8 00236F18  90 E1 00 20 */	stw r7, 0x20(r1)
/* 80239FDC 00236F1C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80239FE0 00236F20  38 81 00 1C */	addi r4, r1, 0x1c
/* 80239FE4 00236F24  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 80239FE8 00236F28  90 A1 00 24 */	stw r5, 0x24(r1)
/* 80239FEC 00236F2C  98 E1 00 2C */	stb r7, 0x2c(r1)
/* 80239FF0 00236F30  98 E1 00 2D */	stb r7, 0x2d(r1)
/* 80239FF4 00236F34  90 01 00 28 */	stw r0, 0x28(r1)
/* 80239FF8 00236F38  98 E1 00 2E */	stb r7, 0x2e(r1)
/* 80239FFC 00236F3C  80 BF 02 48 */	lwz r5, 0x26c(r31)
/* 8023A000 00236F40  38 05 00 01 */	addi r0, r5, 1
/* 8023A004 00236F44  90 01 00 24 */	stw r0, 0x24(r1)
/* 8023A008 00236F48  80 1F 01 90 */	lwz r0, 0x1b4(r31)
/* 8023A00C 00236F4C  90 01 00 28 */	stw r0, 0x28(r1)
/* 8023A010 00236F50  48 1C 35 C1 */	bl open_Floor__Q26Screen9Game2DMgrFRQ32og6Screen15DispMemberFloor
/* 8023A014 00236F54  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8023A018 00236F58  38 00 00 01 */	li r0, 1
/* 8023A01C 00236F5C  98 03 00 48 */	stb r0, 0x48(r3)
/* 8023A020 00236F60  48 00 00 58 */	b lbl_8023A078
lbl_8023A024:
/* 8023A024 00236F64  80 DF 02 2C */	lwz r6, 0x250(r31)
/* 8023A028 00236F68  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 8023A02C 00236F6C  3C 60 80 4C */	lis r3, __vt__Q32og6Screen20DispMemberCourseName@ha
/* 8023A030 00236F70  38 A0 00 00 */	li r5, 0
/* 8023A034 00236F74  80 C6 00 48 */	lwz r6, 0x48(r6)
/* 8023A038 00236F78  38 84 11 48 */	addi r4, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 8023A03C 00236F7C  38 03 15 CC */	addi r0, r3, __vt__Q32og6Screen20DispMemberCourseName@l
/* 8023A040 00236F80  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8023A044 00236F84  90 81 00 0C */	stw r4, 0xc(r1)
/* 8023A048 00236F88  38 81 00 0C */	addi r4, r1, 0xc
/* 8023A04C 00236F8C  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8023A050 00236F90  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8023A054 00236F94  90 01 00 0C */	stw r0, 0xc(r1)
/* 8023A058 00236F98  98 A1 00 18 */	stb r5, 0x18(r1)
/* 8023A05C 00236F9C  98 A1 00 19 */	stb r5, 0x19(r1)
/* 8023A060 00236FA0  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8023A064 00236FA4  48 1C 37 59 */	bl open_CourseName__Q26Screen9Game2DMgrFRQ32og6Screen20DispMemberCourseName
/* 8023A068 00236FA8  38 00 00 00 */	li r0, 0
/* 8023A06C 00236FAC  98 1F 02 3C */	stb r0, 0x260(r31)
/* 8023A070 00236FB0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8023A074 00236FB4  98 03 00 48 */	stb r0, 0x48(r3)
lbl_8023A078:
/* 8023A078 00236FB8  4B F9 6D 41 */	bl clear__Q24Game8GameStatFv
/* 8023A07C 00236FBC  38 00 00 00 */	li r0, 0
/* 8023A080 00236FC0  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8023A084 00236FC4  98 1E 00 15 */	stb r0, 0x15(r30)
/* 8023A088 00236FC8  98 1E 00 14 */	stb r0, 0x14(r30)
/* 8023A08C 00236FCC  48 00 00 CC */	b lbl_8023A158
lbl_8023A090:
/* 8023A090 00236FD0  88 1E 00 14 */	lbz r0, 0x14(r30)
/* 8023A094 00236FD4  28 00 00 00 */	cmplwi r0, 0
/* 8023A098 00236FD8  41 82 00 28 */	beq lbl_8023A0C0
/* 8023A09C 00236FDC  88 1E 00 15 */	lbz r0, 0x15(r30)
/* 8023A0A0 00236FE0  28 00 00 00 */	cmplwi r0, 0
/* 8023A0A4 00236FE4  40 82 00 1C */	bne lbl_8023A0C0
/* 8023A0A8 00236FE8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8023A0AC 00236FEC  38 9F 01 B8 */	addi r4, r31, 0x1dc
/* 8023A0B0 00236FF0  80 BF 02 24 */	lwz r5, 0x248(r31)
/* 8023A0B4 00236FF4  48 1E 8E 85 */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
/* 8023A0B8 00236FF8  38 00 00 01 */	li r0, 1
/* 8023A0BC 00236FFC  98 1E 00 15 */	stb r0, 0x15(r30)
lbl_8023A0C0:
/* 8023A0C0 00237000  80 1F 01 D0 */	lwz r0, 0x1f4(r31)
/* 8023A0C4 00237004  2C 00 00 02 */	cmpwi r0, 2
/* 8023A0C8 00237008  40 82 00 78 */	bne lbl_8023A140
/* 8023A0CC 0023700C  7F E3 FB 78 */	mr r3, r31
/* 8023A0D0 00237010  81 9F 00 00 */	lwz r12, 0(r31)
/* 8023A0D4 00237014  81 8C 01 24 */	lwz r12, 0x124(r12)
/* 8023A0D8 00237018  7D 89 03 A6 */	mtctr r12
/* 8023A0DC 0023701C  4E 80 04 21 */	bctrl 
/* 8023A0E0 00237020  88 1F 02 3C */	lbz r0, 0x260(r31)
/* 8023A0E4 00237024  28 00 00 00 */	cmplwi r0, 0
/* 8023A0E8 00237028  41 82 00 28 */	beq lbl_8023A110
/* 8023A0EC 0023702C  7F C3 F3 78 */	mr r3, r30
/* 8023A0F0 00237030  7F E4 FB 78 */	mr r4, r31
/* 8023A0F4 00237034  81 9E 00 00 */	lwz r12, 0(r30)
/* 8023A0F8 00237038  38 A0 00 04 */	li r5, 4
/* 8023A0FC 0023703C  38 C0 00 00 */	li r6, 0
/* 8023A100 00237040  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8023A104 00237044  7D 89 03 A6 */	mtctr r12
/* 8023A108 00237048  4E 80 04 21 */	bctrl 
/* 8023A10C 0023704C  48 00 00 34 */	b lbl_8023A140
lbl_8023A110:
/* 8023A110 00237050  A0 FE 00 24 */	lhz r7, 0x24(r30)
/* 8023A114 00237054  38 00 00 01 */	li r0, 1
/* 8023A118 00237058  7F C3 F3 78 */	mr r3, r30
/* 8023A11C 0023705C  7F E4 FB 78 */	mr r4, r31
/* 8023A120 00237060  98 01 00 08 */	stb r0, 8(r1)
/* 8023A124 00237064  38 C1 00 08 */	addi r6, r1, 8
/* 8023A128 00237068  38 A0 00 03 */	li r5, 3
/* 8023A12C 0023706C  B0 E1 00 0A */	sth r7, 0xa(r1)
/* 8023A130 00237070  81 9E 00 00 */	lwz r12, 0(r30)
/* 8023A134 00237074  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8023A138 00237078  7D 89 03 A6 */	mtctr r12
/* 8023A13C 0023707C  4E 80 04 21 */	bctrl 
lbl_8023A140:
/* 8023A140 00237080  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 8023A144 00237084  28 03 00 00 */	cmplwi r3, 0
/* 8023A148 00237088  41 82 00 08 */	beq lbl_8023A150
/* 8023A14C 0023708C  48 17 F4 65 */	bl update__14TParticle2dMgrFv
lbl_8023A150:
/* 8023A150 00237090  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8023A154 00237094  48 1C 1E D9 */	bl update__Q26Screen9Game2DMgrFv
lbl_8023A158:
/* 8023A158 00237098  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8023A15C 0023709C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8023A160 002370A0  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8023A164 002370A4  7C 08 03 A6 */	mtlr r0
/* 8023A168 002370A8  38 21 00 40 */	addi r1, r1, 0x40
/* 8023A16C 002370AC  4E 80 00 20 */	blr 
.else
.global exec__Q34Game10SingleGame9LoadStateFPQ24Game17SingleGameSection
exec__Q34Game10SingleGame9LoadStateFPQ24Game17SingleGameSection:
/* 80239F38 00236E78  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80239F3C 00236E7C  7C 08 02 A6 */	mflr r0
/* 80239F40 00236E80  90 01 00 44 */	stw r0, 0x44(r1)
/* 80239F44 00236E84  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80239F48 00236E88  7C 9F 23 78 */	mr r31, r4
/* 80239F4C 00236E8C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80239F50 00236E90  7C 7E 1B 78 */	mr r30, r3
/* 80239F54 00236E94  88 03 00 26 */	lbz r0, 0x26(r3)
/* 80239F58 00236E98  28 00 00 00 */	cmplwi r0, 0
/* 80239F5C 00236E9C  40 82 01 34 */	bne lbl_8023A090
/* 80239F60 00236EA0  38 00 00 01 */	li r0, 1
/* 80239F64 00236EA4  98 1E 00 26 */	stb r0, 0x26(r30)
/* 80239F68 00236EA8  88 1E 00 29 */	lbz r0, 0x29(r30)
/* 80239F6C 00236EAC  28 00 00 00 */	cmplwi r0, 0
/* 80239F70 00236EB0  40 82 00 0C */	bne lbl_80239F7C
/* 80239F74 00236EB4  7F E3 FB 78 */	mr r3, r31
/* 80239F78 00236EB8  4B F1 5E 2D */	bl clearHeap__Q24Game15BaseGameSectionFv
lbl_80239F7C:
/* 80239F7C 00236EBC  88 1E 00 27 */	lbz r0, 0x27(r30)
/* 80239F80 00236EC0  28 00 00 00 */	cmplwi r0, 0
/* 80239F84 00236EC4  40 82 00 10 */	bne lbl_80239F94
/* 80239F88 00236EC8  88 1E 00 28 */	lbz r0, 0x28(r30)
/* 80239F8C 00236ECC  28 00 00 00 */	cmplwi r0, 0
/* 80239F90 00236ED0  41 82 00 94 */	beq lbl_8023A024
lbl_80239F94:
/* 80239F94 00236ED4  88 1E 00 28 */	lbz r0, 0x28(r30)
/* 80239F98 00236ED8  28 00 00 00 */	cmplwi r0, 0
/* 80239F9C 00236EDC  41 82 00 10 */	beq lbl_80239FAC
/* 80239FA0 00236EE0  80 7F 02 48 */	lwz r3, 0x248(r31)
/* 80239FA4 00236EE4  38 03 00 01 */	addi r0, r3, 1
/* 80239FA8 00236EE8  90 1F 02 48 */	stw r0, 0x248(r31)
lbl_80239FAC:
/* 80239FAC 00236EEC  38 00 00 01 */	li r0, 1
/* 80239FB0 00236EF0  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 80239FB4 00236EF4  98 1F 02 3C */	stb r0, 0x23c(r31)
/* 80239FB8 00236EF8  38 E0 00 00 */	li r7, 0
/* 80239FBC 00236EFC  38 03 11 48 */	addi r0, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 80239FC0 00236F00  3C 80 80 4C */	lis r4, __vt__Q32og6Screen15DispMemberFloor@ha
/* 80239FC4 00236F04  3C 60 74 5F */	lis r3, 0x745F3031@ha
/* 80239FC8 00236F08  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80239FCC 00236F0C  38 C4 10 80 */	addi r6, r4, __vt__Q32og6Screen15DispMemberFloor@l
/* 80239FD0 00236F10  38 A0 00 37 */	li r5, 0x37
/* 80239FD4 00236F14  38 03 30 31 */	addi r0, r3, 0x745F3031@l
/* 80239FD8 00236F18  90 E1 00 20 */	stw r7, 0x20(r1)
/* 80239FDC 00236F1C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80239FE0 00236F20  38 81 00 1C */	addi r4, r1, 0x1c
/* 80239FE4 00236F24  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 80239FE8 00236F28  90 A1 00 24 */	stw r5, 0x24(r1)
/* 80239FEC 00236F2C  98 E1 00 2C */	stb r7, 0x2c(r1)
/* 80239FF0 00236F30  98 E1 00 2D */	stb r7, 0x2d(r1)
/* 80239FF4 00236F34  90 01 00 28 */	stw r0, 0x28(r1)
/* 80239FF8 00236F38  98 E1 00 2E */	stb r7, 0x2e(r1)
/* 80239FFC 00236F3C  80 BF 02 48 */	lwz r5, 0x248(r31)
/* 8023A000 00236F40  38 05 00 01 */	addi r0, r5, 1
/* 8023A004 00236F44  90 01 00 24 */	stw r0, 0x24(r1)
/* 8023A008 00236F48  80 1F 01 90 */	lwz r0, 0x190(r31)
/* 8023A00C 00236F4C  90 01 00 28 */	stw r0, 0x28(r1)
/* 8023A010 00236F50  48 1C 35 C1 */	bl open_Floor__Q26Screen9Game2DMgrFRQ32og6Screen15DispMemberFloor
/* 8023A014 00236F54  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8023A018 00236F58  38 00 00 01 */	li r0, 1
/* 8023A01C 00236F5C  98 03 00 48 */	stb r0, 0x48(r3)
/* 8023A020 00236F60  48 00 00 58 */	b lbl_8023A078
lbl_8023A024:
/* 8023A024 00236F64  80 DF 02 2C */	lwz r6, 0x22c(r31)
/* 8023A028 00236F68  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 8023A02C 00236F6C  3C 60 80 4C */	lis r3, __vt__Q32og6Screen20DispMemberCourseName@ha
/* 8023A030 00236F70  38 A0 00 00 */	li r5, 0
/* 8023A034 00236F74  80 C6 00 48 */	lwz r6, 0x48(r6)
/* 8023A038 00236F78  38 84 11 48 */	addi r4, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 8023A03C 00236F7C  38 03 15 CC */	addi r0, r3, __vt__Q32og6Screen20DispMemberCourseName@l
/* 8023A040 00236F80  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8023A044 00236F84  90 81 00 0C */	stw r4, 0xc(r1)
/* 8023A048 00236F88  38 81 00 0C */	addi r4, r1, 0xc
/* 8023A04C 00236F8C  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8023A050 00236F90  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8023A054 00236F94  90 01 00 0C */	stw r0, 0xc(r1)
/* 8023A058 00236F98  98 A1 00 18 */	stb r5, 0x18(r1)
/* 8023A05C 00236F9C  98 A1 00 19 */	stb r5, 0x19(r1)
/* 8023A060 00236FA0  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8023A064 00236FA4  48 1C 37 59 */	bl open_CourseName__Q26Screen9Game2DMgrFRQ32og6Screen20DispMemberCourseName
/* 8023A068 00236FA8  38 00 00 00 */	li r0, 0
/* 8023A06C 00236FAC  98 1F 02 3C */	stb r0, 0x23c(r31)
/* 8023A070 00236FB0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8023A074 00236FB4  98 03 00 48 */	stb r0, 0x48(r3)
lbl_8023A078:
/* 8023A078 00236FB8  4B F9 6D 41 */	bl clear__Q24Game8GameStatFv
/* 8023A07C 00236FBC  38 00 00 00 */	li r0, 0
/* 8023A080 00236FC0  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8023A084 00236FC4  98 1E 00 15 */	stb r0, 0x15(r30)
/* 8023A088 00236FC8  98 1E 00 14 */	stb r0, 0x14(r30)
/* 8023A08C 00236FCC  48 00 00 CC */	b lbl_8023A158
lbl_8023A090:
/* 8023A090 00236FD0  88 1E 00 14 */	lbz r0, 0x14(r30)
/* 8023A094 00236FD4  28 00 00 00 */	cmplwi r0, 0
/* 8023A098 00236FD8  41 82 00 28 */	beq lbl_8023A0C0
/* 8023A09C 00236FDC  88 1E 00 15 */	lbz r0, 0x15(r30)
/* 8023A0A0 00236FE0  28 00 00 00 */	cmplwi r0, 0
/* 8023A0A4 00236FE4  40 82 00 1C */	bne lbl_8023A0C0
/* 8023A0A8 00236FE8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8023A0AC 00236FEC  38 9F 01 B8 */	addi r4, r31, 0x1b8
/* 8023A0B0 00236FF0  80 BF 02 24 */	lwz r5, 0x224(r31)
/* 8023A0B4 00236FF4  48 1E 8E 85 */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
/* 8023A0B8 00236FF8  38 00 00 01 */	li r0, 1
/* 8023A0BC 00236FFC  98 1E 00 15 */	stb r0, 0x15(r30)
lbl_8023A0C0:
/* 8023A0C0 00237000  80 1F 01 D0 */	lwz r0, 0x1d0(r31)
/* 8023A0C4 00237004  2C 00 00 02 */	cmpwi r0, 2
/* 8023A0C8 00237008  40 82 00 78 */	bne lbl_8023A140
/* 8023A0CC 0023700C  7F E3 FB 78 */	mr r3, r31
/* 8023A0D0 00237010  81 9F 00 00 */	lwz r12, 0(r31)
/* 8023A0D4 00237014  81 8C 01 24 */	lwz r12, 0x124(r12)
/* 8023A0D8 00237018  7D 89 03 A6 */	mtctr r12
/* 8023A0DC 0023701C  4E 80 04 21 */	bctrl 
/* 8023A0E0 00237020  88 1F 02 3C */	lbz r0, 0x23c(r31)
/* 8023A0E4 00237024  28 00 00 00 */	cmplwi r0, 0
/* 8023A0E8 00237028  41 82 00 28 */	beq lbl_8023A110
/* 8023A0EC 0023702C  7F C3 F3 78 */	mr r3, r30
/* 8023A0F0 00237030  7F E4 FB 78 */	mr r4, r31
/* 8023A0F4 00237034  81 9E 00 00 */	lwz r12, 0(r30)
/* 8023A0F8 00237038  38 A0 00 04 */	li r5, 4
/* 8023A0FC 0023703C  38 C0 00 00 */	li r6, 0
/* 8023A100 00237040  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8023A104 00237044  7D 89 03 A6 */	mtctr r12
/* 8023A108 00237048  4E 80 04 21 */	bctrl 
/* 8023A10C 0023704C  48 00 00 34 */	b lbl_8023A140
lbl_8023A110:
/* 8023A110 00237050  A0 FE 00 24 */	lhz r7, 0x24(r30)
/* 8023A114 00237054  38 00 00 01 */	li r0, 1
/* 8023A118 00237058  7F C3 F3 78 */	mr r3, r30
/* 8023A11C 0023705C  7F E4 FB 78 */	mr r4, r31
/* 8023A120 00237060  98 01 00 08 */	stb r0, 8(r1)
/* 8023A124 00237064  38 C1 00 08 */	addi r6, r1, 8
/* 8023A128 00237068  38 A0 00 03 */	li r5, 3
/* 8023A12C 0023706C  B0 E1 00 0A */	sth r7, 0xa(r1)
/* 8023A130 00237070  81 9E 00 00 */	lwz r12, 0(r30)
/* 8023A134 00237074  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8023A138 00237078  7D 89 03 A6 */	mtctr r12
/* 8023A13C 0023707C  4E 80 04 21 */	bctrl 
lbl_8023A140:
/* 8023A140 00237080  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 8023A144 00237084  28 03 00 00 */	cmplwi r3, 0
/* 8023A148 00237088  41 82 00 08 */	beq lbl_8023A150
/* 8023A14C 0023708C  48 17 F4 65 */	bl update__14TParticle2dMgrFv
lbl_8023A150:
/* 8023A150 00237090  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8023A154 00237094  48 1C 1E D9 */	bl update__Q26Screen9Game2DMgrFv
lbl_8023A158:
/* 8023A158 00237098  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8023A15C 0023709C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8023A160 002370A0  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8023A164 002370A4  7C 08 03 A6 */	mtlr r0
/* 8023A168 002370A8  38 21 00 40 */	addi r1, r1, 0x40
/* 8023A16C 002370AC  4E 80 00 20 */	blr 
.endif

.global draw__Q34Game10SingleGame9LoadStateFPQ24Game17SingleGameSectionR8Graphics
draw__Q34Game10SingleGame9LoadStateFPQ24Game17SingleGameSectionR8Graphics:
/* 8023A170 002370B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8023A174 002370B4  7C 08 02 A6 */	mflr r0
/* 8023A178 002370B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8023A17C 002370BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8023A180 002370C0  7C BF 2B 78 */	mr r31, r5
/* 8023A184 002370C4  88 03 00 26 */	lbz r0, 0x26(r3)
/* 8023A188 002370C8  28 00 00 00 */	cmplwi r0, 0
/* 8023A18C 002370CC  41 82 00 60 */	beq lbl_8023A1EC
/* 8023A190 002370D0  38 00 00 01 */	li r0, 1
/* 8023A194 002370D4  98 03 00 14 */	stb r0, 0x14(r3)
/* 8023A198 002370D8  38 7F 01 90 */	addi r3, r31, 0x190
/* 8023A19C 002370DC  81 9F 01 90 */	lwz r12, 0x190(r31)
/* 8023A1A0 002370E0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8023A1A4 002370E4  7D 89 03 A6 */	mtctr r12
/* 8023A1A8 002370E8  4E 80 04 21 */	bctrl 
/* 8023A1AC 002370EC  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 8023A1B0 002370F0  38 80 00 01 */	li r4, 1
/* 8023A1B4 002370F4  38 A0 00 00 */	li r5, 0
/* 8023A1B8 002370F8  48 17 F4 1D */	bl draw__14TParticle2dMgrFUcUs
/* 8023A1BC 002370FC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8023A1C0 00237100  7F E4 FB 78 */	mr r4, r31
/* 8023A1C4 00237104  48 1C 1E 8D */	bl draw__Q26Screen9Game2DMgrFR8Graphics
/* 8023A1C8 00237108  38 7F 01 90 */	addi r3, r31, 0x190
/* 8023A1CC 0023710C  81 9F 01 90 */	lwz r12, 0x190(r31)
/* 8023A1D0 00237110  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8023A1D4 00237114  7D 89 03 A6 */	mtctr r12
/* 8023A1D8 00237118  4E 80 04 21 */	bctrl 
/* 8023A1DC 0023711C  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 8023A1E0 00237120  38 80 00 00 */	li r4, 0
/* 8023A1E4 00237124  38 A0 00 00 */	li r5, 0
/* 8023A1E8 00237128  48 17 F3 ED */	bl draw__14TParticle2dMgrFUcUs
lbl_8023A1EC:
/* 8023A1EC 0023712C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8023A1F0 00237130  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8023A1F4 00237134  7C 08 03 A6 */	mtlr r0
/* 8023A1F8 00237138  38 21 00 10 */	addi r1, r1, 0x10
/* 8023A1FC 0023713C  4E 80 00 20 */	blr 

.global cleanup__Q34Game10SingleGame9LoadStateFPQ24Game17SingleGameSection
cleanup__Q34Game10SingleGame9LoadStateFPQ24Game17SingleGameSection:
/* 8023A200 00237140  4E 80 00 20 */	blr 

.global getSize__Q32og6Screen20DispMemberCourseNameFv
getSize__Q32og6Screen20DispMemberCourseNameFv:
/* 8023A204 00237144  38 60 00 10 */	li r3, 0x10
/* 8023A208 00237148  4E 80 00 20 */	blr 

.global getOwnerID__Q32og6Screen20DispMemberCourseNameFv
getOwnerID__Q32og6Screen20DispMemberCourseNameFv:
/* 8023A20C 0023714C  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 8023A210 00237150  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 8023A214 00237154  4E 80 00 20 */	blr 

.global getMemberID__Q32og6Screen20DispMemberCourseNameFv
getMemberID__Q32og6Screen20DispMemberCourseNameFv:
/* 8023A218 00237158  3C 80 55 52 */	lis r4, 0x55525345@ha
/* 8023A21C 0023715C  38 60 43 4F */	li r3, 0x434f
/* 8023A220 00237160  38 84 53 45 */	addi r4, r4, 0x55525345@l
/* 8023A224 00237164  4E 80 00 20 */	blr 

.global __sinit_singleGS_Load_cpp
__sinit_singleGS_Load_cpp:
/* 8023A228 00237168  3C 80 80 51 */	lis r4, __float_nan@ha
/* 8023A22C 0023716C  38 00 FF FF */	li r0, -1
/* 8023A230 00237170  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 8023A234 00237174  3C 60 80 4C */	lis r3, govNAN___Q24Game5P2JST@ha
/* 8023A238 00237178  90 0D 96 38 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 8023A23C 0023717C  D4 03 15 C0 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 8023A240 00237180  D0 0D 96 3C */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 8023A244 00237184  D0 03 00 04 */	stfs f0, 4(r3)
/* 8023A248 00237188  D0 03 00 08 */	stfs f0, 8(r3)
/* 8023A24C 0023718C  4E 80 00 20 */	blr 
