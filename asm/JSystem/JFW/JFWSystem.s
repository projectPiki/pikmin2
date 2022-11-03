.include "macros.inc"
.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.global maxStdHeaps__Q29JFWSystem11CSetUpParam
maxStdHeaps__Q29JFWSystem11CSetUpParam:
	.4byte 2
.global sysHeapSize__Q29JFWSystem11CSetUpParam
sysHeapSize__Q29JFWSystem11CSetUpParam:
	.4byte 0x00400000
.global fifoBufSize__Q29JFWSystem11CSetUpParam
fifoBufSize__Q29JFWSystem11CSetUpParam:
	.4byte 0x00040000
.global aramAudioBufSize__Q29JFWSystem11CSetUpParam
aramAudioBufSize__Q29JFWSystem11CSetUpParam:
	.4byte 0x00800000
.global aramGraphBufSize__Q29JFWSystem11CSetUpParam
aramGraphBufSize__Q29JFWSystem11CSetUpParam:
	.4byte 0x00600000
.global streamPriority__Q29JFWSystem11CSetUpParam
streamPriority__Q29JFWSystem11CSetUpParam:
	.4byte 0x00000008
.global decompPriority__Q29JFWSystem11CSetUpParam
decompPriority__Q29JFWSystem11CSetUpParam:
	.4byte 0x00000007
.global aPiecePriority__Q29JFWSystem11CSetUpParam
aPiecePriority__Q29JFWSystem11CSetUpParam:
	.4byte 0x00000006
.global systemFontRes__Q29JFWSystem11CSetUpParam
systemFontRes__Q29JFWSystem11CSetUpParam:
	.4byte JUTResFONT_Ascfont_fix12
.global renderMode__Q29JFWSystem11CSetUpParam
renderMode__Q29JFWSystem11CSetUpParam:
	.4byte GXNtsc480IntDf
.global exConsoleBufferSize__Q29JFWSystem11CSetUpParam
exConsoleBufferSize__Q29JFWSystem11CSetUpParam:
	.4byte 0x000024FC

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global rootHeap__9JFWSystem
rootHeap__9JFWSystem:
	.skip 0x4
.global systemHeap__9JFWSystem
systemHeap__9JFWSystem:
	.skip 0x4
.global mainThread__9JFWSystem
mainThread__9JFWSystem:
	.skip 0x4
.global debugPrint__9JFWSystem
debugPrint__9JFWSystem:
	.skip 0x4
.global systemFont__9JFWSystem
systemFont__9JFWSystem:
	.skip 0x4
.global systemConsoleManager__9JFWSystem
systemConsoleManager__9JFWSystem:
	.skip 0x4
.global systemConsole__9JFWSystem
systemConsole__9JFWSystem:
	.skip 0x4
.global sInitCalled__9JFWSystem
sInitCalled__9JFWSystem:
	.skip 0x1

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_80516B00:
	.float 0.5
lbl_80516B04:
	.float 0.85
.balign 8
lbl_80516B08:
	.4byte 0x43300000
	.4byte 0x80000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__9JFWSystemFv
init__9JFWSystemFv:
/* 8008975C 0008669C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80089760 000866A0  7C 08 02 A6 */	mflr r0
/* 80089764 000866A4  90 01 00 34 */	stw r0, 0x34(r1)
/* 80089768 000866A8  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8008976C 000866AC  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 80089770 000866B0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80089774 000866B4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80089778 000866B8  80 0D 89 C8 */	lwz r0, rootHeap__9JFWSystem@sda21(r13)
/* 8008977C 000866BC  28 00 00 00 */	cmplwi r0, 0
/* 80089780 000866C0  40 82 00 30 */	bne .L_800897B0
/* 80089784 000866C4  48 06 1A F9 */	bl OSInit
/* 80089788 000866C8  48 05 35 A5 */	bl DVDInit
/* 8008978C 000866CC  80 6D 80 D0 */	lwz r3, maxStdHeaps__Q29JFWSystem11CSetUpParam@sda21(r13)
/* 80089790 000866D0  38 80 00 00 */	li r4, 0
/* 80089794 000866D4  4B F9 66 B5 */	bl createRoot__10JKRExpHeapFib
/* 80089798 000866D8  7C 64 1B 78 */	mr r4, r3
/* 8008979C 000866DC  80 6D 80 D4 */	lwz r3, sysHeapSize__Q29JFWSystem11CSetUpParam@sda21(r13)
/* 800897A0 000866E0  90 8D 89 C8 */	stw r4, rootHeap__9JFWSystem@sda21(r13)
/* 800897A4 000866E4  38 A0 00 00 */	li r5, 0
/* 800897A8 000866E8  4B F9 67 21 */	bl create__10JKRExpHeapFUlP7JKRHeapb
/* 800897AC 000866EC  90 6D 89 CC */	stw r3, systemHeap__9JFWSystem@sda21(r13)
.L_800897B0:
/* 800897B0 000866F0  38 00 00 01 */	li r0, 1
/* 800897B4 000866F4  80 6D 80 DC */	lwz r3, aramAudioBufSize__Q29JFWSystem11CSetUpParam@sda21(r13)
/* 800897B8 000866F8  98 0D 89 E4 */	stb r0, sInitCalled__9JFWSystem@sda21(r13)
/* 800897BC 000866FC  80 8D 80 E0 */	lwz r4, aramGraphBufSize__Q29JFWSystem11CSetUpParam@sda21(r13)
/* 800897C0 00086700  80 AD 80 E4 */	lwz r5, streamPriority__Q29JFWSystem11CSetUpParam@sda21(r13)
/* 800897C4 00086704  80 CD 80 E8 */	lwz r6, decompPriority__Q29JFWSystem11CSetUpParam@sda21(r13)
/* 800897C8 00086708  80 ED 80 EC */	lwz r7, aPiecePriority__Q29JFWSystem11CSetUpParam@sda21(r13)
/* 800897CC 0008670C  4B F8 E2 45 */	bl create__7JKRAramFUlUllll
/* 800897D0 00086710  38 60 00 7C */	li r3, 0x7c
/* 800897D4 00086714  4B F9 A6 D1 */	bl __nw__FUl
/* 800897D8 00086718  7C 7E 1B 79 */	or. r30, r3, r3
/* 800897DC 0008671C  41 82 00 1C */	beq .L_800897F8
/* 800897E0 00086720  48 06 81 E5 */	bl OSGetCurrentThread
/* 800897E4 00086724  7C 64 1B 78 */	mr r4, r3
/* 800897E8 00086728  7F C3 F3 78 */	mr r3, r30
/* 800897EC 0008672C  38 A0 00 04 */	li r5, 4
/* 800897F0 00086730  4B F9 BF A1 */	bl __ct__9JKRThreadFP8OSThreadi
/* 800897F4 00086734  7C 7E 1B 78 */	mr r30, r3
.L_800897F8:
/* 800897F8 00086738  93 CD 89 D0 */	stw r30, mainThread__9JFWSystem@sda21(r13)
/* 800897FC 0008673C  80 6D 80 F4 */	lwz r3, renderMode__Q29JFWSystem11CSetUpParam@sda21(r13)
/* 80089800 00086740  4B FA 9F 45 */	bl createManager__8JUTVideoFPC16_GXRenderModeObj
/* 80089804 00086744  83 ED 80 D8 */	lwz r31, fifoBufSize__Q29JFWSystem11CSetUpParam@sda21(r13)
/* 80089808 00086748  38 60 00 1C */	li r3, 0x1c
/* 8008980C 0008674C  4B F9 A6 99 */	bl __nw__FUl
/* 80089810 00086750  28 03 00 00 */	cmplwi r3, 0
/* 80089814 00086754  41 82 00 0C */	beq .L_80089820
/* 80089818 00086758  7F E4 FB 78 */	mr r4, r31
/* 8008981C 0008675C  4B FA 53 19 */	bl __ct__12JUTGraphFifoFUl
.L_80089820:
/* 80089820 00086760  4B FA 3D F5 */	bl init__10JUTGamePadFv
/* 80089824 00086764  4B FA 03 A9 */	bl start__14JUTDirectPrintFv
/* 80089828 00086768  7C 7E 1B 78 */	mr r30, r3
/* 8008982C 0008676C  4B F9 E5 95 */	bl create__12JUTAssertionFv
/* 80089830 00086770  7F C3 F3 78 */	mr r3, r30
/* 80089834 00086774  4B FA 0A D9 */	bl create__12JUTExceptionFP14JUTDirectPrint
/* 80089838 00086778  38 60 00 70 */	li r3, 0x70
/* 8008983C 0008677C  4B F9 A6 69 */	bl __nw__FUl
/* 80089840 00086780  7C 60 1B 79 */	or. r0, r3, r3
/* 80089844 00086784  41 82 00 14 */	beq .L_80089858
/* 80089848 00086788  80 8D 80 F0 */	lwz r4, systemFontRes__Q29JFWSystem11CSetUpParam@sda21(r13)
/* 8008984C 0008678C  38 A0 00 00 */	li r5, 0
/* 80089850 00086790  4B FA 79 7D */	bl __ct__10JUTResFontFPC7ResFONTP7JKRHeap
/* 80089854 00086794  7C 60 1B 78 */	mr r0, r3
.L_80089858:
/* 80089858 00086798  90 0D 89 D8 */	stw r0, systemFont__9JFWSystem@sda21(r13)
/* 8008985C 0008679C  38 60 00 00 */	li r3, 0
/* 80089860 000867A0  38 80 00 00 */	li r4, 0
/* 80089864 000867A4  4B F9 FC 71 */	bl start__10JUTDbPrintFP7JUTFontP7JKRHeap
/* 80089868 000867A8  90 6D 89 D4 */	stw r3, debugPrint__9JFWSystem@sda21(r13)
/* 8008986C 000867AC  80 8D 89 D8 */	lwz r4, systemFont__9JFWSystem@sda21(r13)
/* 80089870 000867B0  4B F9 FD 11 */	bl changeFont__10JUTDbPrintFP7JUTFont
/* 80089874 000867B4  38 60 00 00 */	li r3, 0
/* 80089878 000867B8  4B F9 F6 21 */	bl createManager__17JUTConsoleManagerFP7JKRHeap
/* 8008987C 000867BC  90 6D 89 DC */	stw r3, systemConsoleManager__9JFWSystem@sda21(r13)
/* 80089880 000867C0  38 60 00 3C */	li r3, 0x3c
/* 80089884 000867C4  38 80 00 C8 */	li r4, 0xc8
/* 80089888 000867C8  38 A0 00 00 */	li r5, 0
/* 8008988C 000867CC  4B F9 E8 51 */	bl create__10JUTConsoleFUiUiP7JKRHeap
/* 80089890 000867D0  7C 7F 1B 78 */	mr r31, r3
/* 80089894 000867D4  80 6D 89 D8 */	lwz r3, systemFont__9JFWSystem@sda21(r13)
/* 80089898 000867D8  93 ED 89 E0 */	stw r31, systemConsole__9JFWSystem@sda21(r13)
/* 8008989C 000867DC  7C 7E 1B 78 */	mr r30, r3
/* 800898A0 000867E0  90 7F 00 4C */	stw r3, 0x4c(r31)
/* 800898A4 000867E4  81 83 00 00 */	lwz r12, 0(r3)
/* 800898A8 000867E8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 800898AC 000867EC  7D 89 03 A6 */	mtctr r12
/* 800898B0 000867F0  4E 80 04 21 */	bctrl 
/* 800898B4 000867F4  6C 64 80 00 */	xoris r4, r3, 0x8000
/* 800898B8 000867F8  3C 00 43 30 */	lis r0, 0x4330
/* 800898BC 000867FC  7F C3 F3 78 */	mr r3, r30
/* 800898C0 00086800  90 81 00 0C */	stw r4, 0xc(r1)
/* 800898C4 00086804  81 9E 00 00 */	lwz r12, 0(r30)
/* 800898C8 00086808  90 01 00 08 */	stw r0, 8(r1)
/* 800898CC 0008680C  C8 22 87 A8 */	lfd f1, lbl_80516B08@sda21(r2)
/* 800898D0 00086810  C8 01 00 08 */	lfd f0, 8(r1)
/* 800898D4 00086814  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 800898D8 00086818  EF E0 08 28 */	fsubs f31, f0, f1
/* 800898DC 0008681C  7D 89 03 A6 */	mtctr r12
/* 800898E0 00086820  4E 80 04 21 */	bctrl 
/* 800898E4 00086824  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 800898E8 00086828  3C 00 43 30 */	lis r0, 0x4330
/* 800898EC 0008682C  90 61 00 14 */	stw r3, 0x14(r1)
/* 800898F0 00086830  C8 22 87 A8 */	lfd f1, lbl_80516B08@sda21(r2)
/* 800898F4 00086834  90 01 00 10 */	stw r0, 0x10(r1)
/* 800898F8 00086838  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 800898FC 0008683C  EC 00 08 28 */	fsubs f0, f0, f1
/* 80089900 00086840  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 80089904 00086844  D3 FF 00 54 */	stfs f31, 0x54(r31)
/* 80089908 00086848  80 6D 80 F4 */	lwz r3, renderMode__Q29JFWSystem11CSetUpParam@sda21(r13)
/* 8008990C 0008684C  A0 03 00 06 */	lhz r0, 6(r3)
/* 80089910 00086850  28 00 01 2C */	cmplwi r0, 0x12c
/* 80089914 00086854  40 80 00 98 */	bge .L_800899AC
/* 80089918 00086858  80 6D 89 D8 */	lwz r3, systemFont__9JFWSystem@sda21(r13)
/* 8008991C 0008685C  81 83 00 00 */	lwz r12, 0(r3)
/* 80089920 00086860  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80089924 00086864  7D 89 03 A6 */	mtctr r12
/* 80089928 00086868  4E 80 04 21 */	bctrl 
/* 8008992C 0008686C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80089930 00086870  3C 00 43 30 */	lis r0, 0x4330
/* 80089934 00086874  90 61 00 14 */	stw r3, 0x14(r1)
/* 80089938 00086878  80 6D 89 D8 */	lwz r3, systemFont__9JFWSystem@sda21(r13)
/* 8008993C 0008687C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80089940 00086880  C8 22 87 A8 */	lfd f1, lbl_80516B08@sda21(r2)
/* 80089944 00086884  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80089948 00086888  81 83 00 00 */	lwz r12, 0(r3)
/* 8008994C 0008688C  EC 20 08 28 */	fsubs f1, f0, f1
/* 80089950 00086890  C0 02 87 A0 */	lfs f0, lbl_80516B00@sda21(r2)
/* 80089954 00086894  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80089958 00086898  EF E0 00 72 */	fmuls f31, f0, f1
/* 8008995C 0008689C  7D 89 03 A6 */	mtctr r12
/* 80089960 000868A0  4E 80 04 21 */	bctrl 
/* 80089964 000868A4  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80089968 000868A8  3C 80 43 30 */	lis r4, 0x4330
/* 8008996C 000868AC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80089970 000868B0  38 60 00 14 */	li r3, 0x14
/* 80089974 000868B4  C8 42 87 A8 */	lfd f2, lbl_80516B08@sda21(r2)
/* 80089978 000868B8  38 00 00 19 */	li r0, 0x19
/* 8008997C 000868BC  90 81 00 08 */	stw r4, 8(r1)
/* 80089980 000868C0  C0 02 87 A4 */	lfs f0, lbl_80516B04@sda21(r2)
/* 80089984 000868C4  C8 21 00 08 */	lfd f1, 8(r1)
/* 80089988 000868C8  80 8D 89 E0 */	lwz r4, systemConsole__9JFWSystem@sda21(r13)
/* 8008998C 000868CC  EC 21 10 28 */	fsubs f1, f1, f2
/* 80089990 000868D0  EC 00 00 72 */	fmuls f0, f0, f1
/* 80089994 000868D4  D0 04 00 50 */	stfs f0, 0x50(r4)
/* 80089998 000868D8  D3 E4 00 54 */	stfs f31, 0x54(r4)
/* 8008999C 000868DC  80 8D 89 E0 */	lwz r4, systemConsole__9JFWSystem@sda21(r13)
/* 800899A0 000868E0  90 64 00 40 */	stw r3, 0x40(r4)
/* 800899A4 000868E4  90 04 00 44 */	stw r0, 0x44(r4)
/* 800899A8 000868E8  48 00 00 84 */	b .L_80089A2C
.L_800899AC:
/* 800899AC 000868EC  80 6D 89 D8 */	lwz r3, systemFont__9JFWSystem@sda21(r13)
/* 800899B0 000868F0  81 83 00 00 */	lwz r12, 0(r3)
/* 800899B4 000868F4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 800899B8 000868F8  7D 89 03 A6 */	mtctr r12
/* 800899BC 000868FC  4E 80 04 21 */	bctrl 
/* 800899C0 00086900  6C 64 80 00 */	xoris r4, r3, 0x8000
/* 800899C4 00086904  80 6D 89 D8 */	lwz r3, systemFont__9JFWSystem@sda21(r13)
/* 800899C8 00086908  3C 00 43 30 */	lis r0, 0x4330
/* 800899CC 0008690C  90 81 00 14 */	stw r4, 0x14(r1)
/* 800899D0 00086910  81 83 00 00 */	lwz r12, 0(r3)
/* 800899D4 00086914  90 01 00 10 */	stw r0, 0x10(r1)
/* 800899D8 00086918  C8 22 87 A8 */	lfd f1, lbl_80516B08@sda21(r2)
/* 800899DC 0008691C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 800899E0 00086920  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 800899E4 00086924  EF E0 08 28 */	fsubs f31, f0, f1
/* 800899E8 00086928  7D 89 03 A6 */	mtctr r12
/* 800899EC 0008692C  4E 80 04 21 */	bctrl 
/* 800899F0 00086930  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 800899F4 00086934  3C 80 43 30 */	lis r4, 0x4330
/* 800899F8 00086938  90 01 00 0C */	stw r0, 0xc(r1)
/* 800899FC 0008693C  38 60 00 14 */	li r3, 0x14
/* 80089A00 00086940  C8 22 87 A8 */	lfd f1, lbl_80516B08@sda21(r2)
/* 80089A04 00086944  38 00 00 32 */	li r0, 0x32
/* 80089A08 00086948  90 81 00 08 */	stw r4, 8(r1)
/* 80089A0C 0008694C  80 8D 89 E0 */	lwz r4, systemConsole__9JFWSystem@sda21(r13)
/* 80089A10 00086950  C8 01 00 08 */	lfd f0, 8(r1)
/* 80089A14 00086954  EC 00 08 28 */	fsubs f0, f0, f1
/* 80089A18 00086958  D0 04 00 50 */	stfs f0, 0x50(r4)
/* 80089A1C 0008695C  D3 E4 00 54 */	stfs f31, 0x54(r4)
/* 80089A20 00086960  80 8D 89 E0 */	lwz r4, systemConsole__9JFWSystem@sda21(r13)
/* 80089A24 00086964  90 64 00 40 */	stw r3, 0x40(r4)
/* 80089A28 00086968  90 04 00 44 */	stw r0, 0x44(r4)
.L_80089A2C:
/* 80089A2C 0008696C  80 6D 89 E0 */	lwz r3, systemConsole__9JFWSystem@sda21(r13)
/* 80089A30 00086970  38 00 00 19 */	li r0, 0x19
/* 80089A34 00086974  90 03 00 48 */	stw r0, 0x48(r3)
/* 80089A38 00086978  80 03 00 48 */	lwz r0, 0x48(r3)
/* 80089A3C 0008697C  80 83 00 24 */	lwz r4, 0x24(r3)
/* 80089A40 00086980  7C 00 20 40 */	cmplw r0, r4
/* 80089A44 00086984  40 81 00 08 */	ble .L_80089A4C
/* 80089A48 00086988  90 83 00 48 */	stw r4, 0x48(r3)
.L_80089A4C:
/* 80089A4C 0008698C  80 6D 89 E0 */	lwz r3, systemConsole__9JFWSystem@sda21(r13)
/* 80089A50 00086990  38 80 00 00 */	li r4, 0
/* 80089A54 00086994  38 00 00 03 */	li r0, 3
/* 80089A58 00086998  98 83 00 68 */	stb r4, 0x68(r3)
/* 80089A5C 0008699C  80 6D 89 E0 */	lwz r3, systemConsole__9JFWSystem@sda21(r13)
/* 80089A60 000869A0  90 03 00 58 */	stw r0, 0x58(r3)
/* 80089A64 000869A4  80 6D 89 E0 */	lwz r3, systemConsole__9JFWSystem@sda21(r13)
/* 80089A68 000869A8  4B F9 F8 3D */	bl JUTSetReportConsole
/* 80089A6C 000869AC  80 6D 89 E0 */	lwz r3, systemConsole__9JFWSystem@sda21(r13)
/* 80089A70 000869B0  4B F9 F8 45 */	bl JUTSetWarningConsole
/* 80089A74 000869B4  80 6D 89 CC */	lwz r3, systemHeap__9JFWSystem@sda21(r13)
/* 80089A78 000869B8  38 A0 00 04 */	li r5, 4
/* 80089A7C 000869BC  80 8D 80 F8 */	lwz r4, exConsoleBufferSize__Q29JFWSystem11CSetUpParam@sda21(r13)
/* 80089A80 000869C0  4B F9 9B C1 */	bl alloc__7JKRHeapFUli
/* 80089A84 000869C4  80 8D 80 F8 */	lwz r4, exConsoleBufferSize__Q29JFWSystem11CSetUpParam@sda21(r13)
/* 80089A88 000869C8  4B FA 31 D9 */	bl createConsole__12JUTExceptionFPvUl
/* 80089A8C 000869CC  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 80089A90 000869D0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80089A94 000869D4  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80089A98 000869D8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80089A9C 000869DC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80089AA0 000869E0  7C 08 03 A6 */	mtlr r0
/* 80089AA4 000869E4  38 21 00 30 */	addi r1, r1, 0x30
/* 80089AA8 000869E8  4E 80 00 20 */	blr 
