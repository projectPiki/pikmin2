.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80479740, local
	.asciz "TRK_Packet_Header \t    %ld bytes\n"
.endobj lbl_80479740
.balign 4
.obj lbl_80479764, local
	.asciz "TRK_CMD_ReadMemory     %ld bytes\n"
.endobj lbl_80479764
.balign 4
.obj lbl_80479788, local
	.asciz "TRK_CMD_WriteMemory    %ld bytes\n"
.endobj lbl_80479788
.balign 4
.obj lbl_804797AC, local
	.asciz "TRK_CMD_Connect \t    %ld bytes\n"
.endobj lbl_804797AC
.balign 4
.obj lbl_804797CC, local
	.asciz "TRK_CMD_ReplyAck\t    %ld bytes\n"
.endobj lbl_804797CC
.balign 4
.obj lbl_804797EC, local
	.asciz "TRK_CMD_ReadRegisters\t%ld bytes\n"
.endobj lbl_804797EC
.balign 4
.obj lbl_80479810, local
	.asciz "TestForPacket : FreeBuffer is  %ld\n"
.endobj lbl_80479810
.balign 4
.obj lbl_80479834, local
	.asciz "Reading payload %ld bytes\n"
.endobj lbl_80479834
.balign 4
.obj lbl_80479850, local
	.asciz "TestForPacket : Invalid size of packet hdr.size\n"
.endobj lbl_80479850
.balign 4
.obj lbl_80479884, local
	.asciz "TestForPacket : Invalid size of packet\n"
.endobj lbl_80479884
.balign 4
.obj lbl_804798AC, local
	.asciz "TestForPacket returning %ld\n"
.endobj lbl_804798AC

.section .bss  # 0x804EFC20 - 0x8051467C
.obj gTRKFramingState, local
	.skip 0x14
.endobj gTRKFramingState

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gTRKInputPendingPtr, global
	.skip 0x4
.endobj gTRKInputPendingPtr

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn TRKTerminateSerialHandler, global
/* 800BC0C8 000B9008  38 60 00 00 */	li r3, 0
/* 800BC0CC 000B900C  4E 80 00 20 */	blr 
.endfn TRKTerminateSerialHandler

.fn TRKInitializeSerialHandler, global
/* 800BC0D0 000B9010  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BC0D4 000B9014  7C 08 02 A6 */	mflr r0
/* 800BC0D8 000B9018  3C 60 80 4F */	lis r3, gTRKFramingState@ha
/* 800BC0DC 000B901C  3C 80 80 48 */	lis r4, lbl_80479740@ha
/* 800BC0E0 000B9020  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BC0E4 000B9024  38 C3 42 60 */	addi r6, r3, gTRKFramingState@l
/* 800BC0E8 000B9028  38 00 00 00 */	li r0, 0
/* 800BC0EC 000B902C  38 60 FF FF */	li r3, -1
/* 800BC0F0 000B9030  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800BC0F4 000B9034  3B E4 97 40 */	addi r31, r4, lbl_80479740@l
/* 800BC0F8 000B9038  38 9F 00 00 */	addi r4, r31, 0
/* 800BC0FC 000B903C  38 A0 00 40 */	li r5, 0x40
/* 800BC100 000B9040  90 66 00 00 */	stw r3, 0(r6)
/* 800BC104 000B9044  38 60 00 01 */	li r3, 1
/* 800BC108 000B9048  90 06 00 08 */	stw r0, 8(r6)
/* 800BC10C 000B904C  90 06 00 0C */	stw r0, 0xc(r6)
/* 800BC110 000B9050  4C C6 31 82 */	crclr 6
/* 800BC114 000B9054  48 00 54 35 */	bl MWTRACE
/* 800BC118 000B9058  38 9F 00 24 */	addi r4, r31, 0x24
/* 800BC11C 000B905C  38 60 00 01 */	li r3, 1
/* 800BC120 000B9060  38 A0 00 40 */	li r5, 0x40
/* 800BC124 000B9064  4C C6 31 82 */	crclr 6
/* 800BC128 000B9068  48 00 54 21 */	bl MWTRACE
/* 800BC12C 000B906C  38 9F 00 48 */	addi r4, r31, 0x48
/* 800BC130 000B9070  38 60 00 01 */	li r3, 1
/* 800BC134 000B9074  38 A0 00 40 */	li r5, 0x40
/* 800BC138 000B9078  4C C6 31 82 */	crclr 6
/* 800BC13C 000B907C  48 00 54 0D */	bl MWTRACE
/* 800BC140 000B9080  38 9F 00 6C */	addi r4, r31, 0x6c
/* 800BC144 000B9084  38 60 00 01 */	li r3, 1
/* 800BC148 000B9088  38 A0 00 40 */	li r5, 0x40
/* 800BC14C 000B908C  4C C6 31 82 */	crclr 6
/* 800BC150 000B9090  48 00 53 F9 */	bl MWTRACE
/* 800BC154 000B9094  38 9F 00 8C */	addi r4, r31, 0x8c
/* 800BC158 000B9098  38 60 00 01 */	li r3, 1
/* 800BC15C 000B909C  38 A0 00 40 */	li r5, 0x40
/* 800BC160 000B90A0  4C C6 31 82 */	crclr 6
/* 800BC164 000B90A4  48 00 53 E5 */	bl MWTRACE
/* 800BC168 000B90A8  38 9F 00 AC */	addi r4, r31, 0xac
/* 800BC16C 000B90AC  38 60 00 01 */	li r3, 1
/* 800BC170 000B90B0  38 A0 00 40 */	li r5, 0x40
/* 800BC174 000B90B4  4C C6 31 82 */	crclr 6
/* 800BC178 000B90B8  48 00 53 D1 */	bl MWTRACE
/* 800BC17C 000B90BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BC180 000B90C0  38 60 00 00 */	li r3, 0
/* 800BC184 000B90C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800BC188 000B90C8  7C 08 03 A6 */	mtlr r0
/* 800BC18C 000B90CC  38 21 00 10 */	addi r1, r1, 0x10
/* 800BC190 000B90D0  4E 80 00 20 */	blr 
.endfn TRKInitializeSerialHandler

.fn TRKProcessInput, global
/* 800BC194 000B90D4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800BC198 000B90D8  7C 08 02 A6 */	mflr r0
/* 800BC19C 000B90DC  38 80 00 02 */	li r4, 2
/* 800BC1A0 000B90E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 800BC1A4 000B90E4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800BC1A8 000B90E8  7C 7F 1B 78 */	mr r31, r3
/* 800BC1AC 000B90EC  38 61 00 08 */	addi r3, r1, 8
/* 800BC1B0 000B90F0  4B FF F2 FD */	bl TRKConstructEvent
/* 800BC1B4 000B90F4  3C 60 80 4F */	lis r3, gTRKFramingState@ha
/* 800BC1B8 000B90F8  38 00 FF FF */	li r0, -1
/* 800BC1BC 000B90FC  38 83 42 60 */	addi r4, r3, gTRKFramingState@l
/* 800BC1C0 000B9100  93 E1 00 10 */	stw r31, 0x10(r1)
/* 800BC1C4 000B9104  38 61 00 08 */	addi r3, r1, 8
/* 800BC1C8 000B9108  90 04 00 00 */	stw r0, 0(r4)
/* 800BC1CC 000B910C  4B FF F2 F9 */	bl TRKPostEvent
/* 800BC1D0 000B9110  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800BC1D4 000B9114  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800BC1D8 000B9118  7C 08 03 A6 */	mtlr r0
/* 800BC1DC 000B911C  38 21 00 20 */	addi r1, r1, 0x20
/* 800BC1E0 000B9120  4E 80 00 20 */	blr 
.endfn TRKProcessInput

.fn TRKGetInput, global
/* 800BC1E4 000B9124  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800BC1E8 000B9128  7C 08 02 A6 */	mflr r0
/* 800BC1EC 000B912C  90 01 00 24 */	stw r0, 0x24(r1)
/* 800BC1F0 000B9130  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800BC1F4 000B9134  48 00 00 51 */	bl TRKTestForPacket
/* 800BC1F8 000B9138  7C 7F 1B 78 */	mr r31, r3
/* 800BC1FC 000B913C  2C 1F FF FF */	cmpwi r31, -1
/* 800BC200 000B9140  41 82 00 30 */	beq .L_800BC230
/* 800BC204 000B9144  4B FF FD 5D */	bl TRKGetBuffer
/* 800BC208 000B9148  38 61 00 08 */	addi r3, r1, 8
/* 800BC20C 000B914C  38 80 00 02 */	li r4, 2
/* 800BC210 000B9150  4B FF F2 9D */	bl TRKConstructEvent
/* 800BC214 000B9154  3C 60 80 4F */	lis r3, gTRKFramingState@ha
/* 800BC218 000B9158  38 00 FF FF */	li r0, -1
/* 800BC21C 000B915C  38 83 42 60 */	addi r4, r3, gTRKFramingState@l
/* 800BC220 000B9160  93 E1 00 10 */	stw r31, 0x10(r1)
/* 800BC224 000B9164  38 61 00 08 */	addi r3, r1, 8
/* 800BC228 000B9168  90 04 00 00 */	stw r0, 0(r4)
/* 800BC22C 000B916C  4B FF F2 99 */	bl TRKPostEvent
.L_800BC230:
/* 800BC230 000B9170  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800BC234 000B9174  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800BC238 000B9178  7C 08 03 A6 */	mtlr r0
/* 800BC23C 000B917C  38 21 00 20 */	addi r1, r1, 0x20
/* 800BC240 000B9180  4E 80 00 20 */	blr 
.endfn TRKGetInput

.fn TRKTestForPacket, global
/* 800BC244 000B9184  94 21 F7 20 */	stwu r1, -0x8e0(r1)
/* 800BC248 000B9188  7C 08 02 A6 */	mflr r0
/* 800BC24C 000B918C  3C 60 80 48 */	lis r3, lbl_80479740@ha
/* 800BC250 000B9190  90 01 08 E4 */	stw r0, 0x8e4(r1)
/* 800BC254 000B9194  93 E1 08 DC */	stw r31, 0x8dc(r1)
/* 800BC258 000B9198  3B E3 97 40 */	addi r31, r3, lbl_80479740@l
/* 800BC25C 000B919C  93 C1 08 D8 */	stw r30, 0x8d8(r1)
/* 800BC260 000B91A0  48 00 43 F1 */	bl TRKPollUART
/* 800BC264 000B91A4  2C 03 00 00 */	cmpwi r3, 0
/* 800BC268 000B91A8  41 81 00 0C */	bgt .L_800BC274
/* 800BC26C 000B91AC  38 60 FF FF */	li r3, -1
/* 800BC270 000B91B0  48 00 00 F8 */	b .L_800BC368
.L_800BC274:
/* 800BC274 000B91B4  38 61 00 0C */	addi r3, r1, 0xc
/* 800BC278 000B91B8  38 81 00 08 */	addi r4, r1, 8
/* 800BC27C 000B91BC  4B FF FD 11 */	bl TRKGetFreeBuffer
/* 800BC280 000B91C0  7C 7E 1B 78 */	mr r30, r3
/* 800BC284 000B91C4  38 9F 00 D0 */	addi r4, r31, 0xd0
/* 800BC288 000B91C8  38 60 00 04 */	li r3, 4
/* 800BC28C 000B91CC  7F C5 F3 78 */	mr r5, r30
/* 800BC290 000B91D0  4C C6 31 82 */	crclr 6
/* 800BC294 000B91D4  48 00 52 B5 */	bl MWTRACE
/* 800BC298 000B91D8  80 61 00 08 */	lwz r3, 8(r1)
/* 800BC29C 000B91DC  38 80 00 00 */	li r4, 0
/* 800BC2A0 000B91E0  4B FF FB ED */	bl TRKSetBufferPosition
/* 800BC2A4 000B91E4  38 61 00 10 */	addi r3, r1, 0x10
/* 800BC2A8 000B91E8  38 80 00 40 */	li r4, 0x40
/* 800BC2AC 000B91EC  48 00 43 69 */	bl TRKReadUARTN
/* 800BC2B0 000B91F0  2C 03 00 00 */	cmpwi r3, 0
/* 800BC2B4 000B91F4  40 82 00 80 */	bne .L_800BC334
/* 800BC2B8 000B91F8  80 61 00 08 */	lwz r3, 8(r1)
/* 800BC2BC 000B91FC  38 81 00 10 */	addi r4, r1, 0x10
/* 800BC2C0 000B9200  38 A0 00 40 */	li r5, 0x40
/* 800BC2C4 000B9204  4B FF F9 35 */	bl TRKAppendBuffer_ui8
/* 800BC2C8 000B9208  80 61 00 10 */	lwz r3, 0x10(r1)
/* 800BC2CC 000B920C  83 C1 00 0C */	lwz r30, 0xc(r1)
/* 800BC2D0 000B9210  34 A3 FF C0 */	addic. r5, r3, -64
/* 800BC2D4 000B9214  40 81 00 7C */	ble .L_800BC350
/* 800BC2D8 000B9218  38 9F 00 F4 */	addi r4, r31, 0xf4
/* 800BC2DC 000B921C  38 60 00 01 */	li r3, 1
/* 800BC2E0 000B9220  4C C6 31 82 */	crclr 6
/* 800BC2E4 000B9224  48 00 52 65 */	bl MWTRACE
/* 800BC2E8 000B9228  80 81 00 10 */	lwz r4, 0x10(r1)
/* 800BC2EC 000B922C  38 61 00 50 */	addi r3, r1, 0x50
/* 800BC2F0 000B9230  38 84 FF C0 */	addi r4, r4, -64
/* 800BC2F4 000B9234  48 00 43 21 */	bl TRKReadUARTN
/* 800BC2F8 000B9238  2C 03 00 00 */	cmpwi r3, 0
/* 800BC2FC 000B923C  40 82 00 18 */	bne .L_800BC314
/* 800BC300 000B9240  80 61 00 08 */	lwz r3, 8(r1)
/* 800BC304 000B9244  38 81 00 50 */	addi r4, r1, 0x50
/* 800BC308 000B9248  80 A1 00 10 */	lwz r5, 0x10(r1)
/* 800BC30C 000B924C  4B FF F8 ED */	bl TRKAppendBuffer_ui8
/* 800BC310 000B9250  48 00 00 40 */	b .L_800BC350
.L_800BC314:
/* 800BC314 000B9254  38 9F 01 10 */	addi r4, r31, 0x110
/* 800BC318 000B9258  38 60 00 08 */	li r3, 8
/* 800BC31C 000B925C  4C C6 31 82 */	crclr 6
/* 800BC320 000B9260  48 00 52 29 */	bl MWTRACE
/* 800BC324 000B9264  7F C3 F3 78 */	mr r3, r30
/* 800BC328 000B9268  4B FF FB D5 */	bl TRKReleaseBuffer
/* 800BC32C 000B926C  3B C0 FF FF */	li r30, -1
/* 800BC330 000B9270  48 00 00 20 */	b .L_800BC350
.L_800BC334:
/* 800BC334 000B9274  38 9F 01 44 */	addi r4, r31, 0x144
/* 800BC338 000B9278  38 60 00 08 */	li r3, 8
/* 800BC33C 000B927C  4C C6 31 82 */	crclr 6
/* 800BC340 000B9280  48 00 52 09 */	bl MWTRACE
/* 800BC344 000B9284  7F C3 F3 78 */	mr r3, r30
/* 800BC348 000B9288  4B FF FB B5 */	bl TRKReleaseBuffer
/* 800BC34C 000B928C  3B C0 FF FF */	li r30, -1
.L_800BC350:
/* 800BC350 000B9290  7F C5 F3 78 */	mr r5, r30
/* 800BC354 000B9294  38 9F 01 6C */	addi r4, r31, 0x16c
/* 800BC358 000B9298  38 60 00 01 */	li r3, 1
/* 800BC35C 000B929C  4C C6 31 82 */	crclr 6
/* 800BC360 000B92A0  48 00 51 E9 */	bl MWTRACE
/* 800BC364 000B92A4  7F C3 F3 78 */	mr r3, r30
.L_800BC368:
/* 800BC368 000B92A8  80 01 08 E4 */	lwz r0, 0x8e4(r1)
/* 800BC36C 000B92AC  83 E1 08 DC */	lwz r31, 0x8dc(r1)
/* 800BC370 000B92B0  83 C1 08 D8 */	lwz r30, 0x8d8(r1)
/* 800BC374 000B92B4  7C 08 03 A6 */	mtlr r0
/* 800BC378 000B92B8  38 21 08 E0 */	addi r1, r1, 0x8e0
/* 800BC37C 000B92BC  4E 80 00 20 */	blr 
.endfn TRKTestForPacket
