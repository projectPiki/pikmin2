.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_JUTException_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_80473C18:
	.asciz "SYSTEM RESET"
.balign 4
lbl_80473C28:
	.asciz "MACHINE CHECK"
.balign 4
lbl_80473C38:
	.asciz "EXTERNAL INTERRUPT"
.balign 4
lbl_80473C4C:
	.asciz "ALIGNMENT"
.balign 4
lbl_80473C58:
	.asciz "FLOATING POINT"
.balign 4
lbl_80473C68:
	.asciz "DECREMENTER"
.balign 4
lbl_80473C74:
	.asciz "SYSTEM CALL"
.balign 4
lbl_80473C80:
	.asciz "PERFORMACE MONITOR"
.balign 4
lbl_80473C94:
	.asciz "BREAK POINT"
.balign 4
lbl_80473CA0:
	.asciz "SYSTEM INTERRUPT"
.balign 4
lbl_80473CB4:
	.asciz "THERMAL INTERRUPT"
.balign 4
lbl_80473CC8:
	.asciz "PROTECTION"
.balign 4
lbl_80473CD4:
	.asciz "%s in \"%s\" on line %d\n"
.balign 4
lbl_80473CEC:
	.asciz "F%02d: Nan      "
.balign 4
lbl_80473D00:
	.asciz "F%02d:+Inf     "
.balign 4
lbl_80473D10:
	.asciz "F%02d:-Inf     "
.balign 4
lbl_80473D20:
	.asciz "F%02d: 0.0      "
.balign 4
lbl_80473D34:
	.asciz "F%02d:%+.3E"
.balign 4
lbl_80473D40:
	.asciz "-------------------------------- FPR\n"
.balign 4
lbl_80473D68:
	.asciz "-------------------------------- TRACE\n"
.balign 4
lbl_80473D90:
	.asciz "Address:   BackChain   LR save\n"
.balign 4
lbl_80473DB0:
	.asciz "Suppress trace.\n"
.balign 4
lbl_80473DC4:
	.asciz "%08X:  %08X    %08X\n"
.balign 4
lbl_80473DDC:
	.asciz "CONTEXT:%08XH  (%s EXCEPTION)\n"
.balign 4
lbl_80473DFC:
	.asciz "CONTEXT:%08XH\n"
.balign 4
lbl_80473E0C:
	.asciz " FPE: Invalid operation\n"
.balign 4
lbl_80473E28:
	.asciz " Infinity - Infinity\n"
.balign 4
lbl_80473E40:
	.asciz " Infinity / Infinity\n"
.balign 4
lbl_80473E58:
	.asciz " Infinity * 0\n"
.balign 4
lbl_80473E68:
	.asciz " Invalid compare\n"
.balign 4
lbl_80473E7C:
	.asciz " Software request\n"
.balign 4
lbl_80473E90:
	.asciz " Invalid square root\n"
.balign 4
lbl_80473EA8:
	.asciz " Invalid integer convert\n"
.balign 4
lbl_80473EC4:
	.asciz " FPE: Overflow\n"
.balign 4
lbl_80473ED4:
	.asciz " FPE: Underflow\n"
.balign 4
lbl_80473EE8:
	.asciz " FPE: Zero division\n"
.balign 4
lbl_80473F00:
	.asciz " FPE: Inexact result\n"
.balign 4
lbl_80473F18:
	.asciz "SRR0:   %08XH   SRR1:%08XH\n"
.balign 4
lbl_80473F34:
	.asciz "DSISR:  %08XH   DAR: %08XH\n"
.balign 4
lbl_80473F50:
	.asciz "-------------------------------- GPR\n"
.balign 4
lbl_80473F78:
	.asciz "R%02d:%08XH  R%02d:%08XH  R%02d:%08XH\n"
.balign 4
lbl_80473FA0:
	.asciz "R%02d:%08XH  R%02d:%08XH\n"
.balign 4
lbl_80473FBC:
	.asciz "%s %s:%x section:%d\n"
.balign 4
lbl_80473FD4:
	.asciz "-------------------------------- GPRMAP\n"
.balign 4
lbl_80474000:
	.asciz "R%02d: %08XH"
.balign 4
lbl_80474010:
	.asciz "  no information\n"
.balign 4
lbl_80474024:
	.asciz "  no register which seem to address.\n"
.balign 4
lbl_8047404C:
	.asciz "-------------------------------- SRR0MAP\n"
.balign 4
lbl_80474078:
	.asciz "SRR0: %08XH"
.balign 4
lbl_80474084:
	.asciz " MSR:%08XH\t FPSCR:%08XH\n"
.balign 4
lbl_804740A0:
	.asciz "******** EXCEPTION OCCURRED! ********\nFrameMemory:%XH\n"
.balign 4
lbl_804740D8:
	.asciz "******** USER HALT ********\nFrameMemory:%XH\n"
.balign 4
lbl_80474108:
	.asciz "--------------------------------\n"
.balign 4
lbl_8047412C:
	.asciz "  [%08X]: .%s [%08X: %XH]\n  %s\n"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global sMessageQueue__12JUTException
sMessageQueue__12JUTException:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
c3bcnt: # local object
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.global sCpuExpName__12JUTException
sCpuExpName__12JUTException:
	.4byte lbl_80473C18
	.4byte lbl_80473C28
	.4byte lbl_80516610
	.4byte lbl_80516614
	.4byte lbl_80473C38
	.4byte lbl_80473C4C
	.4byte lbl_80516618
	.4byte lbl_80473C58
	.4byte lbl_80473C68
	.4byte lbl_80473C74
	.4byte lbl_80516620
	.4byte lbl_80473C80
	.4byte lbl_80473C94
	.4byte lbl_80473CA0
	.4byte lbl_80473CB4
	.4byte lbl_80473CC8
	.4byte lbl_80473C58
.global __vt__12JUTException
__vt__12JUTException:
	.4byte 0
	.4byte 0
	.4byte __dt__12JUTExceptionFv
	.4byte run__12JUTExceptionFv

.section .bss  # 0x804EFC20 - 0x8051467C
.lcomm exCallbackObject, 0x14, 4
.lcomm lbl_804F011C, 0xC, 4
.lcomm context$2483, 0x2C8, 8
# JUTException.cpp
.comm sMapFileList__12JUTException, 0xC, 4

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.global sMessageBuffer__12JUTException
sMessageBuffer__12JUTException:
	.4byte 0

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global sErrorManager__12JUTException
sErrorManager__12JUTException:
	.skip 0x4
.global sPreUserCallback__12JUTException
sPreUserCallback__12JUTException:
	.skip 0x4
.global sPostUserCallback__12JUTException
sPostUserCallback__12JUTException:
	.skip 0x4
.global sConsoleBuffer__12JUTException
sConsoleBuffer__12JUTException:
	.skip 0x4
.global sConsoleBufferSize__12JUTException
sConsoleBufferSize__12JUTException:
	.skip 0x4
.global sConsole__12JUTException
sConsole__12JUTException:
	.skip 0x4
.global msr__12JUTException
msr__12JUTException:
	.skip 0x4
.global fpscr__12JUTException
fpscr__12JUTException:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_80516610:
	.asciz "DSI"
.balign 4
lbl_80516614:
	.asciz "ISI"
.balign 4
lbl_80516618:
	.asciz "PROGRAM"
.balign 4
lbl_80516620:
	.asciz "TRACE"
.balign 4
lbl_80516628:
	.float 0.0
.balign 4
lbl_8051662C:
	.asciz " "
.balign 4
lbl_80516630:
	.asciz "\n"
.balign 4
lbl_80516634:
	.asciz " SNaN\n"
.balign 4
lbl_8051663C:
	.asciz " 0 / 0\n"
.balign 4
lbl_80516644:
	.asciz ""
.balign 4
lbl_80516648:
	.asciz ".map"
.balign 4
lbl_80516650:
	.float 10.0
lbl_80516654:
	.float 6.0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global create__12JUTExceptionFP14JUTDirectPrint
create__12JUTExceptionFP14JUTDirectPrint:
/* 8002A30C 0002724C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002A310 00027250  7C 08 02 A6 */	mflr r0
/* 8002A314 00027254  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002A318 00027258  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002A31C 0002725C  93 C1 00 08 */	stw r30, 8(r1)
/* 8002A320 00027260  7C 7E 1B 78 */	mr r30, r3
/* 8002A324 00027264  80 0D 88 90 */	lwz r0, sErrorManager__12JUTException@sda21(r13)
/* 8002A328 00027268  28 00 00 00 */	cmplwi r0, 0
/* 8002A32C 0002726C  40 82 00 D4 */	bne .L_8002A400
/* 8002A330 00027270  80 8D 88 28 */	lwz r4, sSystemHeap__7JKRHeap@sda21(r13)
/* 8002A334 00027274  38 60 00 A4 */	li r3, 0xa4
/* 8002A338 00027278  38 A0 00 00 */	li r5, 0
/* 8002A33C 0002727C  4B FF 9C 05 */	bl __nw__FUlP7JKRHeapi
/* 8002A340 00027280  7C 7F 1B 79 */	or. r31, r3, r3
/* 8002A344 00027284  41 82 00 B0 */	beq .L_8002A3F4
/* 8002A348 00027288  38 80 40 00 */	li r4, 0x4000
/* 8002A34C 0002728C  38 A0 00 10 */	li r5, 0x10
/* 8002A350 00027290  38 C0 00 00 */	li r6, 0
/* 8002A354 00027294  4B FF B2 E5 */	bl __ct__9JKRThreadFUlii
/* 8002A358 00027298  3C 60 80 4A */	lis r3, __vt__12JUTException@ha
/* 8002A35C 0002729C  3C 80 80 03 */	lis r4, errorHandler__12JUTExceptionFUsP9OSContextUlUl@ha
/* 8002A360 000272A0  38 03 04 2C */	addi r0, r3, __vt__12JUTException@l
/* 8002A364 000272A4  90 1F 00 00 */	stw r0, 0(r31)
/* 8002A368 000272A8  38 60 00 02 */	li r3, 2
/* 8002A36C 000272AC  38 84 A5 3C */	addi r4, r4, errorHandler__12JUTExceptionFUsP9OSContextUlUl@l
/* 8002A370 000272B0  93 DF 00 80 */	stw r30, 0x80(r31)
/* 8002A374 000272B4  48 0C 35 25 */	bl OSSetErrorHandler
/* 8002A378 000272B8  3C 80 80 03 */	lis r4, errorHandler__12JUTExceptionFUsP9OSContextUlUl@ha
/* 8002A37C 000272BC  38 60 00 03 */	li r3, 3
/* 8002A380 000272C0  38 84 A5 3C */	addi r4, r4, errorHandler__12JUTExceptionFUsP9OSContextUlUl@l
/* 8002A384 000272C4  48 0C 35 15 */	bl OSSetErrorHandler
/* 8002A388 000272C8  3C 80 80 03 */	lis r4, errorHandler__12JUTExceptionFUsP9OSContextUlUl@ha
/* 8002A38C 000272CC  38 60 00 06 */	li r3, 6
/* 8002A390 000272D0  38 84 A5 3C */	addi r4, r4, errorHandler__12JUTExceptionFUsP9OSContextUlUl@l
/* 8002A394 000272D4  48 0C 35 05 */	bl OSSetErrorHandler
/* 8002A398 000272D8  3C 80 80 03 */	lis r4, errorHandler__12JUTExceptionFUsP9OSContextUlUl@ha
/* 8002A39C 000272DC  38 60 00 05 */	li r3, 5
/* 8002A3A0 000272E0  38 84 A5 3C */	addi r4, r4, errorHandler__12JUTExceptionFUsP9OSContextUlUl@l
/* 8002A3A4 000272E4  48 0C 34 F5 */	bl OSSetErrorHandler
/* 8002A3A8 000272E8  3C 80 80 03 */	lis r4, errorHandler__12JUTExceptionFUsP9OSContextUlUl@ha
/* 8002A3AC 000272EC  38 60 00 0F */	li r3, 0xf
/* 8002A3B0 000272F0  38 84 A5 3C */	addi r4, r4, errorHandler__12JUTExceptionFUsP9OSContextUlUl@l
/* 8002A3B4 000272F4  48 0C 34 E5 */	bl OSSetErrorHandler
/* 8002A3B8 000272F8  38 60 00 00 */	li r3, 0
/* 8002A3BC 000272FC  48 00 04 25 */	bl setFPException__12JUTExceptionFUl
/* 8002A3C0 00027300  38 A0 00 00 */	li r5, 0
/* 8002A3C4 00027304  38 80 FF FF */	li r4, -1
/* 8002A3C8 00027308  90 AD 88 94 */	stw r5, sPreUserCallback__12JUTException@sda21(r13)
/* 8002A3CC 0002730C  38 60 00 0A */	li r3, 0xa
/* 8002A3D0 00027310  38 00 00 1F */	li r0, 0x1f
/* 8002A3D4 00027314  90 AD 88 98 */	stw r5, sPostUserCallback__12JUTException@sda21(r13)
/* 8002A3D8 00027318  90 BF 00 84 */	stw r5, 0x84(r31)
/* 8002A3DC 0002731C  90 9F 00 88 */	stw r4, 0x88(r31)
/* 8002A3E0 00027320  90 7F 00 8C */	stw r3, 0x8c(r31)
/* 8002A3E4 00027324  90 7F 00 90 */	stw r3, 0x90(r31)
/* 8002A3E8 00027328  90 9F 00 94 */	stw r4, 0x94(r31)
/* 8002A3EC 0002732C  90 BF 00 98 */	stw r5, 0x98(r31)
/* 8002A3F0 00027330  90 1F 00 9C */	stw r0, 0x9c(r31)
.L_8002A3F4:
/* 8002A3F4 00027334  93 ED 88 90 */	stw r31, sErrorManager__12JUTException@sda21(r13)
/* 8002A3F8 00027338  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8002A3FC 0002733C  48 0C 80 F9 */	bl OSResumeThread
.L_8002A400:
/* 8002A400 00027340  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002A404 00027344  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002A408 00027348  80 6D 88 90 */	lwz r3, sErrorManager__12JUTException@sda21(r13)
/* 8002A40C 0002734C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8002A410 00027350  7C 08 03 A6 */	mtlr r0
/* 8002A414 00027354  38 21 00 10 */	addi r1, r1, 0x10
/* 8002A418 00027358  4E 80 00 20 */	blr 

.global run__12JUTExceptionFv
run__12JUTExceptionFv:
/* 8002A41C 0002735C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8002A420 00027360  7C 08 02 A6 */	mflr r0
/* 8002A424 00027364  90 01 00 34 */	stw r0, 0x34(r1)
/* 8002A428 00027368  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 8002A42C 0002736C  7C 7F 1B 78 */	mr r31, r3
/* 8002A430 00027370  48 0A A1 29 */	bl PPCMfmsr
/* 8002A434 00027374  38 00 F6 FF */	li r0, -2305
/* 8002A438 00027378  7C 63 00 38 */	and r3, r3, r0
/* 8002A43C 0002737C  48 0A A1 25 */	bl PPCMtmsr
/* 8002A440 00027380  3C 60 80 4A */	lis r3, sMessageQueue__12JUTException@ha
/* 8002A444 00027384  38 8D 80 30 */	addi r4, r13, sMessageBuffer__12JUTException@sda21
/* 8002A448 00027388  38 63 03 A8 */	addi r3, r3, sMessageQueue__12JUTException@l
/* 8002A44C 0002738C  38 A0 00 01 */	li r5, 1
/* 8002A450 00027390  48 0C 50 6D */	bl OSInitMessageQueue
/* 8002A454 00027394  3C 60 80 4A */	lis r3, sMessageQueue__12JUTException@ha
/* 8002A458 00027398  3B C3 03 A8 */	addi r30, r3, sMessageQueue__12JUTException@l
.L_8002A45C:
/* 8002A45C 0002739C  7F C3 F3 78 */	mr r3, r30
/* 8002A460 000273A0  38 81 00 08 */	addi r4, r1, 8
/* 8002A464 000273A4  38 A0 00 01 */	li r5, 1
/* 8002A468 000273A8  48 0C 51 7D */	bl OSReceiveMessage
/* 8002A46C 000273AC  38 60 00 00 */	li r3, 0
/* 8002A470 000273B0  48 0A 65 ED */	bl VISetPreRetraceCallback
/* 8002A474 000273B4  38 60 00 00 */	li r3, 0
/* 8002A478 000273B8  48 0A 66 29 */	bl VISetPostRetraceCallback
/* 8002A47C 000273BC  80 61 00 08 */	lwz r3, 8(r1)
/* 8002A480 000273C0  A3 83 00 04 */	lhz r28, 4(r3)
/* 8002A484 000273C4  83 A3 00 00 */	lwz r29, 0(r3)
/* 8002A488 000273C8  28 1C 00 11 */	cmplwi r28, 0x11
/* 8002A48C 000273CC  83 63 00 08 */	lwz r27, 8(r3)
/* 8002A490 000273D0  83 43 00 0C */	lwz r26, 0xc(r3)
/* 8002A494 000273D4  83 23 00 10 */	lwz r25, 0x10(r3)
/* 8002A498 000273D8  40 80 00 0C */	bge .L_8002A4A4
/* 8002A49C 000273DC  80 1B 00 04 */	lwz r0, 4(r27)
/* 8002A4A0 000273E0  90 1F 00 A0 */	stw r0, 0xa0(r31)
.L_8002A4A4:
/* 8002A4A4 000273E4  48 0A 7C 1D */	bl VIGetCurrentFrameBuffer
/* 8002A4A8 000273E8  90 7F 00 7C */	stw r3, 0x7c(r31)
/* 8002A4AC 000273EC  80 1F 00 7C */	lwz r0, 0x7c(r31)
/* 8002A4B0 000273F0  28 00 00 00 */	cmplwi r0, 0
/* 8002A4B4 000273F4  40 82 00 0C */	bne .L_8002A4C0
/* 8002A4B8 000273F8  80 6D 88 90 */	lwz r3, sErrorManager__12JUTException@sda21(r13)
/* 8002A4BC 000273FC  48 00 21 F1 */	bl createFB__12JUTExceptionFv
.L_8002A4C0:
/* 8002A4C0 00027400  80 6D 88 90 */	lwz r3, sErrorManager__12JUTException@sda21(r13)
/* 8002A4C4 00027404  80 9F 00 7C */	lwz r4, 0x7c(r31)
/* 8002A4C8 00027408  80 63 00 80 */	lwz r3, 0x80(r3)
/* 8002A4CC 0002740C  A0 A3 00 04 */	lhz r5, 4(r3)
/* 8002A4D0 00027410  A0 C3 00 06 */	lhz r6, 6(r3)
/* 8002A4D4 00027414  4B FF FA B9 */	bl changeFrameBuffer__14JUTDirectPrintFPvUsUs
/* 8002A4D8 00027418  28 1D 00 00 */	cmplwi r29, 0
/* 8002A4DC 0002741C  41 82 00 20 */	beq .L_8002A4FC
/* 8002A4E0 00027420  7F AC EB 78 */	mr r12, r29
/* 8002A4E4 00027424  7F 83 E3 78 */	mr r3, r28
/* 8002A4E8 00027428  7F 64 DB 78 */	mr r4, r27
/* 8002A4EC 0002742C  7F 45 D3 78 */	mr r5, r26
/* 8002A4F0 00027430  7F 26 CB 78 */	mr r6, r25
/* 8002A4F4 00027434  7D 89 03 A6 */	mtctr r12
/* 8002A4F8 00027438  4E 80 04 21 */	bctrl 
.L_8002A4FC:
/* 8002A4FC 0002743C  48 0C 47 3D */	bl OSDisableInterrupts
/* 8002A500 00027440  48 0A 7B C1 */	bl VIGetCurrentFrameBuffer
/* 8002A504 00027444  90 7F 00 7C */	stw r3, 0x7c(r31)
/* 8002A508 00027448  80 6D 88 90 */	lwz r3, sErrorManager__12JUTException@sda21(r13)
/* 8002A50C 0002744C  80 9F 00 7C */	lwz r4, 0x7c(r31)
/* 8002A510 00027450  80 63 00 80 */	lwz r3, 0x80(r3)
/* 8002A514 00027454  A0 A3 00 04 */	lhz r5, 4(r3)
/* 8002A518 00027458  A0 C3 00 06 */	lhz r6, 6(r3)
/* 8002A51C 0002745C  4B FF FA 71 */	bl changeFrameBuffer__14JUTDirectPrintFPvUsUs
/* 8002A520 00027460  80 6D 88 90 */	lwz r3, sErrorManager__12JUTException@sda21(r13)
/* 8002A524 00027464  7F 84 E3 78 */	mr r4, r28
/* 8002A528 00027468  7F 65 DB 78 */	mr r5, r27
/* 8002A52C 0002746C  7F 46 D3 78 */	mr r6, r26
/* 8002A530 00027470  7F 27 CB 78 */	mr r7, r25
/* 8002A534 00027474  48 00 1C 0D */	bl printContext__12JUTExceptionFUsP9OSContextUlUl
/* 8002A538 00027478  4B FF FF 24 */	b .L_8002A45C

.global errorHandler__12JUTExceptionFUsP9OSContextUlUl
errorHandler__12JUTExceptionFUsP9OSContextUlUl:
/* 8002A53C 0002747C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002A540 00027480  7C 08 02 A6 */	mflr r0
/* 8002A544 00027484  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002A548 00027488  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8002A54C 0002748C  7C DF 33 78 */	mr r31, r6
/* 8002A550 00027490  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8002A554 00027494  7C BE 2B 78 */	mr r30, r5
/* 8002A558 00027498  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8002A55C 0002749C  7C 9D 23 78 */	mr r29, r4
/* 8002A560 000274A0  93 81 00 10 */	stw r28, 0x10(r1)
/* 8002A564 000274A4  7C 7C 1B 78 */	mr r28, r3
/* 8002A568 000274A8  48 0A 9F F1 */	bl PPCMfmsr
/* 8002A56C 000274AC  90 6D 88 A8 */	stw r3, msr__12JUTException@sda21(r13)
/* 8002A570 000274B0  7F A3 EB 78 */	mr r3, r29
/* 8002A574 000274B4  80 1D 01 94 */	lwz r0, 0x194(r29)
/* 8002A578 000274B8  90 0D 88 AC */	stw r0, fpscr__12JUTException@sda21(r13)
/* 8002A57C 000274BC  48 0C 30 45 */	bl OSFillFPUContext
/* 8002A580 000274C0  7F 83 E3 78 */	mr r3, r28
/* 8002A584 000274C4  38 80 00 00 */	li r4, 0
/* 8002A588 000274C8  48 0C 33 11 */	bl OSSetErrorHandler
/* 8002A58C 000274CC  57 80 04 3E */	clrlwi r0, r28, 0x10
/* 8002A590 000274D0  28 00 00 0F */	cmplwi r0, 0xf
/* 8002A594 000274D4  40 82 00 54 */	bne .L_8002A5E8
/* 8002A598 000274D8  38 60 00 00 */	li r3, 0
/* 8002A59C 000274DC  38 80 00 00 */	li r4, 0
/* 8002A5A0 000274E0  38 A0 00 00 */	li r5, 0
/* 8002A5A4 000274E4  38 C0 00 03 */	li r6, 3
/* 8002A5A8 000274E8  48 0C 52 95 */	bl OSProtectRange
/* 8002A5AC 000274EC  38 60 00 01 */	li r3, 1
/* 8002A5B0 000274F0  38 80 00 00 */	li r4, 0
/* 8002A5B4 000274F4  38 A0 00 00 */	li r5, 0
/* 8002A5B8 000274F8  38 C0 00 03 */	li r6, 3
/* 8002A5BC 000274FC  48 0C 52 81 */	bl OSProtectRange
/* 8002A5C0 00027500  38 60 00 02 */	li r3, 2
/* 8002A5C4 00027504  38 80 00 00 */	li r4, 0
/* 8002A5C8 00027508  38 A0 00 00 */	li r5, 0
/* 8002A5CC 0002750C  38 C0 00 03 */	li r6, 3
/* 8002A5D0 00027510  48 0C 52 6D */	bl OSProtectRange
/* 8002A5D4 00027514  38 60 00 03 */	li r3, 3
/* 8002A5D8 00027518  38 80 00 00 */	li r4, 0
/* 8002A5DC 0002751C  38 A0 00 00 */	li r5, 0
/* 8002A5E0 00027520  38 C0 00 03 */	li r6, 3
/* 8002A5E4 00027524  48 0C 52 59 */	bl OSProtectRange
.L_8002A5E8:
/* 8002A5E8 00027528  3C 60 80 4F */	lis r3, exCallbackObject@ha
/* 8002A5EC 0002752C  80 0D 88 94 */	lwz r0, sPreUserCallback__12JUTException@sda21(r13)
/* 8002A5F0 00027530  38 83 01 08 */	addi r4, r3, exCallbackObject@l
/* 8002A5F4 00027534  38 A0 00 01 */	li r5, 1
/* 8002A5F8 00027538  3C 60 80 4A */	lis r3, sMessageQueue__12JUTException@ha
/* 8002A5FC 0002753C  90 04 00 00 */	stw r0, 0(r4)
/* 8002A600 00027540  38 63 03 A8 */	addi r3, r3, sMessageQueue__12JUTException@l
/* 8002A604 00027544  B3 84 00 04 */	sth r28, 4(r4)
/* 8002A608 00027548  93 A4 00 08 */	stw r29, 8(r4)
/* 8002A60C 0002754C  93 C4 00 0C */	stw r30, 0xc(r4)
/* 8002A610 00027550  93 E4 00 10 */	stw r31, 0x10(r4)
/* 8002A614 00027554  48 0C 4F 09 */	bl OSSendMessage
/* 8002A618 00027558  48 0C 74 2D */	bl OSEnableScheduler
/* 8002A61C 0002755C  48 0C 79 75 */	bl OSYieldThread
/* 8002A620 00027560  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002A624 00027564  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8002A628 00027568  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8002A62C 0002756C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8002A630 00027570  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8002A634 00027574  7C 08 03 A6 */	mtlr r0
/* 8002A638 00027578  38 21 00 20 */	addi r1, r1, 0x20
/* 8002A63C 0002757C  4E 80 00 20 */	blr 

.global panic_f__12JUTExceptionFPCciPCce
panic_f__12JUTExceptionFPCciPCce:
/* 8002A640 00027580  94 21 FE 70 */	stwu r1, -0x190(r1)
/* 8002A644 00027584  7C 08 02 A6 */	mflr r0
/* 8002A648 00027588  90 01 01 94 */	stw r0, 0x194(r1)
/* 8002A64C 0002758C  93 E1 01 8C */	stw r31, 0x18c(r1)
/* 8002A650 00027590  7C 9F 23 78 */	mr r31, r4
/* 8002A654 00027594  93 C1 01 88 */	stw r30, 0x188(r1)
/* 8002A658 00027598  7C 7E 1B 78 */	mr r30, r3
/* 8002A65C 0002759C  93 A1 01 84 */	stw r29, 0x184(r1)
/* 8002A660 000275A0  40 86 00 24 */	bne cr1, .L_8002A684
/* 8002A664 000275A4  D8 21 00 28 */	stfd f1, 0x28(r1)
/* 8002A668 000275A8  D8 41 00 30 */	stfd f2, 0x30(r1)
/* 8002A66C 000275AC  D8 61 00 38 */	stfd f3, 0x38(r1)
/* 8002A670 000275B0  D8 81 00 40 */	stfd f4, 0x40(r1)
/* 8002A674 000275B4  D8 A1 00 48 */	stfd f5, 0x48(r1)
/* 8002A678 000275B8  D8 C1 00 50 */	stfd f6, 0x50(r1)
/* 8002A67C 000275BC  D8 E1 00 58 */	stfd f7, 0x58(r1)
/* 8002A680 000275C0  D9 01 00 60 */	stfd f8, 0x60(r1)
.L_8002A684:
/* 8002A684 000275C4  39 61 01 98 */	addi r11, r1, 0x198
/* 8002A688 000275C8  38 01 00 08 */	addi r0, r1, 8
/* 8002A68C 000275CC  3D 80 03 00 */	lis r12, 0x300
/* 8002A690 000275D0  90 61 00 08 */	stw r3, 8(r1)
/* 8002A694 000275D4  3B A1 00 68 */	addi r29, r1, 0x68
/* 8002A698 000275D8  38 61 00 74 */	addi r3, r1, 0x74
/* 8002A69C 000275DC  90 81 00 0C */	stw r4, 0xc(r1)
/* 8002A6A0 000275E0  38 80 00 FF */	li r4, 0xff
/* 8002A6A4 000275E4  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8002A6A8 000275E8  7F A6 EB 78 */	mr r6, r29
/* 8002A6AC 000275EC  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8002A6B0 000275F0  90 E1 00 18 */	stw r7, 0x18(r1)
/* 8002A6B4 000275F4  91 01 00 1C */	stw r8, 0x1c(r1)
/* 8002A6B8 000275F8  91 21 00 20 */	stw r9, 0x20(r1)
/* 8002A6BC 000275FC  91 41 00 24 */	stw r10, 0x24(r1)
/* 8002A6C0 00027600  91 81 00 68 */	stw r12, 0x68(r1)
/* 8002A6C4 00027604  91 61 00 6C */	stw r11, 0x6c(r1)
/* 8002A6C8 00027608  90 01 00 70 */	stw r0, 0x70(r1)
/* 8002A6CC 0002760C  48 09 CF 99 */	bl vsnprintf
/* 8002A6D0 00027610  80 0D 88 90 */	lwz r0, sErrorManager__12JUTException@sda21(r13)
/* 8002A6D4 00027614  28 00 00 00 */	cmplwi r0, 0
/* 8002A6D8 00027618  40 82 00 18 */	bne .L_8002A6F0
/* 8002A6DC 0002761C  7F C3 F3 78 */	mr r3, r30
/* 8002A6E0 00027620  7F E4 FB 78 */	mr r4, r31
/* 8002A6E4 00027624  38 A1 00 74 */	addi r5, r1, 0x74
/* 8002A6E8 00027628  4C C6 31 82 */	crclr 6
/* 8002A6EC 0002762C  48 0C 30 81 */	bl OSPanic
.L_8002A6F0:
/* 8002A6F0 00027630  48 0C 29 11 */	bl OSGetCurrentContext
/* 8002A6F4 00027634  3C A0 80 4F */	lis r5, context$2483@ha
/* 8002A6F8 00027638  7C 64 1B 78 */	mr r4, r3
/* 8002A6FC 0002763C  38 65 01 28 */	addi r3, r5, context$2483@l
/* 8002A700 00027640  38 A0 02 C8 */	li r5, 0x2c8
/* 8002A704 00027644  4B FD AA 99 */	bl memcpy
/* 8002A708 00027648  48 0C 2A 5D */	bl OSGetStackPointer
/* 8002A70C 0002764C  80 ED 88 90 */	lwz r7, sErrorManager__12JUTException@sda21(r13)
/* 8002A710 00027650  3C C0 80 4F */	lis r6, exCallbackObject@ha
/* 8002A714 00027654  3C 80 80 4F */	lis r4, context$2483@ha
/* 8002A718 00027658  38 A0 00 FF */	li r5, 0xff
/* 8002A71C 0002765C  90 67 00 A0 */	stw r3, 0xa0(r7)
/* 8002A720 00027660  38 C6 01 08 */	addi r6, r6, exCallbackObject@l
/* 8002A724 00027664  38 00 00 00 */	li r0, 0
/* 8002A728 00027668  38 64 01 28 */	addi r3, r4, context$2483@l
/* 8002A72C 0002766C  80 ED 88 A4 */	lwz r7, sConsole__12JUTException@sda21(r13)
/* 8002A730 00027670  80 8D 88 94 */	lwz r4, sPreUserCallback__12JUTException@sda21(r13)
/* 8002A734 00027674  28 07 00 00 */	cmplwi r7, 0
/* 8002A738 00027678  B0 A6 00 04 */	sth r5, 4(r6)
/* 8002A73C 0002767C  90 86 00 00 */	stw r4, 0(r6)
/* 8002A740 00027680  90 66 00 08 */	stw r3, 8(r6)
/* 8002A744 00027684  90 06 00 0C */	stw r0, 0xc(r6)
/* 8002A748 00027688  90 06 00 10 */	stw r0, 0x10(r6)
/* 8002A74C 0002768C  41 82 00 14 */	beq .L_8002A760
/* 8002A750 00027690  41 82 00 2C */	beq .L_8002A77C
/* 8002A754 00027694  80 07 00 58 */	lwz r0, 0x58(r7)
/* 8002A758 00027698  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8002A75C 0002769C  40 82 00 20 */	bne .L_8002A77C
.L_8002A760:
/* 8002A760 000276A0  3C 60 80 47 */	lis r3, lbl_80473CD4@ha
/* 8002A764 000276A4  7F C5 F3 78 */	mr r5, r30
/* 8002A768 000276A8  38 63 3C D4 */	addi r3, r3, lbl_80473CD4@l
/* 8002A76C 000276AC  7F E6 FB 78 */	mr r6, r31
/* 8002A770 000276B0  38 81 00 74 */	addi r4, r1, 0x74
/* 8002A774 000276B4  4C C6 31 82 */	crclr 6
/* 8002A778 000276B8  48 0C 2F 75 */	bl OSReport
.L_8002A77C:
/* 8002A77C 000276BC  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002A780 000276C0  28 03 00 00 */	cmplwi r3, 0
/* 8002A784 000276C4  41 82 00 20 */	beq .L_8002A7A4
/* 8002A788 000276C8  3C 80 80 47 */	lis r4, lbl_80473CD4@ha
/* 8002A78C 000276CC  7F C6 F3 78 */	mr r6, r30
/* 8002A790 000276D0  38 84 3C D4 */	addi r4, r4, lbl_80473CD4@l
/* 8002A794 000276D4  7F E7 FB 78 */	mr r7, r31
/* 8002A798 000276D8  38 A1 00 74 */	addi r5, r1, 0x74
/* 8002A79C 000276DC  4C C6 31 82 */	crclr 6
/* 8002A7A0 000276E0  4B FF E2 01 */	bl print_f__10JUTConsoleFPCce
.L_8002A7A4:
/* 8002A7A4 000276E4  3C 60 80 4A */	lis r3, sMessageQueue__12JUTException@ha
/* 8002A7A8 000276E8  3C 80 80 4F */	lis r4, exCallbackObject@ha
/* 8002A7AC 000276EC  38 63 03 A8 */	addi r3, r3, sMessageQueue__12JUTException@l
/* 8002A7B0 000276F0  38 A0 00 01 */	li r5, 1
/* 8002A7B4 000276F4  38 84 01 08 */	addi r4, r4, exCallbackObject@l
/* 8002A7B8 000276F8  48 0C 4D 65 */	bl OSSendMessage
/* 8002A7BC 000276FC  48 0C 72 09 */	bl OSGetCurrentThread
/* 8002A7C0 00027700  48 0C 7F BD */	bl OSSuspendThread
/* 8002A7C4 00027704  80 01 01 94 */	lwz r0, 0x194(r1)
/* 8002A7C8 00027708  83 E1 01 8C */	lwz r31, 0x18c(r1)
/* 8002A7CC 0002770C  83 C1 01 88 */	lwz r30, 0x188(r1)
/* 8002A7D0 00027710  83 A1 01 84 */	lwz r29, 0x184(r1)
/* 8002A7D4 00027714  7C 08 03 A6 */	mtlr r0
/* 8002A7D8 00027718  38 21 01 90 */	addi r1, r1, 0x190
/* 8002A7DC 0002771C  4E 80 00 20 */	blr 

.global setFPException__12JUTExceptionFUl
setFPException__12JUTExceptionFUl:
/* 8002A7E0 00027720  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002A7E4 00027724  7C 08 02 A6 */	mflr r0
/* 8002A7E8 00027728  28 03 00 00 */	cmplwi r3, 0
/* 8002A7EC 0002772C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002A7F0 00027730  90 6D 83 68 */	stw r3, __OSFpscrEnableBits@sda21(r13)
/* 8002A7F4 00027734  41 82 00 18 */	beq .L_8002A80C
/* 8002A7F8 00027738  3C 80 80 03 */	lis r4, errorHandler__12JUTExceptionFUsP9OSContextUlUl@ha
/* 8002A7FC 0002773C  38 60 00 10 */	li r3, 0x10
/* 8002A800 00027740  38 84 A5 3C */	addi r4, r4, errorHandler__12JUTExceptionFUsP9OSContextUlUl@l
/* 8002A804 00027744  48 0C 30 95 */	bl OSSetErrorHandler
/* 8002A808 00027748  48 00 00 10 */	b .L_8002A818
.L_8002A80C:
/* 8002A80C 0002774C  38 60 00 10 */	li r3, 0x10
/* 8002A810 00027750  38 80 00 00 */	li r4, 0
/* 8002A814 00027754  48 0C 30 85 */	bl OSSetErrorHandler
.L_8002A818:
/* 8002A818 00027758  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002A81C 0002775C  7C 08 03 A6 */	mtlr r0
/* 8002A820 00027760  38 21 00 10 */	addi r1, r1, 0x10
/* 8002A824 00027764  4E 80 00 20 */	blr 

.global showFloat__12JUTExceptionFP9OSContext
showFloat__12JUTExceptionFP9OSContext:
/* 8002A828 00027768  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8002A82C 0002776C  7C 08 02 A6 */	mflr r0
/* 8002A830 00027770  3C A0 80 47 */	lis r5, lbl_80473C18@ha
/* 8002A834 00027774  90 01 00 64 */	stw r0, 0x64(r1)
/* 8002A838 00027778  BF 61 00 4C */	stmw r27, 0x4c(r1)
/* 8002A83C 0002777C  7C 9B 23 78 */	mr r27, r4
/* 8002A840 00027780  3B C5 3C 18 */	addi r30, r5, lbl_80473C18@l
/* 8002A844 00027784  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002A848 00027788  28 03 00 00 */	cmplwi r3, 0
/* 8002A84C 0002778C  41 82 07 38 */	beq .L_8002AF84
/* 8002A850 00027790  38 9E 01 28 */	addi r4, r30, 0x128
/* 8002A854 00027794  4B FF E1 D9 */	bl print__10JUTConsoleFPCc
/* 8002A858 00027798  7F 7D DB 78 */	mr r29, r27
/* 8002A85C 0002779C  3B 80 00 00 */	li r28, 0
/* 8002A860 000277A0  3F E0 7F 80 */	lis r31, 0x7f80
.L_8002A864:
/* 8002A864 000277A4  C8 1D 00 90 */	lfd f0, 0x90(r29)
/* 8002A868 000277A8  FC 20 00 18 */	frsp f1, f0
/* 8002A86C 000277AC  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 8002A870 000277B0  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 8002A874 000277B4  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 8002A878 000277B8  54 60 00 50 */	rlwinm r0, r3, 0, 1, 8
/* 8002A87C 000277BC  7C 00 F8 00 */	cmpw r0, r31
/* 8002A880 000277C0  41 82 00 14 */	beq .L_8002A894
/* 8002A884 000277C4  40 80 00 40 */	bge .L_8002A8C4
/* 8002A888 000277C8  2C 00 00 00 */	cmpwi r0, 0
/* 8002A88C 000277CC  41 82 00 20 */	beq .L_8002A8AC
/* 8002A890 000277D0  48 00 00 34 */	b .L_8002A8C4
.L_8002A894:
/* 8002A894 000277D4  54 60 02 7F */	clrlwi. r0, r3, 9
/* 8002A898 000277D8  41 82 00 0C */	beq .L_8002A8A4
/* 8002A89C 000277DC  38 00 00 01 */	li r0, 1
/* 8002A8A0 000277E0  48 00 00 28 */	b .L_8002A8C8
.L_8002A8A4:
/* 8002A8A4 000277E4  38 00 00 02 */	li r0, 2
/* 8002A8A8 000277E8  48 00 00 20 */	b .L_8002A8C8
.L_8002A8AC:
/* 8002A8AC 000277EC  54 60 02 7F */	clrlwi. r0, r3, 9
/* 8002A8B0 000277F0  41 82 00 0C */	beq .L_8002A8BC
/* 8002A8B4 000277F4  38 00 00 05 */	li r0, 5
/* 8002A8B8 000277F8  48 00 00 10 */	b .L_8002A8C8
.L_8002A8BC:
/* 8002A8BC 000277FC  38 00 00 03 */	li r0, 3
/* 8002A8C0 00027800  48 00 00 08 */	b .L_8002A8C8
.L_8002A8C4:
/* 8002A8C4 00027804  38 00 00 04 */	li r0, 4
.L_8002A8C8:
/* 8002A8C8 00027808  2C 00 00 01 */	cmpwi r0, 1
/* 8002A8CC 0002780C  40 82 00 1C */	bne .L_8002A8E8
/* 8002A8D0 00027810  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002A8D4 00027814  7F 85 E3 78 */	mr r5, r28
/* 8002A8D8 00027818  38 9E 00 D4 */	addi r4, r30, 0xd4
/* 8002A8DC 0002781C  4C C6 31 82 */	crclr 6
/* 8002A8E0 00027820  4B FF E0 C1 */	bl print_f__10JUTConsoleFPCce
/* 8002A8E4 00027824  48 00 00 DC */	b .L_8002A9C0
.L_8002A8E8:
/* 8002A8E8 00027828  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 8002A8EC 0002782C  3C 00 7F 80 */	lis r0, 0x7f80
/* 8002A8F0 00027830  80 81 00 28 */	lwz r4, 0x28(r1)
/* 8002A8F4 00027834  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 8002A8F8 00027838  7C 03 00 00 */	cmpw r3, r0
/* 8002A8FC 0002783C  41 82 00 14 */	beq .L_8002A910
/* 8002A900 00027840  40 80 00 40 */	bge .L_8002A940
/* 8002A904 00027844  2C 03 00 00 */	cmpwi r3, 0
/* 8002A908 00027848  41 82 00 20 */	beq .L_8002A928
/* 8002A90C 0002784C  48 00 00 34 */	b .L_8002A940
.L_8002A910:
/* 8002A910 00027850  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8002A914 00027854  41 82 00 0C */	beq .L_8002A920
/* 8002A918 00027858  38 00 00 01 */	li r0, 1
/* 8002A91C 0002785C  48 00 00 28 */	b .L_8002A944
.L_8002A920:
/* 8002A920 00027860  38 00 00 02 */	li r0, 2
/* 8002A924 00027864  48 00 00 20 */	b .L_8002A944
.L_8002A928:
/* 8002A928 00027868  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8002A92C 0002786C  41 82 00 0C */	beq .L_8002A938
/* 8002A930 00027870  38 00 00 05 */	li r0, 5
/* 8002A934 00027874  48 00 00 10 */	b .L_8002A944
.L_8002A938:
/* 8002A938 00027878  38 00 00 03 */	li r0, 3
/* 8002A93C 0002787C  48 00 00 08 */	b .L_8002A944
.L_8002A940:
/* 8002A940 00027880  38 00 00 04 */	li r0, 4
.L_8002A944:
/* 8002A944 00027884  2C 00 00 02 */	cmpwi r0, 2
/* 8002A948 00027888  40 82 00 40 */	bne .L_8002A988
/* 8002A94C 0002788C  88 01 00 40 */	lbz r0, 0x40(r1)
/* 8002A950 00027890  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 8002A954 00027894  41 82 00 1C */	beq .L_8002A970
/* 8002A958 00027898  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002A95C 0002789C  7F 85 E3 78 */	mr r5, r28
/* 8002A960 000278A0  38 9E 00 E8 */	addi r4, r30, 0xe8
/* 8002A964 000278A4  4C C6 31 82 */	crclr 6
/* 8002A968 000278A8  4B FF E0 39 */	bl print_f__10JUTConsoleFPCce
/* 8002A96C 000278AC  48 00 00 54 */	b .L_8002A9C0
.L_8002A970:
/* 8002A970 000278B0  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002A974 000278B4  7F 85 E3 78 */	mr r5, r28
/* 8002A978 000278B8  38 9E 00 F8 */	addi r4, r30, 0xf8
/* 8002A97C 000278BC  4C C6 31 82 */	crclr 6
/* 8002A980 000278C0  4B FF E0 21 */	bl print_f__10JUTConsoleFPCce
/* 8002A984 000278C4  48 00 00 3C */	b .L_8002A9C0
.L_8002A988:
/* 8002A988 000278C8  C0 02 82 C8 */	lfs f0, lbl_80516628@sda21(r2)
/* 8002A98C 000278CC  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 8002A990 000278D0  40 82 00 1C */	bne .L_8002A9AC
/* 8002A994 000278D4  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002A998 000278D8  7F 85 E3 78 */	mr r5, r28
/* 8002A99C 000278DC  38 9E 01 08 */	addi r4, r30, 0x108
/* 8002A9A0 000278E0  4C C6 31 82 */	crclr 6
/* 8002A9A4 000278E4  4B FF DF FD */	bl print_f__10JUTConsoleFPCce
/* 8002A9A8 000278E8  48 00 00 18 */	b .L_8002A9C0
.L_8002A9AC:
/* 8002A9AC 000278EC  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002A9B0 000278F0  7F 85 E3 78 */	mr r5, r28
/* 8002A9B4 000278F4  38 9E 01 1C */	addi r4, r30, 0x11c
/* 8002A9B8 000278F8  4C C6 32 42 */	crset 6
/* 8002A9BC 000278FC  4B FF DF E5 */	bl print_f__10JUTConsoleFPCce
.L_8002A9C0:
/* 8002A9C0 00027900  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002A9C4 00027904  38 82 82 CC */	addi r4, r2, lbl_8051662C@sda21
/* 8002A9C8 00027908  4B FF E0 65 */	bl print__10JUTConsoleFPCc
/* 8002A9CC 0002790C  C8 1D 00 E8 */	lfd f0, 0xe8(r29)
/* 8002A9D0 00027910  FC 20 00 18 */	frsp f1, f0
/* 8002A9D4 00027914  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8002A9D8 00027918  80 61 00 24 */	lwz r3, 0x24(r1)
/* 8002A9DC 0002791C  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 8002A9E0 00027920  54 60 00 50 */	rlwinm r0, r3, 0, 1, 8
/* 8002A9E4 00027924  7C 00 F8 00 */	cmpw r0, r31
/* 8002A9E8 00027928  41 82 00 14 */	beq .L_8002A9FC
/* 8002A9EC 0002792C  40 80 00 40 */	bge .L_8002AA2C
/* 8002A9F0 00027930  2C 00 00 00 */	cmpwi r0, 0
/* 8002A9F4 00027934  41 82 00 20 */	beq .L_8002AA14
/* 8002A9F8 00027938  48 00 00 34 */	b .L_8002AA2C
.L_8002A9FC:
/* 8002A9FC 0002793C  54 60 02 7F */	clrlwi. r0, r3, 9
/* 8002AA00 00027940  41 82 00 0C */	beq .L_8002AA0C
/* 8002AA04 00027944  38 00 00 01 */	li r0, 1
/* 8002AA08 00027948  48 00 00 28 */	b .L_8002AA30
.L_8002AA0C:
/* 8002AA0C 0002794C  38 00 00 02 */	li r0, 2
/* 8002AA10 00027950  48 00 00 20 */	b .L_8002AA30
.L_8002AA14:
/* 8002AA14 00027954  54 60 02 7F */	clrlwi. r0, r3, 9
/* 8002AA18 00027958  41 82 00 0C */	beq .L_8002AA24
/* 8002AA1C 0002795C  38 00 00 05 */	li r0, 5
/* 8002AA20 00027960  48 00 00 10 */	b .L_8002AA30
.L_8002AA24:
/* 8002AA24 00027964  38 00 00 03 */	li r0, 3
/* 8002AA28 00027968  48 00 00 08 */	b .L_8002AA30
.L_8002AA2C:
/* 8002AA2C 0002796C  38 00 00 04 */	li r0, 4
.L_8002AA30:
/* 8002AA30 00027970  2C 00 00 01 */	cmpwi r0, 1
/* 8002AA34 00027974  40 82 00 1C */	bne .L_8002AA50
/* 8002AA38 00027978  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002AA3C 0002797C  38 9E 00 D4 */	addi r4, r30, 0xd4
/* 8002AA40 00027980  38 BC 00 0B */	addi r5, r28, 0xb
/* 8002AA44 00027984  4C C6 31 82 */	crclr 6
/* 8002AA48 00027988  4B FF DF 59 */	bl print_f__10JUTConsoleFPCce
/* 8002AA4C 0002798C  48 00 00 DC */	b .L_8002AB28
.L_8002AA50:
/* 8002AA50 00027990  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 8002AA54 00027994  3C 00 7F 80 */	lis r0, 0x7f80
/* 8002AA58 00027998  80 81 00 20 */	lwz r4, 0x20(r1)
/* 8002AA5C 0002799C  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 8002AA60 000279A0  7C 03 00 00 */	cmpw r3, r0
/* 8002AA64 000279A4  41 82 00 14 */	beq .L_8002AA78
/* 8002AA68 000279A8  40 80 00 40 */	bge .L_8002AAA8
/* 8002AA6C 000279AC  2C 03 00 00 */	cmpwi r3, 0
/* 8002AA70 000279B0  41 82 00 20 */	beq .L_8002AA90
/* 8002AA74 000279B4  48 00 00 34 */	b .L_8002AAA8
.L_8002AA78:
/* 8002AA78 000279B8  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8002AA7C 000279BC  41 82 00 0C */	beq .L_8002AA88
/* 8002AA80 000279C0  38 00 00 01 */	li r0, 1
/* 8002AA84 000279C4  48 00 00 28 */	b .L_8002AAAC
.L_8002AA88:
/* 8002AA88 000279C8  38 00 00 02 */	li r0, 2
/* 8002AA8C 000279CC  48 00 00 20 */	b .L_8002AAAC
.L_8002AA90:
/* 8002AA90 000279D0  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8002AA94 000279D4  41 82 00 0C */	beq .L_8002AAA0
/* 8002AA98 000279D8  38 00 00 05 */	li r0, 5
/* 8002AA9C 000279DC  48 00 00 10 */	b .L_8002AAAC
.L_8002AAA0:
/* 8002AAA0 000279E0  38 00 00 03 */	li r0, 3
/* 8002AAA4 000279E4  48 00 00 08 */	b .L_8002AAAC
.L_8002AAA8:
/* 8002AAA8 000279E8  38 00 00 04 */	li r0, 4
.L_8002AAAC:
/* 8002AAAC 000279EC  2C 00 00 02 */	cmpwi r0, 2
/* 8002AAB0 000279F0  40 82 00 40 */	bne .L_8002AAF0
/* 8002AAB4 000279F4  88 01 00 3C */	lbz r0, 0x3c(r1)
/* 8002AAB8 000279F8  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 8002AABC 000279FC  41 82 00 1C */	beq .L_8002AAD8
/* 8002AAC0 00027A00  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002AAC4 00027A04  38 9E 00 E8 */	addi r4, r30, 0xe8
/* 8002AAC8 00027A08  38 BC 00 0B */	addi r5, r28, 0xb
/* 8002AACC 00027A0C  4C C6 31 82 */	crclr 6
/* 8002AAD0 00027A10  4B FF DE D1 */	bl print_f__10JUTConsoleFPCce
/* 8002AAD4 00027A14  48 00 00 54 */	b .L_8002AB28
.L_8002AAD8:
/* 8002AAD8 00027A18  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002AADC 00027A1C  38 9E 00 F8 */	addi r4, r30, 0xf8
/* 8002AAE0 00027A20  38 BC 00 0B */	addi r5, r28, 0xb
/* 8002AAE4 00027A24  4C C6 31 82 */	crclr 6
/* 8002AAE8 00027A28  4B FF DE B9 */	bl print_f__10JUTConsoleFPCce
/* 8002AAEC 00027A2C  48 00 00 3C */	b .L_8002AB28
.L_8002AAF0:
/* 8002AAF0 00027A30  C0 02 82 C8 */	lfs f0, lbl_80516628@sda21(r2)
/* 8002AAF4 00027A34  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 8002AAF8 00027A38  40 82 00 1C */	bne .L_8002AB14
/* 8002AAFC 00027A3C  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002AB00 00027A40  38 9E 01 08 */	addi r4, r30, 0x108
/* 8002AB04 00027A44  38 BC 00 0B */	addi r5, r28, 0xb
/* 8002AB08 00027A48  4C C6 31 82 */	crclr 6
/* 8002AB0C 00027A4C  4B FF DE 95 */	bl print_f__10JUTConsoleFPCce
/* 8002AB10 00027A50  48 00 00 18 */	b .L_8002AB28
.L_8002AB14:
/* 8002AB14 00027A54  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002AB18 00027A58  38 9E 01 1C */	addi r4, r30, 0x11c
/* 8002AB1C 00027A5C  38 BC 00 0B */	addi r5, r28, 0xb
/* 8002AB20 00027A60  4C C6 32 42 */	crset 6
/* 8002AB24 00027A64  4B FF DE 7D */	bl print_f__10JUTConsoleFPCce
.L_8002AB28:
/* 8002AB28 00027A68  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002AB2C 00027A6C  38 82 82 CC */	addi r4, r2, lbl_8051662C@sda21
/* 8002AB30 00027A70  4B FF DE FD */	bl print__10JUTConsoleFPCc
/* 8002AB34 00027A74  C8 1D 01 40 */	lfd f0, 0x140(r29)
/* 8002AB38 00027A78  FC 20 00 18 */	frsp f1, f0
/* 8002AB3C 00027A7C  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8002AB40 00027A80  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8002AB44 00027A84  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 8002AB48 00027A88  54 60 00 50 */	rlwinm r0, r3, 0, 1, 8
/* 8002AB4C 00027A8C  7C 00 F8 00 */	cmpw r0, r31
/* 8002AB50 00027A90  41 82 00 14 */	beq .L_8002AB64
/* 8002AB54 00027A94  40 80 00 40 */	bge .L_8002AB94
/* 8002AB58 00027A98  2C 00 00 00 */	cmpwi r0, 0
/* 8002AB5C 00027A9C  41 82 00 20 */	beq .L_8002AB7C
/* 8002AB60 00027AA0  48 00 00 34 */	b .L_8002AB94
.L_8002AB64:
/* 8002AB64 00027AA4  54 60 02 7F */	clrlwi. r0, r3, 9
/* 8002AB68 00027AA8  41 82 00 0C */	beq .L_8002AB74
/* 8002AB6C 00027AAC  38 00 00 01 */	li r0, 1
/* 8002AB70 00027AB0  48 00 00 28 */	b .L_8002AB98
.L_8002AB74:
/* 8002AB74 00027AB4  38 00 00 02 */	li r0, 2
/* 8002AB78 00027AB8  48 00 00 20 */	b .L_8002AB98
.L_8002AB7C:
/* 8002AB7C 00027ABC  54 60 02 7F */	clrlwi. r0, r3, 9
/* 8002AB80 00027AC0  41 82 00 0C */	beq .L_8002AB8C
/* 8002AB84 00027AC4  38 00 00 05 */	li r0, 5
/* 8002AB88 00027AC8  48 00 00 10 */	b .L_8002AB98
.L_8002AB8C:
/* 8002AB8C 00027ACC  38 00 00 03 */	li r0, 3
/* 8002AB90 00027AD0  48 00 00 08 */	b .L_8002AB98
.L_8002AB94:
/* 8002AB94 00027AD4  38 00 00 04 */	li r0, 4
.L_8002AB98:
/* 8002AB98 00027AD8  2C 00 00 01 */	cmpwi r0, 1
/* 8002AB9C 00027ADC  40 82 00 1C */	bne .L_8002ABB8
/* 8002ABA0 00027AE0  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002ABA4 00027AE4  38 9E 00 D4 */	addi r4, r30, 0xd4
/* 8002ABA8 00027AE8  38 BC 00 16 */	addi r5, r28, 0x16
/* 8002ABAC 00027AEC  4C C6 31 82 */	crclr 6
/* 8002ABB0 00027AF0  4B FF DD F1 */	bl print_f__10JUTConsoleFPCce
/* 8002ABB4 00027AF4  48 00 00 DC */	b .L_8002AC90
.L_8002ABB8:
/* 8002ABB8 00027AF8  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8002ABBC 00027AFC  3C 00 7F 80 */	lis r0, 0x7f80
/* 8002ABC0 00027B00  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8002ABC4 00027B04  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 8002ABC8 00027B08  7C 03 00 00 */	cmpw r3, r0
/* 8002ABCC 00027B0C  41 82 00 14 */	beq .L_8002ABE0
/* 8002ABD0 00027B10  40 80 00 40 */	bge .L_8002AC10
/* 8002ABD4 00027B14  2C 03 00 00 */	cmpwi r3, 0
/* 8002ABD8 00027B18  41 82 00 20 */	beq .L_8002ABF8
/* 8002ABDC 00027B1C  48 00 00 34 */	b .L_8002AC10
.L_8002ABE0:
/* 8002ABE0 00027B20  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8002ABE4 00027B24  41 82 00 0C */	beq .L_8002ABF0
/* 8002ABE8 00027B28  38 00 00 01 */	li r0, 1
/* 8002ABEC 00027B2C  48 00 00 28 */	b .L_8002AC14
.L_8002ABF0:
/* 8002ABF0 00027B30  38 00 00 02 */	li r0, 2
/* 8002ABF4 00027B34  48 00 00 20 */	b .L_8002AC14
.L_8002ABF8:
/* 8002ABF8 00027B38  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8002ABFC 00027B3C  41 82 00 0C */	beq .L_8002AC08
/* 8002AC00 00027B40  38 00 00 05 */	li r0, 5
/* 8002AC04 00027B44  48 00 00 10 */	b .L_8002AC14
.L_8002AC08:
/* 8002AC08 00027B48  38 00 00 03 */	li r0, 3
/* 8002AC0C 00027B4C  48 00 00 08 */	b .L_8002AC14
.L_8002AC10:
/* 8002AC10 00027B50  38 00 00 04 */	li r0, 4
.L_8002AC14:
/* 8002AC14 00027B54  2C 00 00 02 */	cmpwi r0, 2
/* 8002AC18 00027B58  40 82 00 40 */	bne .L_8002AC58
/* 8002AC1C 00027B5C  88 01 00 38 */	lbz r0, 0x38(r1)
/* 8002AC20 00027B60  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 8002AC24 00027B64  41 82 00 1C */	beq .L_8002AC40
/* 8002AC28 00027B68  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002AC2C 00027B6C  38 9E 00 E8 */	addi r4, r30, 0xe8
/* 8002AC30 00027B70  38 BC 00 16 */	addi r5, r28, 0x16
/* 8002AC34 00027B74  4C C6 31 82 */	crclr 6
/* 8002AC38 00027B78  4B FF DD 69 */	bl print_f__10JUTConsoleFPCce
/* 8002AC3C 00027B7C  48 00 00 54 */	b .L_8002AC90
.L_8002AC40:
/* 8002AC40 00027B80  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002AC44 00027B84  38 9E 00 F8 */	addi r4, r30, 0xf8
/* 8002AC48 00027B88  38 BC 00 16 */	addi r5, r28, 0x16
/* 8002AC4C 00027B8C  4C C6 31 82 */	crclr 6
/* 8002AC50 00027B90  4B FF DD 51 */	bl print_f__10JUTConsoleFPCce
/* 8002AC54 00027B94  48 00 00 3C */	b .L_8002AC90
.L_8002AC58:
/* 8002AC58 00027B98  C0 02 82 C8 */	lfs f0, lbl_80516628@sda21(r2)
/* 8002AC5C 00027B9C  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 8002AC60 00027BA0  40 82 00 1C */	bne .L_8002AC7C
/* 8002AC64 00027BA4  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002AC68 00027BA8  38 9E 01 08 */	addi r4, r30, 0x108
/* 8002AC6C 00027BAC  38 BC 00 16 */	addi r5, r28, 0x16
/* 8002AC70 00027BB0  4C C6 31 82 */	crclr 6
/* 8002AC74 00027BB4  4B FF DD 2D */	bl print_f__10JUTConsoleFPCce
/* 8002AC78 00027BB8  48 00 00 18 */	b .L_8002AC90
.L_8002AC7C:
/* 8002AC7C 00027BBC  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002AC80 00027BC0  38 9E 01 1C */	addi r4, r30, 0x11c
/* 8002AC84 00027BC4  38 BC 00 16 */	addi r5, r28, 0x16
/* 8002AC88 00027BC8  4C C6 32 42 */	crset 6
/* 8002AC8C 00027BCC  4B FF DD 15 */	bl print_f__10JUTConsoleFPCce
.L_8002AC90:
/* 8002AC90 00027BD0  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002AC94 00027BD4  38 82 82 D0 */	addi r4, r2, lbl_80516630@sda21
/* 8002AC98 00027BD8  4B FF DD 95 */	bl print__10JUTConsoleFPCc
/* 8002AC9C 00027BDC  3B 9C 00 01 */	addi r28, r28, 1
/* 8002ACA0 00027BE0  3B BD 00 08 */	addi r29, r29, 8
/* 8002ACA4 00027BE4  2C 1C 00 0A */	cmpwi r28, 0xa
/* 8002ACA8 00027BE8  41 80 FB BC */	blt .L_8002A864
/* 8002ACAC 00027BEC  C8 1B 00 E0 */	lfd f0, 0xe0(r27)
/* 8002ACB0 00027BF0  3C 00 7F 80 */	lis r0, 0x7f80
/* 8002ACB4 00027BF4  FC 20 00 18 */	frsp f1, f0
/* 8002ACB8 00027BF8  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 8002ACBC 00027BFC  80 81 00 14 */	lwz r4, 0x14(r1)
/* 8002ACC0 00027C00  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 8002ACC4 00027C04  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 8002ACC8 00027C08  7C 03 00 00 */	cmpw r3, r0
/* 8002ACCC 00027C0C  41 82 00 14 */	beq .L_8002ACE0
/* 8002ACD0 00027C10  40 80 00 40 */	bge .L_8002AD10
/* 8002ACD4 00027C14  2C 03 00 00 */	cmpwi r3, 0
/* 8002ACD8 00027C18  41 82 00 20 */	beq .L_8002ACF8
/* 8002ACDC 00027C1C  48 00 00 34 */	b .L_8002AD10
.L_8002ACE0:
/* 8002ACE0 00027C20  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8002ACE4 00027C24  41 82 00 0C */	beq .L_8002ACF0
/* 8002ACE8 00027C28  38 00 00 01 */	li r0, 1
/* 8002ACEC 00027C2C  48 00 00 28 */	b .L_8002AD14
.L_8002ACF0:
/* 8002ACF0 00027C30  38 00 00 02 */	li r0, 2
/* 8002ACF4 00027C34  48 00 00 20 */	b .L_8002AD14
.L_8002ACF8:
/* 8002ACF8 00027C38  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8002ACFC 00027C3C  41 82 00 0C */	beq .L_8002AD08
/* 8002AD00 00027C40  38 00 00 05 */	li r0, 5
/* 8002AD04 00027C44  48 00 00 10 */	b .L_8002AD14
.L_8002AD08:
/* 8002AD08 00027C48  38 00 00 03 */	li r0, 3
/* 8002AD0C 00027C4C  48 00 00 08 */	b .L_8002AD14
.L_8002AD10:
/* 8002AD10 00027C50  38 00 00 04 */	li r0, 4
.L_8002AD14:
/* 8002AD14 00027C54  2C 00 00 01 */	cmpwi r0, 1
/* 8002AD18 00027C58  40 82 00 1C */	bne .L_8002AD34
/* 8002AD1C 00027C5C  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002AD20 00027C60  38 9E 00 D4 */	addi r4, r30, 0xd4
/* 8002AD24 00027C64  38 A0 00 0A */	li r5, 0xa
/* 8002AD28 00027C68  4C C6 31 82 */	crclr 6
/* 8002AD2C 00027C6C  4B FF DC 75 */	bl print_f__10JUTConsoleFPCce
/* 8002AD30 00027C70  48 00 00 DC */	b .L_8002AE0C
.L_8002AD34:
/* 8002AD34 00027C74  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8002AD38 00027C78  3C 00 7F 80 */	lis r0, 0x7f80
/* 8002AD3C 00027C7C  80 81 00 10 */	lwz r4, 0x10(r1)
/* 8002AD40 00027C80  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 8002AD44 00027C84  7C 03 00 00 */	cmpw r3, r0
/* 8002AD48 00027C88  41 82 00 14 */	beq .L_8002AD5C
/* 8002AD4C 00027C8C  40 80 00 40 */	bge .L_8002AD8C
/* 8002AD50 00027C90  2C 03 00 00 */	cmpwi r3, 0
/* 8002AD54 00027C94  41 82 00 20 */	beq .L_8002AD74
/* 8002AD58 00027C98  48 00 00 34 */	b .L_8002AD8C
.L_8002AD5C:
/* 8002AD5C 00027C9C  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8002AD60 00027CA0  41 82 00 0C */	beq .L_8002AD6C
/* 8002AD64 00027CA4  38 00 00 01 */	li r0, 1
/* 8002AD68 00027CA8  48 00 00 28 */	b .L_8002AD90
.L_8002AD6C:
/* 8002AD6C 00027CAC  38 00 00 02 */	li r0, 2
/* 8002AD70 00027CB0  48 00 00 20 */	b .L_8002AD90
.L_8002AD74:
/* 8002AD74 00027CB4  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8002AD78 00027CB8  41 82 00 0C */	beq .L_8002AD84
/* 8002AD7C 00027CBC  38 00 00 05 */	li r0, 5
/* 8002AD80 00027CC0  48 00 00 10 */	b .L_8002AD90
.L_8002AD84:
/* 8002AD84 00027CC4  38 00 00 03 */	li r0, 3
/* 8002AD88 00027CC8  48 00 00 08 */	b .L_8002AD90
.L_8002AD8C:
/* 8002AD8C 00027CCC  38 00 00 04 */	li r0, 4
.L_8002AD90:
/* 8002AD90 00027CD0  2C 00 00 02 */	cmpwi r0, 2
/* 8002AD94 00027CD4  40 82 00 40 */	bne .L_8002ADD4
/* 8002AD98 00027CD8  88 01 00 34 */	lbz r0, 0x34(r1)
/* 8002AD9C 00027CDC  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 8002ADA0 00027CE0  41 82 00 1C */	beq .L_8002ADBC
/* 8002ADA4 00027CE4  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002ADA8 00027CE8  38 9E 00 E8 */	addi r4, r30, 0xe8
/* 8002ADAC 00027CEC  38 A0 00 0A */	li r5, 0xa
/* 8002ADB0 00027CF0  4C C6 31 82 */	crclr 6
/* 8002ADB4 00027CF4  4B FF DB ED */	bl print_f__10JUTConsoleFPCce
/* 8002ADB8 00027CF8  48 00 00 54 */	b .L_8002AE0C
.L_8002ADBC:
/* 8002ADBC 00027CFC  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002ADC0 00027D00  38 9E 00 F8 */	addi r4, r30, 0xf8
/* 8002ADC4 00027D04  38 A0 00 0A */	li r5, 0xa
/* 8002ADC8 00027D08  4C C6 31 82 */	crclr 6
/* 8002ADCC 00027D0C  4B FF DB D5 */	bl print_f__10JUTConsoleFPCce
/* 8002ADD0 00027D10  48 00 00 3C */	b .L_8002AE0C
.L_8002ADD4:
/* 8002ADD4 00027D14  C0 02 82 C8 */	lfs f0, lbl_80516628@sda21(r2)
/* 8002ADD8 00027D18  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 8002ADDC 00027D1C  40 82 00 1C */	bne .L_8002ADF8
/* 8002ADE0 00027D20  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002ADE4 00027D24  38 9E 01 08 */	addi r4, r30, 0x108
/* 8002ADE8 00027D28  38 A0 00 0A */	li r5, 0xa
/* 8002ADEC 00027D2C  4C C6 31 82 */	crclr 6
/* 8002ADF0 00027D30  4B FF DB B1 */	bl print_f__10JUTConsoleFPCce
/* 8002ADF4 00027D34  48 00 00 18 */	b .L_8002AE0C
.L_8002ADF8:
/* 8002ADF8 00027D38  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002ADFC 00027D3C  38 9E 01 1C */	addi r4, r30, 0x11c
/* 8002AE00 00027D40  38 A0 00 0A */	li r5, 0xa
/* 8002AE04 00027D44  4C C6 32 42 */	crset 6
/* 8002AE08 00027D48  4B FF DB 99 */	bl print_f__10JUTConsoleFPCce
.L_8002AE0C:
/* 8002AE0C 00027D4C  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002AE10 00027D50  38 82 82 CC */	addi r4, r2, lbl_8051662C@sda21
/* 8002AE14 00027D54  4B FF DC 19 */	bl print__10JUTConsoleFPCc
/* 8002AE18 00027D58  C8 1B 01 38 */	lfd f0, 0x138(r27)
/* 8002AE1C 00027D5C  3C 00 7F 80 */	lis r0, 0x7f80
/* 8002AE20 00027D60  FC 20 00 18 */	frsp f1, f0
/* 8002AE24 00027D64  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8002AE28 00027D68  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8002AE2C 00027D6C  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8002AE30 00027D70  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 8002AE34 00027D74  7C 03 00 00 */	cmpw r3, r0
/* 8002AE38 00027D78  41 82 00 14 */	beq .L_8002AE4C
/* 8002AE3C 00027D7C  40 80 00 40 */	bge .L_8002AE7C
/* 8002AE40 00027D80  2C 03 00 00 */	cmpwi r3, 0
/* 8002AE44 00027D84  41 82 00 20 */	beq .L_8002AE64
/* 8002AE48 00027D88  48 00 00 34 */	b .L_8002AE7C
.L_8002AE4C:
/* 8002AE4C 00027D8C  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8002AE50 00027D90  41 82 00 0C */	beq .L_8002AE5C
/* 8002AE54 00027D94  38 00 00 01 */	li r0, 1
/* 8002AE58 00027D98  48 00 00 28 */	b .L_8002AE80
.L_8002AE5C:
/* 8002AE5C 00027D9C  38 00 00 02 */	li r0, 2
/* 8002AE60 00027DA0  48 00 00 20 */	b .L_8002AE80
.L_8002AE64:
/* 8002AE64 00027DA4  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8002AE68 00027DA8  41 82 00 0C */	beq .L_8002AE74
/* 8002AE6C 00027DAC  38 00 00 05 */	li r0, 5
/* 8002AE70 00027DB0  48 00 00 10 */	b .L_8002AE80
.L_8002AE74:
/* 8002AE74 00027DB4  38 00 00 03 */	li r0, 3
/* 8002AE78 00027DB8  48 00 00 08 */	b .L_8002AE80
.L_8002AE7C:
/* 8002AE7C 00027DBC  38 00 00 04 */	li r0, 4
.L_8002AE80:
/* 8002AE80 00027DC0  2C 00 00 01 */	cmpwi r0, 1
/* 8002AE84 00027DC4  40 82 00 1C */	bne .L_8002AEA0
/* 8002AE88 00027DC8  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002AE8C 00027DCC  38 9E 00 D4 */	addi r4, r30, 0xd4
/* 8002AE90 00027DD0  38 A0 00 15 */	li r5, 0x15
/* 8002AE94 00027DD4  4C C6 31 82 */	crclr 6
/* 8002AE98 00027DD8  4B FF DB 09 */	bl print_f__10JUTConsoleFPCce
/* 8002AE9C 00027DDC  48 00 00 DC */	b .L_8002AF78
.L_8002AEA0:
/* 8002AEA0 00027DE0  D0 21 00 08 */	stfs f1, 8(r1)
/* 8002AEA4 00027DE4  3C 00 7F 80 */	lis r0, 0x7f80
/* 8002AEA8 00027DE8  80 81 00 08 */	lwz r4, 8(r1)
/* 8002AEAC 00027DEC  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 8002AEB0 00027DF0  7C 03 00 00 */	cmpw r3, r0
/* 8002AEB4 00027DF4  41 82 00 14 */	beq .L_8002AEC8
/* 8002AEB8 00027DF8  40 80 00 40 */	bge .L_8002AEF8
/* 8002AEBC 00027DFC  2C 03 00 00 */	cmpwi r3, 0
/* 8002AEC0 00027E00  41 82 00 20 */	beq .L_8002AEE0
/* 8002AEC4 00027E04  48 00 00 34 */	b .L_8002AEF8
.L_8002AEC8:
/* 8002AEC8 00027E08  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8002AECC 00027E0C  41 82 00 0C */	beq .L_8002AED8
/* 8002AED0 00027E10  38 00 00 01 */	li r0, 1
/* 8002AED4 00027E14  48 00 00 28 */	b .L_8002AEFC
.L_8002AED8:
/* 8002AED8 00027E18  38 00 00 02 */	li r0, 2
/* 8002AEDC 00027E1C  48 00 00 20 */	b .L_8002AEFC
.L_8002AEE0:
/* 8002AEE0 00027E20  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8002AEE4 00027E24  41 82 00 0C */	beq .L_8002AEF0
/* 8002AEE8 00027E28  38 00 00 05 */	li r0, 5
/* 8002AEEC 00027E2C  48 00 00 10 */	b .L_8002AEFC
.L_8002AEF0:
/* 8002AEF0 00027E30  38 00 00 03 */	li r0, 3
/* 8002AEF4 00027E34  48 00 00 08 */	b .L_8002AEFC
.L_8002AEF8:
/* 8002AEF8 00027E38  38 00 00 04 */	li r0, 4
.L_8002AEFC:
/* 8002AEFC 00027E3C  2C 00 00 02 */	cmpwi r0, 2
/* 8002AF00 00027E40  40 82 00 40 */	bne .L_8002AF40
/* 8002AF04 00027E44  88 01 00 30 */	lbz r0, 0x30(r1)
/* 8002AF08 00027E48  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 8002AF0C 00027E4C  41 82 00 1C */	beq .L_8002AF28
/* 8002AF10 00027E50  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002AF14 00027E54  38 9E 00 E8 */	addi r4, r30, 0xe8
/* 8002AF18 00027E58  38 A0 00 15 */	li r5, 0x15
/* 8002AF1C 00027E5C  4C C6 31 82 */	crclr 6
/* 8002AF20 00027E60  4B FF DA 81 */	bl print_f__10JUTConsoleFPCce
/* 8002AF24 00027E64  48 00 00 54 */	b .L_8002AF78
.L_8002AF28:
/* 8002AF28 00027E68  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002AF2C 00027E6C  38 9E 00 F8 */	addi r4, r30, 0xf8
/* 8002AF30 00027E70  38 A0 00 15 */	li r5, 0x15
/* 8002AF34 00027E74  4C C6 31 82 */	crclr 6
/* 8002AF38 00027E78  4B FF DA 69 */	bl print_f__10JUTConsoleFPCce
/* 8002AF3C 00027E7C  48 00 00 3C */	b .L_8002AF78
.L_8002AF40:
/* 8002AF40 00027E80  C0 02 82 C8 */	lfs f0, lbl_80516628@sda21(r2)
/* 8002AF44 00027E84  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 8002AF48 00027E88  40 82 00 1C */	bne .L_8002AF64
/* 8002AF4C 00027E8C  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002AF50 00027E90  38 9E 01 08 */	addi r4, r30, 0x108
/* 8002AF54 00027E94  38 A0 00 15 */	li r5, 0x15
/* 8002AF58 00027E98  4C C6 31 82 */	crclr 6
/* 8002AF5C 00027E9C  4B FF DA 45 */	bl print_f__10JUTConsoleFPCce
/* 8002AF60 00027EA0  48 00 00 18 */	b .L_8002AF78
.L_8002AF64:
/* 8002AF64 00027EA4  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002AF68 00027EA8  38 9E 01 1C */	addi r4, r30, 0x11c
/* 8002AF6C 00027EAC  38 A0 00 15 */	li r5, 0x15
/* 8002AF70 00027EB0  4C C6 32 42 */	crset 6
/* 8002AF74 00027EB4  4B FF DA 2D */	bl print_f__10JUTConsoleFPCce
.L_8002AF78:
/* 8002AF78 00027EB8  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002AF7C 00027EBC  38 82 82 D0 */	addi r4, r2, lbl_80516630@sda21
/* 8002AF80 00027EC0  4B FF DA AD */	bl print__10JUTConsoleFPCc
.L_8002AF84:
/* 8002AF84 00027EC4  BB 61 00 4C */	lmw r27, 0x4c(r1)
/* 8002AF88 00027EC8  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8002AF8C 00027ECC  7C 08 03 A6 */	mtlr r0
/* 8002AF90 00027ED0  38 21 00 60 */	addi r1, r1, 0x60
/* 8002AF94 00027ED4  4E 80 00 20 */	blr 

.global showStack__12JUTExceptionFP9OSContext
showStack__12JUTExceptionFP9OSContext:
/* 8002AF98 00027ED8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002AF9C 00027EDC  7C 08 02 A6 */	mflr r0
/* 8002AFA0 00027EE0  3C 80 80 47 */	lis r4, lbl_80473C18@ha
/* 8002AFA4 00027EE4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002AFA8 00027EE8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8002AFAC 00027EEC  3B E4 3C 18 */	addi r31, r4, lbl_80473C18@l
/* 8002AFB0 00027EF0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8002AFB4 00027EF4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8002AFB8 00027EF8  93 81 00 10 */	stw r28, 0x10(r1)
/* 8002AFBC 00027EFC  7C 7C 1B 78 */	mr r28, r3
/* 8002AFC0 00027F00  80 0D 88 A4 */	lwz r0, sConsole__12JUTException@sda21(r13)
/* 8002AFC4 00027F04  28 00 00 00 */	cmplwi r0, 0
/* 8002AFC8 00027F08  41 82 00 AC */	beq .L_8002B074
/* 8002AFCC 00027F0C  7C 03 03 78 */	mr r3, r0
/* 8002AFD0 00027F10  38 9F 01 50 */	addi r4, r31, 0x150
/* 8002AFD4 00027F14  4B FF DA 59 */	bl print__10JUTConsoleFPCc
/* 8002AFD8 00027F18  83 BC 00 A0 */	lwz r29, 0xa0(r28)
/* 8002AFDC 00027F1C  38 9F 01 78 */	addi r4, r31, 0x178
/* 8002AFE0 00027F20  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002AFE4 00027F24  4C C6 31 82 */	crclr 6
/* 8002AFE8 00027F28  4B FF D9 B9 */	bl print_f__10JUTConsoleFPCce
/* 8002AFEC 00027F2C  3B C0 00 00 */	li r30, 0
/* 8002AFF0 00027F30  48 00 00 64 */	b .L_8002B054
.L_8002AFF4:
/* 8002AFF4 00027F34  80 1C 00 94 */	lwz r0, 0x94(r28)
/* 8002AFF8 00027F38  7C 1E 00 40 */	cmplw r30, r0
/* 8002AFFC 00027F3C  40 81 00 14 */	ble .L_8002B010
/* 8002B000 00027F40  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B004 00027F44  38 9F 01 98 */	addi r4, r31, 0x198
/* 8002B008 00027F48  4B FF DA 25 */	bl print__10JUTConsoleFPCc
/* 8002B00C 00027F4C  48 00 00 68 */	b .L_8002B074
.L_8002B010:
/* 8002B010 00027F50  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B014 00027F54  7F A5 EB 78 */	mr r5, r29
/* 8002B018 00027F58  80 DD 00 00 */	lwz r6, 0(r29)
/* 8002B01C 00027F5C  38 9F 01 AC */	addi r4, r31, 0x1ac
/* 8002B020 00027F60  80 FD 00 04 */	lwz r7, 4(r29)
/* 8002B024 00027F64  4C C6 31 82 */	crclr 6
/* 8002B028 00027F68  4B FF D9 79 */	bl print_f__10JUTConsoleFPCce
/* 8002B02C 00027F6C  80 9D 00 04 */	lwz r4, 4(r29)
/* 8002B030 00027F70  7F 83 E3 78 */	mr r3, r28
/* 8002B034 00027F74  38 A0 00 00 */	li r5, 0
/* 8002B038 00027F78  48 00 02 A1 */	bl showMapInfo_subroutine__12JUTExceptionFUlb
/* 8002B03C 00027F7C  80 6D 88 70 */	lwz r3, sManager__17JUTConsoleManager@sda21(r13)
/* 8002B040 00027F80  38 80 00 01 */	li r4, 1
/* 8002B044 00027F84  4B FF E0 C1 */	bl drawDirect__17JUTConsoleManagerCFb
/* 8002B048 00027F88  80 7C 00 90 */	lwz r3, 0x90(r28)
/* 8002B04C 00027F8C  48 00 15 D9 */	bl waitTime__12JUTExceptionFl
/* 8002B050 00027F90  83 BD 00 00 */	lwz r29, 0(r29)
.L_8002B054:
/* 8002B054 00027F94  28 1D 00 00 */	cmplwi r29, 0
/* 8002B058 00027F98  41 82 00 1C */	beq .L_8002B074
/* 8002B05C 00027F9C  3C 1D 00 01 */	addis r0, r29, 1
/* 8002B060 00027FA0  28 00 FF FF */	cmplwi r0, 0xffff
/* 8002B064 00027FA4  41 82 00 10 */	beq .L_8002B074
/* 8002B068 00027FA8  28 1E 00 10 */	cmplwi r30, 0x10
/* 8002B06C 00027FAC  3B DE 00 01 */	addi r30, r30, 1
/* 8002B070 00027FB0  41 80 FF 84 */	blt .L_8002AFF4
.L_8002B074:
/* 8002B074 00027FB4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002B078 00027FB8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8002B07C 00027FBC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8002B080 00027FC0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8002B084 00027FC4  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8002B088 00027FC8  7C 08 03 A6 */	mtlr r0
/* 8002B08C 00027FCC  38 21 00 20 */	addi r1, r1, 0x20
/* 8002B090 00027FD0  4E 80 00 20 */	blr 

.global showMainInfo__12JUTExceptionFUsP9OSContextUlUl
showMainInfo__12JUTExceptionFUsP9OSContextUlUl:
/* 8002B094 00027FD4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002B098 00027FD8  7C 08 02 A6 */	mflr r0
/* 8002B09C 00027FDC  3D 00 80 47 */	lis r8, lbl_80473C18@ha
/* 8002B0A0 00027FE0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002B0A4 00027FE4  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8002B0A8 00027FE8  7C 9E 23 78 */	mr r30, r4
/* 8002B0AC 00027FEC  7C BB 2B 78 */	mr r27, r5
/* 8002B0B0 00027FF0  7C DC 33 78 */	mr r28, r6
/* 8002B0B4 00027FF4  7C FD 3B 78 */	mr r29, r7
/* 8002B0B8 00027FF8  3B E8 3C 18 */	addi r31, r8, lbl_80473C18@l
/* 8002B0BC 00027FFC  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B0C0 00028000  28 03 00 00 */	cmplwi r3, 0
/* 8002B0C4 00028004  41 82 02 00 */	beq .L_8002B2C4
/* 8002B0C8 00028008  57 C0 04 3E */	clrlwi r0, r30, 0x10
/* 8002B0CC 0002800C  28 00 00 11 */	cmplwi r0, 0x11
/* 8002B0D0 00028010  40 80 00 24 */	bge .L_8002B0F4
/* 8002B0D4 00028014  3C 80 80 4A */	lis r4, sCpuExpName__12JUTException@ha
/* 8002B0D8 00028018  57 C0 13 BA */	rlwinm r0, r30, 2, 0xe, 0x1d
/* 8002B0DC 0002801C  38 84 03 E8 */	addi r4, r4, sCpuExpName__12JUTException@l
/* 8002B0E0 00028020  7C C4 00 2E */	lwzx r6, r4, r0
/* 8002B0E4 00028024  38 9F 01 C4 */	addi r4, r31, 0x1c4
/* 8002B0E8 00028028  4C C6 31 82 */	crclr 6
/* 8002B0EC 0002802C  4B FF D8 B5 */	bl print_f__10JUTConsoleFPCce
/* 8002B0F0 00028030  48 00 00 10 */	b .L_8002B100
.L_8002B0F4:
/* 8002B0F4 00028034  38 9F 01 E4 */	addi r4, r31, 0x1e4
/* 8002B0F8 00028038  4C C6 31 82 */	crclr 6
/* 8002B0FC 0002803C  4B FF D8 A5 */	bl print_f__10JUTConsoleFPCce
.L_8002B100:
/* 8002B100 00028040  57 C0 04 3E */	clrlwi r0, r30, 0x10
/* 8002B104 00028044  28 00 00 10 */	cmplwi r0, 0x10
/* 8002B108 00028048  40 82 01 8C */	bne .L_8002B294
/* 8002B10C 0002804C  80 6D 88 AC */	lwz r3, fpscr__12JUTException@sda21(r13)
/* 8002B110 00028050  54 60 B0 8C */	rlwinm r0, r3, 0x16, 2, 6
/* 8002B114 00028054  64 00 01 F8 */	oris r0, r0, 0x1f8
/* 8002B118 00028058  60 00 07 00 */	ori r0, r0, 0x700
/* 8002B11C 0002805C  7C 7E 00 38 */	and r30, r3, r0
/* 8002B120 00028060  57 C0 00 85 */	rlwinm. r0, r30, 0, 2, 2
/* 8002B124 00028064  41 82 01 10 */	beq .L_8002B234
/* 8002B128 00028068  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B12C 0002806C  38 9F 01 F4 */	addi r4, r31, 0x1f4
/* 8002B130 00028070  4C C6 31 82 */	crclr 6
/* 8002B134 00028074  4B FF D8 6D */	bl print_f__10JUTConsoleFPCce
/* 8002B138 00028078  80 0D 88 AC */	lwz r0, fpscr__12JUTException@sda21(r13)
/* 8002B13C 0002807C  54 00 01 CF */	rlwinm. r0, r0, 0, 7, 7
/* 8002B140 00028080  41 82 00 14 */	beq .L_8002B154
/* 8002B144 00028084  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B148 00028088  38 82 82 D4 */	addi r4, r2, lbl_80516634@sda21
/* 8002B14C 0002808C  4C C6 31 82 */	crclr 6
/* 8002B150 00028090  4B FF D8 51 */	bl print_f__10JUTConsoleFPCce
.L_8002B154:
/* 8002B154 00028094  80 0D 88 AC */	lwz r0, fpscr__12JUTException@sda21(r13)
/* 8002B158 00028098  54 00 02 11 */	rlwinm. r0, r0, 0, 8, 8
/* 8002B15C 0002809C  41 82 00 14 */	beq .L_8002B170
/* 8002B160 000280A0  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B164 000280A4  38 9F 02 10 */	addi r4, r31, 0x210
/* 8002B168 000280A8  4C C6 31 82 */	crclr 6
/* 8002B16C 000280AC  4B FF D8 35 */	bl print_f__10JUTConsoleFPCce
.L_8002B170:
/* 8002B170 000280B0  80 0D 88 AC */	lwz r0, fpscr__12JUTException@sda21(r13)
/* 8002B174 000280B4  54 00 02 53 */	rlwinm. r0, r0, 0, 9, 9
/* 8002B178 000280B8  41 82 00 14 */	beq .L_8002B18C
/* 8002B17C 000280BC  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B180 000280C0  38 9F 02 28 */	addi r4, r31, 0x228
/* 8002B184 000280C4  4C C6 31 82 */	crclr 6
/* 8002B188 000280C8  4B FF D8 19 */	bl print_f__10JUTConsoleFPCce
.L_8002B18C:
/* 8002B18C 000280CC  80 0D 88 AC */	lwz r0, fpscr__12JUTException@sda21(r13)
/* 8002B190 000280D0  54 00 02 95 */	rlwinm. r0, r0, 0, 0xa, 0xa
/* 8002B194 000280D4  41 82 00 14 */	beq .L_8002B1A8
/* 8002B198 000280D8  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B19C 000280DC  38 82 82 DC */	addi r4, r2, lbl_8051663C@sda21
/* 8002B1A0 000280E0  4C C6 31 82 */	crclr 6
/* 8002B1A4 000280E4  4B FF D7 FD */	bl print_f__10JUTConsoleFPCce
.L_8002B1A8:
/* 8002B1A8 000280E8  80 0D 88 AC */	lwz r0, fpscr__12JUTException@sda21(r13)
/* 8002B1AC 000280EC  54 00 02 D7 */	rlwinm. r0, r0, 0, 0xb, 0xb
/* 8002B1B0 000280F0  41 82 00 14 */	beq .L_8002B1C4
/* 8002B1B4 000280F4  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B1B8 000280F8  38 9F 02 40 */	addi r4, r31, 0x240
/* 8002B1BC 000280FC  4C C6 31 82 */	crclr 6
/* 8002B1C0 00028100  4B FF D7 E1 */	bl print_f__10JUTConsoleFPCce
.L_8002B1C4:
/* 8002B1C4 00028104  80 0D 88 AC */	lwz r0, fpscr__12JUTException@sda21(r13)
/* 8002B1C8 00028108  54 00 03 19 */	rlwinm. r0, r0, 0, 0xc, 0xc
/* 8002B1CC 0002810C  41 82 00 14 */	beq .L_8002B1E0
/* 8002B1D0 00028110  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B1D4 00028114  38 9F 02 50 */	addi r4, r31, 0x250
/* 8002B1D8 00028118  4C C6 31 82 */	crclr 6
/* 8002B1DC 0002811C  4B FF D7 C5 */	bl print_f__10JUTConsoleFPCce
.L_8002B1E0:
/* 8002B1E0 00028120  80 0D 88 AC */	lwz r0, fpscr__12JUTException@sda21(r13)
/* 8002B1E4 00028124  54 00 05 6B */	rlwinm. r0, r0, 0, 0x15, 0x15
/* 8002B1E8 00028128  41 82 00 14 */	beq .L_8002B1FC
/* 8002B1EC 0002812C  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B1F0 00028130  38 9F 02 64 */	addi r4, r31, 0x264
/* 8002B1F4 00028134  4C C6 31 82 */	crclr 6
/* 8002B1F8 00028138  4B FF D7 A9 */	bl print_f__10JUTConsoleFPCce
.L_8002B1FC:
/* 8002B1FC 0002813C  80 0D 88 AC */	lwz r0, fpscr__12JUTException@sda21(r13)
/* 8002B200 00028140  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8002B204 00028144  41 82 00 14 */	beq .L_8002B218
/* 8002B208 00028148  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B20C 0002814C  38 9F 02 78 */	addi r4, r31, 0x278
/* 8002B210 00028150  4C C6 31 82 */	crclr 6
/* 8002B214 00028154  4B FF D7 8D */	bl print_f__10JUTConsoleFPCce
.L_8002B218:
/* 8002B218 00028158  80 0D 88 AC */	lwz r0, fpscr__12JUTException@sda21(r13)
/* 8002B21C 0002815C  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 8002B220 00028160  41 82 00 14 */	beq .L_8002B234
/* 8002B224 00028164  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B228 00028168  38 9F 02 90 */	addi r4, r31, 0x290
/* 8002B22C 0002816C  4C C6 31 82 */	crclr 6
/* 8002B230 00028170  4B FF D7 71 */	bl print_f__10JUTConsoleFPCce
.L_8002B234:
/* 8002B234 00028174  57 C0 00 C7 */	rlwinm. r0, r30, 0, 3, 3
/* 8002B238 00028178  41 82 00 14 */	beq .L_8002B24C
/* 8002B23C 0002817C  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B240 00028180  38 9F 02 AC */	addi r4, r31, 0x2ac
/* 8002B244 00028184  4C C6 31 82 */	crclr 6
/* 8002B248 00028188  4B FF D7 59 */	bl print_f__10JUTConsoleFPCce
.L_8002B24C:
/* 8002B24C 0002818C  57 C0 01 09 */	rlwinm. r0, r30, 0, 4, 4
/* 8002B250 00028190  41 82 00 14 */	beq .L_8002B264
/* 8002B254 00028194  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B258 00028198  38 9F 02 BC */	addi r4, r31, 0x2bc
/* 8002B25C 0002819C  4C C6 31 82 */	crclr 6
/* 8002B260 000281A0  4B FF D7 41 */	bl print_f__10JUTConsoleFPCce
.L_8002B264:
/* 8002B264 000281A4  57 C0 01 4B */	rlwinm. r0, r30, 0, 5, 5
/* 8002B268 000281A8  41 82 00 14 */	beq .L_8002B27C
/* 8002B26C 000281AC  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B270 000281B0  38 9F 02 D0 */	addi r4, r31, 0x2d0
/* 8002B274 000281B4  4C C6 31 82 */	crclr 6
/* 8002B278 000281B8  4B FF D7 29 */	bl print_f__10JUTConsoleFPCce
.L_8002B27C:
/* 8002B27C 000281BC  57 C0 01 8D */	rlwinm. r0, r30, 0, 6, 6
/* 8002B280 000281C0  41 82 00 14 */	beq .L_8002B294
/* 8002B284 000281C4  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B288 000281C8  38 9F 02 E8 */	addi r4, r31, 0x2e8
/* 8002B28C 000281CC  4C C6 31 82 */	crclr 6
/* 8002B290 000281D0  4B FF D7 11 */	bl print_f__10JUTConsoleFPCce
.L_8002B294:
/* 8002B294 000281D4  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B298 000281D8  38 9F 03 00 */	addi r4, r31, 0x300
/* 8002B29C 000281DC  80 BB 01 98 */	lwz r5, 0x198(r27)
/* 8002B2A0 000281E0  80 DB 01 9C */	lwz r6, 0x19c(r27)
/* 8002B2A4 000281E4  4C C6 31 82 */	crclr 6
/* 8002B2A8 000281E8  4B FF D6 F9 */	bl print_f__10JUTConsoleFPCce
/* 8002B2AC 000281EC  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B2B0 000281F0  7F 85 E3 78 */	mr r5, r28
/* 8002B2B4 000281F4  7F A6 EB 78 */	mr r6, r29
/* 8002B2B8 000281F8  38 9F 03 1C */	addi r4, r31, 0x31c
/* 8002B2BC 000281FC  4C C6 31 82 */	crclr 6
/* 8002B2C0 00028200  4B FF D6 E1 */	bl print_f__10JUTConsoleFPCce
.L_8002B2C4:
/* 8002B2C4 00028204  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8002B2C8 00028208  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002B2CC 0002820C  7C 08 03 A6 */	mtlr r0
/* 8002B2D0 00028210  38 21 00 20 */	addi r1, r1, 0x20
/* 8002B2D4 00028214  4E 80 00 20 */	blr 

.global showMapInfo_subroutine__12JUTExceptionFUlb
showMapInfo_subroutine__12JUTExceptionFUlb:
/* 8002B2D8 00028218  94 21 FE A0 */	stwu r1, -0x160(r1)
/* 8002B2DC 0002821C  7C 08 02 A6 */	mflr r0
/* 8002B2E0 00028220  90 01 01 64 */	stw r0, 0x164(r1)
/* 8002B2E4 00028224  3C 00 80 00 */	lis r0, 0x8000
/* 8002B2E8 00028228  93 E1 01 5C */	stw r31, 0x15c(r1)
/* 8002B2EC 0002822C  7C 9F 23 78 */	mr r31, r4
/* 8002B2F0 00028230  7C 1F 00 40 */	cmplw r31, r0
/* 8002B2F4 00028234  93 C1 01 58 */	stw r30, 0x158(r1)
/* 8002B2F8 00028238  41 80 00 14 */	blt .L_8002B30C
/* 8002B2FC 0002823C  3C 60 83 00 */	lis r3, 0x82FFFFFF@ha
/* 8002B300 00028240  38 03 FF FF */	addi r0, r3, 0x82FFFFFF@l
/* 8002B304 00028244  7C 1F 00 40 */	cmplw r31, r0
/* 8002B308 00028248  40 81 00 0C */	ble .L_8002B314
.L_8002B30C:
/* 8002B30C 0002824C  38 60 00 00 */	li r3, 0
/* 8002B310 00028250  48 00 02 08 */	b .L_8002B518
.L_8002B314:
/* 8002B314 00028254  54 A3 06 3F */	clrlwi. r3, r5, 0x18
/* 8002B318 00028258  38 02 82 D0 */	addi r0, r2, lbl_80516630@sda21
/* 8002B31C 0002825C  40 82 00 08 */	bne .L_8002B324
/* 8002B320 00028260  38 02 82 E4 */	addi r0, r2, lbl_80516644@sda21
.L_8002B324:
/* 8002B324 00028264  28 1F 00 00 */	cmplwi r31, 0
/* 8002B328 00028268  40 82 00 0C */	bne .L_8002B334
/* 8002B32C 0002826C  3B C0 00 00 */	li r30, 0
/* 8002B330 00028270  48 00 00 B0 */	b .L_8002B3E0
.L_8002B334:
/* 8002B334 00028274  3C 60 80 00 */	lis r3, 0x800030C8@ha
/* 8002B338 00028278  81 03 30 C8 */	lwz r8, 0x800030C8@l(r3)
/* 8002B33C 0002827C  48 00 00 98 */	b .L_8002B3D4
.L_8002B340:
/* 8002B340 00028280  80 68 00 0C */	lwz r3, 0xc(r8)
/* 8002B344 00028284  38 C0 00 00 */	li r6, 0
/* 8002B348 00028288  80 E8 00 10 */	lwz r7, 0x10(r8)
/* 8002B34C 0002828C  7C 69 03 A6 */	mtctr r3
/* 8002B350 00028290  28 03 00 00 */	cmplwi r3, 0
/* 8002B354 00028294  40 81 00 7C */	ble .L_8002B3D0
.L_8002B358:
/* 8002B358 00028298  81 27 00 04 */	lwz r9, 4(r7)
/* 8002B35C 0002829C  28 09 00 00 */	cmplwi r9, 0
/* 8002B360 000282A0  41 82 00 64 */	beq .L_8002B3C4
/* 8002B364 000282A4  80 67 00 00 */	lwz r3, 0(r7)
/* 8002B368 000282A8  54 64 00 3C */	rlwinm r4, r3, 0, 0, 0x1e
/* 8002B36C 000282AC  7C 04 F8 40 */	cmplw r4, r31
/* 8002B370 000282B0  41 81 00 54 */	bgt .L_8002B3C4
/* 8002B374 000282B4  7C 64 4A 14 */	add r3, r4, r9
/* 8002B378 000282B8  7C 1F 18 40 */	cmplw r31, r3
/* 8002B37C 000282BC  40 80 00 48 */	bge .L_8002B3C4
/* 8002B380 000282C0  34 61 00 20 */	addic. r3, r1, 0x20
/* 8002B384 000282C4  41 82 00 0C */	beq .L_8002B390
/* 8002B388 000282C8  80 68 00 00 */	lwz r3, 0(r8)
/* 8002B38C 000282CC  90 61 00 20 */	stw r3, 0x20(r1)
.L_8002B390:
/* 8002B390 000282D0  34 61 00 1C */	addic. r3, r1, 0x1c
/* 8002B394 000282D4  41 82 00 08 */	beq .L_8002B39C
/* 8002B398 000282D8  90 C1 00 1C */	stw r6, 0x1c(r1)
.L_8002B39C:
/* 8002B39C 000282DC  34 61 00 18 */	addic. r3, r1, 0x18
/* 8002B3A0 000282E0  41 82 00 0C */	beq .L_8002B3AC
/* 8002B3A4 000282E4  7C 64 F8 50 */	subf r3, r4, r31
/* 8002B3A8 000282E8  90 61 00 18 */	stw r3, 0x18(r1)
.L_8002B3AC:
/* 8002B3AC 000282EC  34 61 00 24 */	addic. r3, r1, 0x24
/* 8002B3B0 000282F0  41 82 00 0C */	beq .L_8002B3BC
/* 8002B3B4 000282F4  80 68 00 14 */	lwz r3, 0x14(r8)
/* 8002B3B8 000282F8  90 61 00 24 */	stw r3, 0x24(r1)
.L_8002B3BC:
/* 8002B3BC 000282FC  3B C0 00 01 */	li r30, 1
/* 8002B3C0 00028300  48 00 00 20 */	b .L_8002B3E0
.L_8002B3C4:
/* 8002B3C4 00028304  38 E7 00 08 */	addi r7, r7, 8
/* 8002B3C8 00028308  38 C6 00 01 */	addi r6, r6, 1
/* 8002B3CC 0002830C  42 00 FF 8C */	bdnz .L_8002B358
.L_8002B3D0:
/* 8002B3D0 00028310  81 08 00 04 */	lwz r8, 4(r8)
.L_8002B3D4:
/* 8002B3D4 00028314  28 08 00 00 */	cmplwi r8, 0
/* 8002B3D8 00028318  40 82 FF 68 */	bne .L_8002B340
/* 8002B3DC 0002831C  3B C0 00 00 */	li r30, 0
.L_8002B3E0:
/* 8002B3E0 00028320  57 C3 06 3E */	clrlwi r3, r30, 0x18
/* 8002B3E4 00028324  28 03 00 01 */	cmplwi r3, 1
/* 8002B3E8 00028328  40 82 00 A8 */	bne .L_8002B490
/* 8002B3EC 0002832C  80 A1 00 24 */	lwz r5, 0x24(r1)
/* 8002B3F0 00028330  38 C1 00 28 */	addi r6, r1, 0x28
/* 8002B3F4 00028334  7C A3 2B 78 */	mr r3, r5
/* 8002B3F8 00028338  48 00 00 14 */	b .L_8002B40C
.L_8002B3FC:
/* 8002B3FC 0002833C  2C 04 00 5C */	cmpwi r4, 0x5c
/* 8002B400 00028340  40 82 00 08 */	bne .L_8002B408
/* 8002B404 00028344  7C 65 1B 78 */	mr r5, r3
.L_8002B408:
/* 8002B408 00028348  38 63 00 01 */	addi r3, r3, 1
.L_8002B40C:
/* 8002B40C 0002834C  88 83 00 00 */	lbz r4, 0(r3)
/* 8002B410 00028350  28 04 00 00 */	cmplwi r4, 0
/* 8002B414 00028354  40 82 FF E8 */	bne .L_8002B3FC
/* 8002B418 00028358  88 65 00 00 */	lbz r3, 0(r5)
/* 8002B41C 0002835C  2C 03 00 5C */	cmpwi r3, 0x5c
/* 8002B420 00028360  40 82 00 08 */	bne .L_8002B428
/* 8002B424 00028364  38 A5 00 01 */	addi r5, r5, 1
.L_8002B428:
/* 8002B428 00028368  38 80 00 00 */	li r4, 0
/* 8002B42C 0002836C  48 00 00 20 */	b .L_8002B44C
.L_8002B430:
/* 8002B430 00028370  2C 03 00 2E */	cmpwi r3, 0x2e
/* 8002B434 00028374  41 82 00 2C */	beq .L_8002B460
/* 8002B438 00028378  88 65 00 00 */	lbz r3, 0(r5)
/* 8002B43C 0002837C  38 84 00 01 */	addi r4, r4, 1
/* 8002B440 00028380  38 A5 00 01 */	addi r5, r5, 1
/* 8002B444 00028384  98 66 00 00 */	stb r3, 0(r6)
/* 8002B448 00028388  38 C6 00 01 */	addi r6, r6, 1
.L_8002B44C:
/* 8002B44C 0002838C  88 65 00 00 */	lbz r3, 0(r5)
/* 8002B450 00028390  28 03 00 00 */	cmplwi r3, 0
/* 8002B454 00028394  41 82 00 0C */	beq .L_8002B460
/* 8002B458 00028398  2C 04 00 20 */	cmpwi r4, 0x20
/* 8002B45C 0002839C  41 80 FF D4 */	blt .L_8002B430
.L_8002B460:
/* 8002B460 000283A0  38 A0 00 00 */	li r5, 0
/* 8002B464 000283A4  3C 60 80 47 */	lis r3, lbl_80473FBC@ha
/* 8002B468 000283A8  98 A6 00 00 */	stb r5, 0(r6)
/* 8002B46C 000283AC  38 83 3F BC */	addi r4, r3, lbl_80473FBC@l
/* 8002B470 000283B0  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B474 000283B4  7C 05 03 78 */	mr r5, r0
/* 8002B478 000283B8  80 E1 00 18 */	lwz r7, 0x18(r1)
/* 8002B47C 000283BC  38 C1 00 28 */	addi r6, r1, 0x28
/* 8002B480 000283C0  81 01 00 1C */	lwz r8, 0x1c(r1)
/* 8002B484 000283C4  4C C6 31 82 */	crclr 6
/* 8002B488 000283C8  4B FF D5 19 */	bl print_f__10JUTConsoleFPCce
/* 8002B48C 000283CC  38 A0 00 00 */	li r5, 0
.L_8002B490:
/* 8002B490 000283D0  3C 60 80 50 */	lis r3, sMapFileList__12JUTException@ha
/* 8002B494 000283D4  80 03 6E 74 */	lwz r0, sMapFileList__12JUTException@l(r3)
/* 8002B498 000283D8  28 00 00 00 */	cmplwi r0, 0
/* 8002B49C 000283DC  41 82 00 78 */	beq .L_8002B514
/* 8002B4A0 000283E0  57 C0 06 3E */	clrlwi r0, r30, 0x18
/* 8002B4A4 000283E4  28 00 00 01 */	cmplwi r0, 1
/* 8002B4A8 000283E8  40 82 00 30 */	bne .L_8002B4D8
/* 8002B4AC 000283EC  90 A1 00 08 */	stw r5, 8(r1)
/* 8002B4B0 000283F0  38 61 00 28 */	addi r3, r1, 0x28
/* 8002B4B4 000283F4  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8002B4B8 000283F8  38 C1 00 14 */	addi r6, r1, 0x14
/* 8002B4BC 000283FC  80 A1 00 1C */	lwz r5, 0x1c(r1)
/* 8002B4C0 00028400  38 E1 00 10 */	addi r7, r1, 0x10
/* 8002B4C4 00028404  39 01 00 4C */	addi r8, r1, 0x4c
/* 8002B4C8 00028408  39 20 01 00 */	li r9, 0x100
/* 8002B4CC 0002840C  39 40 00 01 */	li r10, 1
/* 8002B4D0 00028410  48 00 13 75 */	bl queryMapAddress__12JUTExceptionFPcUllPUlPUlPcUlbb
/* 8002B4D4 00028414  48 00 00 2C */	b .L_8002B500
.L_8002B4D8:
/* 8002B4D8 00028418  90 A1 00 08 */	stw r5, 8(r1)
/* 8002B4DC 0002841C  7F E4 FB 78 */	mr r4, r31
/* 8002B4E0 00028420  38 C1 00 14 */	addi r6, r1, 0x14
/* 8002B4E4 00028424  38 E1 00 10 */	addi r7, r1, 0x10
/* 8002B4E8 00028428  39 01 00 4C */	addi r8, r1, 0x4c
/* 8002B4EC 0002842C  38 60 00 00 */	li r3, 0
/* 8002B4F0 00028430  38 A0 FF FF */	li r5, -1
/* 8002B4F4 00028434  39 20 01 00 */	li r9, 0x100
/* 8002B4F8 00028438  39 40 00 01 */	li r10, 1
/* 8002B4FC 0002843C  48 00 13 49 */	bl queryMapAddress__12JUTExceptionFPcUllPUlPUlPcUlbb
.L_8002B500:
/* 8002B500 00028440  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8002B504 00028444  28 00 00 01 */	cmplwi r0, 1
/* 8002B508 00028448  40 82 00 0C */	bne .L_8002B514
/* 8002B50C 0002844C  38 60 00 01 */	li r3, 1
/* 8002B510 00028450  48 00 00 08 */	b .L_8002B518
.L_8002B514:
/* 8002B514 00028454  38 60 00 00 */	li r3, 0
.L_8002B518:
/* 8002B518 00028458  80 01 01 64 */	lwz r0, 0x164(r1)
/* 8002B51C 0002845C  83 E1 01 5C */	lwz r31, 0x15c(r1)
/* 8002B520 00028460  83 C1 01 58 */	lwz r30, 0x158(r1)
/* 8002B524 00028464  7C 08 03 A6 */	mtlr r0
/* 8002B528 00028468  38 21 01 60 */	addi r1, r1, 0x160
/* 8002B52C 0002846C  4E 80 00 20 */	blr 

.global showGPRMap__12JUTExceptionFP9OSContext
showGPRMap__12JUTExceptionFP9OSContext:
/* 8002B530 00028470  94 21 FE 90 */	stwu r1, -0x170(r1)
/* 8002B534 00028474  7C 08 02 A6 */	mflr r0
/* 8002B538 00028478  3C A0 80 47 */	lis r5, lbl_80473C18@ha
/* 8002B53C 0002847C  90 01 01 74 */	stw r0, 0x174(r1)
/* 8002B540 00028480  BF 01 01 50 */	stmw r24, 0x150(r1)
/* 8002B544 00028484  7C 78 1B 78 */	mr r24, r3
/* 8002B548 00028488  7C 99 23 78 */	mr r25, r4
/* 8002B54C 0002848C  3B C5 3C 18 */	addi r30, r5, lbl_80473C18@l
/* 8002B550 00028490  80 0D 88 A4 */	lwz r0, sConsole__12JUTException@sda21(r13)
/* 8002B554 00028494  28 00 00 00 */	cmplwi r0, 0
/* 8002B558 00028498  41 82 02 B8 */	beq .L_8002B810
/* 8002B55C 0002849C  7C 03 03 78 */	mr r3, r0
/* 8002B560 000284A0  38 9E 03 BC */	addi r4, r30, 0x3bc
/* 8002B564 000284A4  3B 60 00 00 */	li r27, 0
/* 8002B568 000284A8  4B FF D4 C5 */	bl print__10JUTConsoleFPCc
/* 8002B56C 000284AC  7F 3C CB 78 */	mr r28, r25
/* 8002B570 000284B0  3B 40 00 00 */	li r26, 0
/* 8002B574 000284B4  3F E0 80 00 */	lis r31, 0x8000
.L_8002B578:
/* 8002B578 000284B8  83 3C 00 00 */	lwz r25, 0(r28)
/* 8002B57C 000284BC  7C 19 F8 40 */	cmplw r25, r31
/* 8002B580 000284C0  41 80 02 6C */	blt .L_8002B7EC
/* 8002B584 000284C4  3C 60 83 00 */	lis r3, 0x82FFFFFF@ha
/* 8002B588 000284C8  38 03 FF FF */	addi r0, r3, 0x82FFFFFF@l
/* 8002B58C 000284CC  7C 19 00 40 */	cmplw r25, r0
/* 8002B590 000284D0  41 81 02 5C */	bgt .L_8002B7EC
/* 8002B594 000284D4  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B598 000284D8  7F 45 D3 78 */	mr r5, r26
/* 8002B59C 000284DC  7F 26 CB 78 */	mr r6, r25
/* 8002B5A0 000284E0  38 9E 03 E8 */	addi r4, r30, 0x3e8
/* 8002B5A4 000284E4  3B 60 00 01 */	li r27, 1
/* 8002B5A8 000284E8  4C C6 31 82 */	crclr 6
/* 8002B5AC 000284EC  4B FF D3 F5 */	bl print_f__10JUTConsoleFPCce
/* 8002B5B0 000284F0  3C 80 80 00 */	lis r4, 0x8000
/* 8002B5B4 000284F4  38 C0 00 01 */	li r6, 1
/* 8002B5B8 000284F8  7C 19 20 40 */	cmplw r25, r4
/* 8002B5BC 000284FC  41 80 00 14 */	blt .L_8002B5D0
/* 8002B5C0 00028500  3C 60 83 00 */	lis r3, 0x82FFFFFF@ha
/* 8002B5C4 00028504  38 03 FF FF */	addi r0, r3, 0x82FFFFFF@l
/* 8002B5C8 00028508  7C 19 00 40 */	cmplw r25, r0
/* 8002B5CC 0002850C  40 81 00 0C */	ble .L_8002B5D8
.L_8002B5D0:
/* 8002B5D0 00028510  38 00 00 00 */	li r0, 0
/* 8002B5D4 00028514  48 00 01 F0 */	b .L_8002B7C4
.L_8002B5D8:
/* 8002B5D8 00028518  28 19 00 00 */	cmplwi r25, 0
/* 8002B5DC 0002851C  38 A2 82 D0 */	addi r5, r2, lbl_80516630@sda21
/* 8002B5E0 00028520  40 82 00 0C */	bne .L_8002B5EC
/* 8002B5E4 00028524  3B A0 00 00 */	li r29, 0
/* 8002B5E8 00028528  48 00 00 AC */	b .L_8002B694
.L_8002B5EC:
/* 8002B5EC 0002852C  81 04 30 C8 */	lwz r8, 0x30c8(r4)
/* 8002B5F0 00028530  48 00 00 98 */	b .L_8002B688
.L_8002B5F4:
/* 8002B5F4 00028534  80 08 00 0C */	lwz r0, 0xc(r8)
/* 8002B5F8 00028538  38 80 00 00 */	li r4, 0
/* 8002B5FC 0002853C  80 E8 00 10 */	lwz r7, 0x10(r8)
/* 8002B600 00028540  7C 09 03 A6 */	mtctr r0
/* 8002B604 00028544  28 00 00 00 */	cmplwi r0, 0
/* 8002B608 00028548  40 81 00 7C */	ble .L_8002B684
.L_8002B60C:
/* 8002B60C 0002854C  81 27 00 04 */	lwz r9, 4(r7)
/* 8002B610 00028550  28 09 00 00 */	cmplwi r9, 0
/* 8002B614 00028554  41 82 00 64 */	beq .L_8002B678
/* 8002B618 00028558  80 07 00 00 */	lwz r0, 0(r7)
/* 8002B61C 0002855C  54 03 00 3C */	rlwinm r3, r0, 0, 0, 0x1e
/* 8002B620 00028560  7C 03 C8 40 */	cmplw r3, r25
/* 8002B624 00028564  41 81 00 54 */	bgt .L_8002B678
/* 8002B628 00028568  7C 03 4A 14 */	add r0, r3, r9
/* 8002B62C 0002856C  7C 19 00 40 */	cmplw r25, r0
/* 8002B630 00028570  40 80 00 48 */	bge .L_8002B678
/* 8002B634 00028574  34 01 00 14 */	addic. r0, r1, 0x14
/* 8002B638 00028578  41 82 00 0C */	beq .L_8002B644
/* 8002B63C 0002857C  80 08 00 00 */	lwz r0, 0(r8)
/* 8002B640 00028580  90 01 00 14 */	stw r0, 0x14(r1)
.L_8002B644:
/* 8002B644 00028584  34 01 00 18 */	addic. r0, r1, 0x18
/* 8002B648 00028588  41 82 00 08 */	beq .L_8002B650
/* 8002B64C 0002858C  90 81 00 18 */	stw r4, 0x18(r1)
.L_8002B650:
/* 8002B650 00028590  34 01 00 1C */	addic. r0, r1, 0x1c
/* 8002B654 00028594  41 82 00 0C */	beq .L_8002B660
/* 8002B658 00028598  7C 03 C8 50 */	subf r0, r3, r25
/* 8002B65C 0002859C  90 01 00 1C */	stw r0, 0x1c(r1)
.L_8002B660:
/* 8002B660 000285A0  34 01 00 10 */	addic. r0, r1, 0x10
/* 8002B664 000285A4  41 82 00 0C */	beq .L_8002B670
/* 8002B668 000285A8  80 08 00 14 */	lwz r0, 0x14(r8)
/* 8002B66C 000285AC  90 01 00 10 */	stw r0, 0x10(r1)
.L_8002B670:
/* 8002B670 000285B0  3B A0 00 01 */	li r29, 1
/* 8002B674 000285B4  48 00 00 20 */	b .L_8002B694
.L_8002B678:
/* 8002B678 000285B8  38 E7 00 08 */	addi r7, r7, 8
/* 8002B67C 000285BC  38 84 00 01 */	addi r4, r4, 1
/* 8002B680 000285C0  42 00 FF 8C */	bdnz .L_8002B60C
.L_8002B684:
/* 8002B684 000285C4  81 08 00 04 */	lwz r8, 4(r8)
.L_8002B688:
/* 8002B688 000285C8  28 08 00 00 */	cmplwi r8, 0
/* 8002B68C 000285CC  40 82 FF 68 */	bne .L_8002B5F4
/* 8002B690 000285D0  3B A0 00 00 */	li r29, 0
.L_8002B694:
/* 8002B694 000285D4  57 A0 06 3E */	clrlwi r0, r29, 0x18
/* 8002B698 000285D8  28 00 00 01 */	cmplwi r0, 1
/* 8002B69C 000285DC  40 82 00 A0 */	bne .L_8002B73C
/* 8002B6A0 000285E0  80 81 00 10 */	lwz r4, 0x10(r1)
/* 8002B6A4 000285E4  38 C1 00 28 */	addi r6, r1, 0x28
/* 8002B6A8 000285E8  7C 83 23 78 */	mr r3, r4
/* 8002B6AC 000285EC  48 00 00 14 */	b .L_8002B6C0
.L_8002B6B0:
/* 8002B6B0 000285F0  2C 00 00 5C */	cmpwi r0, 0x5c
/* 8002B6B4 000285F4  40 82 00 08 */	bne .L_8002B6BC
/* 8002B6B8 000285F8  7C 64 1B 78 */	mr r4, r3
.L_8002B6BC:
/* 8002B6BC 000285FC  38 63 00 01 */	addi r3, r3, 1
.L_8002B6C0:
/* 8002B6C0 00028600  88 03 00 00 */	lbz r0, 0(r3)
/* 8002B6C4 00028604  28 00 00 00 */	cmplwi r0, 0
/* 8002B6C8 00028608  40 82 FF E8 */	bne .L_8002B6B0
/* 8002B6CC 0002860C  88 04 00 00 */	lbz r0, 0(r4)
/* 8002B6D0 00028610  2C 00 00 5C */	cmpwi r0, 0x5c
/* 8002B6D4 00028614  40 82 00 08 */	bne .L_8002B6DC
/* 8002B6D8 00028618  38 84 00 01 */	addi r4, r4, 1
.L_8002B6DC:
/* 8002B6DC 0002861C  38 60 00 00 */	li r3, 0
/* 8002B6E0 00028620  48 00 00 20 */	b .L_8002B700
.L_8002B6E4:
/* 8002B6E4 00028624  2C 00 00 2E */	cmpwi r0, 0x2e
/* 8002B6E8 00028628  41 82 00 2C */	beq .L_8002B714
/* 8002B6EC 0002862C  88 04 00 00 */	lbz r0, 0(r4)
/* 8002B6F0 00028630  38 63 00 01 */	addi r3, r3, 1
/* 8002B6F4 00028634  38 84 00 01 */	addi r4, r4, 1
/* 8002B6F8 00028638  98 06 00 00 */	stb r0, 0(r6)
/* 8002B6FC 0002863C  38 C6 00 01 */	addi r6, r6, 1
.L_8002B700:
/* 8002B700 00028640  88 04 00 00 */	lbz r0, 0(r4)
/* 8002B704 00028644  28 00 00 00 */	cmplwi r0, 0
/* 8002B708 00028648  41 82 00 0C */	beq .L_8002B714
/* 8002B70C 0002864C  2C 03 00 20 */	cmpwi r3, 0x20
/* 8002B710 00028650  41 80 FF D4 */	blt .L_8002B6E4
.L_8002B714:
/* 8002B714 00028654  38 00 00 00 */	li r0, 0
/* 8002B718 00028658  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B71C 0002865C  98 06 00 00 */	stb r0, 0(r6)
/* 8002B720 00028660  38 9E 03 A4 */	addi r4, r30, 0x3a4
/* 8002B724 00028664  80 E1 00 1C */	lwz r7, 0x1c(r1)
/* 8002B728 00028668  38 C1 00 28 */	addi r6, r1, 0x28
/* 8002B72C 0002866C  81 01 00 18 */	lwz r8, 0x18(r1)
/* 8002B730 00028670  4C C6 31 82 */	crclr 6
/* 8002B734 00028674  4B FF D2 6D */	bl print_f__10JUTConsoleFPCce
/* 8002B738 00028678  38 C0 00 00 */	li r6, 0
.L_8002B73C:
/* 8002B73C 0002867C  3C 60 80 50 */	lis r3, sMapFileList__12JUTException@ha
/* 8002B740 00028680  80 03 6E 74 */	lwz r0, sMapFileList__12JUTException@l(r3)
/* 8002B744 00028684  28 00 00 00 */	cmplwi r0, 0
/* 8002B748 00028688  41 82 00 78 */	beq .L_8002B7C0
/* 8002B74C 0002868C  57 A0 06 3E */	clrlwi r0, r29, 0x18
/* 8002B750 00028690  28 00 00 01 */	cmplwi r0, 1
/* 8002B754 00028694  40 82 00 30 */	bne .L_8002B784
/* 8002B758 00028698  90 C1 00 08 */	stw r6, 8(r1)
/* 8002B75C 0002869C  38 61 00 28 */	addi r3, r1, 0x28
/* 8002B760 000286A0  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 8002B764 000286A4  38 C1 00 20 */	addi r6, r1, 0x20
/* 8002B768 000286A8  80 A1 00 18 */	lwz r5, 0x18(r1)
/* 8002B76C 000286AC  38 E1 00 24 */	addi r7, r1, 0x24
/* 8002B770 000286B0  39 01 00 4C */	addi r8, r1, 0x4c
/* 8002B774 000286B4  39 20 01 00 */	li r9, 0x100
/* 8002B778 000286B8  39 40 00 01 */	li r10, 1
/* 8002B77C 000286BC  48 00 10 C9 */	bl queryMapAddress__12JUTExceptionFPcUllPUlPUlPcUlbb
/* 8002B780 000286C0  48 00 00 2C */	b .L_8002B7AC
.L_8002B784:
/* 8002B784 000286C4  90 C1 00 08 */	stw r6, 8(r1)
/* 8002B788 000286C8  7F 24 CB 78 */	mr r4, r25
/* 8002B78C 000286CC  38 C1 00 20 */	addi r6, r1, 0x20
/* 8002B790 000286D0  38 E1 00 24 */	addi r7, r1, 0x24
/* 8002B794 000286D4  39 01 00 4C */	addi r8, r1, 0x4c
/* 8002B798 000286D8  38 60 00 00 */	li r3, 0
/* 8002B79C 000286DC  38 A0 FF FF */	li r5, -1
/* 8002B7A0 000286E0  39 20 01 00 */	li r9, 0x100
/* 8002B7A4 000286E4  39 40 00 01 */	li r10, 1
/* 8002B7A8 000286E8  48 00 10 9D */	bl queryMapAddress__12JUTExceptionFPcUllPUlPUlPcUlbb
.L_8002B7AC:
/* 8002B7AC 000286EC  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8002B7B0 000286F0  28 00 00 01 */	cmplwi r0, 1
/* 8002B7B4 000286F4  40 82 00 0C */	bne .L_8002B7C0
/* 8002B7B8 000286F8  38 00 00 01 */	li r0, 1
/* 8002B7BC 000286FC  48 00 00 08 */	b .L_8002B7C4
.L_8002B7C0:
/* 8002B7C0 00028700  38 00 00 00 */	li r0, 0
.L_8002B7C4:
/* 8002B7C4 00028704  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8002B7C8 00028708  40 82 00 10 */	bne .L_8002B7D8
/* 8002B7CC 0002870C  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B7D0 00028710  38 9E 03 F8 */	addi r4, r30, 0x3f8
/* 8002B7D4 00028714  4B FF D2 59 */	bl print__10JUTConsoleFPCc
.L_8002B7D8:
/* 8002B7D8 00028718  80 6D 88 70 */	lwz r3, sManager__17JUTConsoleManager@sda21(r13)
/* 8002B7DC 0002871C  38 80 00 01 */	li r4, 1
/* 8002B7E0 00028720  4B FF D9 25 */	bl drawDirect__17JUTConsoleManagerCFb
/* 8002B7E4 00028724  80 78 00 90 */	lwz r3, 0x90(r24)
/* 8002B7E8 00028728  48 00 0E 3D */	bl waitTime__12JUTExceptionFl
.L_8002B7EC:
/* 8002B7EC 0002872C  3B 5A 00 01 */	addi r26, r26, 1
/* 8002B7F0 00028730  3B 9C 00 04 */	addi r28, r28, 4
/* 8002B7F4 00028734  2C 1A 00 1F */	cmpwi r26, 0x1f
/* 8002B7F8 00028738  41 80 FD 80 */	blt .L_8002B578
/* 8002B7FC 0002873C  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 8002B800 00028740  40 82 00 10 */	bne .L_8002B810
/* 8002B804 00028744  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B808 00028748  38 9E 04 0C */	addi r4, r30, 0x40c
/* 8002B80C 0002874C  4B FF D2 21 */	bl print__10JUTConsoleFPCc
.L_8002B810:
/* 8002B810 00028750  BB 01 01 50 */	lmw r24, 0x150(r1)
/* 8002B814 00028754  80 01 01 74 */	lwz r0, 0x174(r1)
/* 8002B818 00028758  7C 08 03 A6 */	mtlr r0
/* 8002B81C 0002875C  38 21 01 70 */	addi r1, r1, 0x170
/* 8002B820 00028760  4E 80 00 20 */	blr 

.global printDebugInfo__12JUTExceptionFQ212JUTException9EInfoPageUsP9OSContextUlUl
printDebugInfo__12JUTExceptionFQ212JUTException9EInfoPageUsP9OSContextUlUl:
/* 8002B824 00028764  94 21 FE A0 */	stwu r1, -0x160(r1)
/* 8002B828 00028768  7C 08 02 A6 */	mflr r0
/* 8002B82C 0002876C  2C 04 00 03 */	cmpwi r4, 3
/* 8002B830 00028770  3C A0 80 47 */	lis r5, lbl_80473C18@ha
/* 8002B834 00028774  90 01 01 64 */	stw r0, 0x164(r1)
/* 8002B838 00028778  93 E1 01 5C */	stw r31, 0x15c(r1)
/* 8002B83C 0002877C  3B E5 3C 18 */	addi r31, r5, lbl_80473C18@l
/* 8002B840 00028780  93 C1 01 58 */	stw r30, 0x158(r1)
/* 8002B844 00028784  93 A1 01 54 */	stw r29, 0x154(r1)
/* 8002B848 00028788  93 81 01 50 */	stw r28, 0x150(r1)
/* 8002B84C 0002878C  7C DC 33 78 */	mr r28, r6
/* 8002B850 00028790  41 82 00 CC */	beq .L_8002B91C
/* 8002B854 00028794  40 80 00 14 */	bge .L_8002B868
/* 8002B858 00028798  2C 04 00 01 */	cmpwi r4, 1
/* 8002B85C 0002879C  41 82 00 1C */	beq .L_8002B878
/* 8002B860 000287A0  40 80 00 90 */	bge .L_8002B8F0
/* 8002B864 000287A4  48 00 03 4C */	b .L_8002BBB0
.L_8002B868:
/* 8002B868 000287A8  2C 04 00 05 */	cmpwi r4, 5
/* 8002B86C 000287AC  41 82 00 C8 */	beq .L_8002B934
/* 8002B870 000287B0  40 80 03 40 */	bge .L_8002BBB0
/* 8002B874 000287B4  48 00 00 B4 */	b .L_8002B928
.L_8002B878:
/* 8002B878 000287B8  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B87C 000287BC  28 03 00 00 */	cmplwi r3, 0
/* 8002B880 000287C0  41 82 03 30 */	beq .L_8002BBB0
/* 8002B884 000287C4  38 9F 03 38 */	addi r4, r31, 0x338
/* 8002B888 000287C8  4B FF D1 A5 */	bl print__10JUTConsoleFPCc
/* 8002B88C 000287CC  3B C0 00 00 */	li r30, 0
/* 8002B890 000287D0  7F 9D E3 78 */	mr r29, r28
.L_8002B894:
/* 8002B894 000287D4  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B898 000287D8  7F C5 F3 78 */	mr r5, r30
/* 8002B89C 000287DC  80 DD 00 00 */	lwz r6, 0(r29)
/* 8002B8A0 000287E0  38 9F 03 60 */	addi r4, r31, 0x360
/* 8002B8A4 000287E4  81 1D 00 2C */	lwz r8, 0x2c(r29)
/* 8002B8A8 000287E8  38 FE 00 0B */	addi r7, r30, 0xb
/* 8002B8AC 000287EC  81 5D 00 58 */	lwz r10, 0x58(r29)
/* 8002B8B0 000287F0  39 3E 00 16 */	addi r9, r30, 0x16
/* 8002B8B4 000287F4  4C C6 31 82 */	crclr 6
/* 8002B8B8 000287F8  4B FF D0 E9 */	bl print_f__10JUTConsoleFPCce
/* 8002B8BC 000287FC  3B DE 00 01 */	addi r30, r30, 1
/* 8002B8C0 00028800  3B BD 00 04 */	addi r29, r29, 4
/* 8002B8C4 00028804  2C 1E 00 0A */	cmpwi r30, 0xa
/* 8002B8C8 00028808  41 80 FF CC */	blt .L_8002B894
/* 8002B8CC 0002880C  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B8D0 00028810  38 9F 03 88 */	addi r4, r31, 0x388
/* 8002B8D4 00028814  80 DC 00 28 */	lwz r6, 0x28(r28)
/* 8002B8D8 00028818  38 A0 00 0A */	li r5, 0xa
/* 8002B8DC 0002881C  81 1C 00 54 */	lwz r8, 0x54(r28)
/* 8002B8E0 00028820  38 E0 00 15 */	li r7, 0x15
/* 8002B8E4 00028824  4C C6 31 82 */	crclr 6
/* 8002B8E8 00028828  4B FF D0 B9 */	bl print_f__10JUTConsoleFPCce
/* 8002B8EC 0002882C  48 00 02 C4 */	b .L_8002BBB0
.L_8002B8F0:
/* 8002B8F0 00028830  7F 84 E3 78 */	mr r4, r28
/* 8002B8F4 00028834  4B FF EF 35 */	bl showFloat__12JUTExceptionFP9OSContext
/* 8002B8F8 00028838  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B8FC 0002883C  28 03 00 00 */	cmplwi r3, 0
/* 8002B900 00028840  41 82 02 B0 */	beq .L_8002BBB0
/* 8002B904 00028844  80 AD 88 A8 */	lwz r5, msr__12JUTException@sda21(r13)
/* 8002B908 00028848  38 9F 04 6C */	addi r4, r31, 0x46c
/* 8002B90C 0002884C  80 CD 88 AC */	lwz r6, fpscr__12JUTException@sda21(r13)
/* 8002B910 00028850  4C C6 31 82 */	crclr 6
/* 8002B914 00028854  4B FF D0 8D */	bl print_f__10JUTConsoleFPCce
/* 8002B918 00028858  48 00 02 98 */	b .L_8002BBB0
.L_8002B91C:
/* 8002B91C 0002885C  7F 84 E3 78 */	mr r4, r28
/* 8002B920 00028860  4B FF F6 79 */	bl showStack__12JUTExceptionFP9OSContext
/* 8002B924 00028864  48 00 02 8C */	b .L_8002BBB0
.L_8002B928:
/* 8002B928 00028868  7F 84 E3 78 */	mr r4, r28
/* 8002B92C 0002886C  4B FF FC 05 */	bl showGPRMap__12JUTExceptionFP9OSContext
/* 8002B930 00028870  48 00 02 80 */	b .L_8002BBB0
.L_8002B934:
/* 8002B934 00028874  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B938 00028878  28 03 00 00 */	cmplwi r3, 0
/* 8002B93C 0002887C  41 82 02 74 */	beq .L_8002BBB0
/* 8002B940 00028880  38 9F 04 34 */	addi r4, r31, 0x434
/* 8002B944 00028884  4B FF D0 E9 */	bl print__10JUTConsoleFPCc
/* 8002B948 00028888  83 DC 01 98 */	lwz r30, 0x198(r28)
/* 8002B94C 0002888C  3C 00 80 00 */	lis r0, 0x8000
/* 8002B950 00028890  7C 1E 00 40 */	cmplw r30, r0
/* 8002B954 00028894  41 80 02 5C */	blt .L_8002BBB0
/* 8002B958 00028898  3C 60 83 00 */	lis r3, 0x82FFFFFF@ha
/* 8002B95C 0002889C  38 03 FF FF */	addi r0, r3, 0x82FFFFFF@l
/* 8002B960 000288A0  7C 1E 00 40 */	cmplw r30, r0
/* 8002B964 000288A4  41 81 02 4C */	bgt .L_8002BBB0
/* 8002B968 000288A8  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002B96C 000288AC  7F C5 F3 78 */	mr r5, r30
/* 8002B970 000288B0  38 9F 04 60 */	addi r4, r31, 0x460
/* 8002B974 000288B4  4C C6 31 82 */	crclr 6
/* 8002B978 000288B8  4B FF D0 29 */	bl print_f__10JUTConsoleFPCce
/* 8002B97C 000288BC  3C 80 80 00 */	lis r4, 0x8000
/* 8002B980 000288C0  38 C0 00 01 */	li r6, 1
/* 8002B984 000288C4  7C 1E 20 40 */	cmplw r30, r4
/* 8002B988 000288C8  41 80 00 14 */	blt .L_8002B99C
/* 8002B98C 000288CC  3C 60 83 00 */	lis r3, 0x82FFFFFF@ha
/* 8002B990 000288D0  38 03 FF FF */	addi r0, r3, 0x82FFFFFF@l
/* 8002B994 000288D4  7C 1E 00 40 */	cmplw r30, r0
/* 8002B998 000288D8  40 81 00 0C */	ble .L_8002B9A4
.L_8002B99C:
/* 8002B99C 000288DC  38 00 00 00 */	li r0, 0
/* 8002B9A0 000288E0  48 00 01 F0 */	b .L_8002BB90
.L_8002B9A4:
/* 8002B9A4 000288E4  28 1E 00 00 */	cmplwi r30, 0
/* 8002B9A8 000288E8  38 A2 82 D0 */	addi r5, r2, lbl_80516630@sda21
/* 8002B9AC 000288EC  40 82 00 0C */	bne .L_8002B9B8
/* 8002B9B0 000288F0  3B A0 00 00 */	li r29, 0
/* 8002B9B4 000288F4  48 00 00 AC */	b .L_8002BA60
.L_8002B9B8:
/* 8002B9B8 000288F8  81 04 30 C8 */	lwz r8, 0x30c8(r4)
/* 8002B9BC 000288FC  48 00 00 98 */	b .L_8002BA54
.L_8002B9C0:
/* 8002B9C0 00028900  80 08 00 0C */	lwz r0, 0xc(r8)
/* 8002B9C4 00028904  38 80 00 00 */	li r4, 0
/* 8002B9C8 00028908  80 E8 00 10 */	lwz r7, 0x10(r8)
/* 8002B9CC 0002890C  7C 09 03 A6 */	mtctr r0
/* 8002B9D0 00028910  28 00 00 00 */	cmplwi r0, 0
/* 8002B9D4 00028914  40 81 00 7C */	ble .L_8002BA50
.L_8002B9D8:
/* 8002B9D8 00028918  81 27 00 04 */	lwz r9, 4(r7)
/* 8002B9DC 0002891C  28 09 00 00 */	cmplwi r9, 0
/* 8002B9E0 00028920  41 82 00 64 */	beq .L_8002BA44
/* 8002B9E4 00028924  80 07 00 00 */	lwz r0, 0(r7)
/* 8002B9E8 00028928  54 03 00 3C */	rlwinm r3, r0, 0, 0, 0x1e
/* 8002B9EC 0002892C  7C 03 F0 40 */	cmplw r3, r30
/* 8002B9F0 00028930  41 81 00 54 */	bgt .L_8002BA44
/* 8002B9F4 00028934  7C 03 4A 14 */	add r0, r3, r9
/* 8002B9F8 00028938  7C 1E 00 40 */	cmplw r30, r0
/* 8002B9FC 0002893C  40 80 00 48 */	bge .L_8002BA44
/* 8002BA00 00028940  34 01 00 14 */	addic. r0, r1, 0x14
/* 8002BA04 00028944  41 82 00 0C */	beq .L_8002BA10
/* 8002BA08 00028948  80 08 00 00 */	lwz r0, 0(r8)
/* 8002BA0C 0002894C  90 01 00 14 */	stw r0, 0x14(r1)
.L_8002BA10:
/* 8002BA10 00028950  34 01 00 18 */	addic. r0, r1, 0x18
/* 8002BA14 00028954  41 82 00 08 */	beq .L_8002BA1C
/* 8002BA18 00028958  90 81 00 18 */	stw r4, 0x18(r1)
.L_8002BA1C:
/* 8002BA1C 0002895C  34 01 00 1C */	addic. r0, r1, 0x1c
/* 8002BA20 00028960  41 82 00 0C */	beq .L_8002BA2C
/* 8002BA24 00028964  7C 03 F0 50 */	subf r0, r3, r30
/* 8002BA28 00028968  90 01 00 1C */	stw r0, 0x1c(r1)
.L_8002BA2C:
/* 8002BA2C 0002896C  34 01 00 10 */	addic. r0, r1, 0x10
/* 8002BA30 00028970  41 82 00 0C */	beq .L_8002BA3C
/* 8002BA34 00028974  80 08 00 14 */	lwz r0, 0x14(r8)
/* 8002BA38 00028978  90 01 00 10 */	stw r0, 0x10(r1)
.L_8002BA3C:
/* 8002BA3C 0002897C  3B A0 00 01 */	li r29, 1
/* 8002BA40 00028980  48 00 00 20 */	b .L_8002BA60
.L_8002BA44:
/* 8002BA44 00028984  38 E7 00 08 */	addi r7, r7, 8
/* 8002BA48 00028988  38 84 00 01 */	addi r4, r4, 1
/* 8002BA4C 0002898C  42 00 FF 8C */	bdnz .L_8002B9D8
.L_8002BA50:
/* 8002BA50 00028990  81 08 00 04 */	lwz r8, 4(r8)
.L_8002BA54:
/* 8002BA54 00028994  28 08 00 00 */	cmplwi r8, 0
/* 8002BA58 00028998  40 82 FF 68 */	bne .L_8002B9C0
/* 8002BA5C 0002899C  3B A0 00 00 */	li r29, 0
.L_8002BA60:
/* 8002BA60 000289A0  57 A0 06 3E */	clrlwi r0, r29, 0x18
/* 8002BA64 000289A4  28 00 00 01 */	cmplwi r0, 1
/* 8002BA68 000289A8  40 82 00 A0 */	bne .L_8002BB08
/* 8002BA6C 000289AC  80 81 00 10 */	lwz r4, 0x10(r1)
/* 8002BA70 000289B0  38 C1 00 28 */	addi r6, r1, 0x28
/* 8002BA74 000289B4  7C 83 23 78 */	mr r3, r4
/* 8002BA78 000289B8  48 00 00 14 */	b .L_8002BA8C
.L_8002BA7C:
/* 8002BA7C 000289BC  2C 00 00 5C */	cmpwi r0, 0x5c
/* 8002BA80 000289C0  40 82 00 08 */	bne .L_8002BA88
/* 8002BA84 000289C4  7C 64 1B 78 */	mr r4, r3
.L_8002BA88:
/* 8002BA88 000289C8  38 63 00 01 */	addi r3, r3, 1
.L_8002BA8C:
/* 8002BA8C 000289CC  88 03 00 00 */	lbz r0, 0(r3)
/* 8002BA90 000289D0  28 00 00 00 */	cmplwi r0, 0
/* 8002BA94 000289D4  40 82 FF E8 */	bne .L_8002BA7C
/* 8002BA98 000289D8  88 04 00 00 */	lbz r0, 0(r4)
/* 8002BA9C 000289DC  2C 00 00 5C */	cmpwi r0, 0x5c
/* 8002BAA0 000289E0  40 82 00 08 */	bne .L_8002BAA8
/* 8002BAA4 000289E4  38 84 00 01 */	addi r4, r4, 1
.L_8002BAA8:
/* 8002BAA8 000289E8  38 60 00 00 */	li r3, 0
/* 8002BAAC 000289EC  48 00 00 20 */	b .L_8002BACC
.L_8002BAB0:
/* 8002BAB0 000289F0  2C 00 00 2E */	cmpwi r0, 0x2e
/* 8002BAB4 000289F4  41 82 00 2C */	beq .L_8002BAE0
/* 8002BAB8 000289F8  88 04 00 00 */	lbz r0, 0(r4)
/* 8002BABC 000289FC  38 63 00 01 */	addi r3, r3, 1
/* 8002BAC0 00028A00  38 84 00 01 */	addi r4, r4, 1
/* 8002BAC4 00028A04  98 06 00 00 */	stb r0, 0(r6)
/* 8002BAC8 00028A08  38 C6 00 01 */	addi r6, r6, 1
.L_8002BACC:
/* 8002BACC 00028A0C  88 04 00 00 */	lbz r0, 0(r4)
/* 8002BAD0 00028A10  28 00 00 00 */	cmplwi r0, 0
/* 8002BAD4 00028A14  41 82 00 0C */	beq .L_8002BAE0
/* 8002BAD8 00028A18  2C 03 00 20 */	cmpwi r3, 0x20
/* 8002BADC 00028A1C  41 80 FF D4 */	blt .L_8002BAB0
.L_8002BAE0:
/* 8002BAE0 00028A20  38 00 00 00 */	li r0, 0
/* 8002BAE4 00028A24  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002BAE8 00028A28  98 06 00 00 */	stb r0, 0(r6)
/* 8002BAEC 00028A2C  38 9F 03 A4 */	addi r4, r31, 0x3a4
/* 8002BAF0 00028A30  80 E1 00 1C */	lwz r7, 0x1c(r1)
/* 8002BAF4 00028A34  38 C1 00 28 */	addi r6, r1, 0x28
/* 8002BAF8 00028A38  81 01 00 18 */	lwz r8, 0x18(r1)
/* 8002BAFC 00028A3C  4C C6 31 82 */	crclr 6
/* 8002BB00 00028A40  4B FF CE A1 */	bl print_f__10JUTConsoleFPCce
/* 8002BB04 00028A44  38 C0 00 00 */	li r6, 0
.L_8002BB08:
/* 8002BB08 00028A48  3C 60 80 50 */	lis r3, sMapFileList__12JUTException@ha
/* 8002BB0C 00028A4C  80 03 6E 74 */	lwz r0, sMapFileList__12JUTException@l(r3)
/* 8002BB10 00028A50  28 00 00 00 */	cmplwi r0, 0
/* 8002BB14 00028A54  41 82 00 78 */	beq .L_8002BB8C
/* 8002BB18 00028A58  57 A0 06 3E */	clrlwi r0, r29, 0x18
/* 8002BB1C 00028A5C  28 00 00 01 */	cmplwi r0, 1
/* 8002BB20 00028A60  40 82 00 30 */	bne .L_8002BB50
/* 8002BB24 00028A64  90 C1 00 08 */	stw r6, 8(r1)
/* 8002BB28 00028A68  38 61 00 28 */	addi r3, r1, 0x28
/* 8002BB2C 00028A6C  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 8002BB30 00028A70  38 C1 00 20 */	addi r6, r1, 0x20
/* 8002BB34 00028A74  80 A1 00 18 */	lwz r5, 0x18(r1)
/* 8002BB38 00028A78  38 E1 00 24 */	addi r7, r1, 0x24
/* 8002BB3C 00028A7C  39 01 00 4C */	addi r8, r1, 0x4c
/* 8002BB40 00028A80  39 20 01 00 */	li r9, 0x100
/* 8002BB44 00028A84  39 40 00 01 */	li r10, 1
/* 8002BB48 00028A88  48 00 0C FD */	bl queryMapAddress__12JUTExceptionFPcUllPUlPUlPcUlbb
/* 8002BB4C 00028A8C  48 00 00 2C */	b .L_8002BB78
.L_8002BB50:
/* 8002BB50 00028A90  90 C1 00 08 */	stw r6, 8(r1)
/* 8002BB54 00028A94  7F C4 F3 78 */	mr r4, r30
/* 8002BB58 00028A98  38 C1 00 20 */	addi r6, r1, 0x20
/* 8002BB5C 00028A9C  38 E1 00 24 */	addi r7, r1, 0x24
/* 8002BB60 00028AA0  39 01 00 4C */	addi r8, r1, 0x4c
/* 8002BB64 00028AA4  38 60 00 00 */	li r3, 0
/* 8002BB68 00028AA8  38 A0 FF FF */	li r5, -1
/* 8002BB6C 00028AAC  39 20 01 00 */	li r9, 0x100
/* 8002BB70 00028AB0  39 40 00 01 */	li r10, 1
/* 8002BB74 00028AB4  48 00 0C D1 */	bl queryMapAddress__12JUTExceptionFPcUllPUlPUlPcUlbb
.L_8002BB78:
/* 8002BB78 00028AB8  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8002BB7C 00028ABC  28 00 00 01 */	cmplwi r0, 1
/* 8002BB80 00028AC0  40 82 00 0C */	bne .L_8002BB8C
/* 8002BB84 00028AC4  38 00 00 01 */	li r0, 1
/* 8002BB88 00028AC8  48 00 00 08 */	b .L_8002BB90
.L_8002BB8C:
/* 8002BB8C 00028ACC  38 00 00 00 */	li r0, 0
.L_8002BB90:
/* 8002BB90 00028AD0  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8002BB94 00028AD4  40 82 00 10 */	bne .L_8002BBA4
/* 8002BB98 00028AD8  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002BB9C 00028ADC  38 9F 03 F8 */	addi r4, r31, 0x3f8
/* 8002BBA0 00028AE0  4B FF CE 8D */	bl print__10JUTConsoleFPCc
.L_8002BBA4:
/* 8002BBA4 00028AE4  80 6D 88 70 */	lwz r3, sManager__17JUTConsoleManager@sda21(r13)
/* 8002BBA8 00028AE8  38 80 00 01 */	li r4, 1
/* 8002BBAC 00028AEC  4B FF D5 59 */	bl drawDirect__17JUTConsoleManagerCFb
.L_8002BBB0:
/* 8002BBB0 00028AF0  80 01 01 64 */	lwz r0, 0x164(r1)
/* 8002BBB4 00028AF4  83 E1 01 5C */	lwz r31, 0x15c(r1)
/* 8002BBB8 00028AF8  83 C1 01 58 */	lwz r30, 0x158(r1)
/* 8002BBBC 00028AFC  83 A1 01 54 */	lwz r29, 0x154(r1)
/* 8002BBC0 00028B00  83 81 01 50 */	lwz r28, 0x150(r1)
/* 8002BBC4 00028B04  7C 08 03 A6 */	mtlr r0
/* 8002BBC8 00028B08  38 21 01 60 */	addi r1, r1, 0x160
/* 8002BBCC 00028B0C  4E 80 00 20 */	blr 

.global readPad__12JUTExceptionFPUlPUl
readPad__12JUTExceptionFPUlPUl:
/* 8002BBD0 00028B10  94 21 FC 60 */	stwu r1, -0x3a0(r1)
/* 8002BBD4 00028B14  7C 08 02 A6 */	mflr r0
/* 8002BBD8 00028B18  90 01 03 A4 */	stw r0, 0x3a4(r1)
/* 8002BBDC 00028B1C  BE C1 03 78 */	stmw r22, 0x378(r1)
/* 8002BBE0 00028B20  7C 7D 1B 78 */	mr r29, r3
/* 8002BBE4 00028B24  7C 9A 23 78 */	mr r26, r4
/* 8002BBE8 00028B28  7C B9 2B 78 */	mr r25, r5
/* 8002BBEC 00028B2C  3A C0 00 00 */	li r22, 0
/* 8002BBF0 00028B30  48 0C 6F A1 */	bl OSGetTime
/* 8002BBF4 00028B34  3C A0 10 62 */	lis r5, 0x10624DD3@ha
/* 8002BBF8 00028B38  7C 9C 23 78 */	mr r28, r4
/* 8002BBFC 00028B3C  7C 7B 1B 78 */	mr r27, r3
/* 8002BC00 00028B40  3E E0 80 00 */	lis r23, 0x8000
/* 8002BC04 00028B44  3B 05 4D D3 */	addi r24, r5, 0x10624DD3@l
/* 8002BC08 00028B48  3B E0 00 32 */	li r31, 0x32
/* 8002BC0C 00028B4C  3B C0 00 00 */	li r30, 0
.L_8002BC10:
/* 8002BC10 00028B50  48 0C 6F 81 */	bl OSGetTime
/* 8002BC14 00028B54  80 17 00 F8 */	lwz r0, 0xf8(r23)
/* 8002BC18 00028B58  7C 9C 20 10 */	subfc r4, r28, r4
/* 8002BC1C 00028B5C  7C 7B 19 10 */	subfe r3, r27, r3
/* 8002BC20 00028B60  38 A0 00 00 */	li r5, 0
/* 8002BC24 00028B64  54 00 F0 BE */	srwi r0, r0, 2
/* 8002BC28 00028B68  7C 18 00 16 */	mulhwu r0, r24, r0
/* 8002BC2C 00028B6C  54 06 D1 BE */	srwi r6, r0, 6
/* 8002BC30 00028B70  48 09 61 95 */	bl __div2i
/* 8002BC34 00028B74  6C 65 80 00 */	xoris r5, r3, 0x8000
/* 8002BC38 00028B78  6F C3 80 00 */	xoris r3, r30, 0x8000
/* 8002BC3C 00028B7C  7C 1F 20 10 */	subfc r0, r31, r4
/* 8002BC40 00028B80  7C 63 29 10 */	subfe r3, r3, r5
/* 8002BC44 00028B84  7C 65 29 10 */	subfe r3, r5, r5
/* 8002BC48 00028B88  7C 63 00 D1 */	neg. r3, r3
/* 8002BC4C 00028B8C  40 82 FF C4 */	bne .L_8002BC10
/* 8002BC50 00028B90  80 7D 00 84 */	lwz r3, 0x84(r29)
/* 8002BC54 00028B94  3C 03 00 01 */	addis r0, r3, 1
/* 8002BC58 00028B98  28 00 FF FF */	cmplwi r0, 0xffff
/* 8002BC5C 00028B9C  40 82 03 A8 */	bne .L_8002C004
/* 8002BC60 00028BA0  38 61 02 C8 */	addi r3, r1, 0x2c8
/* 8002BC64 00028BA4  38 80 00 00 */	li r4, 0
/* 8002BC68 00028BA8  48 00 17 F1 */	bl __ct__10JUTGamePadFQ210JUTGamePad8EPadPort
/* 8002BC6C 00028BAC  38 61 02 18 */	addi r3, r1, 0x218
/* 8002BC70 00028BB0  38 80 00 01 */	li r4, 1
/* 8002BC74 00028BB4  48 00 17 E5 */	bl __ct__10JUTGamePadFQ210JUTGamePad8EPadPort
/* 8002BC78 00028BB8  38 61 01 68 */	addi r3, r1, 0x168
/* 8002BC7C 00028BBC  38 80 00 02 */	li r4, 2
/* 8002BC80 00028BC0  48 00 17 D9 */	bl __ct__10JUTGamePadFQ210JUTGamePad8EPadPort
/* 8002BC84 00028BC4  38 61 00 B8 */	addi r3, r1, 0xb8
/* 8002BC88 00028BC8  38 80 00 03 */	li r4, 3
/* 8002BC8C 00028BCC  48 00 17 CD */	bl __ct__10JUTGamePadFQ210JUTGamePad8EPadPort
/* 8002BC90 00028BD0  48 00 19 D1 */	bl read__10JUTGamePadFv
/* 8002BC94 00028BD4  A8 01 03 44 */	lha r0, 0x344(r1)
/* 8002BC98 00028BD8  38 60 00 00 */	li r3, 0
/* 8002BC9C 00028BDC  2C 00 FF FF */	cmpwi r0, -1
/* 8002BCA0 00028BE0  41 82 00 14 */	beq .L_8002BCB4
/* 8002BCA4 00028BE4  88 01 03 60 */	lbz r0, 0x360(r1)
/* 8002BCA8 00028BE8  28 00 00 00 */	cmplwi r0, 0
/* 8002BCAC 00028BEC  41 82 00 08 */	beq .L_8002BCB4
/* 8002BCB0 00028BF0  38 60 00 01 */	li r3, 1
.L_8002BCB4:
/* 8002BCB4 00028BF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8002BCB8 00028BF8  41 82 00 34 */	beq .L_8002BCEC
/* 8002BCBC 00028BFC  3C 60 80 4A */	lis r3, c3bcnt@ha
/* 8002BCC0 00028C00  38 A0 00 00 */	li r5, 0
/* 8002BCC4 00028C04  38 83 03 C8 */	addi r4, r3, c3bcnt@l
/* 8002BCC8 00028C08  80 64 00 00 */	lwz r3, 0(r4)
/* 8002BCCC 00028C0C  80 84 00 04 */	lwz r4, 4(r4)
/* 8002BCD0 00028C10  7C 60 2A 78 */	xor r0, r3, r5
/* 8002BCD4 00028C14  7C 85 2A 78 */	xor r5, r4, r5
/* 8002BCD8 00028C18  7C A0 03 79 */	or. r0, r5, r0
/* 8002BCDC 00028C1C  41 82 00 08 */	beq .L_8002BCE4
/* 8002BCE0 00028C20  48 00 00 14 */	b .L_8002BCF4
.L_8002BCE4:
/* 8002BCE4 00028C24  48 0C 6E AD */	bl OSGetTime
/* 8002BCE8 00028C28  48 00 00 0C */	b .L_8002BCF4
.L_8002BCEC:
/* 8002BCEC 00028C2C  38 80 00 00 */	li r4, 0
/* 8002BCF0 00028C30  7C 83 23 78 */	mr r3, r4
.L_8002BCF4:
/* 8002BCF4 00028C34  A8 01 02 94 */	lha r0, 0x294(r1)
/* 8002BCF8 00028C38  3C A0 80 4A */	lis r5, c3bcnt@ha
/* 8002BCFC 00028C3C  38 C5 03 C8 */	addi r6, r5, c3bcnt@l
/* 8002BD00 00028C40  38 A0 00 00 */	li r5, 0
/* 8002BD04 00028C44  2C 00 FF FF */	cmpwi r0, -1
/* 8002BD08 00028C48  90 86 00 04 */	stw r4, 4(r6)
/* 8002BD0C 00028C4C  90 66 00 00 */	stw r3, 0(r6)
/* 8002BD10 00028C50  41 82 00 14 */	beq .L_8002BD24
/* 8002BD14 00028C54  88 01 02 B0 */	lbz r0, 0x2b0(r1)
/* 8002BD18 00028C58  28 00 00 00 */	cmplwi r0, 0
/* 8002BD1C 00028C5C  41 82 00 08 */	beq .L_8002BD24
/* 8002BD20 00028C60  38 A0 00 01 */	li r5, 1
.L_8002BD24:
/* 8002BD24 00028C64  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 8002BD28 00028C68  41 82 00 34 */	beq .L_8002BD5C
/* 8002BD2C 00028C6C  3C 60 80 4A */	lis r3, c3bcnt@ha
/* 8002BD30 00028C70  38 A0 00 00 */	li r5, 0
/* 8002BD34 00028C74  38 83 03 C8 */	addi r4, r3, c3bcnt@l
/* 8002BD38 00028C78  80 64 00 08 */	lwz r3, 8(r4)
/* 8002BD3C 00028C7C  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8002BD40 00028C80  7C 60 2A 78 */	xor r0, r3, r5
/* 8002BD44 00028C84  7C 85 2A 78 */	xor r5, r4, r5
/* 8002BD48 00028C88  7C A0 03 79 */	or. r0, r5, r0
/* 8002BD4C 00028C8C  41 82 00 08 */	beq .L_8002BD54
/* 8002BD50 00028C90  48 00 00 14 */	b .L_8002BD64
.L_8002BD54:
/* 8002BD54 00028C94  48 0C 6E 3D */	bl OSGetTime
/* 8002BD58 00028C98  48 00 00 0C */	b .L_8002BD64
.L_8002BD5C:
/* 8002BD5C 00028C9C  38 80 00 00 */	li r4, 0
/* 8002BD60 00028CA0  7C 83 23 78 */	mr r3, r4
.L_8002BD64:
/* 8002BD64 00028CA4  A8 01 01 E4 */	lha r0, 0x1e4(r1)
/* 8002BD68 00028CA8  3C A0 80 4A */	lis r5, c3bcnt@ha
/* 8002BD6C 00028CAC  3B A5 03 C8 */	addi r29, r5, c3bcnt@l
/* 8002BD70 00028CB0  38 A0 00 00 */	li r5, 0
/* 8002BD74 00028CB4  2C 00 FF FF */	cmpwi r0, -1
/* 8002BD78 00028CB8  90 9D 00 0C */	stw r4, 0xc(r29)
/* 8002BD7C 00028CBC  90 7D 00 08 */	stw r3, 8(r29)
/* 8002BD80 00028CC0  41 82 00 14 */	beq .L_8002BD94
/* 8002BD84 00028CC4  88 01 02 00 */	lbz r0, 0x200(r1)
/* 8002BD88 00028CC8  28 00 00 00 */	cmplwi r0, 0
/* 8002BD8C 00028CCC  41 82 00 08 */	beq .L_8002BD94
/* 8002BD90 00028CD0  38 A0 00 01 */	li r5, 1
.L_8002BD94:
/* 8002BD94 00028CD4  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 8002BD98 00028CD8  41 82 00 34 */	beq .L_8002BDCC
/* 8002BD9C 00028CDC  3C 60 80 4A */	lis r3, c3bcnt@ha
/* 8002BDA0 00028CE0  38 A0 00 00 */	li r5, 0
/* 8002BDA4 00028CE4  38 83 03 C8 */	addi r4, r3, c3bcnt@l
/* 8002BDA8 00028CE8  80 64 00 10 */	lwz r3, 0x10(r4)
/* 8002BDAC 00028CEC  80 84 00 14 */	lwz r4, 0x14(r4)
/* 8002BDB0 00028CF0  7C 60 2A 78 */	xor r0, r3, r5
/* 8002BDB4 00028CF4  7C 85 2A 78 */	xor r5, r4, r5
/* 8002BDB8 00028CF8  7C A0 03 79 */	or. r0, r5, r0
/* 8002BDBC 00028CFC  41 82 00 08 */	beq .L_8002BDC4
/* 8002BDC0 00028D00  48 00 00 14 */	b .L_8002BDD4
.L_8002BDC4:
/* 8002BDC4 00028D04  48 0C 6D CD */	bl OSGetTime
/* 8002BDC8 00028D08  48 00 00 0C */	b .L_8002BDD4
.L_8002BDCC:
/* 8002BDCC 00028D0C  38 80 00 00 */	li r4, 0
/* 8002BDD0 00028D10  7C 83 23 78 */	mr r3, r4
.L_8002BDD4:
/* 8002BDD4 00028D14  A8 01 01 34 */	lha r0, 0x134(r1)
/* 8002BDD8 00028D18  3C A0 80 4A */	lis r5, c3bcnt@ha
/* 8002BDDC 00028D1C  3B C5 03 C8 */	addi r30, r5, c3bcnt@l
/* 8002BDE0 00028D20  38 A0 00 00 */	li r5, 0
/* 8002BDE4 00028D24  2C 00 FF FF */	cmpwi r0, -1
/* 8002BDE8 00028D28  90 9E 00 14 */	stw r4, 0x14(r30)
/* 8002BDEC 00028D2C  90 7E 00 10 */	stw r3, 0x10(r30)
/* 8002BDF0 00028D30  41 82 00 14 */	beq .L_8002BE04
/* 8002BDF4 00028D34  88 01 01 50 */	lbz r0, 0x150(r1)
/* 8002BDF8 00028D38  28 00 00 00 */	cmplwi r0, 0
/* 8002BDFC 00028D3C  41 82 00 08 */	beq .L_8002BE04
/* 8002BE00 00028D40  38 A0 00 01 */	li r5, 1
.L_8002BE04:
/* 8002BE04 00028D44  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 8002BE08 00028D48  41 82 00 34 */	beq .L_8002BE3C
/* 8002BE0C 00028D4C  3C 60 80 4A */	lis r3, c3bcnt@ha
/* 8002BE10 00028D50  38 A0 00 00 */	li r5, 0
/* 8002BE14 00028D54  38 83 03 C8 */	addi r4, r3, c3bcnt@l
/* 8002BE18 00028D58  80 64 00 18 */	lwz r3, 0x18(r4)
/* 8002BE1C 00028D5C  80 84 00 1C */	lwz r4, 0x1c(r4)
/* 8002BE20 00028D60  7C 60 2A 78 */	xor r0, r3, r5
/* 8002BE24 00028D64  7C 85 2A 78 */	xor r5, r4, r5
/* 8002BE28 00028D68  7C A0 03 79 */	or. r0, r5, r0
/* 8002BE2C 00028D6C  41 82 00 08 */	beq .L_8002BE34
/* 8002BE30 00028D70  48 00 00 14 */	b .L_8002BE44
.L_8002BE34:
/* 8002BE34 00028D74  48 0C 6D 5D */	bl OSGetTime
/* 8002BE38 00028D78  48 00 00 0C */	b .L_8002BE44
.L_8002BE3C:
/* 8002BE3C 00028D7C  38 80 00 00 */	li r4, 0
/* 8002BE40 00028D80  7C 83 23 78 */	mr r3, r4
.L_8002BE44:
/* 8002BE44 00028D84  3C A0 80 4A */	lis r5, c3bcnt@ha
/* 8002BE48 00028D88  3B 60 00 00 */	li r27, 0
/* 8002BE4C 00028D8C  3B E5 03 C8 */	addi r31, r5, c3bcnt@l
/* 8002BE50 00028D90  80 1F 00 00 */	lwz r0, 0(r31)
/* 8002BE54 00028D94  80 BF 00 04 */	lwz r5, 4(r31)
/* 8002BE58 00028D98  90 9F 00 1C */	stw r4, 0x1c(r31)
/* 8002BE5C 00028D9C  7C 00 DA 78 */	xor r0, r0, r27
/* 8002BE60 00028DA0  7C A4 DA 78 */	xor r4, r5, r27
/* 8002BE64 00028DA4  7C 80 03 79 */	or. r0, r4, r0
/* 8002BE68 00028DA8  90 7F 00 18 */	stw r3, 0x18(r31)
/* 8002BE6C 00028DAC  41 82 00 24 */	beq .L_8002BE90
/* 8002BE70 00028DB0  48 0C 6D 21 */	bl OSGetTime
/* 8002BE74 00028DB4  3C A0 80 4A */	lis r5, c3bcnt@ha
/* 8002BE78 00028DB8  38 C5 03 C8 */	addi r6, r5, c3bcnt@l
/* 8002BE7C 00028DBC  80 A6 00 04 */	lwz r5, 4(r6)
/* 8002BE80 00028DC0  80 06 00 00 */	lwz r0, 0(r6)
/* 8002BE84 00028DC4  7F 65 20 10 */	subfc r27, r5, r4
/* 8002BE88 00028DC8  7F 00 19 10 */	subfe r24, r0, r3
/* 8002BE8C 00028DCC  48 00 00 08 */	b .L_8002BE94
.L_8002BE90:
/* 8002BE90 00028DD0  7F 78 DB 78 */	mr r24, r27
.L_8002BE94:
/* 8002BE94 00028DD4  80 1D 00 08 */	lwz r0, 8(r29)
/* 8002BE98 00028DD8  3B 80 00 00 */	li r28, 0
/* 8002BE9C 00028DDC  80 7D 00 0C */	lwz r3, 0xc(r29)
/* 8002BEA0 00028DE0  7C 00 E2 78 */	xor r0, r0, r28
/* 8002BEA4 00028DE4  7C 63 E2 78 */	xor r3, r3, r28
/* 8002BEA8 00028DE8  7C 60 03 79 */	or. r0, r3, r0
/* 8002BEAC 00028DEC  41 82 00 1C */	beq .L_8002BEC8
/* 8002BEB0 00028DF0  48 0C 6C E1 */	bl OSGetTime
/* 8002BEB4 00028DF4  80 BD 00 0C */	lwz r5, 0xc(r29)
/* 8002BEB8 00028DF8  80 1D 00 08 */	lwz r0, 8(r29)
/* 8002BEBC 00028DFC  7F 85 20 10 */	subfc r28, r5, r4
/* 8002BEC0 00028E00  7F A0 19 10 */	subfe r29, r0, r3
/* 8002BEC4 00028E04  48 00 00 08 */	b .L_8002BECC
.L_8002BEC8:
/* 8002BEC8 00028E08  7F 9D E3 78 */	mr r29, r28
.L_8002BECC:
/* 8002BECC 00028E0C  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 8002BED0 00028E10  3A E0 00 00 */	li r23, 0
/* 8002BED4 00028E14  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 8002BED8 00028E18  7C 00 BA 78 */	xor r0, r0, r23
/* 8002BEDC 00028E1C  7C 63 BA 78 */	xor r3, r3, r23
/* 8002BEE0 00028E20  7C 60 03 79 */	or. r0, r3, r0
/* 8002BEE4 00028E24  41 82 00 1C */	beq .L_8002BF00
/* 8002BEE8 00028E28  48 0C 6C A9 */	bl OSGetTime
/* 8002BEEC 00028E2C  80 BE 00 14 */	lwz r5, 0x14(r30)
/* 8002BEF0 00028E30  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 8002BEF4 00028E34  7E E5 20 10 */	subfc r23, r5, r4
/* 8002BEF8 00028E38  7E C0 19 10 */	subfe r22, r0, r3
/* 8002BEFC 00028E3C  48 00 00 08 */	b .L_8002BF04
.L_8002BF00:
/* 8002BF00 00028E40  7E F6 BB 78 */	mr r22, r23
.L_8002BF04:
/* 8002BF04 00028E44  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 8002BF08 00028E48  3B C0 00 00 */	li r30, 0
/* 8002BF0C 00028E4C  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 8002BF10 00028E50  7C 00 F2 78 */	xor r0, r0, r30
/* 8002BF14 00028E54  7C 63 F2 78 */	xor r3, r3, r30
/* 8002BF18 00028E58  7C 60 03 79 */	or. r0, r3, r0
/* 8002BF1C 00028E5C  41 82 00 1C */	beq .L_8002BF38
/* 8002BF20 00028E60  48 0C 6C 71 */	bl OSGetTime
/* 8002BF24 00028E64  80 BF 00 1C */	lwz r5, 0x1c(r31)
/* 8002BF28 00028E68  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 8002BF2C 00028E6C  7F C5 20 10 */	subfc r30, r5, r4
/* 8002BF30 00028E70  7F E0 19 10 */	subfe r31, r0, r3
/* 8002BF34 00028E74  48 00 00 08 */	b .L_8002BF3C
.L_8002BF38:
/* 8002BF38 00028E78  7F DF F3 78 */	mr r31, r30
.L_8002BF3C:
/* 8002BF3C 00028E7C  7F 66 DB 78 */	mr r6, r27
/* 8002BF40 00028E80  7F 05 C3 78 */	mr r5, r24
/* 8002BF44 00028E84  38 61 02 C8 */	addi r3, r1, 0x2c8
/* 8002BF48 00028E88  48 00 1A 89 */	bl checkResetCallback__10JUTGamePadFx
/* 8002BF4C 00028E8C  7F 86 E3 78 */	mr r6, r28
/* 8002BF50 00028E90  7F A5 EB 78 */	mr r5, r29
/* 8002BF54 00028E94  38 61 02 18 */	addi r3, r1, 0x218
/* 8002BF58 00028E98  48 00 1A 79 */	bl checkResetCallback__10JUTGamePadFx
/* 8002BF5C 00028E9C  7E E6 BB 78 */	mr r6, r23
/* 8002BF60 00028EA0  7E C5 B3 78 */	mr r5, r22
/* 8002BF64 00028EA4  38 61 01 68 */	addi r3, r1, 0x168
/* 8002BF68 00028EA8  48 00 1A 69 */	bl checkResetCallback__10JUTGamePadFx
/* 8002BF6C 00028EAC  7F C6 F3 78 */	mr r6, r30
/* 8002BF70 00028EB0  7F E5 FB 78 */	mr r5, r31
/* 8002BF74 00028EB4  38 61 00 B8 */	addi r3, r1, 0xb8
/* 8002BF78 00028EB8  48 00 1A 59 */	bl checkResetCallback__10JUTGamePadFx
/* 8002BF7C 00028EBC  28 1A 00 00 */	cmplwi r26, 0
/* 8002BF80 00028EC0  41 82 00 24 */	beq .L_8002BFA4
/* 8002BF84 00028EC4  80 61 02 E4 */	lwz r3, 0x2e4(r1)
/* 8002BF88 00028EC8  80 01 02 34 */	lwz r0, 0x234(r1)
/* 8002BF8C 00028ECC  80 81 01 84 */	lwz r4, 0x184(r1)
/* 8002BF90 00028ED0  7C 60 03 78 */	or r0, r3, r0
/* 8002BF94 00028ED4  80 61 00 D4 */	lwz r3, 0xd4(r1)
/* 8002BF98 00028ED8  7C 80 03 78 */	or r0, r4, r0
/* 8002BF9C 00028EDC  7C 60 03 78 */	or r0, r3, r0
/* 8002BFA0 00028EE0  90 1A 00 00 */	stw r0, 0(r26)
.L_8002BFA4:
/* 8002BFA4 00028EE4  28 19 00 00 */	cmplwi r25, 0
/* 8002BFA8 00028EE8  41 82 00 24 */	beq .L_8002BFCC
/* 8002BFAC 00028EEC  80 61 02 E0 */	lwz r3, 0x2e0(r1)
/* 8002BFB0 00028EF0  80 01 02 30 */	lwz r0, 0x230(r1)
/* 8002BFB4 00028EF4  80 81 01 80 */	lwz r4, 0x180(r1)
/* 8002BFB8 00028EF8  7C 60 03 78 */	or r0, r3, r0
/* 8002BFBC 00028EFC  80 61 00 D0 */	lwz r3, 0xd0(r1)
/* 8002BFC0 00028F00  7C 80 03 78 */	or r0, r4, r0
/* 8002BFC4 00028F04  7C 60 03 78 */	or r0, r3, r0
/* 8002BFC8 00028F08  90 19 00 00 */	stw r0, 0(r25)
.L_8002BFCC:
/* 8002BFCC 00028F0C  38 61 00 B8 */	addi r3, r1, 0xb8
/* 8002BFD0 00028F10  3A C0 00 01 */	li r22, 1
/* 8002BFD4 00028F14  38 80 FF FF */	li r4, -1
/* 8002BFD8 00028F18  48 00 15 55 */	bl __dt__10JUTGamePadFv
/* 8002BFDC 00028F1C  38 61 01 68 */	addi r3, r1, 0x168
/* 8002BFE0 00028F20  38 80 FF FF */	li r4, -1
/* 8002BFE4 00028F24  48 00 15 49 */	bl __dt__10JUTGamePadFv
/* 8002BFE8 00028F28  38 61 02 18 */	addi r3, r1, 0x218
/* 8002BFEC 00028F2C  38 80 FF FF */	li r4, -1
/* 8002BFF0 00028F30  48 00 15 3D */	bl __dt__10JUTGamePadFv
/* 8002BFF4 00028F34  38 61 02 C8 */	addi r3, r1, 0x2c8
/* 8002BFF8 00028F38  38 80 FF FF */	li r4, -1
/* 8002BFFC 00028F3C  48 00 15 31 */	bl __dt__10JUTGamePadFv
/* 8002C000 00028F40  48 00 01 28 */	b .L_8002C128
.L_8002C004:
/* 8002C004 00028F44  80 9D 00 88 */	lwz r4, 0x88(r29)
/* 8002C008 00028F48  2C 04 00 00 */	cmpwi r4, 0
/* 8002C00C 00028F4C  41 80 00 E4 */	blt .L_8002C0F0
/* 8002C010 00028F50  38 61 00 08 */	addi r3, r1, 8
/* 8002C014 00028F54  48 00 14 45 */	bl __ct__10JUTGamePadFQ210JUTGamePad8EPadPort
/* 8002C018 00028F58  A8 01 00 84 */	lha r0, 0x84(r1)
/* 8002C01C 00028F5C  3C 60 80 4A */	lis r3, c3bcnt@ha
/* 8002C020 00028F60  3A E3 03 C8 */	addi r23, r3, c3bcnt@l
/* 8002C024 00028F64  38 60 00 00 */	li r3, 0
/* 8002C028 00028F68  2C 00 FF FF */	cmpwi r0, -1
/* 8002C02C 00028F6C  41 82 00 14 */	beq .L_8002C040
/* 8002C030 00028F70  88 01 00 A0 */	lbz r0, 0xa0(r1)
/* 8002C034 00028F74  28 00 00 00 */	cmplwi r0, 0
/* 8002C038 00028F78  41 82 00 08 */	beq .L_8002C040
/* 8002C03C 00028F7C  38 60 00 01 */	li r3, 1
.L_8002C040:
/* 8002C040 00028F80  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8002C044 00028F84  41 82 00 2C */	beq .L_8002C070
/* 8002C048 00028F88  80 77 00 00 */	lwz r3, 0(r23)
/* 8002C04C 00028F8C  38 A0 00 00 */	li r5, 0
/* 8002C050 00028F90  80 97 00 04 */	lwz r4, 4(r23)
/* 8002C054 00028F94  7C 60 2A 78 */	xor r0, r3, r5
/* 8002C058 00028F98  7C 85 2A 78 */	xor r5, r4, r5
/* 8002C05C 00028F9C  7C A0 03 79 */	or. r0, r5, r0
/* 8002C060 00028FA0  41 82 00 08 */	beq .L_8002C068
/* 8002C064 00028FA4  48 00 00 14 */	b .L_8002C078
.L_8002C068:
/* 8002C068 00028FA8  48 0C 6B 29 */	bl OSGetTime
/* 8002C06C 00028FAC  48 00 00 0C */	b .L_8002C078
.L_8002C070:
/* 8002C070 00028FB0  38 80 00 00 */	li r4, 0
/* 8002C074 00028FB4  7C 83 23 78 */	mr r3, r4
.L_8002C078:
/* 8002C078 00028FB8  38 C0 00 00 */	li r6, 0
/* 8002C07C 00028FBC  90 97 00 04 */	stw r4, 4(r23)
/* 8002C080 00028FC0  7C 84 32 78 */	xor r4, r4, r6
/* 8002C084 00028FC4  7C 60 32 78 */	xor r0, r3, r6
/* 8002C088 00028FC8  90 77 00 00 */	stw r3, 0(r23)
/* 8002C08C 00028FCC  7C 80 03 79 */	or. r0, r4, r0
/* 8002C090 00028FD0  41 82 00 1C */	beq .L_8002C0AC
/* 8002C094 00028FD4  48 0C 6A FD */	bl OSGetTime
/* 8002C098 00028FD8  80 B7 00 04 */	lwz r5, 4(r23)
/* 8002C09C 00028FDC  80 17 00 00 */	lwz r0, 0(r23)
/* 8002C0A0 00028FE0  7C C5 20 10 */	subfc r6, r5, r4
/* 8002C0A4 00028FE4  7C A0 19 10 */	subfe r5, r0, r3
/* 8002C0A8 00028FE8  48 00 00 08 */	b .L_8002C0B0
.L_8002C0AC:
/* 8002C0AC 00028FEC  7C C5 33 78 */	mr r5, r6
.L_8002C0B0:
/* 8002C0B0 00028FF0  38 61 00 08 */	addi r3, r1, 8
/* 8002C0B4 00028FF4  48 00 19 1D */	bl checkResetCallback__10JUTGamePadFx
/* 8002C0B8 00028FF8  48 00 15 A9 */	bl read__10JUTGamePadFv
/* 8002C0BC 00028FFC  28 1A 00 00 */	cmplwi r26, 0
/* 8002C0C0 00029000  41 82 00 0C */	beq .L_8002C0CC
/* 8002C0C4 00029004  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002C0C8 00029008  90 1A 00 00 */	stw r0, 0(r26)
.L_8002C0CC:
/* 8002C0CC 0002900C  28 19 00 00 */	cmplwi r25, 0
/* 8002C0D0 00029010  41 82 00 0C */	beq .L_8002C0DC
/* 8002C0D4 00029014  80 01 00 20 */	lwz r0, 0x20(r1)
/* 8002C0D8 00029018  90 19 00 00 */	stw r0, 0(r25)
.L_8002C0DC:
/* 8002C0DC 0002901C  38 61 00 08 */	addi r3, r1, 8
/* 8002C0E0 00029020  3A C0 00 01 */	li r22, 1
/* 8002C0E4 00029024  38 80 FF FF */	li r4, -1
/* 8002C0E8 00029028  48 00 14 45 */	bl __dt__10JUTGamePadFv
/* 8002C0EC 0002902C  48 00 00 3C */	b .L_8002C128
.L_8002C0F0:
/* 8002C0F0 00029030  28 03 00 00 */	cmplwi r3, 0
/* 8002C0F4 00029034  41 82 00 34 */	beq .L_8002C128
/* 8002C0F8 00029038  48 00 15 69 */	bl read__10JUTGamePadFv
/* 8002C0FC 0002903C  28 1A 00 00 */	cmplwi r26, 0
/* 8002C100 00029040  41 82 00 10 */	beq .L_8002C110
/* 8002C104 00029044  80 7D 00 84 */	lwz r3, 0x84(r29)
/* 8002C108 00029048  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8002C10C 0002904C  90 1A 00 00 */	stw r0, 0(r26)
.L_8002C110:
/* 8002C110 00029050  28 19 00 00 */	cmplwi r25, 0
/* 8002C114 00029054  41 82 00 10 */	beq .L_8002C124
/* 8002C118 00029058  80 7D 00 84 */	lwz r3, 0x84(r29)
/* 8002C11C 0002905C  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8002C120 00029060  90 19 00 00 */	stw r0, 0(r25)
.L_8002C124:
/* 8002C124 00029064  3A C0 00 01 */	li r22, 1
.L_8002C128:
/* 8002C128 00029068  7E C3 B3 78 */	mr r3, r22
/* 8002C12C 0002906C  BA C1 03 78 */	lmw r22, 0x378(r1)
/* 8002C130 00029070  80 01 03 A4 */	lwz r0, 0x3a4(r1)
/* 8002C134 00029074  7C 08 03 A6 */	mtlr r0
/* 8002C138 00029078  38 21 03 A0 */	addi r1, r1, 0x3a0
/* 8002C13C 0002907C  4E 80 00 20 */	blr 

.global printContext__12JUTExceptionFUsP9OSContextUlUl
printContext__12JUTExceptionFUsP9OSContextUlUl:
/* 8002C140 00029080  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8002C144 00029084  7C 08 02 A6 */	mflr r0
/* 8002C148 00029088  90 01 00 44 */	stw r0, 0x44(r1)
/* 8002C14C 0002908C  BE C1 00 18 */	stmw r22, 0x18(r1)
/* 8002C150 00029090  7C 78 1B 78 */	mr r24, r3
/* 8002C154 00029094  3C 60 80 47 */	lis r3, lbl_80473C18@ha
/* 8002C158 00029098  7C 99 23 78 */	mr r25, r4
/* 8002C15C 0002909C  7C BA 2B 78 */	mr r26, r5
/* 8002C160 000290A0  7C DB 33 78 */	mr r27, r6
/* 8002C164 000290A4  7C FC 3B 78 */	mr r28, r7
/* 8002C168 000290A8  3B E3 3C 18 */	addi r31, r3, lbl_80473C18@l
/* 8002C16C 000290AC  81 18 00 84 */	lwz r8, 0x84(r24)
/* 8002C170 000290B0  3C 08 00 01 */	addis r0, r8, 1
/* 8002C174 000290B4  28 00 FF FF */	cmplwi r0, 0xffff
/* 8002C178 000290B8  40 82 00 0C */	bne .L_8002C184
/* 8002C17C 000290BC  38 00 00 01 */	li r0, 1
/* 8002C180 000290C0  48 00 00 2C */	b .L_8002C1AC
.L_8002C184:
/* 8002C184 000290C4  80 18 00 88 */	lwz r0, 0x88(r24)
/* 8002C188 000290C8  2C 00 00 00 */	cmpwi r0, 0
/* 8002C18C 000290CC  41 80 00 0C */	blt .L_8002C198
/* 8002C190 000290D0  38 00 00 01 */	li r0, 1
/* 8002C194 000290D4  48 00 00 18 */	b .L_8002C1AC
.L_8002C198:
/* 8002C198 000290D8  28 08 00 00 */	cmplwi r8, 0
/* 8002C19C 000290DC  41 82 00 0C */	beq .L_8002C1A8
/* 8002C1A0 000290E0  38 00 00 01 */	li r0, 1
/* 8002C1A4 000290E4  48 00 00 08 */	b .L_8002C1AC
.L_8002C1A8:
/* 8002C1A8 000290E8  38 00 00 00 */	li r0, 0
.L_8002C1AC:
/* 8002C1AC 000290EC  80 6D 88 90 */	lwz r3, sErrorManager__12JUTException@sda21(r13)
/* 8002C1B0 000290F0  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8002C1B4 000290F4  7C 00 00 34 */	cntlzw r0, r0
/* 8002C1B8 000290F8  80 63 00 80 */	lwz r3, 0x80(r3)
/* 8002C1BC 000290FC  54 1E D9 7E */	srwi r30, r0, 5
/* 8002C1C0 00029100  80 03 00 00 */	lwz r0, 0(r3)
/* 8002C1C4 00029104  28 00 00 00 */	cmplwi r0, 0
/* 8002C1C8 00029108  41 82 04 48 */	beq .L_8002C610
/* 8002C1CC 0002910C  38 60 00 00 */	li r3, 0
/* 8002C1D0 00029110  48 0A 48 8D */	bl VISetPreRetraceCallback
/* 8002C1D4 00029114  38 60 00 00 */	li r3, 0
/* 8002C1D8 00029118  48 0A 48 C9 */	bl VISetPostRetraceCallback
/* 8002C1DC 0002911C  38 60 00 00 */	li r3, 0
/* 8002C1E0 00029120  48 0A 5E E9 */	bl VISetBlack
/* 8002C1E4 00029124  48 0A 5D 41 */	bl VIFlush
/* 8002C1E8 00029128  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002C1EC 0002912C  28 03 00 00 */	cmplwi r3, 0
/* 8002C1F0 00029130  41 82 04 20 */	beq .L_8002C610
/* 8002C1F4 00029134  57 20 04 3E */	clrlwi r0, r25, 0x10
/* 8002C1F8 00029138  28 00 00 11 */	cmplwi r0, 0x11
/* 8002C1FC 0002913C  40 80 00 18 */	bge .L_8002C214
/* 8002C200 00029140  80 B8 00 7C */	lwz r5, 0x7c(r24)
/* 8002C204 00029144  38 9F 04 88 */	addi r4, r31, 0x488
/* 8002C208 00029148  4C C6 31 82 */	crclr 6
/* 8002C20C 0002914C  4B FF C7 95 */	bl print_f__10JUTConsoleFPCce
/* 8002C210 00029150  48 00 00 14 */	b .L_8002C224
.L_8002C214:
/* 8002C214 00029154  80 B8 00 7C */	lwz r5, 0x7c(r24)
/* 8002C218 00029158  38 9F 04 C0 */	addi r4, r31, 0x4c0
/* 8002C21C 0002915C  4C C6 31 82 */	crclr 6
/* 8002C220 00029160  4B FF C7 81 */	bl print_f__10JUTConsoleFPCce
.L_8002C224:
/* 8002C224 00029164  3B A0 00 00 */	li r29, 0
/* 8002C228 00029168  57 D7 06 3E */	clrlwi r23, r30, 0x18
.L_8002C22C:
/* 8002C22C 0002916C  7F 03 C3 78 */	mr r3, r24
/* 8002C230 00029170  7F 24 CB 78 */	mr r4, r25
/* 8002C234 00029174  7F 45 D3 78 */	mr r5, r26
/* 8002C238 00029178  7F 66 DB 78 */	mr r6, r27
/* 8002C23C 0002917C  7F 87 E3 78 */	mr r7, r28
/* 8002C240 00029180  4B FF EE 55 */	bl showMainInfo__12JUTExceptionFUsP9OSContextUlUl
/* 8002C244 00029184  80 6D 88 70 */	lwz r3, sManager__17JUTConsoleManager@sda21(r13)
/* 8002C248 00029188  38 80 00 01 */	li r4, 1
/* 8002C24C 0002918C  4B FF CE B9 */	bl drawDirect__17JUTConsoleManagerCFb
/* 8002C250 00029190  80 78 00 8C */	lwz r3, 0x8c(r24)
/* 8002C254 00029194  48 00 03 D1 */	bl waitTime__12JUTExceptionFl
/* 8002C258 00029198  80 18 00 9C */	lwz r0, 0x9c(r24)
/* 8002C25C 0002919C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8002C260 000291A0  41 82 00 34 */	beq .L_8002C294
/* 8002C264 000291A4  7F 03 C3 78 */	mr r3, r24
/* 8002C268 000291A8  7F 25 CB 78 */	mr r5, r25
/* 8002C26C 000291AC  7F 46 D3 78 */	mr r6, r26
/* 8002C270 000291B0  7F 67 DB 78 */	mr r7, r27
/* 8002C274 000291B4  7F 88 E3 78 */	mr r8, r28
/* 8002C278 000291B8  38 80 00 01 */	li r4, 1
/* 8002C27C 000291BC  4B FF F5 A9 */	bl printDebugInfo__12JUTExceptionFQ212JUTException9EInfoPageUsP9OSContextUlUl
/* 8002C280 000291C0  80 6D 88 70 */	lwz r3, sManager__17JUTConsoleManager@sda21(r13)
/* 8002C284 000291C4  38 80 00 01 */	li r4, 1
/* 8002C288 000291C8  4B FF CE 7D */	bl drawDirect__17JUTConsoleManagerCFb
/* 8002C28C 000291CC  80 78 00 8C */	lwz r3, 0x8c(r24)
/* 8002C290 000291D0  48 00 03 95 */	bl waitTime__12JUTExceptionFl
.L_8002C294:
/* 8002C294 000291D4  80 18 00 9C */	lwz r0, 0x9c(r24)
/* 8002C298 000291D8  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 8002C29C 000291DC  41 82 00 34 */	beq .L_8002C2D0
/* 8002C2A0 000291E0  7F 03 C3 78 */	mr r3, r24
/* 8002C2A4 000291E4  7F 25 CB 78 */	mr r5, r25
/* 8002C2A8 000291E8  7F 46 D3 78 */	mr r6, r26
/* 8002C2AC 000291EC  7F 67 DB 78 */	mr r7, r27
/* 8002C2B0 000291F0  7F 88 E3 78 */	mr r8, r28
/* 8002C2B4 000291F4  38 80 00 05 */	li r4, 5
/* 8002C2B8 000291F8  4B FF F5 6D */	bl printDebugInfo__12JUTExceptionFQ212JUTException9EInfoPageUsP9OSContextUlUl
/* 8002C2BC 000291FC  80 6D 88 70 */	lwz r3, sManager__17JUTConsoleManager@sda21(r13)
/* 8002C2C0 00029200  38 80 00 01 */	li r4, 1
/* 8002C2C4 00029204  4B FF CE 41 */	bl drawDirect__17JUTConsoleManagerCFb
/* 8002C2C8 00029208  80 78 00 8C */	lwz r3, 0x8c(r24)
/* 8002C2CC 0002920C  48 00 03 59 */	bl waitTime__12JUTExceptionFl
.L_8002C2D0:
/* 8002C2D0 00029210  80 18 00 9C */	lwz r0, 0x9c(r24)
/* 8002C2D4 00029214  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8002C2D8 00029218  41 82 00 34 */	beq .L_8002C30C
/* 8002C2DC 0002921C  7F 03 C3 78 */	mr r3, r24
/* 8002C2E0 00029220  7F 25 CB 78 */	mr r5, r25
/* 8002C2E4 00029224  7F 46 D3 78 */	mr r6, r26
/* 8002C2E8 00029228  7F 67 DB 78 */	mr r7, r27
/* 8002C2EC 0002922C  7F 88 E3 78 */	mr r8, r28
/* 8002C2F0 00029230  38 80 00 04 */	li r4, 4
/* 8002C2F4 00029234  4B FF F5 31 */	bl printDebugInfo__12JUTExceptionFQ212JUTException9EInfoPageUsP9OSContextUlUl
/* 8002C2F8 00029238  80 6D 88 70 */	lwz r3, sManager__17JUTConsoleManager@sda21(r13)
/* 8002C2FC 0002923C  38 80 00 01 */	li r4, 1
/* 8002C300 00029240  4B FF CE 05 */	bl drawDirect__17JUTConsoleManagerCFb
/* 8002C304 00029244  80 78 00 8C */	lwz r3, 0x8c(r24)
/* 8002C308 00029248  48 00 03 1D */	bl waitTime__12JUTExceptionFl
.L_8002C30C:
/* 8002C30C 0002924C  80 18 00 9C */	lwz r0, 0x9c(r24)
/* 8002C310 00029250  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 8002C314 00029254  41 82 00 34 */	beq .L_8002C348
/* 8002C318 00029258  7F 03 C3 78 */	mr r3, r24
/* 8002C31C 0002925C  7F 25 CB 78 */	mr r5, r25
/* 8002C320 00029260  7F 46 D3 78 */	mr r6, r26
/* 8002C324 00029264  7F 67 DB 78 */	mr r7, r27
/* 8002C328 00029268  7F 88 E3 78 */	mr r8, r28
/* 8002C32C 0002926C  38 80 00 02 */	li r4, 2
/* 8002C330 00029270  4B FF F4 F5 */	bl printDebugInfo__12JUTExceptionFQ212JUTException9EInfoPageUsP9OSContextUlUl
/* 8002C334 00029274  80 6D 88 70 */	lwz r3, sManager__17JUTConsoleManager@sda21(r13)
/* 8002C338 00029278  38 80 00 01 */	li r4, 1
/* 8002C33C 0002927C  4B FF CD C9 */	bl drawDirect__17JUTConsoleManagerCFb
/* 8002C340 00029280  80 78 00 8C */	lwz r3, 0x8c(r24)
/* 8002C344 00029284  48 00 02 E1 */	bl waitTime__12JUTExceptionFl
.L_8002C348:
/* 8002C348 00029288  80 18 00 9C */	lwz r0, 0x9c(r24)
/* 8002C34C 0002928C  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 8002C350 00029290  41 82 00 34 */	beq .L_8002C384
/* 8002C354 00029294  7F 03 C3 78 */	mr r3, r24
/* 8002C358 00029298  7F 25 CB 78 */	mr r5, r25
/* 8002C35C 0002929C  7F 46 D3 78 */	mr r6, r26
/* 8002C360 000292A0  7F 67 DB 78 */	mr r7, r27
/* 8002C364 000292A4  7F 88 E3 78 */	mr r8, r28
/* 8002C368 000292A8  38 80 00 03 */	li r4, 3
/* 8002C36C 000292AC  4B FF F4 B9 */	bl printDebugInfo__12JUTExceptionFQ212JUTException9EInfoPageUsP9OSContextUlUl
/* 8002C370 000292B0  80 6D 88 70 */	lwz r3, sManager__17JUTConsoleManager@sda21(r13)
/* 8002C374 000292B4  38 80 00 01 */	li r4, 1
/* 8002C378 000292B8  4B FF CD 8D */	bl drawDirect__17JUTConsoleManagerCFb
/* 8002C37C 000292BC  80 78 00 90 */	lwz r3, 0x90(r24)
/* 8002C380 000292C0  48 00 02 A5 */	bl waitTime__12JUTExceptionFl
.L_8002C384:
/* 8002C384 000292C4  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002C388 000292C8  38 9F 04 F0 */	addi r4, r31, 0x4f0
/* 8002C38C 000292CC  4B FF C6 A1 */	bl print__10JUTConsoleFPCc
/* 8002C390 000292D0  80 6D 88 70 */	lwz r3, sManager__17JUTConsoleManager@sda21(r13)
/* 8002C394 000292D4  38 80 00 01 */	li r4, 1
/* 8002C398 000292D8  4B FF CD 6D */	bl drawDirect__17JUTConsoleManagerCFb
/* 8002C39C 000292DC  2C 1D 00 00 */	cmpwi r29, 0
/* 8002C3A0 000292E0  40 82 00 40 */	bne .L_8002C3E0
/* 8002C3A4 000292E4  80 0D 88 98 */	lwz r0, sPostUserCallback__12JUTException@sda21(r13)
/* 8002C3A8 000292E8  28 00 00 00 */	cmplwi r0, 0
/* 8002C3AC 000292EC  41 82 00 34 */	beq .L_8002C3E0
/* 8002C3B0 000292F0  48 0C 28 9D */	bl OSEnableInterrupts
/* 8002C3B4 000292F4  81 8D 88 98 */	lwz r12, sPostUserCallback__12JUTException@sda21(r13)
/* 8002C3B8 000292F8  7C 76 1B 78 */	mr r22, r3
/* 8002C3BC 000292FC  7F 23 CB 78 */	mr r3, r25
/* 8002C3C0 00029300  7F 44 D3 78 */	mr r4, r26
/* 8002C3C4 00029304  7F 65 DB 78 */	mr r5, r27
/* 8002C3C8 00029308  7F 86 E3 78 */	mr r6, r28
/* 8002C3CC 0002930C  3B A0 00 01 */	li r29, 1
/* 8002C3D0 00029310  7D 89 03 A6 */	mtctr r12
/* 8002C3D4 00029314  4E 80 04 21 */	bctrl 
/* 8002C3D8 00029318  7E C3 B3 78 */	mr r3, r22
/* 8002C3DC 0002931C  48 0C 28 85 */	bl OSRestoreInterrupts
.L_8002C3E0:
/* 8002C3E0 00029320  80 18 00 98 */	lwz r0, 0x98(r24)
/* 8002C3E4 00029324  28 00 00 00 */	cmplwi r0, 0
/* 8002C3E8 00029328  41 82 00 20 */	beq .L_8002C408
/* 8002C3EC 0002932C  28 17 00 00 */	cmplwi r23, 0
/* 8002C3F0 00029330  41 82 00 18 */	beq .L_8002C408
/* 8002C3F4 00029334  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002C3F8 00029338  80 03 00 58 */	lwz r0, 0x58(r3)
/* 8002C3FC 0002933C  54 00 07 FE */	clrlwi r0, r0, 0x1f
/* 8002C400 00029340  90 03 00 58 */	stw r0, 0x58(r3)
/* 8002C404 00029344  4B FF FE 28 */	b .L_8002C22C
.L_8002C408:
/* 8002C408 00029348  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 8002C40C 0002934C  40 82 01 44 */	bne .L_8002C550
/* 8002C410 00029350  48 0C 28 3D */	bl OSEnableInterrupts
/* 8002C414 00029354  3A C0 00 00 */	li r22, 0
/* 8002C418 00029358  3A E0 00 00 */	li r23, 0
.L_8002C41C:
/* 8002C41C 0002935C  7F 03 C3 78 */	mr r3, r24
/* 8002C420 00029360  38 81 00 08 */	addi r4, r1, 8
/* 8002C424 00029364  38 A1 00 0C */	addi r5, r1, 0xc
/* 8002C428 00029368  4B FF F7 A9 */	bl readPad__12JUTExceptionFPUlPUl
/* 8002C42C 0002936C  80 01 00 08 */	lwz r0, 8(r1)
/* 8002C430 00029370  38 60 00 00 */	li r3, 0
/* 8002C434 00029374  28 00 01 00 */	cmplwi r0, 0x100
/* 8002C438 00029378  40 82 00 14 */	bne .L_8002C44C
/* 8002C43C 0002937C  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002C440 00029380  80 83 00 24 */	lwz r4, 0x24(r3)
/* 8002C444 00029384  4B FF C9 31 */	bl scroll__10JUTConsoleFi
/* 8002C448 00029388  38 60 00 01 */	li r3, 1
.L_8002C44C:
/* 8002C44C 0002938C  80 01 00 08 */	lwz r0, 8(r1)
/* 8002C450 00029390  28 00 02 00 */	cmplwi r0, 0x200
/* 8002C454 00029394  40 82 00 18 */	bne .L_8002C46C
/* 8002C458 00029398  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002C45C 0002939C  80 03 00 24 */	lwz r0, 0x24(r3)
/* 8002C460 000293A0  7C 80 00 D0 */	neg r4, r0
/* 8002C464 000293A4  4B FF C9 11 */	bl scroll__10JUTConsoleFi
/* 8002C468 000293A8  38 60 00 01 */	li r3, 1
.L_8002C46C:
/* 8002C46C 000293AC  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8002C470 000293B0  28 00 00 08 */	cmplwi r0, 8
/* 8002C474 000293B4  40 82 00 4C */	bne .L_8002C4C0
/* 8002C478 000293B8  2C 16 00 03 */	cmpwi r22, 3
/* 8002C47C 000293BC  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002C480 000293C0  40 80 00 0C */	bge .L_8002C48C
/* 8002C484 000293C4  38 80 FF FF */	li r4, -1
/* 8002C488 000293C8  48 00 00 24 */	b .L_8002C4AC
.L_8002C48C:
/* 8002C48C 000293CC  2C 16 00 05 */	cmpwi r22, 5
/* 8002C490 000293D0  40 80 00 0C */	bge .L_8002C49C
/* 8002C494 000293D4  38 80 FF FE */	li r4, -2
/* 8002C498 000293D8  48 00 00 14 */	b .L_8002C4AC
.L_8002C49C:
/* 8002C49C 000293DC  2C 16 00 07 */	cmpwi r22, 7
/* 8002C4A0 000293E0  38 80 FF F8 */	li r4, -8
/* 8002C4A4 000293E4  40 80 00 08 */	bge .L_8002C4AC
/* 8002C4A8 000293E8  38 80 FF FC */	li r4, -4
.L_8002C4AC:
/* 8002C4AC 000293EC  4B FF C8 C9 */	bl scroll__10JUTConsoleFi
/* 8002C4B0 000293F0  38 60 00 01 */	li r3, 1
/* 8002C4B4 000293F4  3A E0 00 00 */	li r23, 0
/* 8002C4B8 000293F8  3A D6 00 01 */	addi r22, r22, 1
/* 8002C4BC 000293FC  48 00 00 5C */	b .L_8002C518
.L_8002C4C0:
/* 8002C4C0 00029400  28 00 00 04 */	cmplwi r0, 4
/* 8002C4C4 00029404  40 82 00 4C */	bne .L_8002C510
/* 8002C4C8 00029408  2C 17 00 03 */	cmpwi r23, 3
/* 8002C4CC 0002940C  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002C4D0 00029410  40 80 00 0C */	bge .L_8002C4DC
/* 8002C4D4 00029414  38 80 00 01 */	li r4, 1
/* 8002C4D8 00029418  48 00 00 24 */	b .L_8002C4FC
.L_8002C4DC:
/* 8002C4DC 0002941C  2C 17 00 05 */	cmpwi r23, 5
/* 8002C4E0 00029420  40 80 00 0C */	bge .L_8002C4EC
/* 8002C4E4 00029424  38 80 00 02 */	li r4, 2
/* 8002C4E8 00029428  48 00 00 14 */	b .L_8002C4FC
.L_8002C4EC:
/* 8002C4EC 0002942C  2C 17 00 07 */	cmpwi r23, 7
/* 8002C4F0 00029430  38 80 00 08 */	li r4, 8
/* 8002C4F4 00029434  40 80 00 08 */	bge .L_8002C4FC
/* 8002C4F8 00029438  38 80 00 04 */	li r4, 4
.L_8002C4FC:
/* 8002C4FC 0002943C  4B FF C8 79 */	bl scroll__10JUTConsoleFi
/* 8002C500 00029440  38 60 00 01 */	li r3, 1
/* 8002C504 00029444  3A C0 00 00 */	li r22, 0
/* 8002C508 00029448  3A F7 00 01 */	addi r23, r23, 1
/* 8002C50C 0002944C  48 00 00 0C */	b .L_8002C518
.L_8002C510:
/* 8002C510 00029450  3A C0 00 00 */	li r22, 0
/* 8002C514 00029454  3A E0 00 00 */	li r23, 0
.L_8002C518:
/* 8002C518 00029458  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8002C51C 0002945C  28 00 00 01 */	cmplwi r0, 1
/* 8002C520 00029460  40 82 00 24 */	bne .L_8002C544
/* 8002C524 00029464  48 0A 5C 21 */	bl VIGetRetraceCount
/* 8002C528 00029468  7C 79 1B 78 */	mr r25, r3
.L_8002C52C:
/* 8002C52C 0002946C  48 0A 5C 19 */	bl VIGetRetraceCount
/* 8002C530 00029470  7C 19 18 40 */	cmplw r25, r3
/* 8002C534 00029474  41 82 FF F8 */	beq .L_8002C52C
/* 8002C538 00029478  80 6D 88 70 */	lwz r3, sManager__17JUTConsoleManager@sda21(r13)
/* 8002C53C 0002947C  38 80 00 01 */	li r4, 1
/* 8002C540 00029480  4B FF CB C5 */	bl drawDirect__17JUTConsoleManagerCFb
.L_8002C544:
/* 8002C544 00029484  38 60 00 1E */	li r3, 0x1e
/* 8002C548 00029488  48 00 00 DD */	bl waitTime__12JUTExceptionFl
/* 8002C54C 0002948C  4B FF FE D0 */	b .L_8002C41C
.L_8002C550:
/* 8002C550 00029490  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002C554 00029494  80 03 00 24 */	lwz r0, 0x24(r3)
/* 8002C558 00029498  7C 80 00 D0 */	neg r4, r0
/* 8002C55C 0002949C  4B FF C8 19 */	bl scroll__10JUTConsoleFi
/* 8002C560 000294A0  80 6D 88 70 */	lwz r3, sManager__17JUTConsoleManager@sda21(r13)
/* 8002C564 000294A4  38 80 00 01 */	li r4, 1
/* 8002C568 000294A8  4B FF CB 9D */	bl drawDirect__17JUTConsoleManagerCFb
/* 8002C56C 000294AC  38 60 07 D0 */	li r3, 0x7d0
/* 8002C570 000294B0  48 00 00 B5 */	bl waitTime__12JUTExceptionFl
.L_8002C574:
/* 8002C574 000294B4  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002C578 000294B8  82 C3 00 48 */	lwz r22, 0x48(r3)
/* 8002C57C 000294BC  48 00 00 54 */	b .L_8002C5D0
.L_8002C580:
/* 8002C580 000294C0  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002C584 000294C4  38 80 00 01 */	li r4, 1
/* 8002C588 000294C8  4B FF C7 ED */	bl scroll__10JUTConsoleFi
/* 8002C58C 000294CC  80 6D 88 70 */	lwz r3, sManager__17JUTConsoleManager@sda21(r13)
/* 8002C590 000294D0  38 80 00 01 */	li r4, 1
/* 8002C594 000294D4  4B FF CB 71 */	bl drawDirect__17JUTConsoleManagerCFb
/* 8002C598 000294D8  83 2D 88 A4 */	lwz r25, sConsole__12JUTException@sda21(r13)
/* 8002C59C 000294DC  82 F9 00 48 */	lwz r23, 0x48(r25)
/* 8002C5A0 000294E0  7F 23 CB 78 */	mr r3, r25
/* 8002C5A4 000294E4  4B FF C8 D1 */	bl getLineOffset__10JUTConsoleCFv
/* 8002C5A8 000294E8  7C 78 1B 78 */	mr r24, r3
/* 8002C5AC 000294EC  7F 23 CB 78 */	mr r3, r25
/* 8002C5B0 000294F0  4B FF C8 A1 */	bl getUsedLine__10JUTConsoleCFv
/* 8002C5B4 000294F4  7C 77 18 50 */	subf r3, r23, r3
/* 8002C5B8 000294F8  38 03 00 01 */	addi r0, r3, 1
/* 8002C5BC 000294FC  7C 00 C0 40 */	cmplw r0, r24
/* 8002C5C0 00029500  40 81 00 18 */	ble .L_8002C5D8
/* 8002C5C4 00029504  38 60 00 14 */	li r3, 0x14
/* 8002C5C8 00029508  48 00 00 5D */	bl waitTime__12JUTExceptionFl
/* 8002C5CC 0002950C  3A D6 FF FF */	addi r22, r22, -1
.L_8002C5D0:
/* 8002C5D0 00029510  28 16 00 00 */	cmplwi r22, 0
/* 8002C5D4 00029514  40 82 FF AC */	bne .L_8002C580
.L_8002C5D8:
/* 8002C5D8 00029518  38 60 0B B8 */	li r3, 0xbb8
/* 8002C5DC 0002951C  48 00 00 49 */	bl waitTime__12JUTExceptionFl
/* 8002C5E0 00029520  83 2D 88 A4 */	lwz r25, sConsole__12JUTException@sda21(r13)
/* 8002C5E4 00029524  82 F9 00 48 */	lwz r23, 0x48(r25)
/* 8002C5E8 00029528  7F 23 CB 78 */	mr r3, r25
/* 8002C5EC 0002952C  4B FF C8 89 */	bl getLineOffset__10JUTConsoleCFv
/* 8002C5F0 00029530  7C 78 1B 78 */	mr r24, r3
/* 8002C5F4 00029534  7F 23 CB 78 */	mr r3, r25
/* 8002C5F8 00029538  4B FF C8 59 */	bl getUsedLine__10JUTConsoleCFv
/* 8002C5FC 0002953C  7C 77 18 50 */	subf r3, r23, r3
/* 8002C600 00029540  38 03 00 01 */	addi r0, r3, 1
/* 8002C604 00029544  7C 00 C0 40 */	cmplw r0, r24
/* 8002C608 00029548  40 81 FF 48 */	ble .L_8002C550
/* 8002C60C 0002954C  4B FF FF 68 */	b .L_8002C574
.L_8002C610:
/* 8002C610 00029550  BA C1 00 18 */	lmw r22, 0x18(r1)
/* 8002C614 00029554  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8002C618 00029558  7C 08 03 A6 */	mtlr r0
/* 8002C61C 0002955C  38 21 00 40 */	addi r1, r1, 0x40
/* 8002C620 00029560  4E 80 00 20 */	blr 

.global waitTime__12JUTExceptionFl
waitTime__12JUTExceptionFl:
/* 8002C624 00029564  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002C628 00029568  7C 08 02 A6 */	mflr r0
/* 8002C62C 0002956C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002C630 00029570  BF 41 00 08 */	stmw r26, 8(r1)
/* 8002C634 00029574  7C 7A 1B 79 */	or. r26, r3, r3
/* 8002C638 00029578  41 82 00 60 */	beq .L_8002C698
/* 8002C63C 0002957C  48 0C 65 55 */	bl OSGetTime
/* 8002C640 00029580  3C A0 10 62 */	lis r5, 0x10624DD3@ha
/* 8002C644 00029584  7C 9C 23 78 */	mr r28, r4
/* 8002C648 00029588  7C 7D 1B 78 */	mr r29, r3
/* 8002C64C 0002958C  7F 5B FE 70 */	srawi r27, r26, 0x1f
/* 8002C650 00029590  3B C5 4D D3 */	addi r30, r5, 0x10624DD3@l
/* 8002C654 00029594  3F E0 80 00 */	lis r31, 0x8000
.L_8002C658:
/* 8002C658 00029598  48 0C 65 39 */	bl OSGetTime
/* 8002C65C 0002959C  80 1F 00 F8 */	lwz r0, 0xf8(r31)
/* 8002C660 000295A0  7C 9C 20 10 */	subfc r4, r28, r4
/* 8002C664 000295A4  7C 7D 19 10 */	subfe r3, r29, r3
/* 8002C668 000295A8  38 A0 00 00 */	li r5, 0
/* 8002C66C 000295AC  54 00 F0 BE */	srwi r0, r0, 2
/* 8002C670 000295B0  7C 1E 00 16 */	mulhwu r0, r30, r0
/* 8002C674 000295B4  54 06 D1 BE */	srwi r6, r0, 6
/* 8002C678 000295B8  48 09 57 4D */	bl __div2i
/* 8002C67C 000295BC  6C 65 80 00 */	xoris r5, r3, 0x8000
/* 8002C680 000295C0  6F 63 80 00 */	xoris r3, r27, 0x8000
/* 8002C684 000295C4  7C 1A 20 10 */	subfc r0, r26, r4
/* 8002C688 000295C8  7C 63 29 10 */	subfe r3, r3, r5
/* 8002C68C 000295CC  7C 65 29 10 */	subfe r3, r5, r5
/* 8002C690 000295D0  7C 63 00 D1 */	neg. r3, r3
/* 8002C694 000295D4  40 82 FF C4 */	bne .L_8002C658
.L_8002C698:
/* 8002C698 000295D8  BB 41 00 08 */	lmw r26, 8(r1)
/* 8002C69C 000295DC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002C6A0 000295E0  7C 08 03 A6 */	mtlr r0
/* 8002C6A4 000295E4  38 21 00 20 */	addi r1, r1, 0x20
/* 8002C6A8 000295E8  4E 80 00 20 */	blr 

.global createFB__12JUTExceptionFv
createFB__12JUTExceptionFv:
/* 8002C6AC 000295EC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002C6B0 000295F0  7C 08 02 A6 */	mflr r0
/* 8002C6B4 000295F4  3C 80 80 4B */	lis r4, GXNtsc480Int@ha
/* 8002C6B8 000295F8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002C6BC 000295FC  38 04 84 3C */	addi r0, r4, GXNtsc480Int@l
/* 8002C6C0 00029600  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8002C6C4 00029604  7C 1F 03 78 */	mr r31, r0
/* 8002C6C8 00029608  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8002C6CC 0002960C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8002C6D0 00029610  93 81 00 10 */	stw r28, 0x10(r1)
/* 8002C6D4 00029614  7C 7C 1B 78 */	mr r28, r3
/* 8002C6D8 00029618  48 0B FD 4D */	bl OSGetArenaHi
/* 8002C6DC 0002961C  3C 80 80 4B */	lis r4, GXNtsc480Int@ha
/* 8002C6E0 00029620  38 A4 84 3C */	addi r5, r4, GXNtsc480Int@l
/* 8002C6E4 00029624  A0 85 00 04 */	lhz r4, 4(r5)
/* 8002C6E8 00029628  A0 05 00 08 */	lhz r0, 8(r5)
/* 8002C6EC 0002962C  38 84 00 0F */	addi r4, r4, 0xf
/* 8002C6F0 00029630  54 84 04 36 */	rlwinm r4, r4, 0, 0x10, 0x1b
/* 8002C6F4 00029634  7C 04 01 D6 */	mullw r0, r4, r0
/* 8002C6F8 00029638  54 07 08 3C */	slwi r7, r0, 1
/* 8002C6FC 0002963C  7C 07 18 50 */	subf r0, r7, r3
/* 8002C700 00029640  54 1E 00 34 */	rlwinm r30, r0, 0, 0, 0x1a
/* 8002C704 00029644  38 1E FF EC */	addi r0, r30, -20
/* 8002C708 00029648  54 1D 00 35 */	rlwinm. r29, r0, 0, 0, 0x1a
/* 8002C70C 0002964C  41 82 00 18 */	beq .L_8002C724
/* 8002C710 00029650  7F A3 EB 78 */	mr r3, r29
/* 8002C714 00029654  7F E4 FB 78 */	mr r4, r31
/* 8002C718 00029658  7F C6 F3 78 */	mr r6, r30
/* 8002C71C 0002965C  38 A0 00 01 */	li r5, 1
/* 8002C720 00029660  48 00 06 21 */	bl __ct__13JUTExternalFBFP16_GXRenderModeObj8_GXGammaPvUl
.L_8002C724:
/* 8002C724 00029664  80 7C 00 80 */	lwz r3, 0x80(r28)
/* 8002C728 00029668  7F C4 F3 78 */	mr r4, r30
/* 8002C72C 0002966C  A0 BF 00 04 */	lhz r5, 4(r31)
/* 8002C730 00029670  A0 DF 00 06 */	lhz r6, 6(r31)
/* 8002C734 00029674  4B FF D8 59 */	bl changeFrameBuffer__14JUTDirectPrintFPvUsUs
/* 8002C738 00029678  7F E3 FB 78 */	mr r3, r31
/* 8002C73C 0002967C  48 0A 4F C1 */	bl VIConfigure
/* 8002C740 00029680  7F C3 F3 78 */	mr r3, r30
/* 8002C744 00029684  48 0A 59 11 */	bl VISetNextFrameBuffer
/* 8002C748 00029688  38 60 00 00 */	li r3, 0
/* 8002C74C 0002968C  48 0A 59 7D */	bl VISetBlack
/* 8002C750 00029690  48 0A 57 D5 */	bl VIFlush
/* 8002C754 00029694  48 0A 57 D1 */	bl VIFlush
/* 8002C758 00029698  3B C0 00 00 */	li r30, 0
.L_8002C75C:
/* 8002C75C 0002969C  48 0A 59 E9 */	bl VIGetRetraceCount
/* 8002C760 000296A0  7C 7F 1B 78 */	mr r31, r3
.L_8002C764:
/* 8002C764 000296A4  48 0A 59 E1 */	bl VIGetRetraceCount
/* 8002C768 000296A8  7C 1F 18 40 */	cmplw r31, r3
/* 8002C76C 000296AC  41 82 FF F8 */	beq .L_8002C764
/* 8002C770 000296B0  3B DE 00 01 */	addi r30, r30, 1
/* 8002C774 000296B4  2C 1E 00 03 */	cmpwi r30, 3
/* 8002C778 000296B8  41 80 FF E4 */	blt .L_8002C75C
/* 8002C77C 000296BC  93 BC 00 7C */	stw r29, 0x7c(r28)
/* 8002C780 000296C0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002C784 000296C4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8002C788 000296C8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8002C78C 000296CC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8002C790 000296D0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8002C794 000296D4  7C 08 03 A6 */	mtlr r0
/* 8002C798 000296D8  38 21 00 20 */	addi r1, r1, 0x20
/* 8002C79C 000296DC  4E 80 00 20 */	blr 

.global setPreUserCallback__12JUTExceptionFPFUsP9OSContextUlUl_v
setPreUserCallback__12JUTExceptionFPFUsP9OSContextUlUl_v:
/* 8002C7A0 000296E0  80 0D 88 94 */	lwz r0, sPreUserCallback__12JUTException@sda21(r13)
/* 8002C7A4 000296E4  90 6D 88 94 */	stw r3, sPreUserCallback__12JUTException@sda21(r13)
/* 8002C7A8 000296E8  7C 03 03 78 */	mr r3, r0
/* 8002C7AC 000296EC  4E 80 00 20 */	blr 

.global appendMapFile__12JUTExceptionFPCc
appendMapFile__12JUTExceptionFPCc:
/* 8002C7B0 000296F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002C7B4 000296F4  7C 08 02 A6 */	mflr r0
/* 8002C7B8 000296F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002C7BC 000296FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002C7C0 00029700  93 C1 00 08 */	stw r30, 8(r1)
/* 8002C7C4 00029704  7C 7E 1B 79 */	or. r30, r3, r3
/* 8002C7C8 00029708  41 82 00 64 */	beq .L_8002C82C
/* 8002C7CC 0002970C  3C 60 80 50 */	lis r3, sMapFileList__12JUTException@ha
/* 8002C7D0 00029710  83 E3 6E 74 */	lwz r31, sMapFileList__12JUTException@l(r3)
/* 8002C7D4 00029714  48 00 00 20 */	b .L_8002C7F4
.L_8002C7D8:
/* 8002C7D8 00029718  80 9F 00 00 */	lwz r4, 0(r31)
/* 8002C7DC 0002971C  7F C3 F3 78 */	mr r3, r30
/* 8002C7E0 00029720  80 84 00 00 */	lwz r4, 0(r4)
/* 8002C7E4 00029724  48 09 DE DD */	bl strcmp
/* 8002C7E8 00029728  2C 03 00 00 */	cmpwi r3, 0
/* 8002C7EC 0002972C  41 82 00 40 */	beq .L_8002C82C
/* 8002C7F0 00029730  83 FF 00 0C */	lwz r31, 0xc(r31)
.L_8002C7F4:
/* 8002C7F4 00029734  28 1F 00 00 */	cmplwi r31, 0
/* 8002C7F8 00029738  40 82 FF E0 */	bne .L_8002C7D8
/* 8002C7FC 0002973C  38 60 00 14 */	li r3, 0x14
/* 8002C800 00029740  4B FF 76 A5 */	bl __nw__FUl
/* 8002C804 00029744  7C 7F 1B 79 */	or. r31, r3, r3
/* 8002C808 00029748  41 82 00 14 */	beq .L_8002C81C
/* 8002C80C 0002974C  7F E4 FB 78 */	mr r4, r31
/* 8002C810 00029750  38 7F 00 04 */	addi r3, r31, 4
/* 8002C814 00029754  4B FF 9F A5 */	bl __ct__10JSUPtrLinkFPv
/* 8002C818 00029758  93 DF 00 00 */	stw r30, 0(r31)
.L_8002C81C:
/* 8002C81C 0002975C  3C 60 80 50 */	lis r3, sMapFileList__12JUTException@ha
/* 8002C820 00029760  38 9F 00 04 */	addi r4, r31, 4
/* 8002C824 00029764  38 63 6E 74 */	addi r3, r3, sMapFileList__12JUTException@l
/* 8002C828 00029768  4B FF A0 BD */	bl append__10JSUPtrListFP10JSUPtrLink
.L_8002C82C:
/* 8002C82C 0002976C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002C830 00029770  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002C834 00029774  83 C1 00 08 */	lwz r30, 8(r1)
/* 8002C838 00029778  7C 08 03 A6 */	mtlr r0
/* 8002C83C 0002977C  38 21 00 10 */	addi r1, r1, 0x10
/* 8002C840 00029780  4E 80 00 20 */	blr 

.global queryMapAddress__12JUTExceptionFPcUllPUlPUlPcUlbb
queryMapAddress__12JUTExceptionFPcUllPUlPUlPcUlbb:
/* 8002C844 00029784  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8002C848 00029788  7C 08 02 A6 */	mflr r0
/* 8002C84C 0002978C  28 03 00 00 */	cmplwi r3, 0
/* 8002C850 00029790  90 01 00 84 */	stw r0, 0x84(r1)
/* 8002C854 00029794  BF 01 00 60 */	stmw r24, 0x60(r1)
/* 8002C858 00029798  7C 98 23 78 */	mr r24, r4
/* 8002C85C 0002979C  8B E1 00 8B */	lbz r31, 0x8b(r1)
/* 8002C860 000297A0  7C B9 2B 78 */	mr r25, r5
/* 8002C864 000297A4  7C DA 33 78 */	mr r26, r6
/* 8002C868 000297A8  7C FB 3B 78 */	mr r27, r7
/* 8002C86C 000297AC  7D 1C 43 78 */	mr r28, r8
/* 8002C870 000297B0  7D 3D 4B 78 */	mr r29, r9
/* 8002C874 000297B4  7D 5E 53 78 */	mr r30, r10
/* 8002C878 000297B8  41 82 00 58 */	beq .L_8002C8D0
/* 8002C87C 000297BC  7C 64 1B 78 */	mr r4, r3
/* 8002C880 000297C0  38 61 00 10 */	addi r3, r1, 0x10
/* 8002C884 000297C4  48 09 DF D5 */	bl strcpy
/* 8002C888 000297C8  38 61 00 10 */	addi r3, r1, 0x10
/* 8002C88C 000297CC  38 82 82 E8 */	addi r4, r2, lbl_80516648@sda21
/* 8002C890 000297D0  48 09 DF 59 */	bl strcat
/* 8002C894 000297D4  93 E1 00 08 */	stw r31, 8(r1)
/* 8002C898 000297D8  7F 04 C3 78 */	mr r4, r24
/* 8002C89C 000297DC  7F 25 CB 78 */	mr r5, r25
/* 8002C8A0 000297E0  7F 46 D3 78 */	mr r6, r26
/* 8002C8A4 000297E4  7F 67 DB 78 */	mr r7, r27
/* 8002C8A8 000297E8  7F 88 E3 78 */	mr r8, r28
/* 8002C8AC 000297EC  7F A9 EB 78 */	mr r9, r29
/* 8002C8B0 000297F0  7F CA F3 78 */	mr r10, r30
/* 8002C8B4 000297F4  38 61 00 10 */	addi r3, r1, 0x10
/* 8002C8B8 000297F8  48 00 00 6D */	bl queryMapAddress_single__12JUTExceptionFPcUllPUlPUlPcUlbb
/* 8002C8BC 000297FC  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8002C8C0 00029800  28 00 00 01 */	cmplwi r0, 1
/* 8002C8C4 00029804  40 82 00 48 */	bne .L_8002C90C
/* 8002C8C8 00029808  38 60 00 01 */	li r3, 1
/* 8002C8CC 0002980C  48 00 00 44 */	b .L_8002C910
.L_8002C8D0:
/* 8002C8D0 00029810  3C 60 80 50 */	lis r3, sMapFileList__12JUTException@ha
/* 8002C8D4 00029814  38 63 6E 74 */	addi r3, r3, sMapFileList__12JUTException@l
/* 8002C8D8 00029818  80 63 00 00 */	lwz r3, 0(r3)
/* 8002C8DC 0002981C  28 03 00 00 */	cmplwi r3, 0
/* 8002C8E0 00029820  41 82 00 2C */	beq .L_8002C90C
/* 8002C8E4 00029824  93 E1 00 08 */	stw r31, 8(r1)
/* 8002C8E8 00029828  38 A0 FF FF */	li r5, -1
/* 8002C8EC 0002982C  80 63 00 00 */	lwz r3, 0(r3)
/* 8002C8F0 00029830  80 63 00 00 */	lwz r3, 0(r3)
/* 8002C8F4 00029834  48 00 00 31 */	bl queryMapAddress_single__12JUTExceptionFPcUllPUlPUlPcUlbb
/* 8002C8F8 00029838  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8002C8FC 0002983C  28 00 00 01 */	cmplwi r0, 1
/* 8002C900 00029840  40 82 00 0C */	bne .L_8002C90C
/* 8002C904 00029844  38 60 00 01 */	li r3, 1
/* 8002C908 00029848  48 00 00 08 */	b .L_8002C910
.L_8002C90C:
/* 8002C90C 0002984C  38 60 00 00 */	li r3, 0
.L_8002C910:
/* 8002C910 00029850  BB 01 00 60 */	lmw r24, 0x60(r1)
/* 8002C914 00029854  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8002C918 00029858  7C 08 03 A6 */	mtlr r0
/* 8002C91C 0002985C  38 21 00 80 */	addi r1, r1, 0x80
/* 8002C920 00029860  4E 80 00 20 */	blr 

.global queryMapAddress_single__12JUTExceptionFPcUllPUlPUlPcUlbb
queryMapAddress_single__12JUTExceptionFPcUllPUlPUlPcUlbb:
/* 8002C924 00029864  94 21 F5 30 */	stwu r1, -0xad0(r1)
/* 8002C928 00029868  7C 08 02 A6 */	mflr r0
/* 8002C92C 0002986C  90 01 0A D4 */	stw r0, 0xad4(r1)
/* 8002C930 00029870  BE 01 0A 90 */	stmw r16, 0xa90(r1)
/* 8002C934 00029874  7C 70 1B 79 */	or. r16, r3, r3
/* 8002C938 00029878  8A 61 0A DB */	lbz r19, 0xadb(r1)
/* 8002C93C 0002987C  7C 9A 23 78 */	mr r26, r4
/* 8002C940 00029880  7C BB 2B 78 */	mr r27, r5
/* 8002C944 00029884  7C DC 33 78 */	mr r28, r6
/* 8002C948 00029888  7C FD 3B 78 */	mr r29, r7
/* 8002C94C 0002988C  7D 1E 43 78 */	mr r30, r8
/* 8002C950 00029890  7D 32 4B 78 */	mr r18, r9
/* 8002C954 00029894  7D 5F 53 78 */	mr r31, r10
/* 8002C958 00029898  40 82 00 0C */	bne .L_8002C964
/* 8002C95C 0002989C  38 60 00 00 */	li r3, 0
/* 8002C960 000298A0  48 00 02 EC */	b .L_8002CC4C
.L_8002C964:
/* 8002C964 000298A4  38 61 02 18 */	addi r3, r1, 0x218
/* 8002C968 000298A8  4B FF CE C5 */	bl __ct__13JUTDirectFileFv
/* 8002C96C 000298AC  7E 04 83 78 */	mr r4, r16
/* 8002C970 000298B0  38 61 02 18 */	addi r3, r1, 0x218
/* 8002C974 000298B4  3A C0 00 00 */	li r22, 0
/* 8002C978 000298B8  4B FF CF 1D */	bl fopen__13JUTDirectFileFPCc
/* 8002C97C 000298BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8002C980 000298C0  40 82 00 18 */	bne .L_8002C998
/* 8002C984 000298C4  38 61 02 18 */	addi r3, r1, 0x218
/* 8002C988 000298C8  38 80 FF FF */	li r4, -1
/* 8002C98C 000298CC  4B FF CE C5 */	bl __dt__13JUTDirectFileFv
/* 8002C990 000298D0  38 60 00 00 */	li r3, 0
/* 8002C994 000298D4  48 00 02 B8 */	b .L_8002CC4C
.L_8002C998:
/* 8002C998 000298D8  3B 21 00 19 */	addi r25, r1, 0x19
/* 8002C99C 000298DC  3B 01 00 2B */	addi r24, r1, 0x2b
/* 8002C9A0 000298E0  3A E1 00 23 */	addi r23, r1, 0x23
/* 8002C9A4 000298E4  3A 01 00 36 */	addi r16, r1, 0x36
/* 8002C9A8 000298E8  3A 20 00 00 */	li r17, 0
.L_8002C9AC:
/* 8002C9AC 000298EC  3A 80 00 00 */	li r20, 0
/* 8002C9B0 000298F0  3A D6 00 01 */	addi r22, r22, 1
.L_8002C9B4:
/* 8002C9B4 000298F4  38 61 02 18 */	addi r3, r1, 0x218
/* 8002C9B8 000298F8  38 81 00 18 */	addi r4, r1, 0x18
/* 8002C9BC 000298FC  38 A0 02 00 */	li r5, 0x200
/* 8002C9C0 00029900  4B FF CF DD */	bl fgets__13JUTDirectFileFPvi
/* 8002C9C4 00029904  2C 03 00 00 */	cmpwi r3, 0
/* 8002C9C8 00029908  41 80 00 9C */	blt .L_8002CA64
/* 8002C9CC 0002990C  88 01 00 18 */	lbz r0, 0x18(r1)
/* 8002C9D0 00029910  2C 00 00 2E */	cmpwi r0, 0x2e
/* 8002C9D4 00029914  40 82 FF E0 */	bne .L_8002C9B4
/* 8002C9D8 00029918  7F 23 CB 78 */	mr r3, r25
/* 8002C9DC 0002991C  38 81 00 08 */	addi r4, r1, 8
/* 8002C9E0 00029920  38 C0 00 00 */	li r6, 0
/* 8002C9E4 00029924  48 00 00 28 */	b .L_8002CA0C
.L_8002C9E8:
/* 8002C9E8 00029928  88 03 00 00 */	lbz r0, 0(r3)
/* 8002C9EC 0002992C  98 A4 00 00 */	stb r5, 0(r4)
/* 8002C9F0 00029930  2C 00 00 20 */	cmpwi r0, 0x20
/* 8002C9F4 00029934  41 82 00 24 */	beq .L_8002CA18
/* 8002C9F8 00029938  2C 06 00 0F */	cmpwi r6, 0xf
/* 8002C9FC 0002993C  41 82 00 1C */	beq .L_8002CA18
/* 8002CA00 00029940  38 84 00 01 */	addi r4, r4, 1
/* 8002CA04 00029944  38 C6 00 01 */	addi r6, r6, 1
/* 8002CA08 00029948  38 63 00 01 */	addi r3, r3, 1
.L_8002CA0C:
/* 8002CA0C 0002994C  88 A3 00 00 */	lbz r5, 0(r3)
/* 8002CA10 00029950  7C A0 07 75 */	extsb. r0, r5
/* 8002CA14 00029954  40 82 FF D4 */	bne .L_8002C9E8
.L_8002CA18:
/* 8002CA18 00029958  88 03 00 00 */	lbz r0, 0(r3)
/* 8002CA1C 0002995C  38 81 00 08 */	addi r4, r1, 8
/* 8002CA20 00029960  38 A0 00 00 */	li r5, 0
/* 8002CA24 00029964  7C 00 07 75 */	extsb. r0, r0
/* 8002CA28 00029968  7C A4 31 AE */	stbx r5, r4, r6
/* 8002CA2C 0002996C  41 82 00 38 */	beq .L_8002CA64
/* 8002CA30 00029970  88 03 00 01 */	lbz r0, 1(r3)
/* 8002CA34 00029974  2C 00 00 73 */	cmpwi r0, 0x73
/* 8002CA38 00029978  40 82 FF 7C */	bne .L_8002C9B4
/* 8002CA3C 0002997C  88 03 00 02 */	lbz r0, 2(r3)
/* 8002CA40 00029980  2C 00 00 65 */	cmpwi r0, 0x65
/* 8002CA44 00029984  40 82 FF 70 */	bne .L_8002C9B4
/* 8002CA48 00029988  88 03 00 03 */	lbz r0, 3(r3)
/* 8002CA4C 0002998C  2C 00 00 63 */	cmpwi r0, 0x63
/* 8002CA50 00029990  40 82 FF 64 */	bne .L_8002C9B4
/* 8002CA54 00029994  88 03 00 04 */	lbz r0, 4(r3)
/* 8002CA58 00029998  2C 00 00 74 */	cmpwi r0, 0x74
/* 8002CA5C 0002999C  40 82 FF 58 */	bne .L_8002C9B4
/* 8002CA60 000299A0  3A 80 00 01 */	li r20, 1
.L_8002CA64:
/* 8002CA64 000299A4  56 80 06 3F */	clrlwi. r0, r20, 0x18
/* 8002CA68 000299A8  41 82 01 BC */	beq .L_8002CC24
/* 8002CA6C 000299AC  2C 1B 00 00 */	cmpwi r27, 0
/* 8002CA70 000299B0  41 80 00 0C */	blt .L_8002CA7C
/* 8002CA74 000299B4  7C 1B B0 00 */	cmpw r27, r22
/* 8002CA78 000299B8  40 82 FF 34 */	bne .L_8002C9AC
.L_8002CA7C:
/* 8002CA7C 000299BC  38 61 02 18 */	addi r3, r1, 0x218
/* 8002CA80 000299C0  38 81 00 18 */	addi r4, r1, 0x18
/* 8002CA84 000299C4  38 A0 02 00 */	li r5, 0x200
/* 8002CA88 000299C8  4B FF CF 15 */	bl fgets__13JUTDirectFileFPvi
/* 8002CA8C 000299CC  2C 03 00 04 */	cmpwi r3, 4
/* 8002CA90 000299D0  40 81 01 68 */	ble .L_8002CBF8
/* 8002CA94 000299D4  2C 03 00 1C */	cmpwi r3, 0x1c
/* 8002CA98 000299D8  41 80 FF E4 */	blt .L_8002CA7C
/* 8002CA9C 000299DC  88 01 00 34 */	lbz r0, 0x34(r1)
/* 8002CAA0 000299E0  2C 00 00 34 */	cmpwi r0, 0x34
/* 8002CAA4 000299E4  40 82 FF D8 */	bne .L_8002CA7C
/* 8002CAA8 000299E8  7F 03 C3 78 */	mr r3, r24
/* 8002CAAC 000299EC  38 80 00 00 */	li r4, 0
/* 8002CAB0 000299F0  38 A0 00 10 */	li r5, 0x10
/* 8002CAB4 000299F4  48 09 EE 85 */	bl strtol
/* 8002CAB8 000299F8  88 01 00 2A */	lbz r0, 0x2a(r1)
/* 8002CABC 000299FC  38 80 00 00 */	li r4, 0
/* 8002CAC0 00029A00  38 A0 00 10 */	li r5, 0x10
/* 8002CAC4 00029A04  7C 06 07 74 */	extsb r6, r0
/* 8002CAC8 00029A08  38 06 FF D0 */	addi r0, r6, -48
/* 8002CACC 00029A0C  54 00 E0 06 */	slwi r0, r0, 0x1c
/* 8002CAD0 00029A10  7C 15 1B 78 */	or r21, r0, r3
/* 8002CAD4 00029A14  7E E3 BB 78 */	mr r3, r23
/* 8002CAD8 00029A18  48 09 EE 61 */	bl strtol
/* 8002CADC 00029A1C  7C 15 D0 40 */	cmplw r21, r26
/* 8002CAE0 00029A20  7C 74 1B 78 */	mr r20, r3
/* 8002CAE4 00029A24  41 81 FF 98 */	bgt .L_8002CA7C
/* 8002CAE8 00029A28  7C 15 A2 14 */	add r0, r21, r20
/* 8002CAEC 00029A2C  7C 1A 00 40 */	cmplw r26, r0
/* 8002CAF0 00029A30  40 80 FF 8C */	bge .L_8002CA7C
/* 8002CAF4 00029A34  28 1C 00 00 */	cmplwi r28, 0
/* 8002CAF8 00029A38  41 82 00 08 */	beq .L_8002CB00
/* 8002CAFC 00029A3C  92 BC 00 00 */	stw r21, 0(r28)
.L_8002CB00:
/* 8002CB00 00029A40  28 1D 00 00 */	cmplwi r29, 0
/* 8002CB04 00029A44  41 82 00 08 */	beq .L_8002CB0C
/* 8002CB08 00029A48  92 9D 00 00 */	stw r20, 0(r29)
.L_8002CB0C:
/* 8002CB0C 00029A4C  28 1E 00 00 */	cmplwi r30, 0
/* 8002CB10 00029A50  41 82 00 E4 */	beq .L_8002CBF4
/* 8002CB14 00029A54  7E 05 83 78 */	mr r5, r16
/* 8002CB18 00029A58  7F C6 F3 78 */	mr r6, r30
/* 8002CB1C 00029A5C  38 12 FF FF */	addi r0, r18, -1
/* 8002CB20 00029A60  38 E0 00 00 */	li r7, 0
/* 8002CB24 00029A64  38 60 00 20 */	li r3, 0x20
/* 8002CB28 00029A68  48 00 00 5C */	b .L_8002CB84
.L_8002CB2C:
/* 8002CB2C 00029A6C  88 85 00 00 */	lbz r4, 0(r5)
/* 8002CB30 00029A70  28 04 00 20 */	cmplwi r4, 0x20
/* 8002CB34 00029A74  40 80 00 0C */	bge .L_8002CB40
/* 8002CB38 00029A78  28 04 00 09 */	cmplwi r4, 9
/* 8002CB3C 00029A7C  40 82 00 50 */	bne .L_8002CB8C
.L_8002CB40:
/* 8002CB40 00029A80  2C 04 00 20 */	cmpwi r4, 0x20
/* 8002CB44 00029A84  41 82 00 0C */	beq .L_8002CB50
/* 8002CB48 00029A88  28 04 00 09 */	cmplwi r4, 9
/* 8002CB4C 00029A8C  40 82 00 28 */	bne .L_8002CB74
.L_8002CB50:
/* 8002CB50 00029A90  28 07 00 00 */	cmplwi r7, 0
/* 8002CB54 00029A94  41 82 00 20 */	beq .L_8002CB74
/* 8002CB58 00029A98  88 86 FF FF */	lbz r4, -1(r6)
/* 8002CB5C 00029A9C  2C 04 00 20 */	cmpwi r4, 0x20
/* 8002CB60 00029AA0  41 82 00 20 */	beq .L_8002CB80
/* 8002CB64 00029AA4  98 66 00 00 */	stb r3, 0(r6)
/* 8002CB68 00029AA8  38 C6 00 01 */	addi r6, r6, 1
/* 8002CB6C 00029AAC  38 E7 00 01 */	addi r7, r7, 1
/* 8002CB70 00029AB0  48 00 00 10 */	b .L_8002CB80
.L_8002CB74:
/* 8002CB74 00029AB4  98 86 00 00 */	stb r4, 0(r6)
/* 8002CB78 00029AB8  38 C6 00 01 */	addi r6, r6, 1
/* 8002CB7C 00029ABC  38 E7 00 01 */	addi r7, r7, 1
.L_8002CB80:
/* 8002CB80 00029AC0  38 A5 00 01 */	addi r5, r5, 1
.L_8002CB84:
/* 8002CB84 00029AC4  7C 07 00 40 */	cmplw r7, r0
/* 8002CB88 00029AC8  41 80 FF A4 */	blt .L_8002CB2C
.L_8002CB8C:
/* 8002CB8C 00029ACC  28 07 00 00 */	cmplwi r7, 0
/* 8002CB90 00029AD0  41 82 00 14 */	beq .L_8002CBA4
/* 8002CB94 00029AD4  88 06 FF FF */	lbz r0, -1(r6)
/* 8002CB98 00029AD8  2C 00 00 20 */	cmpwi r0, 0x20
/* 8002CB9C 00029ADC  40 82 00 08 */	bne .L_8002CBA4
/* 8002CBA0 00029AE0  38 C6 FF FF */	addi r6, r6, -1
.L_8002CBA4:
/* 8002CBA4 00029AE4  38 60 00 00 */	li r3, 0
/* 8002CBA8 00029AE8  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8002CBAC 00029AEC  98 66 00 00 */	stb r3, 0(r6)
/* 8002CBB0 00029AF0  41 82 00 44 */	beq .L_8002CBF4
/* 8002CBB4 00029AF4  56 60 06 3F */	clrlwi. r0, r19, 0x18
/* 8002CBB8 00029AF8  41 82 00 10 */	beq .L_8002CBC8
/* 8002CBBC 00029AFC  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002CBC0 00029B00  38 82 82 D0 */	addi r4, r2, lbl_80516630@sda21
/* 8002CBC4 00029B04  4B FF BE 69 */	bl print__10JUTConsoleFPCc
.L_8002CBC8:
/* 8002CBC8 00029B08  3C 80 80 47 */	lis r4, lbl_8047412C@ha
/* 8002CBCC 00029B0C  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002CBD0 00029B10  38 84 41 2C */	addi r4, r4, lbl_8047412C@l
/* 8002CBD4 00029B14  7F 45 D3 78 */	mr r5, r26
/* 8002CBD8 00029B18  7E A7 AB 78 */	mr r7, r21
/* 8002CBDC 00029B1C  7E 88 A3 78 */	mr r8, r20
/* 8002CBE0 00029B20  7F C9 F3 78 */	mr r9, r30
/* 8002CBE4 00029B24  38 C1 00 08 */	addi r6, r1, 8
/* 8002CBE8 00029B28  4C C6 31 82 */	crclr 6
/* 8002CBEC 00029B2C  4B FF BD B5 */	bl print_f__10JUTConsoleFPCce
/* 8002CBF0 00029B30  3A 60 00 00 */	li r19, 0
.L_8002CBF4:
/* 8002CBF4 00029B34  3A 20 00 01 */	li r17, 1
.L_8002CBF8:
/* 8002CBF8 00029B38  2C 1B 00 00 */	cmpwi r27, 0
/* 8002CBFC 00029B3C  41 80 FD B0 */	blt .L_8002C9AC
/* 8002CC00 00029B40  7C 1B B0 00 */	cmpw r27, r22
/* 8002CC04 00029B44  40 82 FD A8 */	bne .L_8002C9AC
/* 8002CC08 00029B48  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8002CC0C 00029B4C  41 82 00 18 */	beq .L_8002CC24
/* 8002CC10 00029B50  56 60 06 3F */	clrlwi. r0, r19, 0x18
/* 8002CC14 00029B54  41 82 00 10 */	beq .L_8002CC24
/* 8002CC18 00029B58  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002CC1C 00029B5C  38 82 82 D0 */	addi r4, r2, lbl_80516630@sda21
/* 8002CC20 00029B60  4B FF BE 0D */	bl print__10JUTConsoleFPCc
.L_8002CC24:
/* 8002CC24 00029B64  38 61 02 18 */	addi r3, r1, 0x218
/* 8002CC28 00029B68  4B FF CD 15 */	bl fclose__13JUTDirectFileFv
/* 8002CC2C 00029B6C  56 25 06 3E */	clrlwi r5, r17, 0x18
/* 8002CC30 00029B70  38 61 02 18 */	addi r3, r1, 0x218
/* 8002CC34 00029B74  7C 05 00 D0 */	neg r0, r5
/* 8002CC38 00029B78  38 80 FF FF */	li r4, -1
/* 8002CC3C 00029B7C  7C 00 2B 78 */	or r0, r0, r5
/* 8002CC40 00029B80  54 10 0F FE */	srwi r16, r0, 0x1f
/* 8002CC44 00029B84  4B FF CC 0D */	bl __dt__13JUTDirectFileFv
/* 8002CC48 00029B88  7E 03 83 78 */	mr r3, r16
.L_8002CC4C:
/* 8002CC4C 00029B8C  BA 01 0A 90 */	lmw r16, 0xa90(r1)
/* 8002CC50 00029B90  80 01 0A D4 */	lwz r0, 0xad4(r1)
/* 8002CC54 00029B94  7C 08 03 A6 */	mtlr r0
/* 8002CC58 00029B98  38 21 0A D0 */	addi r1, r1, 0xad0
/* 8002CC5C 00029B9C  4E 80 00 20 */	blr 

.global createConsole__12JUTExceptionFPvUl
createConsole__12JUTExceptionFPvUl:
/* 8002CC60 00029BA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002CC64 00029BA4  7C 08 02 A6 */	mflr r0
/* 8002CC68 00029BA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002CC6C 00029BAC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002CC70 00029BB0  7C 9F 23 78 */	mr r31, r4
/* 8002CC74 00029BB4  93 C1 00 08 */	stw r30, 8(r1)
/* 8002CC78 00029BB8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8002CC7C 00029BBC  41 82 00 AC */	beq .L_8002CD28
/* 8002CC80 00029BC0  28 1F 00 00 */	cmplwi r31, 0
/* 8002CC84 00029BC4  40 82 00 08 */	bne .L_8002CC8C
/* 8002CC88 00029BC8  48 00 00 A0 */	b .L_8002CD28
.L_8002CC8C:
/* 8002CC8C 00029BCC  7F E3 FB 78 */	mr r3, r31
/* 8002CC90 00029BD0  38 80 00 32 */	li r4, 0x32
/* 8002CC94 00029BD4  4B FF B6 E9 */	bl getLineFromObjectSize__10JUTConsoleFUlUi
/* 8002CC98 00029BD8  28 03 00 00 */	cmplwi r3, 0
/* 8002CC9C 00029BDC  41 82 00 8C */	beq .L_8002CD28
/* 8002CCA0 00029BE0  93 CD 88 9C */	stw r30, sConsoleBuffer__12JUTException@sda21(r13)
/* 8002CCA4 00029BE4  7F C4 F3 78 */	mr r4, r30
/* 8002CCA8 00029BE8  7F E5 FB 78 */	mr r5, r31
/* 8002CCAC 00029BEC  38 60 00 32 */	li r3, 0x32
/* 8002CCB0 00029BF0  93 ED 88 A0 */	stw r31, sConsoleBufferSize__12JUTException@sda21(r13)
/* 8002CCB4 00029BF4  4B FF B4 B1 */	bl create__10JUTConsoleFUiPvUl
/* 8002CCB8 00029BF8  7C 64 1B 78 */	mr r4, r3
/* 8002CCBC 00029BFC  80 6D 88 70 */	lwz r3, sManager__17JUTConsoleManager@sda21(r13)
/* 8002CCC0 00029C00  90 8D 88 A4 */	stw r4, sConsole__12JUTException@sda21(r13)
/* 8002CCC4 00029C04  4B FF C4 BD */	bl setDirectConsole__17JUTConsoleManagerFP10JUTConsole
/* 8002CCC8 00029C08  80 AD 88 A4 */	lwz r5, sConsole__12JUTException@sda21(r13)
/* 8002CCCC 00029C0C  38 80 00 0F */	li r4, 0xf
/* 8002CCD0 00029C10  C0 22 82 F0 */	lfs f1, lbl_80516650@sda21(r2)
/* 8002CCD4 00029C14  38 60 00 1A */	li r3, 0x1a
/* 8002CCD8 00029C18  C0 02 82 F4 */	lfs f0, lbl_80516654@sda21(r2)
/* 8002CCDC 00029C1C  38 00 00 17 */	li r0, 0x17
/* 8002CCE0 00029C20  D0 25 00 50 */	stfs f1, 0x50(r5)
/* 8002CCE4 00029C24  D0 05 00 54 */	stfs f0, 0x54(r5)
/* 8002CCE8 00029C28  80 AD 88 A4 */	lwz r5, sConsole__12JUTException@sda21(r13)
/* 8002CCEC 00029C2C  90 85 00 40 */	stw r4, 0x40(r5)
/* 8002CCF0 00029C30  90 65 00 44 */	stw r3, 0x44(r5)
/* 8002CCF4 00029C34  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002CCF8 00029C38  90 03 00 48 */	stw r0, 0x48(r3)
/* 8002CCFC 00029C3C  80 03 00 48 */	lwz r0, 0x48(r3)
/* 8002CD00 00029C40  80 83 00 24 */	lwz r4, 0x24(r3)
/* 8002CD04 00029C44  7C 00 20 40 */	cmplw r0, r4
/* 8002CD08 00029C48  40 81 00 08 */	ble .L_8002CD10
/* 8002CD0C 00029C4C  90 83 00 48 */	stw r4, 0x48(r3)
.L_8002CD10:
/* 8002CD10 00029C50  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002CD14 00029C54  38 80 00 01 */	li r4, 1
/* 8002CD18 00029C58  38 00 00 03 */	li r0, 3
/* 8002CD1C 00029C5C  98 83 00 68 */	stb r4, 0x68(r3)
/* 8002CD20 00029C60  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 8002CD24 00029C64  90 03 00 58 */	stw r0, 0x58(r3)
.L_8002CD28:
/* 8002CD28 00029C68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002CD2C 00029C6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002CD30 00029C70  83 C1 00 08 */	lwz r30, 8(r1)
/* 8002CD34 00029C74  7C 08 03 A6 */	mtlr r0
/* 8002CD38 00029C78  38 21 00 10 */	addi r1, r1, 0x10
/* 8002CD3C 00029C7C  4E 80 00 20 */	blr 

.global __ct__13JUTExternalFBFP16_GXRenderModeObj8_GXGammaPvUl
__ct__13JUTExternalFBFP16_GXRenderModeObj8_GXGammaPvUl:
/* 8002CD40 00029C80  90 83 00 00 */	stw r4, 0(r3)
/* 8002CD44 00029C84  38 80 00 01 */	li r4, 1
/* 8002CD48 00029C88  38 00 00 00 */	li r0, 0
/* 8002CD4C 00029C8C  90 E3 00 04 */	stw r7, 4(r3)
/* 8002CD50 00029C90  B0 83 00 0C */	sth r4, 0xc(r3)
/* 8002CD54 00029C94  B0 A3 00 0E */	sth r5, 0xe(r3)
/* 8002CD58 00029C98  98 03 00 10 */	stb r0, 0x10(r3)
/* 8002CD5C 00029C9C  4E 80 00 20 */	blr 

.global __dt__12JUTExceptionFv
__dt__12JUTExceptionFv: # weak function
/* 8002CD60 00029CA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002CD64 00029CA4  7C 08 02 A6 */	mflr r0
/* 8002CD68 00029CA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002CD6C 00029CAC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002CD70 00029CB0  7C 9F 23 78 */	mr r31, r4
/* 8002CD74 00029CB4  93 C1 00 08 */	stw r30, 8(r1)
/* 8002CD78 00029CB8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8002CD7C 00029CBC  41 82 00 28 */	beq .L_8002CDA4
/* 8002CD80 00029CC0  3C A0 80 4A */	lis r5, __vt__12JUTException@ha
/* 8002CD84 00029CC4  38 80 00 00 */	li r4, 0
/* 8002CD88 00029CC8  38 05 04 2C */	addi r0, r5, __vt__12JUTException@l
/* 8002CD8C 00029CCC  90 1E 00 00 */	stw r0, 0(r30)
/* 8002CD90 00029CD0  4B FF 8A A9 */	bl __dt__9JKRThreadFv
/* 8002CD94 00029CD4  7F E0 07 35 */	extsh. r0, r31
/* 8002CD98 00029CD8  40 81 00 0C */	ble .L_8002CDA4
/* 8002CD9C 00029CDC  7F C3 F3 78 */	mr r3, r30
/* 8002CDA0 00029CE0  4B FF 73 15 */	bl __dl__FPv
.L_8002CDA4:
/* 8002CDA4 00029CE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002CDA8 00029CE8  7F C3 F3 78 */	mr r3, r30
/* 8002CDAC 00029CEC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002CDB0 00029CF0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8002CDB4 00029CF4  7C 08 03 A6 */	mtlr r0
/* 8002CDB8 00029CF8  38 21 00 10 */	addi r1, r1, 0x10
/* 8002CDBC 00029CFC  4E 80 00 20 */	blr 

fn local __sinit_JUTException_cpp
/* 8002CDC0 00029D00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002CDC4 00029D04  7C 08 02 A6 */	mflr r0
/* 8002CDC8 00029D08  3C 60 80 50 */	lis r3, sMapFileList__12JUTException@ha
/* 8002CDCC 00029D0C  38 80 00 00 */	li r4, 0
/* 8002CDD0 00029D10  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002CDD4 00029D14  38 63 6E 74 */	addi r3, r3, sMapFileList__12JUTException@l
/* 8002CDD8 00029D18  4B FF 9A 59 */	bl __ct__10JSUPtrListFb
/* 8002CDDC 00029D1C  3C 60 80 50 */	lis r3, sMapFileList__12JUTException@ha
/* 8002CDE0 00029D20  3C 80 80 03 */	lis r4, "__dt__39JSUList<Q212JUTException12JUTExMapFile>Fv"@ha
/* 8002CDE4 00029D24  3C A0 80 4F */	lis r5, lbl_804F011C@ha
/* 8002CDE8 00029D28  38 63 6E 74 */	addi r3, r3, sMapFileList__12JUTException@l
/* 8002CDEC 00029D2C  38 84 CE 08 */	addi r4, r4, "__dt__39JSUList<Q212JUTException12JUTExMapFile>Fv"@l
/* 8002CDF0 00029D30  38 A5 01 1C */	addi r5, r5, lbl_804F011C@l
/* 8002CDF4 00029D34  48 09 49 0D */	bl __register_global_object
/* 8002CDF8 00029D38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002CDFC 00029D3C  7C 08 03 A6 */	mtlr r0
/* 8002CE00 00029D40  38 21 00 10 */	addi r1, r1, 0x10
/* 8002CE04 00029D44  4E 80 00 20 */	blr 
end __sinit_JUTException_cpp

.global "__dt__39JSUList<Q212JUTException12JUTExMapFile>Fv"
"__dt__39JSUList<Q212JUTException12JUTExMapFile>Fv": # weak function
/* 8002CE08 00029D48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002CE0C 00029D4C  7C 08 02 A6 */	mflr r0
/* 8002CE10 00029D50  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002CE14 00029D54  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002CE18 00029D58  7C 9F 23 78 */	mr r31, r4
/* 8002CE1C 00029D5C  93 C1 00 08 */	stw r30, 8(r1)
/* 8002CE20 00029D60  7C 7E 1B 79 */	or. r30, r3, r3
/* 8002CE24 00029D64  41 82 00 1C */	beq .L_8002CE40
/* 8002CE28 00029D68  38 80 00 00 */	li r4, 0
/* 8002CE2C 00029D6C  4B FF 9A 3D */	bl __dt__10JSUPtrListFv
/* 8002CE30 00029D70  7F E0 07 35 */	extsh. r0, r31
/* 8002CE34 00029D74  40 81 00 0C */	ble .L_8002CE40
/* 8002CE38 00029D78  7F C3 F3 78 */	mr r3, r30
/* 8002CE3C 00029D7C  4B FF 72 79 */	bl __dl__FPv
.L_8002CE40:
/* 8002CE40 00029D80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002CE44 00029D84  7F C3 F3 78 */	mr r3, r30
/* 8002CE48 00029D88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002CE4C 00029D8C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8002CE50 00029D90  7C 08 03 A6 */	mtlr r0
/* 8002CE54 00029D94  38 21 00 10 */	addi r1, r1, 0x10
/* 8002CE58 00029D98  4E 80 00 20 */	blr 
