.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
	.4byte __sinit_system_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_804997C8, local
	.asciz "system.cpp"
.endobj lbl_804997C8
.balign 4
.obj lbl_804997D4, local
	.asciz "Memory Alloc Error!\n%x (size %d) align(%d)\nRestTotal=%d\nRestFree =%d\n"
.endobj lbl_804997D4
.balign 4
.obj lbl_8049981C, local
	.asciz "%s in \"%s\" on line %d\n"
.endobj lbl_8049981C
.balign 4
.obj lbl_80499834, local
	.asciz "%s in \"%s\" on\n line %d\n"
.endobj lbl_80499834
.balign 4
.obj lbl_8049984C, local
	.short 0x0100
	.short 0x0200
	.short 0x0400
	.short 0x0020
	.short 0x0040
	.short 0x0001
	.short 0x0004
	.short 0x0008
	.short 0x0002
	.short 0x0010
	.short 0x0000
.endobj lbl_8049984C
.balign 4
.obj lbl_80499864, local
	.asciz "--- Game debug information ---\n"
.endobj lbl_80499864
.balign 4
.obj lbl_80499884, local # Shift-JIS
	.4byte 0x83528393
	.4byte 0x835C815B
	.4byte 0x838B82AA
	.4byte 0x82A082E8
	.4byte 0x82DC82B9
	.4byte 0x82F10A00
.endobj lbl_80499884
.balign 4
.obj lbl_8049989C, local
	.asciz "aramStrm"
.endobj lbl_8049989C
.balign 4
.obj lbl_804998A8, local
	.asciz "cpuLockCount %d retraceCount %d\n"
.endobj lbl_804998A8
.balign 4
.obj lbl_804998CC, local
	.asciz "system/retrace"
.endobj lbl_804998CC
.balign 4
.obj lbl_804998DC, local
	.asciz "CPU LOCKED!"
.endobj lbl_804998DC
.balign 4
.obj lbl_804998E8, local
	.asciz "/pikmin2UP.map"
.endobj lbl_804998E8
.balign 4
.obj lbl_804998F8, local
	.asciz "construct"
.endobj lbl_804998F8
.balign 4
.obj lbl_80499904, local
	.asciz "DvdThread"
.endobj lbl_80499904
.balign 4
.obj lbl_80499910, local
	.asciz "SysTimers"
.endobj lbl_80499910
.balign 4
.obj lbl_8049991C, local
	.asciz "ResetManager"
.endobj lbl_8049991C
.balign 4
.obj lbl_8049992C, local
	.asciz "ResourceMgr2D"
.endobj lbl_8049992C
.balign 4
.obj lbl_8049993C, local
	.asciz "P2Assert"
.endobj lbl_8049993C
.balign 4
.obj lbl_80499948, local
	.asciz "constructWithDvdAccess1st"
.endobj lbl_80499948
.balign 4
.obj lbl_80499964, local
	.asciz "gameConfig.ini"
.endobj lbl_80499964
.balign 4
.obj lbl_80499974, local
	.asciz "constructWithDvdAccess2nd"
.endobj lbl_80499974
.balign 4
.obj lbl_80499990, local
	.asciz "P2JME::Mgr"
.endobj lbl_80499990
.balign 4
.obj lbl_8049999C, local
	.asciz "SoundSystem"
.endobj lbl_8049999C
.balign 4
.obj lbl_804999A8, local
	.asciz "/AudioRes"
.endobj lbl_804999A8
.balign 4
.obj lbl_804999B4, local
	.asciz "PSound.aaf"
.endobj lbl_804999B4
.balign 4
.obj lbl_804999C0, local
	.asciz "PSGame.h"
.endobj lbl_804999C0
.balign 4
.obj lbl_804999CC, local
	.asciz "unknown renderMode:%d \n"
.endobj lbl_804999CC
.balign 4
.obj lbl_804999E4, local
	.asciz "no display"
.endobj lbl_804999E4

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj localNtsc608x448IntDfProg, local
	.4byte 0x00000002
	.4byte 0x026001C0
	.4byte 0x01C0001B
	.4byte 0x0010029A
	.4byte 0x01C00000
	.4byte 0x00000000
	.4byte 0x00000606
	.4byte 0x06060606
	.4byte 0x06060606
	.4byte 0x06060606
	.4byte 0x06060606
	.4byte 0x06060606
	.4byte 0x06060000
	.4byte 0x15161500
	.4byte 0x00000000
.endobj localNtsc608x448IntDfProg
.obj localNtsc608x448IntDf, local
	.4byte 0x00000000
	.4byte 0x026001C0
	.4byte 0x01C0001B
	.4byte 0x0010029A
	.4byte 0x01C00000
	.4byte 0x00000001
	.4byte 0x00000606
	.4byte 0x06060606
	.4byte 0x06060606
	.4byte 0x06060606
	.4byte 0x06060606
	.4byte 0x06060606
	.4byte 0x06060707
	.4byte 0x0C0C0C07
	.4byte 0x07000000
.endobj localNtsc608x448IntDf
.obj localPal608x448IntDf, local
	.4byte 0x00000004
	.4byte 0x026001C0
	.4byte 0x021A0019
	.4byte 0x0012029E
	.4byte 0x021A0000
	.4byte 0x00000001
	.4byte 0x00000606
	.4byte 0x06060606
	.4byte 0x06060606
	.4byte 0x06060606
	.4byte 0x06060606
	.4byte 0x06060606
	.4byte 0x06060707
	.4byte 0x0C0C0C07
	.4byte 0x07000000
.endobj localPal608x448IntDf
.obj localPal60608x448IntDf, local
	.4byte 0x00000014
	.4byte 0x026001C0
	.4byte 0x01C0001B
	.4byte 0x0010029A
	.4byte 0x01C00000
	.4byte 0x00000001
	.4byte 0x00000606
	.4byte 0x06060606
	.4byte 0x06060606
	.4byte 0x06060606
	.4byte 0x06060606
	.4byte 0x06060606
	.4byte 0x06060707
	.4byte 0x0C0C0C07
	.4byte 0x07000000
.endobj localPal60608x448IntDf
.obj sRenderModeTable, local
	.4byte localNtsc608x448IntDf
	.4byte localNtsc608x448IntDfProg
	.4byte localPal608x448IntDf
	.4byte localPal60608x448IntDf
.endobj sRenderModeTable
.obj lbl_804EBB40, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte constructWithDvdAccessFirst__6SystemFv
.endobj lbl_804EBB40
.obj lbl_804EBB4C, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte constructWithDvdAccessSecond__6SystemFv
.endobj lbl_804EBB4C
.obj __vt__9AppThread, weak
	.4byte 0
	.4byte 0
	.4byte __dt__9AppThreadFv
	.4byte run__9JKRThreadFv
.endobj __vt__9AppThread
.obj "__vt__17Delegate<6System>", weak
	.4byte 0
	.4byte 0
	.4byte "invoke__17Delegate<6System>Fv"
.endobj "__vt__17Delegate<6System>"
.obj __vt__Q23PSM7Factory, weak
	.4byte 0
	.4byte 0
	.4byte newSceneMgr__Q23PSM7FactoryFv
.endobj __vt__Q23PSM7Factory

.section .bss  # 0x804EFC20 - 0x8051467C
.balign 8
.lcomm exCallbackObject, 0x14, 4

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.obj sUseABXCommand, local
	.byte 0x01
.endobj sUseABXCommand
.balign 4
.obj cMapFileName, local
	.4byte lbl_804998E8
.endobj cMapFileName

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj mRenderMode__6System, global
	.skip 0x4
.endobj mRenderMode__6System
.obj sys, global
	.skip 0x4
.endobj sys
.obj sVerifyArg__6System, global
	.skip 0x8
.endobj sVerifyArg__6System

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj sStrSystem_Abort, local
	.asciz "abort\n"
.endobj sStrSystem_Abort
.balign 4
.obj lbl_80520408, local
	.float 0.016666668
.endobj lbl_80520408
.obj lbl_8052040C, local
	.float 1.0
.endobj lbl_8052040C
.obj lbl_80520410, local
	.float 0.5
.endobj lbl_80520410
.balign 4
.obj lbl_80520414, local
	.asciz "ARAMMgr"
.endobj lbl_80520414
.balign 8
.obj lbl_80520420, local
	.8byte 0x4330000000000000
.endobj lbl_80520420
.balign 4
.obj lbl_80520428, local
	.asciz "sound"
.endobj lbl_80520428
.balign 4
.obj lbl_80520430, local
	.float 60.0
.endobj lbl_80520430
.balign 8
.obj lbl_80520438, local
	.8byte 0x4330000080000000
.endobj lbl_80520438

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn Pikmin2DefaultMemoryErrorRoutine__FPvUli, local
/* 80421EC4 0041EE04  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80421EC8 0041EE08  7C 08 02 A6 */	mflr r0
/* 80421ECC 0041EE0C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80421ED0 0041EE10  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80421ED4 0041EE14  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80421ED8 0041EE18  7C BE 2B 78 */	mr r30, r5
/* 80421EDC 0041EE1C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80421EE0 0041EE20  7C 9D 23 78 */	mr r29, r4
/* 80421EE4 0041EE24  93 81 00 10 */	stw r28, 0x10(r1)
/* 80421EE8 0041EE28  7C 7C 1B 78 */	mr r28, r3
/* 80421EEC 0041EE2C  4B C0 18 C9 */	bl getFreeSize__7JKRHeapFv
/* 80421EF0 0041EE30  7C 7F 1B 78 */	mr r31, r3
/* 80421EF4 0041EE34  7F 83 E3 78 */	mr r3, r28
/* 80421EF8 0041EE38  4B C0 18 E9 */	bl getTotalFreeSize__7JKRHeapFv
/* 80421EFC 0041EE3C  3C A0 80 4A */	lis r5, lbl_804997C8@ha
/* 80421F00 0041EE40  3C 80 80 4A */	lis r4, lbl_804997D4@ha
/* 80421F04 0041EE44  7C 69 1B 78 */	mr r9, r3
/* 80421F08 0041EE48  7F 86 E3 78 */	mr r6, r28
/* 80421F0C 0041EE4C  38 65 97 C8 */	addi r3, r5, lbl_804997C8@l
/* 80421F10 0041EE50  38 A4 97 D4 */	addi r5, r4, lbl_804997D4@l
/* 80421F14 0041EE54  7F A7 EB 78 */	mr r7, r29
/* 80421F18 0041EE58  7F C8 F3 78 */	mr r8, r30
/* 80421F1C 0041EE5C  7F EA FB 78 */	mr r10, r31
/* 80421F20 0041EE60  38 80 00 63 */	li r4, 0x63
/* 80421F24 0041EE64  4C C6 31 82 */	crclr 6
/* 80421F28 0041EE68  4B C0 87 19 */	bl panic_f__12JUTExceptionFPCciPCce
/* 80421F2C 0041EE6C  3C 60 80 4A */	lis r3, lbl_804997C8@ha
/* 80421F30 0041EE70  38 80 00 65 */	li r4, 0x65
/* 80421F34 0041EE74  38 63 97 C8 */	addi r3, r3, lbl_804997C8@l
/* 80421F38 0041EE78  38 A2 20 A0 */	addi r5, r2, sStrSystem_Abort@sda21
/* 80421F3C 0041EE7C  4C C6 31 82 */	crclr 6
/* 80421F40 0041EE80  4B CC B8 2D */	bl OSPanic
/* 80421F44 0041EE84  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80421F48 0041EE88  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80421F4C 0041EE8C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80421F50 0041EE90  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80421F54 0041EE94  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80421F58 0041EE98  7C 08 03 A6 */	mtlr r0
/* 80421F5C 0041EE9C  38 21 00 20 */	addi r1, r1, 0x20
/* 80421F60 0041EEA0  4E 80 00 20 */	blr 
.endfn Pikmin2DefaultMemoryErrorRoutine__FPvUli

.fn kando_panic_f__FbPCciPCce, local
/* 80421F64 0041EEA4  94 21 FB A0 */	stwu r1, -0x460(r1)
/* 80421F68 0041EEA8  7C 08 02 A6 */	mflr r0
/* 80421F6C 0041EEAC  90 01 04 64 */	stw r0, 0x464(r1)
/* 80421F70 0041EEB0  BF 41 04 48 */	stmw r26, 0x448(r1)
/* 80421F74 0041EEB4  7C 9D 23 78 */	mr r29, r4
/* 80421F78 0041EEB8  7C BE 2B 78 */	mr r30, r5
/* 80421F7C 0041EEBC  40 86 00 24 */	bne cr1, .L_80421FA0
/* 80421F80 0041EEC0  D8 21 00 28 */	stfd f1, 0x28(r1)
/* 80421F84 0041EEC4  D8 41 00 30 */	stfd f2, 0x30(r1)
/* 80421F88 0041EEC8  D8 61 00 38 */	stfd f3, 0x38(r1)
/* 80421F8C 0041EECC  D8 81 00 40 */	stfd f4, 0x40(r1)
/* 80421F90 0041EED0  D8 A1 00 48 */	stfd f5, 0x48(r1)
/* 80421F94 0041EED4  D8 C1 00 50 */	stfd f6, 0x50(r1)
/* 80421F98 0041EED8  D8 E1 00 58 */	stfd f7, 0x58(r1)
/* 80421F9C 0041EEDC  D9 01 00 60 */	stfd f8, 0x60(r1)
.L_80421FA0:
/* 80421FA0 0041EEE0  39 61 04 68 */	addi r11, r1, 0x468
/* 80421FA4 0041EEE4  38 01 00 08 */	addi r0, r1, 8
/* 80421FA8 0041EEE8  3D 80 04 00 */	lis r12, 0x400
/* 80421FAC 0041EEEC  90 61 00 08 */	stw r3, 8(r1)
/* 80421FB0 0041EEF0  3C 60 80 42 */	lis r3, preUserCallback__FUsP9OSContextUlUl@ha
/* 80421FB4 0041EEF4  83 ED 88 A4 */	lwz r31, sConsole__12JUTException@sda21(r13)
/* 80421FB8 0041EEF8  90 81 00 0C */	stw r4, 0xc(r1)
/* 80421FBC 0041EEFC  3B 83 20 EC */	addi r28, r3, preUserCallback__FUsP9OSContextUlUl@l
/* 80421FC0 0041EF00  3B 61 00 68 */	addi r27, r1, 0x68
/* 80421FC4 0041EF04  83 4D 88 90 */	lwz r26, sErrorManager__12JUTException@sda21(r13)
/* 80421FC8 0041EF08  90 A1 00 10 */	stw r5, 0x10(r1)
/* 80421FCC 0041EF0C  38 61 00 74 */	addi r3, r1, 0x74
/* 80421FD0 0041EF10  7C C5 33 78 */	mr r5, r6
/* 80421FD4 0041EF14  38 80 00 FF */	li r4, 0xff
/* 80421FD8 0041EF18  90 C1 00 14 */	stw r6, 0x14(r1)
/* 80421FDC 0041EF1C  7F 66 DB 78 */	mr r6, r27
/* 80421FE0 0041EF20  90 E1 00 18 */	stw r7, 0x18(r1)
/* 80421FE4 0041EF24  91 01 00 1C */	stw r8, 0x1c(r1)
/* 80421FE8 0041EF28  91 21 00 20 */	stw r9, 0x20(r1)
/* 80421FEC 0041EF2C  91 41 00 24 */	stw r10, 0x24(r1)
/* 80421FF0 0041EF30  91 81 00 68 */	stw r12, 0x68(r1)
/* 80421FF4 0041EF34  91 61 00 6C */	stw r11, 0x6c(r1)
/* 80421FF8 0041EF38  90 01 00 70 */	stw r0, 0x70(r1)
/* 80421FFC 0041EF3C  4B CA 56 69 */	bl vsnprintf
/* 80422000 0041EF40  28 1A 00 00 */	cmplwi r26, 0
/* 80422004 0041EF44  40 82 00 18 */	bne .L_8042201C
/* 80422008 0041EF48  7F A3 EB 78 */	mr r3, r29
/* 8042200C 0041EF4C  7F C4 F3 78 */	mr r4, r30
/* 80422010 0041EF50  38 A1 00 74 */	addi r5, r1, 0x74
/* 80422014 0041EF54  4C C6 31 82 */	crclr 6
/* 80422018 0041EF58  4B CC B7 55 */	bl OSPanic
.L_8042201C:
/* 8042201C 0041EF5C  80 8D 89 D0 */	lwz r4, mainThread__9JFWSystem@sda21(r13)
/* 80422020 0041EF60  38 61 01 78 */	addi r3, r1, 0x178
/* 80422024 0041EF64  38 A0 02 C8 */	li r5, 0x2c8
/* 80422028 0041EF68  83 64 00 2C */	lwz r27, 0x2c(r4)
/* 8042202C 0041EF6C  7F 64 DB 78 */	mr r4, r27
/* 80422030 0041EF70  4B BE 31 6D */	bl memcpy
/* 80422034 0041EF74  80 01 01 7C */	lwz r0, 0x17c(r1)
/* 80422038 0041EF78  3C 80 80 4F */	lis r4, exCallbackObject@ha
/* 8042203C 0041EF7C  28 1F 00 00 */	cmplwi r31, 0
/* 80422040 0041EF80  38 60 00 FF */	li r3, 0xff
/* 80422044 0041EF84  90 1A 00 A0 */	stw r0, 0xa0(r26)
/* 80422048 0041EF88  38 00 00 00 */	li r0, 0
/* 8042204C 0041EF8C  97 84 7C 20 */	stwu r28, exCallbackObject@l(r4)
/* 80422050 0041EF90  B0 64 00 04 */	sth r3, 4(r4)
/* 80422054 0041EF94  93 64 00 08 */	stw r27, 8(r4)
/* 80422058 0041EF98  90 04 00 0C */	stw r0, 0xc(r4)
/* 8042205C 0041EF9C  90 04 00 10 */	stw r0, 0x10(r4)
/* 80422060 0041EFA0  41 82 00 14 */	beq .L_80422074
/* 80422064 0041EFA4  41 82 00 2C */	beq .L_80422090
/* 80422068 0041EFA8  80 1F 00 58 */	lwz r0, 0x58(r31)
/* 8042206C 0041EFAC  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 80422070 0041EFB0  40 82 00 20 */	bne .L_80422090
.L_80422074:
/* 80422074 0041EFB4  3C 60 80 4A */	lis r3, lbl_8049981C@ha
/* 80422078 0041EFB8  7F A5 EB 78 */	mr r5, r29
/* 8042207C 0041EFBC  38 63 98 1C */	addi r3, r3, lbl_8049981C@l
/* 80422080 0041EFC0  7F C6 F3 78 */	mr r6, r30
/* 80422084 0041EFC4  38 81 00 74 */	addi r4, r1, 0x74
/* 80422088 0041EFC8  4C C6 31 82 */	crclr 6
/* 8042208C 0041EFCC  4B CC B6 61 */	bl OSReport
.L_80422090:
/* 80422090 0041EFD0  28 1F 00 00 */	cmplwi r31, 0
/* 80422094 0041EFD4  41 82 00 24 */	beq .L_804220B8
/* 80422098 0041EFD8  3C 80 80 4A */	lis r4, lbl_80499834@ha
/* 8042209C 0041EFDC  7F E3 FB 78 */	mr r3, r31
/* 804220A0 0041EFE0  38 84 98 34 */	addi r4, r4, lbl_80499834@l
/* 804220A4 0041EFE4  7F A6 EB 78 */	mr r6, r29
/* 804220A8 0041EFE8  7F C7 F3 78 */	mr r7, r30
/* 804220AC 0041EFEC  38 A1 00 74 */	addi r5, r1, 0x74
/* 804220B0 0041EFF0  4C C6 31 82 */	crclr 6
/* 804220B4 0041EFF4  4B C0 68 ED */	bl print_f__10JUTConsoleFPCce
.L_804220B8:
/* 804220B8 0041EFF8  3C 60 80 4A */	lis r3, sMessageQueue__12JUTException@ha
/* 804220BC 0041EFFC  3C 80 80 4F */	lis r4, exCallbackObject@ha
/* 804220C0 0041F000  38 63 03 A8 */	addi r3, r3, sMessageQueue__12JUTException@l
/* 804220C4 0041F004  38 A0 00 01 */	li r5, 1
/* 804220C8 0041F008  38 84 7C 20 */	addi r4, r4, exCallbackObject@l
/* 804220CC 0041F00C  4B CC D4 51 */	bl OSSendMessage
/* 804220D0 0041F010  4B CC F8 F5 */	bl OSGetCurrentThread
/* 804220D4 0041F014  4B CD 06 A9 */	bl OSSuspendThread
/* 804220D8 0041F018  BB 41 04 48 */	lmw r26, 0x448(r1)
/* 804220DC 0041F01C  80 01 04 64 */	lwz r0, 0x464(r1)
/* 804220E0 0041F020  7C 08 03 A6 */	mtlr r0
/* 804220E4 0041F024  38 21 04 60 */	addi r1, r1, 0x460
/* 804220E8 0041F028  4E 80 00 20 */	blr 
.endfn kando_panic_f__FbPCciPCce

.fn preUserCallback__FUsP9OSContextUlUl, local
/* 804220EC 0041F02C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 804220F0 0041F030  7C 08 02 A6 */	mflr r0
/* 804220F4 0041F034  3C 80 80 4A */	lis r4, lbl_804997C8@ha
/* 804220F8 0041F038  90 01 00 44 */	stw r0, 0x44(r1)
/* 804220FC 0041F03C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80422100 0041F040  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80422104 0041F044  3B C4 97 C8 */	addi r30, r4, lbl_804997C8@l
/* 80422108 0041F048  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8042210C 0041F04C  93 81 00 30 */	stw r28, 0x30(r1)
/* 80422110 0041F050  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80422114 0041F054  48 00 02 19 */	bl disableCPULockDetector__6SystemFv
/* 80422118 0041F058  80 FE 00 84 */	lwz r7, 0x84(r30)
/* 8042211C 0041F05C  3B E1 00 0C */	addi r31, r1, 0xc
/* 80422120 0041F060  80 DE 00 88 */	lwz r6, 0x88(r30)
/* 80422124 0041F064  3B 80 00 00 */	li r28, 0
/* 80422128 0041F068  80 BE 00 8C */	lwz r5, 0x8c(r30)
/* 8042212C 0041F06C  80 9E 00 90 */	lwz r4, 0x90(r30)
/* 80422130 0041F070  80 7E 00 94 */	lwz r3, 0x94(r30)
/* 80422134 0041F074  A0 1E 00 98 */	lhz r0, 0x98(r30)
/* 80422138 0041F078  90 E1 00 0C */	stw r7, 0xc(r1)
/* 8042213C 0041F07C  90 C1 00 10 */	stw r6, 0x10(r1)
/* 80422140 0041F080  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80422144 0041F084  90 81 00 18 */	stw r4, 0x18(r1)
/* 80422148 0041F088  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8042214C 0041F08C  B0 01 00 20 */	sth r0, 0x20(r1)
/* 80422150 0041F090  48 00 00 40 */	b .L_80422190
.L_80422154:
/* 80422154 0041F094  38 60 00 64 */	li r3, 0x64
/* 80422158 0041F098  4B C0 A4 CD */	bl waitTime__12JUTExceptionFl
/* 8042215C 0041F09C  80 6D 88 90 */	lwz r3, sErrorManager__12JUTException@sda21(r13)
/* 80422160 0041F0A0  38 81 00 08 */	addi r4, r1, 8
/* 80422164 0041F0A4  38 A0 00 00 */	li r5, 0
/* 80422168 0041F0A8  4B C0 9A 69 */	bl readPad__12JUTExceptionFPUlPUl
/* 8042216C 0041F0AC  80 01 00 08 */	lwz r0, 8(r1)
/* 80422170 0041F0B0  28 00 00 00 */	cmplwi r0, 0
/* 80422174 0041F0B4  41 82 00 1C */	beq .L_80422190
/* 80422178 0041F0B8  7C 7D 00 50 */	subf r3, r29, r0
/* 8042217C 0041F0BC  7C 00 E8 50 */	subf r0, r0, r29
/* 80422180 0041F0C0  7C 63 00 F8 */	nor r3, r3, r0
/* 80422184 0041F0C4  38 1C 00 01 */	addi r0, r28, 1
/* 80422188 0041F0C8  7C 63 FE 70 */	srawi r3, r3, 0x1f
/* 8042218C 0041F0CC  7C 1C 18 38 */	and r28, r0, r3
.L_80422190:
/* 80422190 0041F0D0  57 80 08 3C */	slwi r0, r28, 1
/* 80422194 0041F0D4  7F BF 02 2E */	lhzx r29, r31, r0
/* 80422198 0041F0D8  28 1D 00 00 */	cmplwi r29, 0
/* 8042219C 0041F0DC  40 82 FF B8 */	bne .L_80422154
/* 804221A0 0041F0E0  80 6D 88 A4 */	lwz r3, sConsole__12JUTException@sda21(r13)
/* 804221A4 0041F0E4  38 00 00 01 */	li r0, 1
/* 804221A8 0041F0E8  98 0D 86 70 */	stb r0, sUseABXCommand@sda21(r13)
/* 804221AC 0041F0EC  28 03 00 00 */	cmplwi r3, 0
/* 804221B0 0041F0F0  41 82 00 28 */	beq .L_804221D8
/* 804221B4 0041F0F4  98 03 00 68 */	stb r0, 0x68(r3)
/* 804221B8 0041F0F8  38 00 00 03 */	li r0, 3
/* 804221BC 0041F0FC  38 9E 00 9C */	addi r4, r30, 0x9c
/* 804221C0 0041F100  90 03 00 58 */	stw r0, 0x58(r3)
/* 804221C4 0041F104  4B C0 68 69 */	bl print__10JUTConsoleFPCc
/* 804221C8 0041F108  80 6D 88 70 */	lwz r3, sManager__17JUTConsoleManager@sda21(r13)
/* 804221CC 0041F10C  38 80 00 01 */	li r4, 1
/* 804221D0 0041F110  4B C0 6F 35 */	bl drawDirect__17JUTConsoleManagerCFb
/* 804221D4 0041F114  48 00 00 10 */	b .L_804221E4
.L_804221D8:
/* 804221D8 0041F118  38 7E 00 BC */	addi r3, r30, 0xbc
/* 804221DC 0041F11C  4C C6 31 82 */	crclr 6
/* 804221E0 0041F120  4B CC B5 0D */	bl OSReport
.L_804221E4:
/* 804221E4 0041F124  80 01 00 44 */	lwz r0, 0x44(r1)
/* 804221E8 0041F128  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 804221EC 0041F12C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 804221F0 0041F130  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 804221F4 0041F134  83 81 00 30 */	lwz r28, 0x30(r1)
/* 804221F8 0041F138  7C 08 03 A6 */	mtlr r0
/* 804221FC 0041F13C  38 21 00 40 */	addi r1, r1, 0x40
/* 80422200 0041F140  4E 80 00 20 */	blr 
.endfn preUserCallback__FUsP9OSContextUlUl

.fn myTask__FPv, global
/* 80422204 0041F144  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80422208 0041F148  7C 08 02 A6 */	mflr r0
/* 8042220C 0041F14C  7C 64 1B 78 */	mr r4, r3
/* 80422210 0041F150  90 01 00 14 */	stw r0, 0x14(r1)
/* 80422214 0041F154  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 80422218 0041F158  80 65 00 5C */	lwz r3, 0x5c(r5)
/* 8042221C 0041F15C  48 01 EE A5 */	bl cardProc__13MemoryCardMgrFPv
/* 80422220 0041F160  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80422224 0041F164  7C 08 03 A6 */	mtlr r0
/* 80422228 0041F168  38 21 00 10 */	addi r1, r1, 0x10
/* 8042222C 0041F16C  4E 80 00 20 */	blr 
.endfn myTask__FPv

.fn __ct__Q26System20FragmentationCheckerFPcb, global
/* 80422230 0041F170  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80422234 0041F174  7C 08 02 A6 */	mflr r0
/* 80422238 0041F178  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042223C 0041F17C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80422240 0041F180  93 C1 00 08 */	stw r30, 8(r1)
/* 80422244 0041F184  7C 7E 1B 78 */	mr r30, r3
/* 80422248 0041F188  90 83 00 04 */	stw r4, 4(r3)
/* 8042224C 0041F18C  80 6D 88 2C */	lwz r3, sCurrentHeap__7JKRHeap@sda21(r13)
/* 80422250 0041F190  4B C0 15 65 */	bl getFreeSize__7JKRHeapFv
/* 80422254 0041F194  7C 7F 1B 78 */	mr r31, r3
/* 80422258 0041F198  80 6D 88 2C */	lwz r3, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8042225C 0041F19C  4B C0 15 85 */	bl getTotalFreeSize__7JKRHeapFv
/* 80422260 0041F1A0  7C 1F 18 50 */	subf r0, r31, r3
/* 80422264 0041F1A4  7F C3 F3 78 */	mr r3, r30
/* 80422268 0041F1A8  90 1E 00 00 */	stw r0, 0(r30)
/* 8042226C 0041F1AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80422270 0041F1B0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80422274 0041F1B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80422278 0041F1B8  7C 08 03 A6 */	mtlr r0
/* 8042227C 0041F1BC  38 21 00 10 */	addi r1, r1, 0x10
/* 80422280 0041F1C0  4E 80 00 20 */	blr 
.endfn __ct__Q26System20FragmentationCheckerFPcb

.fn __dt__Q26System20FragmentationCheckerFv, global
/* 80422284 0041F1C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80422288 0041F1C8  7C 08 02 A6 */	mflr r0
/* 8042228C 0041F1CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80422290 0041F1D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80422294 0041F1D4  7C 9F 23 78 */	mr r31, r4
/* 80422298 0041F1D8  93 C1 00 08 */	stw r30, 8(r1)
/* 8042229C 0041F1DC  7C 7E 1B 79 */	or. r30, r3, r3
/* 804222A0 0041F1E0  41 82 00 24 */	beq .L_804222C4
/* 804222A4 0041F1E4  80 6D 88 2C */	lwz r3, sCurrentHeap__7JKRHeap@sda21(r13)
/* 804222A8 0041F1E8  4B C0 15 0D */	bl getFreeSize__7JKRHeapFv
/* 804222AC 0041F1EC  80 6D 88 2C */	lwz r3, sCurrentHeap__7JKRHeap@sda21(r13)
/* 804222B0 0041F1F0  4B C0 15 31 */	bl getTotalFreeSize__7JKRHeapFv
/* 804222B4 0041F1F4  7F E0 07 35 */	extsh. r0, r31
/* 804222B8 0041F1F8  40 81 00 0C */	ble .L_804222C4
/* 804222BC 0041F1FC  7F C3 F3 78 */	mr r3, r30
/* 804222C0 0041F200  4B C0 1D F5 */	bl __dl__FPv
.L_804222C4:
/* 804222C4 0041F204  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804222C8 0041F208  7F C3 F3 78 */	mr r3, r30
/* 804222CC 0041F20C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804222D0 0041F210  83 C1 00 08 */	lwz r30, 8(r1)
/* 804222D4 0041F214  7C 08 03 A6 */	mtlr r0
/* 804222D8 0041F218  38 21 00 10 */	addi r1, r1, 0x10
/* 804222DC 0041F21C  4E 80 00 20 */	blr 
.endfn __dt__Q26System20FragmentationCheckerFv

.fn assert_fragmentation__6SystemFPc, global
/* 804222E0 0041F220  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804222E4 0041F224  7C 08 02 A6 */	mflr r0
/* 804222E8 0041F228  90 01 00 14 */	stw r0, 0x14(r1)
/* 804222EC 0041F22C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804222F0 0041F230  80 6D 88 2C */	lwz r3, sCurrentHeap__7JKRHeap@sda21(r13)
/* 804222F4 0041F234  4B C0 14 C1 */	bl getFreeSize__7JKRHeapFv
/* 804222F8 0041F238  7C 7F 1B 78 */	mr r31, r3
/* 804222FC 0041F23C  80 6D 88 2C */	lwz r3, sCurrentHeap__7JKRHeap@sda21(r13)
/* 80422300 0041F240  4B C0 14 E1 */	bl getTotalFreeSize__7JKRHeapFv
/* 80422304 0041F244  7C 1F 18 40 */	cmplw r31, r3
/* 80422308 0041F248  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042230C 0041F24C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80422310 0041F250  7C 08 03 A6 */	mtlr r0
/* 80422314 0041F254  38 21 00 10 */	addi r1, r1, 0x10
/* 80422318 0041F258  4E 80 00 20 */	blr 
.endfn assert_fragmentation__6SystemFPc

.fn enableCPULockDetector__6SystemFi, global
/* 8042231C 0041F25C  38 00 00 00 */	li r0, 0
/* 80422320 0041F260  90 03 00 1C */	stw r0, 0x1c(r3)
/* 80422324 0041F264  90 83 00 20 */	stw r4, 0x20(r3)
/* 80422328 0041F268  4E 80 00 20 */	blr 
.endfn enableCPULockDetector__6SystemFi

.fn disableCPULockDetector__6SystemFv, global
/* 8042232C 0041F26C  80 83 00 20 */	lwz r4, 0x20(r3)
/* 80422330 0041F270  38 00 00 00 */	li r0, 0
/* 80422334 0041F274  90 03 00 20 */	stw r0, 0x20(r3)
/* 80422338 0041F278  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8042233C 0041F27C  7C 83 23 78 */	mr r3, r4
/* 80422340 0041F280  4E 80 00 20 */	blr 
.endfn disableCPULockDetector__6SystemFv

.fn retraceCallback__FUl, global
/* 80422344 0041F284  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80422348 0041F288  7C 08 02 A6 */	mflr r0
/* 8042234C 0041F28C  3C 60 80 4A */	lis r3, lbl_804997C8@ha
/* 80422350 0041F290  90 01 00 14 */	stw r0, 0x14(r1)
/* 80422354 0041F294  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80422358 0041F298  3B E3 97 C8 */	addi r31, r3, lbl_804997C8@l
/* 8042235C 0041F29C  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 80422360 0041F2A0  80 64 00 1C */	lwz r3, 0x1c(r4)
/* 80422364 0041F2A4  38 03 00 01 */	addi r0, r3, 1
/* 80422368 0041F2A8  90 04 00 1C */	stw r0, 0x1c(r4)
/* 8042236C 0041F2AC  4B CB CA 45 */	bl DVDGetDriveStatus
/* 80422370 0041F2B0  2C 03 00 01 */	cmpwi r3, 1
/* 80422374 0041F2B4  40 82 00 10 */	bne .L_80422384
/* 80422378 0041F2B8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8042237C 0041F2BC  38 00 00 00 */	li r0, 0
/* 80422380 0041F2C0  90 03 00 1C */	stw r0, 0x1c(r3)
.L_80422384:
/* 80422384 0041F2C4  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 80422388 0041F2C8  80 65 00 20 */	lwz r3, 0x20(r5)
/* 8042238C 0041F2CC  2C 03 00 00 */	cmpwi r3, 0
/* 80422390 0041F2D0  40 81 00 44 */	ble .L_804223D4
/* 80422394 0041F2D4  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 80422398 0041F2D8  7C 00 18 00 */	cmpw r0, r3
/* 8042239C 0041F2DC  40 81 00 38 */	ble .L_804223D4
/* 804223A0 0041F2E0  38 00 00 00 */	li r0, 0
/* 804223A4 0041F2E4  38 7F 00 E0 */	addi r3, r31, 0xe0
/* 804223A8 0041F2E8  98 0D 86 70 */	stb r0, sUseABXCommand@sda21(r13)
/* 804223AC 0041F2EC  80 85 00 20 */	lwz r4, 0x20(r5)
/* 804223B0 0041F2F0  80 A5 00 1C */	lwz r5, 0x1c(r5)
/* 804223B4 0041F2F4  4C C6 31 82 */	crclr 6
/* 804223B8 0041F2F8  4B CC B3 35 */	bl OSReport
/* 804223BC 0041F2FC  38 9F 01 04 */	addi r4, r31, 0x104
/* 804223C0 0041F300  38 DF 01 14 */	addi r6, r31, 0x114
/* 804223C4 0041F304  38 60 00 01 */	li r3, 1
/* 804223C8 0041F308  38 A0 00 00 */	li r5, 0
/* 804223CC 0041F30C  4C C6 31 82 */	crclr 6
/* 804223D0 0041F310  4B FF FB 95 */	bl kando_panic_f__FbPCciPCce
.L_804223D4:
/* 804223D4 0041F314  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804223D8 0041F318  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804223DC 0041F31C  7C 08 03 A6 */	mtlr r0
/* 804223E0 0041F320  38 21 00 10 */	addi r1, r1, 0x10
/* 804223E4 0041F324  4E 80 00 20 */	blr 
.endfn retraceCallback__FUl

.fn __ct__6SystemFv, global
/* 804223E8 0041F328  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804223EC 0041F32C  7C 08 02 A6 */	mflr r0
/* 804223F0 0041F330  C0 22 20 A8 */	lfs f1, lbl_80520408@sda21(r2)
/* 804223F4 0041F334  90 01 00 14 */	stw r0, 0x14(r1)
/* 804223F8 0041F338  38 00 00 00 */	li r0, 0
/* 804223FC 0041F33C  C0 02 20 AC */	lfs f0, lbl_8052040C@sda21(r2)
/* 80422400 0041F340  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80422404 0041F344  93 C1 00 08 */	stw r30, 8(r1)
/* 80422408 0041F348  7C 7E 1B 78 */	mr r30, r3
/* 8042240C 0041F34C  90 03 00 38 */	stw r0, 0x38(r3)
/* 80422410 0041F350  38 7E 00 68 */	addi r3, r30, 0x68
/* 80422414 0041F354  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 80422418 0041F358  90 1E 00 48 */	stw r0, 0x48(r30)
/* 8042241C 0041F35C  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 80422420 0041F360  D0 3E 00 54 */	stfs f1, 0x54(r30)
/* 80422424 0041F364  90 1E 00 60 */	stw r0, 0x60(r30)
/* 80422428 0041F368  D0 1E 00 64 */	stfs f0, 0x64(r30)
/* 8042242C 0041F36C  48 00 23 ED */	bl __ct__16DvdThreadCommandFv
/* 80422430 0041F370  38 80 00 00 */	li r4, 0
/* 80422434 0041F374  38 00 00 01 */	li r0, 1
/* 80422438 0041F378  90 9E 00 D4 */	stw r4, 0xd4(r30)
/* 8042243C 0041F37C  7F C3 F3 78 */	mr r3, r30
/* 80422440 0041F380  98 9E 00 D8 */	stb r4, 0xd8(r30)
/* 80422444 0041F384  98 9E 00 D9 */	stb r4, 0xd9(r30)
/* 80422448 0041F388  98 9E 00 DA */	stb r4, 0xda(r30)
/* 8042244C 0041F38C  98 9E 00 DB */	stb r4, 0xdb(r30)
/* 80422450 0041F390  93 CD 9A EC */	stw r30, sys@sda21(r13)
/* 80422454 0041F394  98 0D 86 70 */	stb r0, sUseABXCommand@sda21(r13)
/* 80422458 0041F398  48 00 0F BD */	bl initCurrentHeapMutex__6SystemFv
/* 8042245C 0041F39C  3C 60 00 43 */	lis r3, 0x00428000@ha
/* 80422460 0041F3A0  83 ED 88 2C */	lwz r31, sCurrentHeap__7JKRHeap@sda21(r13)
/* 80422464 0041F3A4  38 63 80 00 */	addi r3, r3, 0x00428000@l
/* 80422468 0041F3A8  38 80 00 00 */	li r4, 0
/* 8042246C 0041F3AC  38 A0 00 01 */	li r5, 1
/* 80422470 0041F3B0  4B BF DA 59 */	bl create__10JKRExpHeapFUlP7JKRHeapb
/* 80422474 0041F3B4  90 7E 00 38 */	stw r3, 0x38(r30)
/* 80422478 0041F3B8  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 8042247C 0041F3BC  4B C0 11 29 */	bl becomeCurrentHeap__7JKRHeapFv
/* 80422480 0041F3C0  38 60 00 54 */	li r3, 0x54
/* 80422484 0041F3C4  4B C0 1A 21 */	bl __nw__FUl
/* 80422488 0041F3C8  7C 60 1B 79 */	or. r0, r3, r3
/* 8042248C 0041F3CC  41 82 00 0C */	beq .L_80422498
/* 80422490 0041F3D0  48 00 8B 35 */	bl __ct__10HeapStatusFv
/* 80422494 0041F3D4  7C 60 1B 78 */	mr r0, r3
.L_80422498:
/* 80422498 0041F3D8  90 1E 00 50 */	stw r0, 0x50(r30)
/* 8042249C 0041F3DC  7F C3 F3 78 */	mr r3, r30
/* 804224A0 0041F3E0  48 00 00 65 */	bl construct__6SystemFv
/* 804224A4 0041F3E4  7F E3 FB 78 */	mr r3, r31
/* 804224A8 0041F3E8  4B C0 10 FD */	bl becomeCurrentHeap__7JKRHeapFv
/* 804224AC 0041F3EC  38 00 00 00 */	li r0, 0
/* 804224B0 0041F3F0  3C 60 80 42 */	lis r3, retraceCallback__FUl@ha
/* 804224B4 0041F3F4  90 1E 00 24 */	stw r0, 0x24(r30)
/* 804224B8 0041F3F8  38 83 23 44 */	addi r4, r3, retraceCallback__FUl@l
/* 804224BC 0041F3FC  80 6D 89 20 */	lwz r3, sManager__8JUTVideo@sda21(r13)
/* 804224C0 0041F400  4B C1 18 2D */	bl setPostRetraceCallback__8JUTVideoFPFUl_v
/* 804224C4 0041F404  38 00 00 00 */	li r0, 0
/* 804224C8 0041F408  98 1E 00 D8 */	stb r0, 0xd8(r30)
/* 804224CC 0041F40C  98 1E 00 D9 */	stb r0, 0xd9(r30)
/* 804224D0 0041F410  98 1E 00 DA */	stb r0, 0xda(r30)
/* 804224D4 0041F414  98 1E 00 DB */	stb r0, 0xdb(r30)
/* 804224D8 0041F418  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 804224DC 0041F41C  4B C0 13 05 */	bl getTotalFreeSize__7JKRHeapFv
/* 804224E0 0041F420  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 804224E4 0041F424  4B C0 12 FD */	bl getTotalFreeSize__7JKRHeapFv
/* 804224E8 0041F428  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804224EC 0041F42C  7F C3 F3 78 */	mr r3, r30
/* 804224F0 0041F430  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804224F4 0041F434  83 C1 00 08 */	lwz r30, 8(r1)
/* 804224F8 0041F438  7C 08 03 A6 */	mtlr r0
/* 804224FC 0041F43C  38 21 00 10 */	addi r1, r1, 0x10
/* 80422500 0041F440  4E 80 00 20 */	blr 
.endfn __ct__6SystemFv

.fn construct__6SystemFv, global
/* 80422504 0041F444  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80422508 0041F448  7C 08 02 A6 */	mflr r0
/* 8042250C 0041F44C  3C 80 80 4A */	lis r4, lbl_804997C8@ha
/* 80422510 0041F450  38 A0 00 00 */	li r5, 0
/* 80422514 0041F454  90 01 00 14 */	stw r0, 0x14(r1)
/* 80422518 0041F458  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042251C 0041F45C  3B E4 97 C8 */	addi r31, r4, lbl_804997C8@l
/* 80422520 0041F460  38 9F 01 30 */	addi r4, r31, 0x130
/* 80422524 0041F464  93 C1 00 08 */	stw r30, 8(r1)
/* 80422528 0041F468  7C 7E 1B 78 */	mr r30, r3
/* 8042252C 0041F46C  48 00 0E 31 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80422530 0041F470  4B CD 06 79 */	bl OSGetTick
/* 80422534 0041F474  4B CA 70 65 */	bl srand
/* 80422538 0041F478  38 00 00 00 */	li r0, 0
/* 8042253C 0041F47C  7F C3 F3 78 */	mr r3, r30
/* 80422540 0041F480  90 1E 00 30 */	stw r0, 0x30(r30)
/* 80422544 0041F484  38 9F 01 3C */	addi r4, r31, 0x13c
/* 80422548 0041F488  38 A0 00 00 */	li r5, 0
/* 8042254C 0041F48C  90 1E 00 34 */	stw r0, 0x34(r30)
/* 80422550 0041F490  48 00 0E 0D */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80422554 0041F494  38 60 00 88 */	li r3, 0x88
/* 80422558 0041F498  4B C0 19 4D */	bl __nw__FUl
/* 8042255C 0041F49C  7C 60 1B 79 */	or. r0, r3, r3
/* 80422560 0041F4A0  41 82 00 1C */	beq .L_8042257C
/* 80422564 0041F4A4  3C 80 00 01 */	lis r4, 0x00008000@ha
/* 80422568 0041F4A8  38 A0 00 10 */	li r5, 0x10
/* 8042256C 0041F4AC  38 84 80 00 */	addi r4, r4, 0x00008000@l
/* 80422570 0041F4B0  38 C0 00 1D */	li r6, 0x1d
/* 80422574 0041F4B4  48 00 23 45 */	bl __ct__9DvdThreadFUlii
/* 80422578 0041F4B8  7C 60 1B 78 */	mr r0, r3
.L_8042257C:
/* 8042257C 0041F4BC  90 1E 00 40 */	stw r0, 0x40(r30)
/* 80422580 0041F4C0  7F C3 F3 78 */	mr r3, r30
/* 80422584 0041F4C4  38 9F 01 3C */	addi r4, r31, 0x13c
/* 80422588 0041F4C8  48 00 0D DD */	bl heapStatusEnd__6SystemFPc
/* 8042258C 0041F4CC  7F C3 F3 78 */	mr r3, r30
/* 80422590 0041F4D0  38 9F 01 48 */	addi r4, r31, 0x148
/* 80422594 0041F4D4  38 A0 00 00 */	li r5, 0
/* 80422598 0041F4D8  48 00 0D C5 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8042259C 0041F4DC  38 60 00 28 */	li r3, 0x28
/* 804225A0 0041F4E0  4B C0 19 05 */	bl __nw__FUl
/* 804225A4 0041F4E4  7C 60 1B 79 */	or. r0, r3, r3
/* 804225A8 0041F4E8  41 82 00 0C */	beq .L_804225B4
/* 804225AC 0041F4EC  48 00 82 51 */	bl __ct__9SysTimersFv
/* 804225B0 0041F4F0  7C 60 1B 78 */	mr r0, r3
.L_804225B4:
/* 804225B4 0041F4F4  90 1E 00 28 */	stw r0, 0x28(r30)
/* 804225B8 0041F4F8  7F C3 F3 78 */	mr r3, r30
/* 804225BC 0041F4FC  38 9F 01 48 */	addi r4, r31, 0x148
/* 804225C0 0041F500  48 00 0D A5 */	bl heapStatusEnd__6SystemFPc
/* 804225C4 0041F504  7F C3 F3 78 */	mr r3, r30
/* 804225C8 0041F508  38 9F 01 54 */	addi r4, r31, 0x154
/* 804225CC 0041F50C  38 A0 00 00 */	li r5, 0
/* 804225D0 0041F510  48 00 0D 8D */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 804225D4 0041F514  38 60 00 14 */	li r3, 0x14
/* 804225D8 0041F518  4B C0 18 CD */	bl __nw__FUl
/* 804225DC 0041F51C  7C 60 1B 79 */	or. r0, r3, r3
/* 804225E0 0041F520  41 82 00 10 */	beq .L_804225F0
/* 804225E4 0041F524  C0 22 20 B0 */	lfs f1, lbl_80520410@sda21(r2)
/* 804225E8 0041F528  48 00 77 C9 */	bl __ct__12ResetManagerFf
/* 804225EC 0041F52C  7C 60 1B 78 */	mr r0, r3
.L_804225F0:
/* 804225F0 0041F530  90 1E 00 44 */	stw r0, 0x44(r30)
/* 804225F4 0041F534  7F C3 F3 78 */	mr r3, r30
/* 804225F8 0041F538  38 9F 01 54 */	addi r4, r31, 0x154
/* 804225FC 0041F53C  48 00 0D 69 */	bl heapStatusEnd__6SystemFPc
/* 80422600 0041F540  38 60 00 E8 */	li r3, 0xe8
/* 80422604 0041F544  4B C0 18 A1 */	bl __nw__FUl
/* 80422608 0041F548  7C 60 1B 79 */	or. r0, r3, r3
/* 8042260C 0041F54C  41 82 00 0C */	beq .L_80422618
/* 80422610 0041F550  48 02 05 11 */	bl __ct__Q34Game10MemoryCard3MgrFv
/* 80422614 0041F554  7C 60 1B 78 */	mr r0, r3
.L_80422618:
/* 80422618 0041F558  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 8042261C 0041F55C  80 7E 00 5C */	lwz r3, 0x5c(r30)
/* 80422620 0041F560  48 01 E4 AD */	bl init__13MemoryCardMgrFv
/* 80422624 0041F564  38 60 00 01 */	li r3, 1
/* 80422628 0041F568  38 80 00 11 */	li r4, 0x11
/* 8042262C 0041F56C  38 A0 40 00 */	li r5, 0x4000
/* 80422630 0041F570  38 C0 00 00 */	li r6, 0
/* 80422634 0041F574  4B C0 36 A5 */	bl create__7JKRTaskFiiUlP7JKRHeap
/* 80422638 0041F578  90 7E 00 58 */	stw r3, 0x58(r30)
/* 8042263C 0041F57C  3C 60 80 42 */	lis r3, myTask__FPv@ha
/* 80422640 0041F580  38 83 22 04 */	addi r4, r3, myTask__FPv@l
/* 80422644 0041F584  38 A0 00 00 */	li r5, 0
/* 80422648 0041F588  80 7E 00 58 */	lwz r3, 0x58(r30)
/* 8042264C 0041F58C  38 C0 00 00 */	li r6, 0
/* 80422650 0041F590  4B C0 39 C9 */	bl request__7JKRTaskFPFPv_vPvPv
/* 80422654 0041F594  7F C3 F3 78 */	mr r3, r30
/* 80422658 0041F598  38 82 20 B4 */	addi r4, r2, lbl_80520414@sda21
/* 8042265C 0041F59C  38 A0 00 00 */	li r5, 0
/* 80422660 0041F5A0  48 00 0C FD */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80422664 0041F5A4  48 01 04 B5 */	bl init__Q24ARAM3MgrFv
/* 80422668 0041F5A8  48 03 35 C9 */	bl init__Q211Pikmin2ARAM3MgrFv
/* 8042266C 0041F5AC  7F C3 F3 78 */	mr r3, r30
/* 80422670 0041F5B0  38 82 20 B4 */	addi r4, r2, lbl_80520414@sda21
/* 80422674 0041F5B4  48 00 0C F1 */	bl heapStatusEnd__6SystemFPc
/* 80422678 0041F5B8  7F C3 F3 78 */	mr r3, r30
/* 8042267C 0041F5BC  38 9F 01 64 */	addi r4, r31, 0x164
/* 80422680 0041F5C0  38 A0 00 00 */	li r5, 0
/* 80422684 0041F5C4  48 00 0C D9 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80422688 0041F5C8  80 6D 88 2C */	lwz r3, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8042268C 0041F5CC  48 01 18 E5 */	bl init__Q28Resource5Mgr2DFP7JKRHeap
/* 80422690 0041F5D0  7F C3 F3 78 */	mr r3, r30
/* 80422694 0041F5D4  38 9F 01 64 */	addi r4, r31, 0x164
/* 80422698 0041F5D8  48 00 0C CD */	bl heapStatusEnd__6SystemFPc
/* 8042269C 0041F5DC  38 60 00 48 */	li r3, 0x48
/* 804226A0 0041F5E0  4B C0 18 05 */	bl __nw__FUl
/* 804226A4 0041F5E4  7C 60 1B 79 */	or. r0, r3, r3
/* 804226A8 0041F5E8  41 82 00 0C */	beq .L_804226B4
/* 804226AC 0041F5EC  48 02 45 BD */	bl __ct__Q34Game14CommonSaveData3MgrFv
/* 804226B0 0041F5F0  7C 60 1B 78 */	mr r0, r3
.L_804226B4:
/* 804226B4 0041F5F4  90 1E 00 60 */	stw r0, 0x60(r30)
/* 804226B8 0041F5F8  38 60 00 0C */	li r3, 0xc
/* 804226BC 0041F5FC  4B C0 17 E9 */	bl __nw__FUl
/* 804226C0 0041F600  7C 60 1B 79 */	or. r0, r3, r3
/* 804226C4 0041F604  41 82 00 0C */	beq .L_804226D0
/* 804226C8 0041F608  48 00 7C 4D */	bl __ct__9DvdStatusFv
/* 804226CC 0041F60C  7C 60 1B 78 */	mr r0, r3
.L_804226D0:
/* 804226D0 0041F610  90 1E 00 48 */	stw r0, 0x48(r30)
/* 804226D4 0041F614  48 02 9F 91 */	bl init__Q212LoadResource3MgrFv
/* 804226D8 0041F618  38 60 00 08 */	li r3, 8
/* 804226DC 0041F61C  4B C0 17 C9 */	bl __nw__FUl
/* 804226E0 0041F620  7C 60 1B 79 */	or. r0, r3, r3
/* 804226E4 0041F624  41 82 00 0C */	beq .L_804226F0
/* 804226E8 0041F628  48 00 1A BD */	bl __ct__8GameFlowFv
/* 804226EC 0041F62C  7C 60 1B 78 */	mr r0, r3
.L_804226F0:
/* 804226F0 0041F630  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 804226F4 0041F634  7F C3 F3 78 */	mr r3, r30
/* 804226F8 0041F638  38 9F 01 30 */	addi r4, r31, 0x130
/* 804226FC 0041F63C  48 00 0C 69 */	bl heapStatusEnd__6SystemFPc
/* 80422700 0041F640  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80422704 0041F644  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80422708 0041F648  83 C1 00 08 */	lwz r30, 8(r1)
/* 8042270C 0041F64C  7C 08 03 A6 */	mtlr r0
/* 80422710 0041F650  38 21 00 10 */	addi r1, r1, 0x10
/* 80422714 0041F654  4E 80 00 20 */	blr 
.endfn construct__6SystemFv

.fn constructWithDvdAccessFirst__6SystemFv, global
/* 80422718 0041F658  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8042271C 0041F65C  7C 08 02 A6 */	mflr r0
/* 80422720 0041F660  3C 80 80 4A */	lis r4, lbl_804997C8@ha
/* 80422724 0041F664  90 01 00 24 */	stw r0, 0x24(r1)
/* 80422728 0041F668  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8042272C 0041F66C  3B E4 97 C8 */	addi r31, r4, lbl_804997C8@l
/* 80422730 0041F670  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80422734 0041F674  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80422738 0041F678  7C 7D 1B 78 */	mr r29, r3
/* 8042273C 0041F67C  80 6D 88 2C */	lwz r3, sCurrentHeap__7JKRHeap@sda21(r13)
/* 80422740 0041F680  81 83 00 00 */	lwz r12, 0(r3)
/* 80422744 0041F684  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80422748 0041F688  7D 89 03 A6 */	mtctr r12
/* 8042274C 0041F68C  4E 80 04 21 */	bctrl 
/* 80422750 0041F690  3C 03 BA A8 */	subis r0, r3, 0x4558
/* 80422754 0041F694  28 00 50 48 */	cmplwi r0, 0x5048
/* 80422758 0041F698  41 82 00 18 */	beq .L_80422770
/* 8042275C 0041F69C  38 7F 00 00 */	addi r3, r31, 0
/* 80422760 0041F6A0  38 BF 01 74 */	addi r5, r31, 0x174
/* 80422764 0041F6A4  38 80 03 F5 */	li r4, 0x3f5
/* 80422768 0041F6A8  4C C6 31 82 */	crclr 6
/* 8042276C 0041F6AC  4B C0 7E D5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80422770:
/* 80422770 0041F6B0  83 CD 88 2C */	lwz r30, sCurrentHeap__7JKRHeap@sda21(r13)
/* 80422774 0041F6B4  80 7D 00 38 */	lwz r3, 0x38(r29)
/* 80422778 0041F6B8  4B C0 0E 2D */	bl becomeCurrentHeap__7JKRHeapFv
/* 8042277C 0041F6BC  7F A3 EB 78 */	mr r3, r29
/* 80422780 0041F6C0  38 9F 01 80 */	addi r4, r31, 0x180
/* 80422784 0041F6C4  38 A0 00 00 */	li r5, 0
/* 80422788 0041F6C8  48 00 0B D5 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8042278C 0041F6CC  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 80422790 0041F6D0  38 9F 01 9C */	addi r4, r31, 0x19c
/* 80422794 0041F6D4  38 63 41 FC */	addi r3, r3, gGameConfig__4Game@l
/* 80422798 0041F6D8  48 00 FF D9 */	bl load__Q24Game10GameConfigFPc
/* 8042279C 0041F6DC  7F A3 EB 78 */	mr r3, r29
/* 804227A0 0041F6E0  48 00 02 25 */	bl createSoundSystem__6SystemFv
/* 804227A4 0041F6E4  7F A3 EB 78 */	mr r3, r29
/* 804227A8 0041F6E8  38 9F 01 80 */	addi r4, r31, 0x180
/* 804227AC 0041F6EC  48 00 0B B9 */	bl heapStatusEnd__6SystemFPc
/* 804227B0 0041F6F0  80 7D 00 38 */	lwz r3, 0x38(r29)
/* 804227B4 0041F6F4  4B C0 10 2D */	bl getTotalFreeSize__7JKRHeapFv
/* 804227B8 0041F6F8  80 7D 00 38 */	lwz r3, 0x38(r29)
/* 804227BC 0041F6FC  4B C0 10 25 */	bl getTotalFreeSize__7JKRHeapFv
/* 804227C0 0041F700  80 7D 00 38 */	lwz r3, 0x38(r29)
/* 804227C4 0041F704  4B C0 0F F1 */	bl getFreeSize__7JKRHeapFv
/* 804227C8 0041F708  80 7D 00 38 */	lwz r3, 0x38(r29)
/* 804227CC 0041F70C  4B C0 0F E9 */	bl getFreeSize__7JKRHeapFv
/* 804227D0 0041F710  7F C3 F3 78 */	mr r3, r30
/* 804227D4 0041F714  4B C0 0D D1 */	bl becomeCurrentHeap__7JKRHeapFv
/* 804227D8 0041F718  7F A3 EB 78 */	mr r3, r29
/* 804227DC 0041F71C  38 80 00 01 */	li r4, 1
/* 804227E0 0041F720  48 00 0B 89 */	bl heapStatusDump__6SystemFb
/* 804227E4 0041F724  80 01 00 24 */	lwz r0, 0x24(r1)
/* 804227E8 0041F728  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 804227EC 0041F72C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 804227F0 0041F730  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 804227F4 0041F734  7C 08 03 A6 */	mtlr r0
/* 804227F8 0041F738  38 21 00 20 */	addi r1, r1, 0x20
/* 804227FC 0041F73C  4E 80 00 20 */	blr 
.endfn constructWithDvdAccessFirst__6SystemFv

.fn constructWithDvdAccessSecond__6SystemFv, global
/* 80422800 0041F740  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80422804 0041F744  7C 08 02 A6 */	mflr r0
/* 80422808 0041F748  3C 80 80 4A */	lis r4, lbl_804997C8@ha
/* 8042280C 0041F74C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80422810 0041F750  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80422814 0041F754  3B E4 97 C8 */	addi r31, r4, lbl_804997C8@l
/* 80422818 0041F758  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8042281C 0041F75C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80422820 0041F760  7C 7D 1B 78 */	mr r29, r3
/* 80422824 0041F764  48 00 03 59 */	bl loadSoundResource__6SystemFv
/* 80422828 0041F768  80 6D 88 2C */	lwz r3, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8042282C 0041F76C  81 83 00 00 */	lwz r12, 0(r3)
/* 80422830 0041F770  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80422834 0041F774  7D 89 03 A6 */	mtctr r12
/* 80422838 0041F778  4E 80 04 21 */	bctrl 
/* 8042283C 0041F77C  3C 03 BA A8 */	subis r0, r3, 0x4558
/* 80422840 0041F780  28 00 50 48 */	cmplwi r0, 0x5048
/* 80422844 0041F784  41 82 00 18 */	beq .L_8042285C
/* 80422848 0041F788  38 7F 00 00 */	addi r3, r31, 0
/* 8042284C 0041F78C  38 BF 01 74 */	addi r5, r31, 0x174
/* 80422850 0041F790  38 80 04 28 */	li r4, 0x428
/* 80422854 0041F794  4C C6 31 82 */	crclr 6
/* 80422858 0041F798  4B C0 7D E9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8042285C:
/* 8042285C 0041F79C  83 CD 88 2C */	lwz r30, sCurrentHeap__7JKRHeap@sda21(r13)
/* 80422860 0041F7A0  80 7D 00 38 */	lwz r3, 0x38(r29)
/* 80422864 0041F7A4  4B C0 0D 41 */	bl becomeCurrentHeap__7JKRHeapFv
/* 80422868 0041F7A8  7F A3 EB 78 */	mr r3, r29
/* 8042286C 0041F7AC  38 9F 01 AC */	addi r4, r31, 0x1ac
/* 80422870 0041F7B0  38 A0 00 00 */	li r5, 0
/* 80422874 0041F7B4  48 00 0A E9 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80422878 0041F7B8  7F A3 EB 78 */	mr r3, r29
/* 8042287C 0041F7BC  38 9F 01 C8 */	addi r4, r31, 0x1c8
/* 80422880 0041F7C0  38 A0 00 00 */	li r5, 0
/* 80422884 0041F7C4  48 00 0A D9 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80422888 0041F7C8  7F C3 F3 78 */	mr r3, r30
/* 8042288C 0041F7CC  48 01 56 21 */	bl create__Q25P2JME3MgrFP10JKRExpHeap
/* 80422890 0041F7D0  7F A3 EB 78 */	mr r3, r29
/* 80422894 0041F7D4  38 9F 01 C8 */	addi r4, r31, 0x1c8
/* 80422898 0041F7D8  48 00 0A CD */	bl heapStatusEnd__6SystemFPc
/* 8042289C 0041F7DC  4B E0 5A 0D */	bl globalInstance__Q34Game10PelletList3MgrFv
/* 804228A0 0041F7E0  38 60 01 0C */	li r3, 0x10c
/* 804228A4 0041F7E4  4B C0 16 01 */	bl __nw__FUl
/* 804228A8 0041F7E8  7C 60 1B 79 */	or. r0, r3, r3
/* 804228AC 0041F7EC  41 82 00 0C */	beq .L_804228B8
/* 804228B0 0041F7F0  4B D8 B3 D1 */	bl __ct__Q24Game6StagesFv
/* 804228B4 0041F7F4  7C 60 1B 78 */	mr r0, r3
.L_804228B8:
/* 804228B8 0041F7F8  90 0D 93 C8 */	stw r0, stageList__4Game@sda21(r13)
/* 804228BC 0041F7FC  4B DC 38 79 */	bl construct__Q24Game8PlayDataFv
/* 804228C0 0041F800  48 00 F3 35 */	bl construct__Q24Game9MovieListFv
/* 804228C4 0041F804  7F A3 EB 78 */	mr r3, r29
/* 804228C8 0041F808  38 9F 01 AC */	addi r4, r31, 0x1ac
/* 804228CC 0041F80C  48 00 0A 99 */	bl heapStatusEnd__6SystemFPc
/* 804228D0 0041F810  80 7D 00 38 */	lwz r3, 0x38(r29)
/* 804228D4 0041F814  4B C0 0F 0D */	bl getTotalFreeSize__7JKRHeapFv
/* 804228D8 0041F818  80 7D 00 38 */	lwz r3, 0x38(r29)
/* 804228DC 0041F81C  4B C0 0F 05 */	bl getTotalFreeSize__7JKRHeapFv
/* 804228E0 0041F820  80 7D 00 38 */	lwz r3, 0x38(r29)
/* 804228E4 0041F824  4B C0 0E D1 */	bl getFreeSize__7JKRHeapFv
/* 804228E8 0041F828  80 7D 00 38 */	lwz r3, 0x38(r29)
/* 804228EC 0041F82C  4B C0 0E C9 */	bl getFreeSize__7JKRHeapFv
/* 804228F0 0041F830  7F C3 F3 78 */	mr r3, r30
/* 804228F4 0041F834  4B C0 0C B1 */	bl becomeCurrentHeap__7JKRHeapFv
/* 804228F8 0041F838  7F A3 EB 78 */	mr r3, r29
/* 804228FC 0041F83C  38 80 00 01 */	li r4, 1
/* 80422900 0041F840  48 00 0A 69 */	bl heapStatusDump__6SystemFb
/* 80422904 0041F844  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80422908 0041F848  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8042290C 0041F84C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80422910 0041F850  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80422914 0041F854  7C 08 03 A6 */	mtlr r0
/* 80422918 0041F858  38 21 00 20 */	addi r1, r1, 0x20
/* 8042291C 0041F85C  4E 80 00 20 */	blr 
.endfn constructWithDvdAccessSecond__6SystemFv

.fn createRomFont__6SystemFP7JKRHeap, global
/* 80422920 0041F860  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80422924 0041F864  7C 08 02 A6 */	mflr r0
/* 80422928 0041F868  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042292C 0041F86C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80422930 0041F870  7C 9F 23 78 */	mr r31, r4
/* 80422934 0041F874  93 C1 00 08 */	stw r30, 8(r1)
/* 80422938 0041F878  7C 7E 1B 78 */	mr r30, r3
/* 8042293C 0041F87C  38 60 00 1C */	li r3, 0x1c
/* 80422940 0041F880  4B C0 15 65 */	bl __nw__FUl
/* 80422944 0041F884  7C 60 1B 79 */	or. r0, r3, r3
/* 80422948 0041F888  41 82 00 10 */	beq .L_80422958
/* 8042294C 0041F88C  7F E4 FB 78 */	mr r4, r31
/* 80422950 0041F890  4B C0 FC FD */	bl __ct__10JUTRomFontFP7JKRHeap
/* 80422954 0041F894  7C 60 1B 78 */	mr r0, r3
.L_80422958:
/* 80422958 0041F898  90 1E 00 DC */	stw r0, 0xdc(r30)
/* 8042295C 0041F89C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80422960 0041F8A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80422964 0041F8A4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80422968 0041F8A8  7C 08 03 A6 */	mtlr r0
/* 8042296C 0041F8AC  38 21 00 10 */	addi r1, r1, 0x10
/* 80422970 0041F8B0  4E 80 00 20 */	blr 
.endfn createRomFont__6SystemFP7JKRHeap

.fn destroyRomFont__6SystemFv, global
/* 80422974 0041F8B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80422978 0041F8B8  7C 08 02 A6 */	mflr r0
/* 8042297C 0041F8BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80422980 0041F8C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80422984 0041F8C4  7C 7F 1B 78 */	mr r31, r3
/* 80422988 0041F8C8  80 63 00 DC */	lwz r3, 0xdc(r3)
/* 8042298C 0041F8CC  28 03 00 00 */	cmplwi r3, 0
/* 80422990 0041F8D0  41 82 00 18 */	beq .L_804229A8
/* 80422994 0041F8D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80422998 0041F8D8  38 80 00 01 */	li r4, 1
/* 8042299C 0041F8DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 804229A0 0041F8E0  7D 89 03 A6 */	mtctr r12
/* 804229A4 0041F8E4  4E 80 04 21 */	bctrl 
.L_804229A8:
/* 804229A8 0041F8E8  38 00 00 00 */	li r0, 0
/* 804229AC 0041F8EC  90 1F 00 DC */	stw r0, 0xdc(r31)
/* 804229B0 0041F8F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804229B4 0041F8F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804229B8 0041F8F8  7C 08 03 A6 */	mtlr r0
/* 804229BC 0041F8FC  38 21 00 10 */	addi r1, r1, 0x10
/* 804229C0 0041F900  4E 80 00 20 */	blr 
.endfn destroyRomFont__6SystemFv

.fn createSoundSystem__6SystemFv, global
/* 804229C4 0041F904  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 804229C8 0041F908  7C 08 02 A6 */	mflr r0
/* 804229CC 0041F90C  3C 80 80 4A */	lis r4, lbl_804997C8@ha
/* 804229D0 0041F910  38 A0 00 00 */	li r5, 0
/* 804229D4 0041F914  90 01 00 24 */	stw r0, 0x24(r1)
/* 804229D8 0041F918  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 804229DC 0041F91C  3B A4 97 C8 */	addi r29, r4, lbl_804997C8@l
/* 804229E0 0041F920  38 9D 01 D4 */	addi r4, r29, 0x1d4
/* 804229E4 0041F924  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804229E8 0041F928  48 00 09 75 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 804229EC 0041F92C  83 ED 88 2C */	lwz r31, sCurrentHeap__7JKRHeap@sda21(r13)
/* 804229F0 0041F930  28 1F 00 00 */	cmplwi r31, 0
/* 804229F4 0041F934  40 82 00 18 */	bne .L_80422A0C
/* 804229F8 0041F938  38 7D 00 00 */	addi r3, r29, 0
/* 804229FC 0041F93C  38 BD 01 74 */	addi r5, r29, 0x174
/* 80422A00 0041F940  38 80 04 86 */	li r4, 0x486
/* 80422A04 0041F944  4C C6 31 82 */	crclr 6
/* 80422A08 0041F948  4B C0 7C 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80422A0C:
/* 80422A0C 0041F94C  80 0D 9B B0 */	lwz r0, gResMgr2D@sda21(r13)
/* 80422A10 0041F950  28 00 00 00 */	cmplwi r0, 0
/* 80422A14 0041F954  40 82 00 18 */	bne .L_80422A2C
/* 80422A18 0041F958  38 7D 00 00 */	addi r3, r29, 0
/* 80422A1C 0041F95C  38 BD 01 74 */	addi r5, r29, 0x174
/* 80422A20 0041F960  38 80 04 89 */	li r4, 0x489
/* 80422A24 0041F964  4C C6 31 82 */	crclr 6
/* 80422A28 0041F968  4B C0 7C 19 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80422A2C:
/* 80422A2C 0041F96C  80 6D 9B B0 */	lwz r3, gResMgr2D@sda21(r13)
/* 80422A30 0041F970  83 63 00 04 */	lwz r27, 4(r3)
/* 80422A34 0041F974  7F 63 DB 78 */	mr r3, r27
/* 80422A38 0041F978  4B C0 0D 7D */	bl getFreeSize__7JKRHeapFv
/* 80422A3C 0041F97C  7F 64 DB 78 */	mr r4, r27
/* 80422A40 0041F980  38 A0 00 01 */	li r5, 1
/* 80422A44 0041F984  4B BF D4 85 */	bl create__10JKRExpHeapFUlP7JKRHeapb
/* 80422A48 0041F988  7C 7C 1B 79 */	or. r28, r3, r3
/* 80422A4C 0041F98C  40 82 00 18 */	bne .L_80422A64
/* 80422A50 0041F990  38 7D 00 00 */	addi r3, r29, 0
/* 80422A54 0041F994  38 BD 01 74 */	addi r5, r29, 0x174
/* 80422A58 0041F998  38 80 04 8D */	li r4, 0x48d
/* 80422A5C 0041F99C  4C C6 31 82 */	crclr 6
/* 80422A60 0041F9A0  4B C0 7B E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80422A64:
/* 80422A64 0041F9A4  7F 83 E3 78 */	mr r3, r28
/* 80422A68 0041F9A8  4B C0 0B 3D */	bl becomeCurrentHeap__7JKRHeapFv
/* 80422A6C 0041F9AC  7F 84 E3 78 */	mr r4, r28
/* 80422A70 0041F9B0  38 7D 01 E0 */	addi r3, r29, 0x1e0
/* 80422A74 0041F9B4  38 A0 00 00 */	li r5, 0
/* 80422A78 0041F9B8  4B BF EF 4D */	bl mount__12JKRFileCacheFPCcP7JKRHeapPCc
/* 80422A7C 0041F9BC  7C 64 1B 78 */	mr r4, r3
/* 80422A80 0041F9C0  38 7D 01 EC */	addi r3, r29, 0x1ec
/* 80422A84 0041F9C4  4B C0 05 95 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 80422A88 0041F9C8  7C 7E 1B 79 */	or. r30, r3, r3
/* 80422A8C 0041F9CC  40 82 00 18 */	bne .L_80422AA4
/* 80422A90 0041F9D0  38 7D 00 00 */	addi r3, r29, 0
/* 80422A94 0041F9D4  38 BD 01 74 */	addi r5, r29, 0x174
/* 80422A98 0041F9D8  38 80 04 95 */	li r4, 0x495
/* 80422A9C 0041F9DC  4C C6 31 82 */	crclr 6
/* 80422AA0 0041F9E0  4B C0 7B A1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80422AA4:
/* 80422AA4 0041F9E4  38 60 00 1C */	li r3, 0x1c
/* 80422AA8 0041F9E8  4B C0 13 FD */	bl __nw__FUl
/* 80422AAC 0041F9EC  7C 7B 1B 79 */	or. r27, r3, r3
/* 80422AB0 0041F9F0  41 82 00 14 */	beq .L_80422AC4
/* 80422AB4 0041F9F4  4B F1 24 25 */	bl __ct__Q26PSGame10SysFactoryFv
/* 80422AB8 0041F9F8  3C 60 80 4F */	lis r3, __vt__Q23PSM7Factory@ha
/* 80422ABC 0041F9FC  38 03 BB 74 */	addi r0, r3, __vt__Q23PSM7Factory@l
/* 80422AC0 0041FA00  90 1B 00 10 */	stw r0, 0x10(r27)
.L_80422AC4:
/* 80422AC4 0041FA04  3C 60 80 47 */	lis r3, makeSeSound__Q23PSM7SeSoundFv@ha
/* 80422AC8 0041FA08  3C 00 00 90 */	lis r0, 0x90
/* 80422ACC 0041FA0C  38 83 0F 0C */	addi r4, r3, makeSeSound__Q23PSM7SeSoundFv@l
/* 80422AD0 0041FA10  7F 63 DB 78 */	mr r3, r27
/* 80422AD4 0041FA14  90 9B 00 0C */	stw r4, 0xc(r27)
/* 80422AD8 0041FA18  93 FB 00 00 */	stw r31, 0(r27)
/* 80422ADC 0041FA1C  90 1B 00 04 */	stw r0, 4(r27)
/* 80422AE0 0041FA20  93 DB 00 08 */	stw r30, 8(r27)
/* 80422AE4 0041FA24  4B F1 24 29 */	bl newSoundSystem__Q26PSGame10SysFactoryFv
/* 80422AE8 0041FA28  7F E3 FB 78 */	mr r3, r31
/* 80422AEC 0041FA2C  4B C0 0C C9 */	bl getFreeSize__7JKRHeapFv
/* 80422AF0 0041FA30  7F E4 FB 78 */	mr r4, r31
/* 80422AF4 0041FA34  38 A0 00 01 */	li r5, 1
/* 80422AF8 0041FA38  4B C0 22 79 */	bl create__12JKRSolidHeapFUlP7JKRHeapb
/* 80422AFC 0041FA3C  7C 7B 1B 78 */	mr r27, r3
/* 80422B00 0041FA40  4B C0 0A A5 */	bl becomeCurrentHeap__7JKRHeapFv
/* 80422B04 0041FA44  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80422B08 0041FA48  28 00 00 00 */	cmplwi r0, 0
/* 80422B0C 0041FA4C  40 82 00 18 */	bne .L_80422B24
/* 80422B10 0041FA50  38 7D 01 F8 */	addi r3, r29, 0x1f8
/* 80422B14 0041FA54  38 BD 01 74 */	addi r5, r29, 0x174
/* 80422B18 0041FA58  38 80 01 D3 */	li r4, 0x1d3
/* 80422B1C 0041FA5C  4C C6 31 82 */	crclr 6
/* 80422B20 0041FA60  4B C0 7B 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80422B24:
/* 80422B24 0041FA64  80 6D 98 80 */	lwz r3, spSceneMgr__8PSSystem@sda21(r13)
/* 80422B28 0041FA68  81 83 00 00 */	lwz r12, 0(r3)
/* 80422B2C 0041FA6C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80422B30 0041FA70  7D 89 03 A6 */	mtctr r12
/* 80422B34 0041FA74  4E 80 04 21 */	bctrl 
/* 80422B38 0041FA78  7F 63 DB 78 */	mr r3, r27
/* 80422B3C 0041FA7C  4B C0 24 0D */	bl adjustSize__12JKRSolidHeapFv
/* 80422B40 0041FA80  7F E3 FB 78 */	mr r3, r31
/* 80422B44 0041FA84  4B C0 0A 61 */	bl becomeCurrentHeap__7JKRHeapFv
/* 80422B48 0041FA88  7F 83 E3 78 */	mr r3, r28
/* 80422B4C 0041FA8C  4B C0 0A 69 */	bl destroy__7JKRHeapFv
/* 80422B50 0041FA90  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80422B54 0041FA94  38 9D 01 D4 */	addi r4, r29, 0x1d4
/* 80422B58 0041FA98  48 00 08 0D */	bl heapStatusEnd__6SystemFPc
/* 80422B5C 0041FA9C  80 6D 9B B0 */	lwz r3, gResMgr2D@sda21(r13)
/* 80422B60 0041FAA0  80 03 00 08 */	lwz r0, 8(r3)
/* 80422B64 0041FAA4  90 03 00 0C */	stw r0, 0xc(r3)
/* 80422B68 0041FAA8  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 80422B6C 0041FAAC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80422B70 0041FAB0  7C 08 03 A6 */	mtlr r0
/* 80422B74 0041FAB4  38 21 00 20 */	addi r1, r1, 0x20
/* 80422B78 0041FAB8  4E 80 00 20 */	blr 
.endfn createSoundSystem__6SystemFv

.fn loadSoundResource__6SystemFv, global
/* 80422B7C 0041FABC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80422B80 0041FAC0  7C 08 02 A6 */	mflr r0
/* 80422B84 0041FAC4  3C 60 80 4A */	lis r3, lbl_804997C8@ha
/* 80422B88 0041FAC8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80422B8C 0041FACC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80422B90 0041FAD0  3B E3 97 C8 */	addi r31, r3, lbl_804997C8@l
/* 80422B94 0041FAD4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80422B98 0041FAD8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80422B9C 0041FADC  93 81 00 10 */	stw r28, 0x10(r1)
/* 80422BA0 0041FAE0  83 8D 88 2C */	lwz r28, sCurrentHeap__7JKRHeap@sda21(r13)
/* 80422BA4 0041FAE4  7F 83 E3 78 */	mr r3, r28
/* 80422BA8 0041FAE8  4B C0 0C 0D */	bl getFreeSize__7JKRHeapFv
/* 80422BAC 0041FAEC  7F 84 E3 78 */	mr r4, r28
/* 80422BB0 0041FAF0  38 A0 00 01 */	li r5, 1
/* 80422BB4 0041FAF4  4B C0 21 BD */	bl create__12JKRSolidHeapFUlP7JKRHeapb
/* 80422BB8 0041FAF8  7C 7E 1B 78 */	mr r30, r3
/* 80422BBC 0041FAFC  4B C0 09 E9 */	bl becomeCurrentHeap__7JKRHeapFv
/* 80422BC0 0041FB00  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80422BC4 0041FB04  28 00 00 00 */	cmplwi r0, 0
/* 80422BC8 0041FB08  40 82 00 18 */	bne .L_80422BE0
/* 80422BCC 0041FB0C  38 7F 01 F8 */	addi r3, r31, 0x1f8
/* 80422BD0 0041FB10  38 BF 01 74 */	addi r5, r31, 0x174
/* 80422BD4 0041FB14  38 80 01 D3 */	li r4, 0x1d3
/* 80422BD8 0041FB18  4C C6 31 82 */	crclr 6
/* 80422BDC 0041FB1C  4B C0 7A 65 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80422BE0:
/* 80422BE0 0041FB20  83 AD 98 80 */	lwz r29, spSceneMgr__8PSSystem@sda21(r13)
/* 80422BE4 0041FB24  28 1D 00 00 */	cmplwi r29, 0
/* 80422BE8 0041FB28  40 82 00 18 */	bne .L_80422C00
/* 80422BEC 0041FB2C  38 7F 01 F8 */	addi r3, r31, 0x1f8
/* 80422BF0 0041FB30  38 BF 01 74 */	addi r5, r31, 0x174
/* 80422BF4 0041FB34  38 80 01 DC */	li r4, 0x1dc
/* 80422BF8 0041FB38  4C C6 31 82 */	crclr 6
/* 80422BFC 0041FB3C  4B C0 7A 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80422C00:
/* 80422C00 0041FB40  83 BD 00 04 */	lwz r29, 4(r29)
/* 80422C04 0041FB44  28 1D 00 00 */	cmplwi r29, 0
/* 80422C08 0041FB48  40 82 00 18 */	bne .L_80422C20
/* 80422C0C 0041FB4C  38 7F 00 00 */	addi r3, r31, 0
/* 80422C10 0041FB50  38 BF 01 74 */	addi r5, r31, 0x174
/* 80422C14 0041FB54  38 80 04 DD */	li r4, 0x4dd
/* 80422C18 0041FB58  4C C6 31 82 */	crclr 6
/* 80422C1C 0041FB5C  4B C0 7A 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80422C20:
/* 80422C20 0041FB60  7F A3 EB 78 */	mr r3, r29
/* 80422C24 0041FB64  81 9D 00 00 */	lwz r12, 0(r29)
/* 80422C28 0041FB68  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80422C2C 0041FB6C  7D 89 03 A6 */	mtctr r12
/* 80422C30 0041FB70  4E 80 04 21 */	bctrl 
/* 80422C34 0041FB74  7F C3 F3 78 */	mr r3, r30
/* 80422C38 0041FB78  4B C0 23 11 */	bl adjustSize__12JKRSolidHeapFv
/* 80422C3C 0041FB7C  7F 83 E3 78 */	mr r3, r28
/* 80422C40 0041FB80  4B C0 09 65 */	bl becomeCurrentHeap__7JKRHeapFv
/* 80422C44 0041FB84  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80422C48 0041FB88  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80422C4C 0041FB8C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80422C50 0041FB90  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80422C54 0041FB94  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80422C58 0041FB98  7C 08 03 A6 */	mtlr r0
/* 80422C5C 0041FB9C  38 21 00 20 */	addi r1, r1, 0x20
/* 80422C60 0041FBA0  4E 80 00 20 */	blr 
.endfn loadSoundResource__6SystemFv

.fn initialize__6SystemFv, global
/* 80422C64 0041FBA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80422C68 0041FBA8  7C 08 02 A6 */	mflr r0
/* 80422C6C 0041FBAC  3C A0 80 70 */	lis r5, 0x80700000@ha
/* 80422C70 0041FBB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80422C74 0041FBB4  80 85 00 00 */	lwz r4, 0x80700000@l(r5)
/* 80422C78 0041FBB8  3C 04 89 9F */	subis r0, r4, 0x7661
/* 80422C7C 0041FBBC  28 00 6C 64 */	cmplwi r0, 0x6c64
/* 80422C80 0041FBC0  40 82 00 10 */	bne .L_80422C90
/* 80422C84 0041FBC4  88 65 00 04 */	lbz r3, 4(r5)
/* 80422C88 0041FBC8  48 00 05 8D */	bl setRenderMode__6SystemFQ26System11ERenderMode
/* 80422C8C 0041FBCC  48 00 00 0C */	b .L_80422C98
.L_80422C90:
/* 80422C90 0041FBD0  38 60 00 00 */	li r3, 0
/* 80422C94 0041FBD4  48 00 05 81 */	bl setRenderMode__6SystemFQ26System11ERenderMode
.L_80422C98:
/* 80422C98 0041FBD8  38 60 00 04 */	li r3, 4
/* 80422C9C 0041FBDC  64 63 00 04 */	oris r3, r3, 4
/* 80422CA0 0041FBE0  7C 72 E3 A6 */	mtspr 0x392, r3
/* 80422CA4 0041FBE4  38 60 00 05 */	li r3, 5
/* 80422CA8 0041FBE8  64 63 00 05 */	oris r3, r3, 5
/* 80422CAC 0041FBEC  7C 73 E3 A6 */	mtspr 0x393, r3
/* 80422CB0 0041FBF0  38 60 00 06 */	li r3, 6
/* 80422CB4 0041FBF4  64 63 00 06 */	oris r3, r3, 6
/* 80422CB8 0041FBF8  7C 74 E3 A6 */	mtspr 0x394, r3
/* 80422CBC 0041FBFC  38 60 00 07 */	li r3, 7
/* 80422CC0 0041FC00  64 63 00 07 */	oris r3, r3, 7
/* 80422CC4 0041FC04  7C 75 E3 A6 */	mtspr 0x395, r3
/* 80422CC8 0041FC08  3C 80 00 07 */	lis r4, 0x00070800@ha
/* 80422CCC 0041FC0C  38 A4 08 00 */	addi r5, r4, 0x00070800@l
/* 80422CD0 0041FC10  38 E0 00 01 */	li r7, 1
/* 80422CD4 0041FC14  3C C0 00 0A */	lis r6, 0xa
/* 80422CD8 0041FC18  3C 80 00 90 */	lis r4, 0x90
/* 80422CDC 0041FC1C  38 00 FF FF */	li r0, -1
/* 80422CE0 0041FC20  90 ED 80 D0 */	stw r7, maxStdHeaps__Q29JFWSystem11CSetUpParam@sda21(r13)
/* 80422CE4 0041FC24  90 CD 80 D4 */	stw r6, sysHeapSize__Q29JFWSystem11CSetUpParam@sda21(r13)
/* 80422CE8 0041FC28  90 AD 80 D8 */	stw r5, fifoBufSize__Q29JFWSystem11CSetUpParam@sda21(r13)
/* 80422CEC 0041FC2C  90 8D 80 DC */	stw r4, aramAudioBufSize__Q29JFWSystem11CSetUpParam@sda21(r13)
/* 80422CF0 0041FC30  90 0D 80 E0 */	stw r0, aramGraphBufSize__Q29JFWSystem11CSetUpParam@sda21(r13)
/* 80422CF4 0041FC34  48 00 05 31 */	bl getRenderModeObj__6SystemFv
/* 80422CF8 0041FC38  90 6D 80 F4 */	stw r3, renderMode__Q29JFWSystem11CSetUpParam@sda21(r13)
/* 80422CFC 0041FC3C  4B C6 6A 61 */	bl init__9JFWSystemFv
/* 80422D00 0041FC40  80 AD 88 90 */	lwz r5, sErrorManager__12JUTException@sda21(r13)
/* 80422D04 0041FC44  38 00 FF FF */	li r0, -1
/* 80422D08 0041FC48  3C 80 80 42 */	lis r4, preUserCallback__FUsP9OSContextUlUl@ha
/* 80422D0C 0041FC4C  90 05 00 84 */	stw r0, 0x84(r5)
/* 80422D10 0041FC50  38 64 20 EC */	addi r3, r4, preUserCallback__FUsP9OSContextUlUl@l
/* 80422D14 0041FC54  90 05 00 88 */	stw r0, 0x88(r5)
/* 80422D18 0041FC58  4B C0 9A 89 */	bl setPreUserCallback__12JUTExceptionFPFUsP9OSContextUlUl_v
/* 80422D1C 0041FC5C  80 AD 88 90 */	lwz r5, sErrorManager__12JUTException@sda21(r13)
/* 80422D20 0041FC60  38 00 00 00 */	li r0, 0
/* 80422D24 0041FC64  3C 80 80 42 */	lis r4, Pikmin2DefaultMemoryErrorRoutine__FPvUli@ha
/* 80422D28 0041FC68  90 05 00 90 */	stw r0, 0x90(r5)
/* 80422D2C 0041FC6C  38 64 1E C4 */	addi r3, r4, Pikmin2DefaultMemoryErrorRoutine__FPvUli@l
/* 80422D30 0041FC70  80 8D 88 90 */	lwz r4, sErrorManager__12JUTException@sda21(r13)
/* 80422D34 0041FC74  90 04 00 8C */	stw r0, 0x8c(r4)
/* 80422D38 0041FC78  4B C0 11 4D */	bl setErrorHandler__7JKRHeapFPFPvUli_v
/* 80422D3C 0041FC7C  80 6D 88 30 */	lwz r3, sRootHeap__7JKRHeap@sda21(r13)
/* 80422D40 0041FC80  4B C0 08 65 */	bl becomeCurrentHeap__7JKRHeapFv
/* 80422D44 0041FC84  80 6D 86 74 */	lwz r3, cMapFileName@sda21(r13)
/* 80422D48 0041FC88  4B C0 9A 69 */	bl appendMapFile__12JUTExceptionFPCc
/* 80422D4C 0041FC8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80422D50 0041FC90  7C 08 03 A6 */	mtlr r0
/* 80422D54 0041FC94  38 21 00 10 */	addi r1, r1, 0x10
/* 80422D58 0041FC98  4E 80 00 20 */	blr 
.endfn initialize__6SystemFv

.fn loadResourceFirst__6SystemFv, global
/* 80422D5C 0041FC9C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80422D60 0041FCA0  7C 08 02 A6 */	mflr r0
/* 80422D64 0041FCA4  38 A0 00 00 */	li r5, 0
/* 80422D68 0041FCA8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80422D6C 0041FCAC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80422D70 0041FCB0  7C 7F 1B 78 */	mr r31, r3
/* 80422D74 0041FCB4  38 60 00 14 */	li r3, 0x14
/* 80422D78 0041FCB8  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 80422D7C 0041FCBC  4B C0 11 C5 */	bl __nw__FUlP7JKRHeapi
/* 80422D80 0041FCC0  7C 65 1B 79 */	or. r5, r3, r3
/* 80422D84 0041FCC4  41 82 00 4C */	beq .L_80422DD0
/* 80422D88 0041FCC8  3C 60 80 4F */	lis r3, lbl_804EBB40@ha
/* 80422D8C 0041FCCC  3C 80 80 4B */	lis r4, __vt__9IDelegate@ha
/* 80422D90 0041FCD0  39 03 BB 40 */	addi r8, r3, lbl_804EBB40@l
/* 80422D94 0041FCD4  3C 60 80 4F */	lis r3, "__vt__17Delegate<6System>"@ha
/* 80422D98 0041FCD8  80 E8 00 00 */	lwz r7, 0(r8)
/* 80422D9C 0041FCDC  38 84 0F 00 */	addi r4, r4, __vt__9IDelegate@l
/* 80422DA0 0041FCE0  80 C8 00 04 */	lwz r6, 4(r8)
/* 80422DA4 0041FCE4  38 03 BB 68 */	addi r0, r3, "__vt__17Delegate<6System>"@l
/* 80422DA8 0041FCE8  80 68 00 08 */	lwz r3, 8(r8)
/* 80422DAC 0041FCEC  90 E1 00 08 */	stw r7, 8(r1)
/* 80422DB0 0041FCF0  90 85 00 00 */	stw r4, 0(r5)
/* 80422DB4 0041FCF4  90 05 00 00 */	stw r0, 0(r5)
/* 80422DB8 0041FCF8  93 E5 00 04 */	stw r31, 4(r5)
/* 80422DBC 0041FCFC  90 E5 00 08 */	stw r7, 8(r5)
/* 80422DC0 0041FD00  90 C5 00 0C */	stw r6, 0xc(r5)
/* 80422DC4 0041FD04  90 C1 00 0C */	stw r6, 0xc(r1)
/* 80422DC8 0041FD08  90 61 00 10 */	stw r3, 0x10(r1)
/* 80422DCC 0041FD0C  90 65 00 10 */	stw r3, 0x10(r5)
.L_80422DD0:
/* 80422DD0 0041FD10  7F E3 FB 78 */	mr r3, r31
/* 80422DD4 0041FD14  38 9F 00 68 */	addi r4, r31, 0x68
/* 80422DD8 0041FD18  48 00 01 61 */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
/* 80422DDC 0041FD1C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80422DE0 0041FD20  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80422DE4 0041FD24  7C 08 03 A6 */	mtlr r0
/* 80422DE8 0041FD28  38 21 00 20 */	addi r1, r1, 0x20
/* 80422DEC 0041FD2C  4E 80 00 20 */	blr 
.endfn loadResourceFirst__6SystemFv

.fn loadResourceSecond__6SystemFv, global
/* 80422DF0 0041FD30  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80422DF4 0041FD34  7C 08 02 A6 */	mflr r0
/* 80422DF8 0041FD38  38 A0 00 00 */	li r5, 0
/* 80422DFC 0041FD3C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80422E00 0041FD40  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80422E04 0041FD44  7C 7F 1B 78 */	mr r31, r3
/* 80422E08 0041FD48  38 60 00 14 */	li r3, 0x14
/* 80422E0C 0041FD4C  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 80422E10 0041FD50  4B C0 11 31 */	bl __nw__FUlP7JKRHeapi
/* 80422E14 0041FD54  7C 65 1B 79 */	or. r5, r3, r3
/* 80422E18 0041FD58  41 82 00 4C */	beq .L_80422E64
/* 80422E1C 0041FD5C  3C 60 80 4F */	lis r3, lbl_804EBB4C@ha
/* 80422E20 0041FD60  3C 80 80 4B */	lis r4, __vt__9IDelegate@ha
/* 80422E24 0041FD64  39 03 BB 4C */	addi r8, r3, lbl_804EBB4C@l
/* 80422E28 0041FD68  3C 60 80 4F */	lis r3, "__vt__17Delegate<6System>"@ha
/* 80422E2C 0041FD6C  80 E8 00 00 */	lwz r7, 0(r8)
/* 80422E30 0041FD70  38 84 0F 00 */	addi r4, r4, __vt__9IDelegate@l
/* 80422E34 0041FD74  80 C8 00 04 */	lwz r6, 4(r8)
/* 80422E38 0041FD78  38 03 BB 68 */	addi r0, r3, "__vt__17Delegate<6System>"@l
/* 80422E3C 0041FD7C  80 68 00 08 */	lwz r3, 8(r8)
/* 80422E40 0041FD80  90 E1 00 08 */	stw r7, 8(r1)
/* 80422E44 0041FD84  90 85 00 00 */	stw r4, 0(r5)
/* 80422E48 0041FD88  90 05 00 00 */	stw r0, 0(r5)
/* 80422E4C 0041FD8C  93 E5 00 04 */	stw r31, 4(r5)
/* 80422E50 0041FD90  90 E5 00 08 */	stw r7, 8(r5)
/* 80422E54 0041FD94  90 C5 00 0C */	stw r6, 0xc(r5)
/* 80422E58 0041FD98  90 C1 00 0C */	stw r6, 0xc(r1)
/* 80422E5C 0041FD9C  90 61 00 10 */	stw r3, 0x10(r1)
/* 80422E60 0041FDA0  90 65 00 10 */	stw r3, 0x10(r5)
.L_80422E64:
/* 80422E64 0041FDA4  7F E3 FB 78 */	mr r3, r31
/* 80422E68 0041FDA8  38 9F 00 68 */	addi r4, r31, 0x68
/* 80422E6C 0041FDAC  48 00 00 CD */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
/* 80422E70 0041FDB0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80422E74 0041FDB4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80422E78 0041FDB8  7C 08 03 A6 */	mtlr r0
/* 80422E7C 0041FDBC  38 21 00 20 */	addi r1, r1, 0x20
/* 80422E80 0041FDC0  4E 80 00 20 */	blr 
.endfn loadResourceSecond__6SystemFv

.fn run__6SystemFv, global
/* 80422E84 0041FDC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80422E88 0041FDC8  7C 08 02 A6 */	mflr r0
/* 80422E8C 0041FDCC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80422E90 0041FDD0  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 80422E94 0041FDD4  81 83 00 00 */	lwz r12, 0(r3)
/* 80422E98 0041FDD8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80422E9C 0041FDDC  7D 89 03 A6 */	mtctr r12
/* 80422EA0 0041FDE0  4E 80 04 21 */	bctrl 
/* 80422EA4 0041FDE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80422EA8 0041FDE8  38 60 00 00 */	li r3, 0
/* 80422EAC 0041FDEC  7C 08 03 A6 */	mtlr r0
/* 80422EB0 0041FDF0  38 21 00 10 */	addi r1, r1, 0x10
/* 80422EB4 0041FDF4  4E 80 00 20 */	blr 
.endfn run__6SystemFv

.fn getTime__6SystemFv, global
/* 80422EB8 0041FDF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80422EBC 0041FDFC  7C 08 02 A6 */	mflr r0
/* 80422EC0 0041FE00  90 01 00 14 */	stw r0, 0x14(r1)
/* 80422EC4 0041FE04  4B CC FC E5 */	bl OSGetTick
/* 80422EC8 0041FE08  3C A0 80 00 */	lis r5, 0x800000F8@ha
/* 80422ECC 0041FE0C  3C 80 10 62 */	lis r4, 0x10624DD3@ha
/* 80422ED0 0041FE10  80 A5 00 F8 */	lwz r5, 0x800000F8@l(r5)
/* 80422ED4 0041FE14  3C 00 43 30 */	lis r0, 0x4330
/* 80422ED8 0041FE18  38 84 4D D3 */	addi r4, r4, 0x10624DD3@l
/* 80422EDC 0041FE1C  90 01 00 08 */	stw r0, 8(r1)
/* 80422EE0 0041FE20  54 A0 F0 BE */	srwi r0, r5, 2
/* 80422EE4 0041FE24  C8 22 20 C0 */	lfd f1, lbl_80520420@sda21(r2)
/* 80422EE8 0041FE28  7C 04 00 16 */	mulhwu r0, r4, r0
/* 80422EEC 0041FE2C  54 00 D1 BE */	srwi r0, r0, 6
/* 80422EF0 0041FE30  7C 03 03 96 */	divwu r0, r3, r0
/* 80422EF4 0041FE34  90 01 00 0C */	stw r0, 0xc(r1)
/* 80422EF8 0041FE38  C8 01 00 08 */	lfd f0, 8(r1)
/* 80422EFC 0041FE3C  EC 20 08 28 */	fsubs f1, f0, f1
/* 80422F00 0041FE40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80422F04 0041FE44  7C 08 03 A6 */	mtlr r0
/* 80422F08 0041FE48  38 21 00 10 */	addi r1, r1, 0x10
/* 80422F0C 0041FE4C  4E 80 00 20 */	blr 
.endfn getTime__6SystemFv

.fn clearOptionBlockSaveFlag__6SystemFv, global
/* 80422F10 0041FE50  80 63 00 60 */	lwz r3, 0x60(r3)
/* 80422F14 0041FE54  38 00 00 00 */	li r0, 0
/* 80422F18 0041FE58  98 03 00 42 */	stb r0, 0x42(r3)
/* 80422F1C 0041FE5C  4E 80 00 20 */	blr 
.endfn clearOptionBlockSaveFlag__6SystemFv

.fn setOptionBlockSaveFlag__6SystemFv, global
/* 80422F20 0041FE60  80 63 00 60 */	lwz r3, 0x60(r3)
/* 80422F24 0041FE64  38 00 00 01 */	li r0, 1
/* 80422F28 0041FE68  98 03 00 42 */	stb r0, 0x42(r3)
/* 80422F2C 0041FE6C  4E 80 00 20 */	blr 
.endfn setOptionBlockSaveFlag__6SystemFv

.fn getPlayCommonData__6SystemFv, global
/* 80422F30 0041FE70  80 63 00 60 */	lwz r3, 0x60(r3)
/* 80422F34 0041FE74  4E 80 00 20 */	blr 
.endfn getPlayCommonData__6SystemFv

.fn dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate, global
/* 80422F38 0041FE78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80422F3C 0041FE7C  7C 08 02 A6 */	mflr r0
/* 80422F40 0041FE80  90 01 00 14 */	stw r0, 0x14(r1)
/* 80422F44 0041FE84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80422F48 0041FE88  7C 9F 23 78 */	mr r31, r4
/* 80422F4C 0041FE8C  93 C1 00 08 */	stw r30, 8(r1)
/* 80422F50 0041FE90  7C 7E 1B 78 */	mr r30, r3
/* 80422F54 0041FE94  80 03 00 40 */	lwz r0, 0x40(r3)
/* 80422F58 0041FE98  28 00 00 00 */	cmplwi r0, 0
/* 80422F5C 0041FE9C  41 82 00 1C */	beq .L_80422F78
/* 80422F60 0041FEA0  7F E3 FB 78 */	mr r3, r31
/* 80422F64 0041FEA4  7C A4 2B 78 */	mr r4, r5
/* 80422F68 0041FEA8  48 00 19 31 */	bl loadUseCallBack__16DvdThreadCommandFP9IDelegate
/* 80422F6C 0041FEAC  80 7E 00 40 */	lwz r3, 0x40(r30)
/* 80422F70 0041FEB0  7F E4 FB 78 */	mr r4, r31
/* 80422F74 0041FEB4  48 00 1C C9 */	bl sendCommand__9DvdThreadFP16DvdThreadCommand
.L_80422F78:
/* 80422F78 0041FEB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80422F7C 0041FEBC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80422F80 0041FEC0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80422F84 0041FEC4  7C 08 03 A6 */	mtlr r0
/* 80422F88 0041FEC8  38 21 00 10 */	addi r1, r1, 0x10
/* 80422F8C 0041FECC  4E 80 00 20 */	blr 
.endfn dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate

.fn deleteThreads__6SystemFv, global
/* 80422F90 0041FED0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80422F94 0041FED4  7C 08 02 A6 */	mflr r0
/* 80422F98 0041FED8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80422F9C 0041FEDC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80422FA0 0041FEE0  7C 7F 1B 78 */	mr r31, r3
/* 80422FA4 0041FEE4  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80422FA8 0041FEE8  28 03 00 00 */	cmplwi r3, 0
/* 80422FAC 0041FEEC  41 82 00 24 */	beq .L_80422FD0
/* 80422FB0 0041FEF0  41 82 00 18 */	beq .L_80422FC8
/* 80422FB4 0041FEF4  81 83 00 00 */	lwz r12, 0(r3)
/* 80422FB8 0041FEF8  38 80 00 01 */	li r4, 1
/* 80422FBC 0041FEFC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80422FC0 0041FF00  7D 89 03 A6 */	mtctr r12
/* 80422FC4 0041FF04  4E 80 04 21 */	bctrl 
.L_80422FC8:
/* 80422FC8 0041FF08  38 00 00 00 */	li r0, 0
/* 80422FCC 0041FF0C  90 1F 00 40 */	stw r0, 0x40(r31)
.L_80422FD0:
/* 80422FD0 0041FF10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80422FD4 0041FF14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80422FD8 0041FF18  7C 08 03 A6 */	mtlr r0
/* 80422FDC 0041FF1C  38 21 00 10 */	addi r1, r1, 0x10
/* 80422FE0 0041FF20  4E 80 00 20 */	blr 
.endfn deleteThreads__6SystemFv

.fn __dt__9DvdThreadFv, weak
/* 80422FE4 0041FF24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80422FE8 0041FF28  7C 08 02 A6 */	mflr r0
/* 80422FEC 0041FF2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80422FF0 0041FF30  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80422FF4 0041FF34  7C 9F 23 78 */	mr r31, r4
/* 80422FF8 0041FF38  93 C1 00 08 */	stw r30, 8(r1)
/* 80422FFC 0041FF3C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80423000 0041FF40  41 82 00 54 */	beq .L_80423054
/* 80423004 0041FF44  3C 60 80 4F */	lis r3, __vt__9DvdThread@ha
/* 80423008 0041FF48  34 1E 00 7C */	addic. r0, r30, 0x7c
/* 8042300C 0041FF4C  38 03 BD 88 */	addi r0, r3, __vt__9DvdThread@l
/* 80423010 0041FF50  90 1E 00 00 */	stw r0, 0(r30)
/* 80423014 0041FF54  41 82 00 10 */	beq .L_80423024
/* 80423018 0041FF58  38 7E 00 7C */	addi r3, r30, 0x7c
/* 8042301C 0041FF5C  38 80 00 00 */	li r4, 0
/* 80423020 0041FF60  4B C0 38 49 */	bl __dt__10JSUPtrListFv
.L_80423024:
/* 80423024 0041FF64  28 1E 00 00 */	cmplwi r30, 0
/* 80423028 0041FF68  41 82 00 1C */	beq .L_80423044
/* 8042302C 0041FF6C  3C 80 80 4F */	lis r4, __vt__9AppThread@ha
/* 80423030 0041FF70  7F C3 F3 78 */	mr r3, r30
/* 80423034 0041FF74  38 04 BB 58 */	addi r0, r4, __vt__9AppThread@l
/* 80423038 0041FF78  38 80 00 00 */	li r4, 0
/* 8042303C 0041FF7C  90 1E 00 00 */	stw r0, 0(r30)
/* 80423040 0041FF80  4B C0 27 F9 */	bl __dt__9JKRThreadFv
.L_80423044:
/* 80423044 0041FF84  7F E0 07 35 */	extsh. r0, r31
/* 80423048 0041FF88  40 81 00 0C */	ble .L_80423054
/* 8042304C 0041FF8C  7F C3 F3 78 */	mr r3, r30
/* 80423050 0041FF90  4B C0 10 65 */	bl __dl__FPv
.L_80423054:
/* 80423054 0041FF94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80423058 0041FF98  7F C3 F3 78 */	mr r3, r30
/* 8042305C 0041FF9C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80423060 0041FFA0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80423064 0041FFA4  7C 08 03 A6 */	mtlr r0
/* 80423068 0041FFA8  38 21 00 10 */	addi r1, r1, 0x10
/* 8042306C 0041FFAC  4E 80 00 20 */	blr 
.endfn __dt__9DvdThreadFv

.fn setCurrentDisplay__6SystemFP10JFWDisplay, global
/* 80423070 0041FFB0  80 03 00 4C */	lwz r0, 0x4c(r3)
/* 80423074 0041FFB4  90 83 00 4C */	stw r4, 0x4c(r3)
/* 80423078 0041FFB8  7C 03 03 78 */	mr r3, r0
/* 8042307C 0041FFBC  4E 80 00 20 */	blr 
.endfn setCurrentDisplay__6SystemFP10JFWDisplay

.fn clearCurrentDisplay__6SystemFP10JFWDisplay, global
/* 80423080 0041FFC0  80 03 00 4C */	lwz r0, 0x4c(r3)
/* 80423084 0041FFC4  7C 00 20 40 */	cmplw r0, r4
/* 80423088 0041FFC8  40 82 00 0C */	bne .L_80423094
/* 8042308C 0041FFCC  38 00 00 00 */	li r0, 0
/* 80423090 0041FFD0  90 03 00 4C */	stw r0, 0x4c(r3)
.L_80423094:
/* 80423094 0041FFD4  38 60 00 00 */	li r3, 0
/* 80423098 0041FFD8  4E 80 00 20 */	blr 
.endfn clearCurrentDisplay__6SystemFP10JFWDisplay

.fn beginFrame__6SystemFv, global
/* 8042309C 0041FFDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804230A0 0041FFE0  7C 08 02 A6 */	mflr r0
/* 804230A4 0041FFE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 804230A8 0041FFE8  38 00 00 00 */	li r0, 0
/* 804230AC 0041FFEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804230B0 0041FFF0  7C 7F 1B 78 */	mr r31, r3
/* 804230B4 0041FFF4  90 03 00 1C */	stw r0, 0x1c(r3)
/* 804230B8 0041FFF8  4B C0 A5 A9 */	bl read__10JUTGamePadFv
/* 804230BC 0041FFFC  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 804230C0 00420000  48 00 72 95 */	bl update__9DvdStatusFv
/* 804230C4 00420004  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804230C8 00420008  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804230CC 0042000C  7C 08 03 A6 */	mtlr r0
/* 804230D0 00420010  38 21 00 10 */	addi r1, r1, 0x10
/* 804230D4 00420014  4E 80 00 20 */	blr 
.endfn beginFrame__6SystemFv

.fn endFrame__6SystemFv, global
/* 804230D8 00420018  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804230DC 0042001C  7C 08 02 A6 */	mflr r0
/* 804230E0 00420020  90 01 00 14 */	stw r0, 0x14(r1)
/* 804230E4 00420024  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804230E8 00420028  7C 7F 1B 78 */	mr r31, r3
/* 804230EC 0042002C  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 804230F0 00420030  81 83 00 00 */	lwz r12, 0(r3)
/* 804230F4 00420034  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 804230F8 00420038  7D 89 03 A6 */	mtctr r12
/* 804230FC 0042003C  4E 80 04 21 */	bctrl 
/* 80423100 00420040  7F E3 FB 78 */	mr r3, r31
/* 80423104 00420044  48 00 02 D9 */	bl inactiveGP__6SystemFv
/* 80423108 00420048  80 7F 00 44 */	lwz r3, 0x44(r31)
/* 8042310C 0042004C  48 00 6D 6D */	bl update__12ResetManagerFv
/* 80423110 00420050  80 6D 88 58 */	lwz r3, sManager__15JKRThreadSwitch@sda21(r13)
/* 80423114 00420054  28 03 00 00 */	cmplwi r3, 0
/* 80423118 00420058  41 82 00 08 */	beq .L_80423120
/* 8042311C 0042005C  4B C0 29 29 */	bl loopProc__15JKRThreadSwitchFv
.L_80423120:
/* 80423120 00420060  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80423124 00420064  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80423128 00420068  7C 08 03 A6 */	mtlr r0
/* 8042312C 0042006C  38 21 00 10 */	addi r1, r1, 0x10
/* 80423130 00420070  4E 80 00 20 */	blr 
.endfn endFrame__6SystemFv

.fn beginRender__6SystemFv, global
/* 80423134 00420074  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80423138 00420078  7C 08 02 A6 */	mflr r0
/* 8042313C 0042007C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80423140 00420080  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80423144 00420084  7C 7F 1B 78 */	mr r31, r3
/* 80423148 00420088  48 00 02 81 */	bl activeGP__6SystemFv
/* 8042314C 0042008C  38 60 00 00 */	li r3, 0
/* 80423150 00420090  4B CB 52 B1 */	bl CARDProbe
/* 80423154 00420094  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 80423158 00420098  81 83 00 00 */	lwz r12, 0(r3)
/* 8042315C 0042009C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80423160 004200A0  7D 89 03 A6 */	mtctr r12
/* 80423164 004200A4  4E 80 04 21 */	bctrl 
/* 80423168 004200A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042316C 004200AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80423170 004200B0  7C 08 03 A6 */	mtlr r0
/* 80423174 004200B4  38 21 00 10 */	addi r1, r1, 0x10
/* 80423178 004200B8  4E 80 00 20 */	blr 
.endfn beginRender__6SystemFv

.fn endRender__6SystemFv, global
/* 8042317C 004200BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80423180 004200C0  7C 08 02 A6 */	mflr r0
/* 80423184 004200C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80423188 004200C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042318C 004200CC  93 C1 00 08 */	stw r30, 8(r1)
/* 80423190 004200D0  7C 7E 1B 78 */	mr r30, r3
/* 80423194 004200D4  83 ED 98 58 */	lwz r31, spSysIF__8PSSystem@sda21(r13)
/* 80423198 004200D8  28 1F 00 00 */	cmplwi r31, 0
/* 8042319C 004200DC  41 82 00 30 */	beq .L_804231CC
/* 804231A0 004200E0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804231A4 004200E4  38 82 20 C8 */	addi r4, r2, lbl_80520428@sda21
/* 804231A8 004200E8  38 A0 00 01 */	li r5, 1
/* 804231AC 004200EC  80 63 00 28 */	lwz r3, 0x28(r3)
/* 804231B0 004200F0  48 00 79 49 */	bl _start__9SysTimersFPcb
/* 804231B4 004200F4  7F E3 FB 78 */	mr r3, r31
/* 804231B8 004200F8  4B F1 55 95 */	bl mainLoop__Q28PSSystem5SysIFFv
/* 804231BC 004200FC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804231C0 00420100  38 82 20 C8 */	addi r4, r2, lbl_80520428@sda21
/* 804231C4 00420104  80 63 00 28 */	lwz r3, 0x28(r3)
/* 804231C8 00420108  48 00 79 35 */	bl _stop__9SysTimersFPc
.L_804231CC:
/* 804231CC 0042010C  80 7E 00 48 */	lwz r3, 0x48(r30)
/* 804231D0 00420110  48 00 73 75 */	bl draw__9DvdStatusFv
/* 804231D4 00420114  80 7E 00 44 */	lwz r3, 0x44(r30)
/* 804231D8 00420118  81 83 00 00 */	lwz r12, 0(r3)
/* 804231DC 0042011C  81 8C 00 08 */	lwz r12, 8(r12)
/* 804231E0 00420120  7D 89 03 A6 */	mtctr r12
/* 804231E4 00420124  4E 80 04 21 */	bctrl 
/* 804231E8 00420128  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 804231EC 0042012C  81 83 00 00 */	lwz r12, 0(r3)
/* 804231F0 00420130  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 804231F4 00420134  7D 89 03 A6 */	mtctr r12
/* 804231F8 00420138  4E 80 04 21 */	bctrl 
/* 804231FC 0042013C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80423200 00420140  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80423204 00420144  83 C1 00 08 */	lwz r30, 8(r1)
/* 80423208 00420148  7C 08 03 A6 */	mtlr r0
/* 8042320C 0042014C  38 21 00 10 */	addi r1, r1, 0x10
/* 80423210 00420150  4E 80 00 20 */	blr 
.endfn endRender__6SystemFv

.fn setRenderMode__6SystemFQ26System11ERenderMode, global
/* 80423214 00420154  80 0D 9A E8 */	lwz r0, mRenderMode__6System@sda21(r13)
/* 80423218 00420158  90 6D 9A E8 */	stw r3, mRenderMode__6System@sda21(r13)
/* 8042321C 0042015C  7C 03 03 78 */	mr r3, r0
/* 80423220 00420160  4E 80 00 20 */	blr 
.endfn setRenderMode__6SystemFQ26System11ERenderMode

.fn getRenderModeObj__6SystemFv, global
/* 80423224 00420164  80 0D 9A E8 */	lwz r0, mRenderMode__6System@sda21(r13)
/* 80423228 00420168  3C 60 80 4F */	lis r3, sRenderModeTable@ha
/* 8042322C 0042016C  38 63 BB 30 */	addi r3, r3, sRenderModeTable@l
/* 80423230 00420170  54 00 10 3A */	slwi r0, r0, 2
/* 80423234 00420174  7C 63 00 2E */	lwzx r3, r3, r0
/* 80423238 00420178  4E 80 00 20 */	blr 
.endfn getRenderModeObj__6SystemFv

.fn changeRenderMode__6SystemFQ26System11ERenderMode, global
/* 8042323C 0042017C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80423240 00420180  7C 08 02 A6 */	mflr r0
/* 80423244 00420184  3C A0 80 4A */	lis r5, lbl_804997C8@ha
/* 80423248 00420188  90 01 00 24 */	stw r0, 0x24(r1)
/* 8042324C 0042018C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80423250 00420190  3B E5 97 C8 */	addi r31, r5, lbl_804997C8@l
/* 80423254 00420194  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80423258 00420198  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8042325C 0042019C  7C 9D 23 78 */	mr r29, r4
/* 80423260 004201A0  93 81 00 10 */	stw r28, 0x10(r1)
/* 80423264 004201A4  7C 7C 1B 78 */	mr r28, r3
/* 80423268 004201A8  83 CD 89 20 */	lwz r30, sManager__8JUTVideo@sda21(r13)
/* 8042326C 004201AC  28 1E 00 00 */	cmplwi r30, 0
/* 80423270 004201B0  40 82 00 18 */	bne .L_80423288
/* 80423274 004201B4  38 7F 00 00 */	addi r3, r31, 0
/* 80423278 004201B8  38 BF 01 74 */	addi r5, r31, 0x174
/* 8042327C 004201BC  38 80 07 61 */	li r4, 0x761
/* 80423280 004201C0  4C C6 31 82 */	crclr 6
/* 80423284 004201C4  4B C0 73 BD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80423288:
/* 80423288 004201C8  80 0D 9A E8 */	lwz r0, mRenderMode__6System@sda21(r13)
/* 8042328C 004201CC  7C 00 E8 00 */	cmpw r0, r29
/* 80423290 004201D0  41 82 00 34 */	beq .L_804232C4
/* 80423294 004201D4  93 AD 9A E8 */	stw r29, mRenderMode__6System@sda21(r13)
/* 80423298 004201D8  38 60 00 01 */	li r3, 1
/* 8042329C 004201DC  4B CA EE 2D */	bl VISetBlack
/* 804232A0 004201E0  4B CA EC 85 */	bl VIFlush
/* 804232A4 004201E4  4B CA DF 91 */	bl VIWaitForRetrace
/* 804232A8 004201E8  80 0D 9A E8 */	lwz r0, mRenderMode__6System@sda21(r13)
/* 804232AC 004201EC  3C 60 80 4F */	lis r3, sRenderModeTable@ha
/* 804232B0 004201F0  38 83 BB 30 */	addi r4, r3, sRenderModeTable@l
/* 804232B4 004201F4  7F C3 F3 78 */	mr r3, r30
/* 804232B8 004201F8  54 00 10 3A */	slwi r0, r0, 2
/* 804232BC 004201FC  7C 84 00 2E */	lwzx r4, r4, r0
/* 804232C0 00420200  4B C1 09 B1 */	bl setRenderMode__8JUTVideoFPC16_GXRenderModeObj
.L_804232C4:
/* 804232C4 00420204  2C 1D 00 02 */	cmpwi r29, 2
/* 804232C8 00420208  41 82 00 3C */	beq .L_80423304
/* 804232CC 0042020C  40 80 00 14 */	bge .L_804232E0
/* 804232D0 00420210  2C 1D 00 00 */	cmpwi r29, 0
/* 804232D4 00420214  41 82 00 18 */	beq .L_804232EC
/* 804232D8 00420218  40 80 00 20 */	bge .L_804232F8
/* 804232DC 0042021C  48 00 00 40 */	b .L_8042331C
.L_804232E0:
/* 804232E0 00420220  2C 1D 00 04 */	cmpwi r29, 4
/* 804232E4 00420224  40 80 00 38 */	bge .L_8042331C
/* 804232E8 00420228  48 00 00 28 */	b .L_80423310
.L_804232EC:
/* 804232EC 0042022C  38 60 00 00 */	li r3, 0
/* 804232F0 00420230  4B CC E1 45 */	bl OSSetProgressiveMode
/* 804232F4 00420234  48 00 00 40 */	b .L_80423334
.L_804232F8:
/* 804232F8 00420238  38 60 00 01 */	li r3, 1
/* 804232FC 0042023C  4B CC E1 39 */	bl OSSetProgressiveMode
/* 80423300 00420240  48 00 00 34 */	b .L_80423334
.L_80423304:
/* 80423304 00420244  38 60 00 00 */	li r3, 0
/* 80423308 00420248  4B CC E1 D1 */	bl OSSetEuRgb60Mode
/* 8042330C 0042024C  48 00 00 28 */	b .L_80423334
.L_80423310:
/* 80423310 00420250  38 60 00 01 */	li r3, 1
/* 80423314 00420254  4B CC E1 C5 */	bl OSSetEuRgb60Mode
/* 80423318 00420258  48 00 00 1C */	b .L_80423334
.L_8042331C:
/* 8042331C 0042025C  7F A6 EB 78 */	mr r6, r29
/* 80423320 00420260  38 7F 00 00 */	addi r3, r31, 0
/* 80423324 00420264  38 BF 02 04 */	addi r5, r31, 0x204
/* 80423328 00420268  38 80 07 81 */	li r4, 0x781
/* 8042332C 0042026C  4C C6 31 82 */	crclr 6
/* 80423330 00420270  4B C0 73 11 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80423334:
/* 80423334 00420274  80 7C 00 60 */	lwz r3, 0x60(r28)
/* 80423338 00420278  48 02 3C 91 */	bl setDeflicker__Q34Game14CommonSaveData3MgrFv
/* 8042333C 0042027C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80423340 00420280  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80423344 00420284  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80423348 00420288  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8042334C 0042028C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80423350 00420290  7C 08 03 A6 */	mtlr r0
/* 80423354 00420294  38 21 00 20 */	addi r1, r1, 0x20
/* 80423358 00420298  4E 80 00 20 */	blr 
.endfn changeRenderMode__6SystemFQ26System11ERenderMode

.fn heapStatusStart__6SystemFPcP7JKRHeap, global
/* 8042335C 0042029C  38 60 00 00 */	li r3, 0
/* 80423360 004202A0  4E 80 00 20 */	blr 
.endfn heapStatusStart__6SystemFPcP7JKRHeap

.fn heapStatusEnd__6SystemFPc, global
/* 80423364 004202A4  4E 80 00 20 */	blr 
.endfn heapStatusEnd__6SystemFPc

.fn heapStatusDump__6SystemFb, global
/* 80423368 004202A8  4E 80 00 20 */	blr 
.endfn heapStatusDump__6SystemFb

.fn heapStatusIndividual__6SystemFv, global
/* 8042336C 004202AC  4E 80 00 20 */	blr 
.endfn heapStatusIndividual__6SystemFv

.fn heapStatusNormal__6SystemFv, global
/* 80423370 004202B0  4E 80 00 20 */	blr 
.endfn heapStatusNormal__6SystemFv

.fn resetOn__6SystemFb, global
/* 80423374 004202B4  80 63 00 44 */	lwz r3, 0x44(r3)
/* 80423378 004202B8  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8042337C 004202BC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80423380 004202C0  60 00 00 01 */	ori r0, r0, 1
/* 80423384 004202C4  90 03 00 0C */	stw r0, 0xc(r3)
/* 80423388 004202C8  4D 82 00 20 */	beqlr 
/* 8042338C 004202CC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80423390 004202D0  60 00 00 08 */	ori r0, r0, 8
/* 80423394 004202D4  90 03 00 0C */	stw r0, 0xc(r3)
/* 80423398 004202D8  4E 80 00 20 */	blr 
.endfn resetOn__6SystemFb

.fn resetPermissionOn__6SystemFv, global
/* 8042339C 004202DC  80 63 00 44 */	lwz r3, 0x44(r3)
/* 804233A0 004202E0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 804233A4 004202E4  64 00 10 00 */	oris r0, r0, 0x1000
/* 804233A8 004202E8  90 03 00 0C */	stw r0, 0xc(r3)
/* 804233AC 004202EC  4E 80 00 20 */	blr 
.endfn resetPermissionOn__6SystemFv

.fn isResetActive__6SystemFv, global
/* 804233B0 004202F0  80 63 00 44 */	lwz r3, 0x44(r3)
/* 804233B4 004202F4  80 63 00 04 */	lwz r3, 4(r3)
/* 804233B8 004202F8  7C 03 00 D0 */	neg r0, r3
/* 804233BC 004202FC  7C 00 1B 78 */	or r0, r0, r3
/* 804233C0 00420300  54 03 0F FE */	srwi r3, r0, 0x1f
/* 804233C4 00420304  4E 80 00 20 */	blr 
.endfn isResetActive__6SystemFv

.fn activeGP__6SystemFv, global
/* 804233C8 00420308  80 63 00 44 */	lwz r3, 0x44(r3)
/* 804233CC 0042030C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 804233D0 00420310  60 00 00 02 */	ori r0, r0, 2
/* 804233D4 00420314  90 03 00 0C */	stw r0, 0xc(r3)
/* 804233D8 00420318  4E 80 00 20 */	blr 
.endfn activeGP__6SystemFv

.fn inactiveGP__6SystemFv, global
/* 804233DC 0042031C  80 63 00 44 */	lwz r3, 0x44(r3)
/* 804233E0 00420320  80 03 00 0C */	lwz r0, 0xc(r3)
/* 804233E4 00420324  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 804233E8 00420328  90 03 00 0C */	stw r0, 0xc(r3)
/* 804233EC 0042032C  4E 80 00 20 */	blr 
.endfn inactiveGP__6SystemFv

.fn isDvdErrorOccured__6SystemFv, global
/* 804233F0 00420330  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804233F4 00420334  7C 08 02 A6 */	mflr r0
/* 804233F8 00420338  90 01 00 14 */	stw r0, 0x14(r1)
/* 804233FC 0042033C  80 63 00 48 */	lwz r3, 0x48(r3)
/* 80423400 00420340  48 00 6F 29 */	bl isErrorOccured__9DvdStatusFv
/* 80423404 00420344  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80423408 00420348  7C 08 03 A6 */	mtlr r0
/* 8042340C 0042034C  38 21 00 10 */	addi r1, r1, 0x10
/* 80423410 00420350  4E 80 00 20 */	blr 
.endfn isDvdErrorOccured__6SystemFv

.fn initCurrentHeapMutex__6SystemFv, global
/* 80423414 00420354  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80423418 00420358  7C 08 02 A6 */	mflr r0
/* 8042341C 0042035C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80423420 00420360  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80423424 00420364  7C 7F 1B 78 */	mr r31, r3
/* 80423428 00420368  4B CC C7 09 */	bl OSInitMutex
/* 8042342C 0042036C  38 00 00 00 */	li r0, 0
/* 80423430 00420370  90 1F 00 18 */	stw r0, 0x18(r31)
/* 80423434 00420374  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80423438 00420378  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042343C 0042037C  7C 08 03 A6 */	mtlr r0
/* 80423440 00420380  38 21 00 10 */	addi r1, r1, 0x10
/* 80423444 00420384  4E 80 00 20 */	blr 
.endfn initCurrentHeapMutex__6SystemFv

.fn startChangeCurrentHeap__6SystemFP7JKRHeap, global
/* 80423448 00420388  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042344C 0042038C  7C 08 02 A6 */	mflr r0
/* 80423450 00420390  90 01 00 14 */	stw r0, 0x14(r1)
/* 80423454 00420394  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80423458 00420398  7C 9F 23 78 */	mr r31, r4
/* 8042345C 0042039C  93 C1 00 08 */	stw r30, 8(r1)
/* 80423460 004203A0  7C 7E 1B 78 */	mr r30, r3
/* 80423464 004203A4  4B CC C7 05 */	bl OSLockMutex
/* 80423468 004203A8  80 1E 00 18 */	lwz r0, 0x18(r30)
/* 8042346C 004203AC  28 00 00 00 */	cmplwi r0, 0
/* 80423470 004203B0  41 82 00 20 */	beq .L_80423490
/* 80423474 004203B4  3C 60 80 4A */	lis r3, lbl_804997C8@ha
/* 80423478 004203B8  3C A0 80 4A */	lis r5, lbl_8049993C@ha
/* 8042347C 004203BC  38 63 97 C8 */	addi r3, r3, lbl_804997C8@l
/* 80423480 004203C0  38 80 07 F1 */	li r4, 0x7f1
/* 80423484 004203C4  38 A5 99 3C */	addi r5, r5, lbl_8049993C@l
/* 80423488 004203C8  4C C6 31 82 */	crclr 6
/* 8042348C 004203CC  4B C0 71 B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80423490:
/* 80423490 004203D0  80 0D 88 2C */	lwz r0, sCurrentHeap__7JKRHeap@sda21(r13)
/* 80423494 004203D4  7F E3 FB 78 */	mr r3, r31
/* 80423498 004203D8  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8042349C 004203DC  4B C0 01 09 */	bl becomeCurrentHeap__7JKRHeapFv
/* 804234A0 004203E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804234A4 004203E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804234A8 004203E8  83 C1 00 08 */	lwz r30, 8(r1)
/* 804234AC 004203EC  7C 08 03 A6 */	mtlr r0
/* 804234B0 004203F0  38 21 00 10 */	addi r1, r1, 0x10
/* 804234B4 004203F4  4E 80 00 20 */	blr 
.endfn startChangeCurrentHeap__6SystemFP7JKRHeap

.fn endChangeCurrentHeap__6SystemFv, global
/* 804234B8 004203F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804234BC 004203FC  7C 08 02 A6 */	mflr r0
/* 804234C0 00420400  90 01 00 14 */	stw r0, 0x14(r1)
/* 804234C4 00420404  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804234C8 00420408  7C 7F 1B 78 */	mr r31, r3
/* 804234CC 0042040C  80 03 00 18 */	lwz r0, 0x18(r3)
/* 804234D0 00420410  28 00 00 00 */	cmplwi r0, 0
/* 804234D4 00420414  40 82 00 20 */	bne .L_804234F4
/* 804234D8 00420418  3C 60 80 4A */	lis r3, lbl_804997C8@ha
/* 804234DC 0042041C  3C A0 80 4A */	lis r5, lbl_8049993C@ha
/* 804234E0 00420420  38 63 97 C8 */	addi r3, r3, lbl_804997C8@l
/* 804234E4 00420424  38 80 07 F9 */	li r4, 0x7f9
/* 804234E8 00420428  38 A5 99 3C */	addi r5, r5, lbl_8049993C@l
/* 804234EC 0042042C  4C C6 31 82 */	crclr 6
/* 804234F0 00420430  4B C0 71 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804234F4:
/* 804234F4 00420434  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 804234F8 00420438  4B C0 00 AD */	bl becomeCurrentHeap__7JKRHeapFv
/* 804234FC 0042043C  38 00 00 00 */	li r0, 0
/* 80423500 00420440  7F E3 FB 78 */	mr r3, r31
/* 80423504 00420444  90 1F 00 18 */	stw r0, 0x18(r31)
/* 80423508 00420448  4B CC C7 3D */	bl OSUnlockMutex
/* 8042350C 0042044C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80423510 00420450  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80423514 00420454  7C 08 03 A6 */	mtlr r0
/* 80423518 00420458  38 21 00 10 */	addi r1, r1, 0x10
/* 8042351C 0042045C  4E 80 00 20 */	blr 
.endfn endChangeCurrentHeap__6SystemFv

.fn addGenNode__6SystemFP5CNode, global
/* 80423520 00420460  4E 80 00 20 */	blr 
.endfn addGenNode__6SystemFP5CNode

.fn initGenNode__6SystemFv, global
/* 80423524 00420464  4E 80 00 20 */	blr 
.endfn initGenNode__6SystemFv

.fn refreshGenNode__6SystemFv, global
/* 80423528 00420468  4E 80 00 20 */	blr 
.endfn refreshGenNode__6SystemFv

.fn setFrameRate__6SystemFi, global
/* 8042352C 0042046C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80423530 00420470  7C 08 02 A6 */	mflr r0
/* 80423534 00420474  90 01 00 24 */	stw r0, 0x24(r1)
/* 80423538 00420478  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8042353C 0042047C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80423540 00420480  7C 9E 23 78 */	mr r30, r4
/* 80423544 00420484  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80423548 00420488  7C 7D 1B 78 */	mr r29, r3
/* 8042354C 0042048C  83 E3 00 4C */	lwz r31, 0x4c(r3)
/* 80423550 00420490  28 1F 00 00 */	cmplwi r31, 0
/* 80423554 00420494  40 82 00 20 */	bne .L_80423574
/* 80423558 00420498  3C 60 80 4A */	lis r3, lbl_804997C8@ha
/* 8042355C 0042049C  3C A0 80 4A */	lis r5, lbl_804999E4@ha
/* 80423560 004204A0  38 63 97 C8 */	addi r3, r3, lbl_804997C8@l
/* 80423564 004204A4  38 80 09 27 */	li r4, 0x927
/* 80423568 004204A8  38 A5 99 E4 */	addi r5, r5, lbl_804999E4@l
/* 8042356C 004204AC  4C C6 31 82 */	crclr 6
/* 80423570 004204B0  4B C0 70 D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80423574:
/* 80423574 004204B4  6F C0 80 00 */	xoris r0, r30, 0x8000
/* 80423578 004204B8  3C 60 43 30 */	lis r3, 0x4330
/* 8042357C 004204BC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80423580 004204C0  38 00 00 00 */	li r0, 0
/* 80423584 004204C4  C8 42 20 D8 */	lfd f2, lbl_80520438@sda21(r2)
/* 80423588 004204C8  90 61 00 08 */	stw r3, 8(r1)
/* 8042358C 004204CC  C0 02 20 D0 */	lfs f0, lbl_80520430@sda21(r2)
/* 80423590 004204D0  C8 21 00 08 */	lfd f1, 8(r1)
/* 80423594 004204D4  EC 21 10 28 */	fsubs f1, f1, f2
/* 80423598 004204D8  D0 3D 00 64 */	stfs f1, 0x64(r29)
/* 8042359C 004204DC  C0 3D 00 64 */	lfs f1, 0x64(r29)
/* 804235A0 004204E0  EC 01 00 24 */	fdivs f0, f1, f0
/* 804235A4 004204E4  D0 1D 00 54 */	stfs f0, 0x54(r29)
/* 804235A8 004204E8  B3 DF 00 1C */	sth r30, 0x1c(r31)
/* 804235AC 004204EC  90 1F 00 20 */	stw r0, 0x20(r31)
/* 804235B0 004204F0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 804235B4 004204F4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 804235B8 004204F8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 804235BC 004204FC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 804235C0 00420500  7C 08 03 A6 */	mtlr r0
/* 804235C4 00420504  38 21 00 20 */	addi r1, r1, 0x20
/* 804235C8 00420508  4E 80 00 20 */	blr 
.endfn setFrameRate__6SystemFi

.fn getCurrentSection__11ISectionMgrFv, weak
/* 804235CC 0042050C  38 60 00 00 */	li r3, 0
/* 804235D0 00420510  4E 80 00 20 */	blr 
.endfn getCurrentSection__11ISectionMgrFv

.fn dvdLoadSyncNoBlock__6SystemFP16DvdThreadCommand, global
/* 804235D4 00420514  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804235D8 00420518  7C 08 02 A6 */	mflr r0
/* 804235DC 0042051C  90 01 00 14 */	stw r0, 0x14(r1)
/* 804235E0 00420520  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804235E4 00420524  7C 7F 1B 78 */	mr r31, r3
/* 804235E8 00420528  80 63 00 40 */	lwz r3, 0x40(r3)
/* 804235EC 0042052C  28 03 00 00 */	cmplwi r3, 0
/* 804235F0 00420530  41 82 00 10 */	beq .L_80423600
/* 804235F4 00420534  38 A0 00 01 */	li r5, 1
/* 804235F8 00420538  48 00 16 A5 */	bl sync__9DvdThreadFP16DvdThreadCommandQ29DvdThread14ESyncBlockFlag
/* 804235FC 0042053C  48 00 00 08 */	b .L_80423604
.L_80423600:
/* 80423600 00420540  38 60 00 01 */	li r3, 1
.L_80423604:
/* 80423604 00420544  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80423608 00420548  41 82 00 18 */	beq .L_80423620
/* 8042360C 0042054C  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 80423610 00420550  48 00 6D 19 */	bl isErrorOccured__9DvdStatusFv
/* 80423614 00420554  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80423618 00420558  7C 00 00 34 */	cntlzw r0, r0
/* 8042361C 0042055C  54 03 D9 7E */	srwi r3, r0, 5
.L_80423620:
/* 80423620 00420560  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80423624 00420564  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80423628 00420568  7C 08 03 A6 */	mtlr r0
/* 8042362C 0042056C  38 21 00 10 */	addi r1, r1, 0x10
/* 80423630 00420570  4E 80 00 20 */	blr 
.endfn dvdLoadSyncNoBlock__6SystemFP16DvdThreadCommand

.fn dvdLoadSyncAllNoBlock__6SystemFv, global
/* 80423634 00420574  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80423638 00420578  7C 08 02 A6 */	mflr r0
/* 8042363C 0042057C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80423640 00420580  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80423644 00420584  7C 7F 1B 78 */	mr r31, r3
/* 80423648 00420588  80 63 00 48 */	lwz r3, 0x48(r3)
/* 8042364C 0042058C  48 00 6C DD */	bl isErrorOccured__9DvdStatusFv
/* 80423650 00420590  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80423654 00420594  41 82 00 0C */	beq .L_80423660
/* 80423658 00420598  38 60 FF FF */	li r3, -1
/* 8042365C 0042059C  48 00 00 20 */	b .L_8042367C
.L_80423660:
/* 80423660 004205A0  80 7F 00 40 */	lwz r3, 0x40(r31)
/* 80423664 004205A4  28 03 00 00 */	cmplwi r3, 0
/* 80423668 004205A8  41 82 00 10 */	beq .L_80423678
/* 8042366C 004205AC  38 80 00 01 */	li r4, 1
/* 80423670 004205B0  48 00 16 DD */	bl syncAll__9DvdThreadFQ29DvdThread14ESyncBlockFlag
/* 80423674 004205B4  48 00 00 08 */	b .L_8042367C
.L_80423678:
/* 80423678 004205B8  38 60 00 00 */	li r3, 0
.L_8042367C:
/* 8042367C 004205BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80423680 004205C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80423684 004205C4  7C 08 03 A6 */	mtlr r0
/* 80423688 004205C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8042368C 004205CC  4E 80 00 20 */	blr 
.endfn dvdLoadSyncAllNoBlock__6SystemFv

.fn __dt__9AppThreadFv, weak
/* 80423690 004205D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80423694 004205D4  7C 08 02 A6 */	mflr r0
/* 80423698 004205D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042369C 004205DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804236A0 004205E0  7C 9F 23 78 */	mr r31, r4
/* 804236A4 004205E4  93 C1 00 08 */	stw r30, 8(r1)
/* 804236A8 004205E8  7C 7E 1B 79 */	or. r30, r3, r3
/* 804236AC 004205EC  41 82 00 28 */	beq .L_804236D4
/* 804236B0 004205F0  3C A0 80 4F */	lis r5, __vt__9AppThread@ha
/* 804236B4 004205F4  38 80 00 00 */	li r4, 0
/* 804236B8 004205F8  38 05 BB 58 */	addi r0, r5, __vt__9AppThread@l
/* 804236BC 004205FC  90 1E 00 00 */	stw r0, 0(r30)
/* 804236C0 00420600  4B C0 21 79 */	bl __dt__9JKRThreadFv
/* 804236C4 00420604  7F E0 07 35 */	extsh. r0, r31
/* 804236C8 00420608  40 81 00 0C */	ble .L_804236D4
/* 804236CC 0042060C  7F C3 F3 78 */	mr r3, r30
/* 804236D0 00420610  4B C0 09 E5 */	bl __dl__FPv
.L_804236D4:
/* 804236D4 00420614  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804236D8 00420618  7F C3 F3 78 */	mr r3, r30
/* 804236DC 0042061C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804236E0 00420620  83 C1 00 08 */	lwz r30, 8(r1)
/* 804236E4 00420624  7C 08 03 A6 */	mtlr r0
/* 804236E8 00420628  38 21 00 10 */	addi r1, r1, 0x10
/* 804236EC 0042062C  4E 80 00 20 */	blr 
.endfn __dt__9AppThreadFv

.fn newSceneMgr__Q23PSM7FactoryFv, weak
/* 804236F0 00420630  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804236F4 00420634  7C 08 02 A6 */	mflr r0
/* 804236F8 00420638  38 60 00 14 */	li r3, 0x14
/* 804236FC 0042063C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80423700 00420640  4B C0 07 A5 */	bl __nw__FUl
/* 80423704 00420644  7C 60 1B 79 */	or. r0, r3, r3
/* 80423708 00420648  41 82 00 0C */	beq .L_80423714
/* 8042370C 0042064C  48 03 6A B9 */	bl __ct__Q23PSM8SceneMgrFv
/* 80423710 00420650  7C 60 1B 78 */	mr r0, r3
.L_80423714:
/* 80423714 00420654  7C 03 03 78 */	mr r3, r0
/* 80423718 00420658  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042371C 0042065C  7C 08 03 A6 */	mtlr r0
/* 80423720 00420660  38 21 00 10 */	addi r1, r1, 0x10
/* 80423724 00420664  4E 80 00 20 */	blr 
.endfn newSceneMgr__Q23PSM7FactoryFv

.fn "invoke__17Delegate<6System>Fv", weak
/* 80423728 00420668  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042372C 0042066C  7C 08 02 A6 */	mflr r0
/* 80423730 00420670  7C 64 1B 78 */	mr r4, r3
/* 80423734 00420674  90 01 00 14 */	stw r0, 0x14(r1)
/* 80423738 00420678  39 84 00 08 */	addi r12, r4, 8
/* 8042373C 0042067C  80 63 00 04 */	lwz r3, 4(r3)
/* 80423740 00420680  4B C9 E3 E5 */	bl __ptmf_scall
/* 80423744 00420684  60 00 00 00 */	nop 
/* 80423748 00420688  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042374C 0042068C  7C 08 03 A6 */	mtlr r0
/* 80423750 00420690  38 21 00 10 */	addi r1, r1, 0x10
/* 80423754 00420694  4E 80 00 20 */	blr 
.endfn "invoke__17Delegate<6System>Fv"

.fn __sinit_system_cpp, local
/* 80423758 00420698  38 80 00 01 */	li r4, 1
/* 8042375C 0042069C  38 00 00 00 */	li r0, 0
/* 80423760 004206A0  38 6D 9A F0 */	addi r3, r13, sVerifyArg__6System@sda21
/* 80423764 004206A4  90 8D 9A F0 */	stw r4, sVerifyArg__6System@sda21(r13)
/* 80423768 004206A8  98 03 00 04 */	stb r0, 4(r3)
/* 8042376C 004206AC  4E 80 00 20 */	blr 
.endfn __sinit_system_cpp
