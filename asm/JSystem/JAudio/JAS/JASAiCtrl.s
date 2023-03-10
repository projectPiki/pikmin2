.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj sMixFuncs__9JASDriver, local
	.4byte mixMonoTrack__9JASDriverFPsUlPFl_Ps
	.4byte mixMonoTrackWide__9JASDriverFPsUlPFl_Ps
	.4byte mixExtraTrack__9JASDriverFPsUlPFl_Ps
	.4byte mixInterleaveTrack__9JASDriverFPsUlPFl_Ps
.endobj sMixFuncs__9JASDriver
.balign 4
.obj lbl_804795F8, local
	.asciz "SFR-UPDATE"
.endobj lbl_804795F8
.balign 4
.obj lbl_80479604, local
	.asciz "kill DSP channel"
.endobj lbl_80479604
.balign 4
.obj lbl_80479618, local
	.asciz "DSP-MAIN"
.endobj lbl_80479618
.balign 4
.obj lbl_80479624, local
	.asciz "MONO-MIX"
.endobj lbl_80479624
.balign 4
.obj lbl_80479630, local
	.asciz "MONO(W)-MIX"
.endobj lbl_80479630

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj history$449, local
	.4byte 0x000F4240
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj history$449

.section .bss  # 0x804EFC20 - 0x8051467C
.lcomm sDmaDacBuffer__9JASDriver, 0xC, 4

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.obj sDspDacBufferCount__9JASDriver, local
	.byte 3
.endobj sDspDacBufferCount__9JASDriver
.balign 4
.obj sSubFrames__9JASDriver, local
	.4byte 0x00000007
.endobj sSubFrames__9JASDriver
.obj sMixMode__9JASDriver, local
	.4byte 0x00000002
.endobj sMixMode__9JASDriver
.obj sDacRate__9JASDriver, local
	.float 32028.5
.endobj sDacRate__9JASDriver

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj sDspDacBuffer__9JASDriver, local
	.skip 0x4
.endobj sDspDacBuffer__9JASDriver
.obj sDspDacWriteBuffer__9JASDriver, local
	.skip 0x4
.endobj sDspDacWriteBuffer__9JASDriver
.obj sDspDacReadBuffer__9JASDriver, local
	.skip 0x4
.endobj sDspDacReadBuffer__9JASDriver
.obj sDspStatus__9JASDriver, local
	.skip 0x4
.endobj sDspStatus__9JASDriver
.obj sDspDacCallback__9JASDriver, local
	.skip 0x4
.endobj sDspDacCallback__9JASDriver
.obj lastRspMadep__9JASDriver, local
	.skip 0x4
.endobj lastRspMadep__9JASDriver
.obj dacCallbackFunc__9JASDriver, local
	.skip 0x4
.endobj dacCallbackFunc__9JASDriver
.obj extMixCallback__9JASDriver, local
	.skip 0x4
.endobj extMixCallback__9JASDriver
.obj sOutputRate__9JASDriver, local
	.skip 0x4
.endobj sOutputRate__9JASDriver
.obj dacp$428, local
	.skip 0x4
.endobj dacp$428
.obj init$429, local
	.skip 0x1
.endobj init$429
.balign 4
.obj old_time$446, local
	.skip 0x4
.endobj old_time$446
.obj init$447, local
	.skip 0x1
.endobj init$447

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80516E80, local
	.float 1.1
.endobj lbl_80516E80
.balign 8
.obj lbl_80516E88, local
	.8byte 0x4330000000000000
.endobj lbl_80516E88
.balign 4
.obj lbl_80516E90, local
	.asciz "DSPMIX"
.endobj lbl_80516E90
.balign 4
.obj lbl_80516E98, local
	.asciz "MIXING"
.endobj lbl_80516E98

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn initAI__9JASDriverFPFv_v, global
/* 800A7968 000A48A8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800A796C 000A48AC  7C 08 02 A6 */	mflr r0
/* 800A7970 000A48B0  90 01 00 24 */	stw r0, 0x24(r1)
/* 800A7974 000A48B4  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 800A7978 000A48B8  7C 7F 1B 78 */	mr r31, r3
/* 800A797C 000A48BC  48 00 08 85 */	bl getDacSize__9JASDriverFv
/* 800A7980 000A48C0  3C 80 80 4F */	lis r4, sDmaDacBuffer__9JASDriver@ha
/* 800A7984 000A48C4  54 7C 08 3C */	slwi r28, r3, 1
/* 800A7988 000A48C8  3B C4 07 68 */	addi r30, r4, sDmaDacBuffer__9JASDriver@l
/* 800A798C 000A48CC  3B 60 00 00 */	li r27, 0
/* 800A7990 000A48D0  7F 9D E3 78 */	mr r29, r28
.L_800A7994:
/* 800A7994 000A48D4  80 8D 8A B8 */	lwz r4, JASDram@sda21(r13)
/* 800A7998 000A48D8  7F A3 EB 78 */	mr r3, r29
/* 800A799C 000A48DC  38 A0 00 20 */	li r5, 0x20
/* 800A79A0 000A48E0  4B F7 C6 A9 */	bl __nwa__FUlP7JKRHeapi
/* 800A79A4 000A48E4  90 7E 00 00 */	stw r3, 0(r30)
/* 800A79A8 000A48E8  7F 84 E3 78 */	mr r4, r28
/* 800A79AC 000A48EC  80 7E 00 00 */	lwz r3, 0(r30)
/* 800A79B0 000A48F0  4B FF E8 B5 */	bl bzero__7JASCalcFPvUl
/* 800A79B4 000A48F4  80 7E 00 00 */	lwz r3, 0(r30)
/* 800A79B8 000A48F8  7F 84 E3 78 */	mr r4, r28
/* 800A79BC 000A48FC  48 04 4D 8D */	bl DCStoreRange
/* 800A79C0 000A4900  3B 7B 00 01 */	addi r27, r27, 1
/* 800A79C4 000A4904  3B DE 00 04 */	addi r30, r30, 4
/* 800A79C8 000A4908  2C 1B 00 03 */	cmpwi r27, 3
/* 800A79CC 000A490C  41 80 FF C8 */	blt .L_800A7994
/* 800A79D0 000A4910  88 0D 81 28 */	lbz r0, sDspDacBufferCount__9JASDriver@sda21(r13)
/* 800A79D4 000A4914  38 A0 00 00 */	li r5, 0
/* 800A79D8 000A4918  80 8D 8A B8 */	lwz r4, JASDram@sda21(r13)
/* 800A79DC 000A491C  54 03 10 3A */	slwi r3, r0, 2
/* 800A79E0 000A4920  4B F7 C6 69 */	bl __nwa__FUlP7JKRHeapi
/* 800A79E4 000A4924  90 6D 8A E0 */	stw r3, sDspDacBuffer__9JASDriver@sda21(r13)
/* 800A79E8 000A4928  3B 60 00 00 */	li r27, 0
/* 800A79EC 000A492C  3B A0 00 00 */	li r29, 0
/* 800A79F0 000A4930  48 00 00 48 */	b .L_800A7A38
.L_800A79F4:
/* 800A79F4 000A4934  48 00 08 0D */	bl getDacSize__9JASDriverFv
/* 800A79F8 000A4938  80 8D 8A B8 */	lwz r4, JASDram@sda21(r13)
/* 800A79FC 000A493C  54 63 08 3C */	slwi r3, r3, 1
/* 800A7A00 000A4940  38 A0 00 20 */	li r5, 0x20
/* 800A7A04 000A4944  4B F7 C6 45 */	bl __nwa__FUlP7JKRHeapi
/* 800A7A08 000A4948  80 AD 8A E0 */	lwz r5, sDspDacBuffer__9JASDriver@sda21(r13)
/* 800A7A0C 000A494C  7F 84 E3 78 */	mr r4, r28
/* 800A7A10 000A4950  7C 65 E9 2E */	stwx r3, r5, r29
/* 800A7A14 000A4954  80 6D 8A E0 */	lwz r3, sDspDacBuffer__9JASDriver@sda21(r13)
/* 800A7A18 000A4958  7C 63 E8 2E */	lwzx r3, r3, r29
/* 800A7A1C 000A495C  4B FF E8 49 */	bl bzero__7JASCalcFPvUl
/* 800A7A20 000A4960  80 6D 8A E0 */	lwz r3, sDspDacBuffer__9JASDriver@sda21(r13)
/* 800A7A24 000A4964  7F 84 E3 78 */	mr r4, r28
/* 800A7A28 000A4968  7C 63 E8 2E */	lwzx r3, r3, r29
/* 800A7A2C 000A496C  48 04 4D 1D */	bl DCStoreRange
/* 800A7A30 000A4970  3B BD 00 04 */	addi r29, r29, 4
/* 800A7A34 000A4974  3B 7B 00 01 */	addi r27, r27, 1
.L_800A7A38:
/* 800A7A38 000A4978  88 6D 81 28 */	lbz r3, sDspDacBufferCount__9JASDriver@sda21(r13)
/* 800A7A3C 000A497C  7C 1B 18 00 */	cmpw r27, r3
/* 800A7A40 000A4980  41 80 FF B4 */	blt .L_800A79F4
/* 800A7A44 000A4984  38 00 00 00 */	li r0, 0
/* 800A7A48 000A4988  38 63 FF FF */	addi r3, r3, -1
/* 800A7A4C 000A498C  90 6D 8A E4 */	stw r3, sDspDacWriteBuffer__9JASDriver@sda21(r13)
/* 800A7A50 000A4990  38 60 00 00 */	li r3, 0
/* 800A7A54 000A4994  90 0D 8A E8 */	stw r0, sDspDacReadBuffer__9JASDriver@sda21(r13)
/* 800A7A58 000A4998  90 0D 8A EC */	stw r0, sDspStatus__9JASDriver@sda21(r13)
/* 800A7A5C 000A499C  48 04 F2 1D */	bl AIInit
/* 800A7A60 000A49A0  3C 60 80 4F */	lis r3, sDmaDacBuffer__9JASDriver@ha
/* 800A7A64 000A49A4  7F 84 E3 78 */	mr r4, r28
/* 800A7A68 000A49A8  38 63 07 68 */	addi r3, r3, sDmaDacBuffer__9JASDriver@l
/* 800A7A6C 000A49AC  80 63 00 08 */	lwz r3, 8(r3)
/* 800A7A70 000A49B0  48 04 EE 39 */	bl AIInitDMA
/* 800A7A74 000A49B4  80 6D 8B 00 */	lwz r3, sOutputRate__9JASDriver@sda21(r13)
/* 800A7A78 000A49B8  7C 03 00 D0 */	neg r0, r3
/* 800A7A7C 000A49BC  7C 00 1B 78 */	or r0, r0, r3
/* 800A7A80 000A49C0  54 03 0F FE */	srwi r3, r0, 0x1f
/* 800A7A84 000A49C4  48 04 EF C5 */	bl AISetDSPSampleRate
/* 800A7A88 000A49C8  7F E3 FB 78 */	mr r3, r31
/* 800A7A8C 000A49CC  48 04 ED D9 */	bl AIRegisterDMACallback
/* 800A7A90 000A49D0  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 800A7A94 000A49D4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800A7A98 000A49D8  7C 08 03 A6 */	mtlr r0
/* 800A7A9C 000A49DC  38 21 00 20 */	addi r1, r1, 0x20
/* 800A7AA0 000A49E0  4E 80 00 20 */	blr 
.endfn initAI__9JASDriverFPFv_v

.fn startDMA__9JASDriverFv, global
/* 800A7AA4 000A49E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A7AA8 000A49E8  7C 08 02 A6 */	mflr r0
/* 800A7AAC 000A49EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A7AB0 000A49F0  48 04 EE 81 */	bl AIStartDMA
/* 800A7AB4 000A49F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A7AB8 000A49F8  7C 08 03 A6 */	mtlr r0
/* 800A7ABC 000A49FC  38 21 00 10 */	addi r1, r1, 0x10
/* 800A7AC0 000A4A00  4E 80 00 20 */	blr 
.endfn startDMA__9JASDriverFv

.fn stopDMA__9JASDriverFv, global
/* 800A7AC4 000A4A04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A7AC8 000A4A08  7C 08 02 A6 */	mflr r0
/* 800A7ACC 000A4A0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A7AD0 000A4A10  48 04 EE 79 */	bl AIStopDMA
/* 800A7AD4 000A4A14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A7AD8 000A4A18  7C 08 03 A6 */	mtlr r0
/* 800A7ADC 000A4A1C  38 21 00 10 */	addi r1, r1, 0x10
/* 800A7AE0 000A4A20  4E 80 00 20 */	blr 
.endfn stopDMA__9JASDriverFv

.fn updateDac__9JASDriverFv, global
/* 800A7AE4 000A4A24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A7AE8 000A4A28  7C 08 02 A6 */	mflr r0
/* 800A7AEC 000A4A2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A7AF0 000A4A30  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800A7AF4 000A4A34  88 0D 8B 08 */	lbz r0, init$429@sda21(r13)
/* 800A7AF8 000A4A38  7C 00 07 75 */	extsb. r0, r0
/* 800A7AFC 000A4A3C  40 82 00 14 */	bne .L_800A7B10
/* 800A7B00 000A4A40  38 60 00 00 */	li r3, 0
/* 800A7B04 000A4A44  38 00 00 01 */	li r0, 1
/* 800A7B08 000A4A48  90 6D 8B 04 */	stw r3, dacp$428@sda21(r13)
/* 800A7B0C 000A4A4C  98 0D 8B 08 */	stb r0, init$429@sda21(r13)
.L_800A7B10:
/* 800A7B10 000A4A50  83 ED 8A F4 */	lwz r31, lastRspMadep__9JASDriver@sda21(r13)
/* 800A7B14 000A4A54  38 00 00 00 */	li r0, 0
/* 800A7B18 000A4A58  28 1F 00 00 */	cmplwi r31, 0
/* 800A7B1C 000A4A5C  90 0D 8A F4 */	stw r0, lastRspMadep__9JASDriver@sda21(r13)
/* 800A7B20 000A4A60  41 82 00 14 */	beq .L_800A7B34
/* 800A7B24 000A4A64  48 00 06 DD */	bl getDacSize__9JASDriverFv
/* 800A7B28 000A4A68  54 64 08 3C */	slwi r4, r3, 1
/* 800A7B2C 000A4A6C  7F E3 FB 78 */	mr r3, r31
/* 800A7B30 000A4A70  48 04 ED 79 */	bl AIInitDMA
.L_800A7B34:
/* 800A7B34 000A4A74  48 00 06 D9 */	bl getFrameSamples__9JASDriverFv
/* 800A7B38 000A4A78  80 0D 8B 04 */	lwz r0, dacp$428@sda21(r13)
/* 800A7B3C 000A4A7C  3C 80 80 4F */	lis r4, sDmaDacBuffer__9JASDriver@ha
/* 800A7B40 000A4A80  38 84 07 68 */	addi r4, r4, sDmaDacBuffer__9JASDriver@l
/* 800A7B44 000A4A84  7C 7F 1B 78 */	mr r31, r3
/* 800A7B48 000A4A88  54 00 10 3A */	slwi r0, r0, 2
/* 800A7B4C 000A4A8C  7C 64 00 2E */	lwzx r3, r4, r0
/* 800A7B50 000A4A90  7F E4 FB 78 */	mr r4, r31
/* 800A7B54 000A4A94  48 00 01 DD */	bl readDspBuffer__9JASDriverFPsUl
/* 800A7B58 000A4A98  80 0D 8A EC */	lwz r0, sDspStatus__9JASDriver@sda21(r13)
/* 800A7B5C 000A4A9C  2C 00 00 00 */	cmpwi r0, 0
/* 800A7B60 000A4AA0  40 82 00 08 */	bne .L_800A7B68
/* 800A7B64 000A4AA4  48 00 04 DD */	bl finishDSPFrame__9JASDriverFv
.L_800A7B68:
/* 800A7B68 000A4AA8  80 AD 8A FC */	lwz r5, extMixCallback__9JASDriver@sda21(r13)
/* 800A7B6C 000A4AAC  28 05 00 00 */	cmplwi r5, 0
/* 800A7B70 000A4AB0  41 82 00 38 */	beq .L_800A7BA8
/* 800A7B74 000A4AB4  80 0D 81 30 */	lwz r0, sMixMode__9JASDriver@sda21(r13)
/* 800A7B78 000A4AB8  3C 60 80 48 */	lis r3, sMixFuncs__9JASDriver@ha
/* 800A7B7C 000A4ABC  80 CD 8B 04 */	lwz r6, dacp$428@sda21(r13)
/* 800A7B80 000A4AC0  38 63 95 E8 */	addi r3, r3, sMixFuncs__9JASDriver@l
/* 800A7B84 000A4AC4  54 00 10 3A */	slwi r0, r0, 2
/* 800A7B88 000A4AC8  3C 80 80 4F */	lis r4, sDmaDacBuffer__9JASDriver@ha
/* 800A7B8C 000A4ACC  7D 83 00 2E */	lwzx r12, r3, r0
/* 800A7B90 000A4AD0  38 64 07 68 */	addi r3, r4, sDmaDacBuffer__9JASDriver@l
/* 800A7B94 000A4AD4  54 C0 10 3A */	slwi r0, r6, 2
/* 800A7B98 000A4AD8  7F E4 FB 78 */	mr r4, r31
/* 800A7B9C 000A4ADC  7C 63 00 2E */	lwzx r3, r3, r0
/* 800A7BA0 000A4AE0  7D 89 03 A6 */	mtctr r12
/* 800A7BA4 000A4AE4  4E 80 04 21 */	bctrl 
.L_800A7BA8:
/* 800A7BA8 000A4AE8  48 04 70 91 */	bl OSDisableInterrupts
/* 800A7BAC 000A4AEC  7C 7F 1B 78 */	mr r31, r3
/* 800A7BB0 000A4AF0  48 00 06 51 */	bl getDacSize__9JASDriverFv
/* 800A7BB4 000A4AF4  80 0D 8B 04 */	lwz r0, dacp$428@sda21(r13)
/* 800A7BB8 000A4AF8  3C A0 80 4F */	lis r5, sDmaDacBuffer__9JASDriver@ha
/* 800A7BBC 000A4AFC  54 64 08 3C */	slwi r4, r3, 1
/* 800A7BC0 000A4B00  54 00 10 3A */	slwi r0, r0, 2
/* 800A7BC4 000A4B04  38 65 07 68 */	addi r3, r5, sDmaDacBuffer__9JASDriver@l
/* 800A7BC8 000A4B08  7C 63 00 2E */	lwzx r3, r3, r0
/* 800A7BCC 000A4B0C  48 04 4B 7D */	bl DCStoreRange
/* 800A7BD0 000A4B10  7F E3 FB 78 */	mr r3, r31
/* 800A7BD4 000A4B14  48 04 70 8D */	bl OSRestoreInterrupts
/* 800A7BD8 000A4B18  80 AD 8B 04 */	lwz r5, dacp$428@sda21(r13)
/* 800A7BDC 000A4B1C  3C 60 80 4F */	lis r3, sDmaDacBuffer__9JASDriver@ha
/* 800A7BE0 000A4B20  38 63 07 68 */	addi r3, r3, sDmaDacBuffer__9JASDriver@l
/* 800A7BE4 000A4B24  54 A4 10 3A */	slwi r4, r5, 2
/* 800A7BE8 000A4B28  38 05 00 01 */	addi r0, r5, 1
/* 800A7BEC 000A4B2C  7C 63 20 2E */	lwzx r3, r3, r4
/* 800A7BF0 000A4B30  28 00 00 03 */	cmplwi r0, 3
/* 800A7BF4 000A4B34  90 0D 8B 04 */	stw r0, dacp$428@sda21(r13)
/* 800A7BF8 000A4B38  90 6D 8A F4 */	stw r3, lastRspMadep__9JASDriver@sda21(r13)
/* 800A7BFC 000A4B3C  41 80 00 0C */	blt .L_800A7C08
/* 800A7C00 000A4B40  38 00 00 00 */	li r0, 0
/* 800A7C04 000A4B44  90 0D 8B 04 */	stw r0, dacp$428@sda21(r13)
.L_800A7C08:
/* 800A7C08 000A4B48  80 0D 8A F8 */	lwz r0, dacCallbackFunc__9JASDriver@sda21(r13)
/* 800A7C0C 000A4B4C  28 00 00 00 */	cmplwi r0, 0
/* 800A7C10 000A4B50  41 82 00 1C */	beq .L_800A7C2C
/* 800A7C14 000A4B54  48 00 05 F9 */	bl getFrameSamples__9JASDriverFv
/* 800A7C18 000A4B58  81 8D 8A F8 */	lwz r12, dacCallbackFunc__9JASDriver@sda21(r13)
/* 800A7C1C 000A4B5C  7C 64 1B 78 */	mr r4, r3
/* 800A7C20 000A4B60  80 6D 8A F4 */	lwz r3, lastRspMadep__9JASDriver@sda21(r13)
/* 800A7C24 000A4B64  7D 89 03 A6 */	mtctr r12
/* 800A7C28 000A4B68  4E 80 04 21 */	bctrl 
.L_800A7C2C:
/* 800A7C2C 000A4B6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A7C30 000A4B70  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800A7C34 000A4B74  7C 08 03 A6 */	mtlr r0
/* 800A7C38 000A4B78  38 21 00 10 */	addi r1, r1, 0x10
/* 800A7C3C 000A4B7C  4E 80 00 20 */	blr 
.endfn updateDac__9JASDriverFv

.fn updateDSP__9JASDriverFv, global
/* 800A7C40 000A4B80  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800A7C44 000A4B84  7C 08 02 A6 */	mflr r0
/* 800A7C48 000A4B88  3C 80 80 48 */	lis r4, lbl_804795F8@ha
/* 800A7C4C 000A4B8C  38 60 00 03 */	li r3, 3
/* 800A7C50 000A4B90  90 01 00 24 */	stw r0, 0x24(r1)
/* 800A7C54 000A4B94  38 84 95 F8 */	addi r4, r4, lbl_804795F8@l
/* 800A7C58 000A4B98  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800A7C5C 000A4B9C  4B FF F8 79 */	bl probeStart__9JASKernelFlPc
/* 800A7C60 000A4BA0  4B FF D7 99 */	bl invalChannelAll__6JASDspFv
/* 800A7C64 000A4BA4  4B FF EB 41 */	bl execAllCommand__10JASPortCmdFv
/* 800A7C68 000A4BA8  4B FF CE 01 */	bl DSPSyncCallback__9JASDriverFv
/* 800A7C6C 000A4BAC  88 0D 8B 10 */	lbz r0, init$447@sda21(r13)
/* 800A7C70 000A4BB0  7C 00 07 75 */	extsb. r0, r0
/* 800A7C74 000A4BB4  40 82 00 14 */	bne .L_800A7C88
/* 800A7C78 000A4BB8  38 60 00 00 */	li r3, 0
/* 800A7C7C 000A4BBC  38 00 00 01 */	li r0, 1
/* 800A7C80 000A4BC0  90 6D 8B 0C */	stw r3, old_time$446@sda21(r13)
/* 800A7C84 000A4BC4  98 0D 8B 10 */	stb r0, init$447@sda21(r13)
.L_800A7C88:
/* 800A7C88 000A4BC8  48 04 AF 21 */	bl OSGetTick
/* 800A7C8C 000A4BCC  80 0D 8B 0C */	lwz r0, old_time$446@sda21(r13)
/* 800A7C90 000A4BD0  90 6D 8B 0C */	stw r3, old_time$446@sda21(r13)
/* 800A7C94 000A4BD4  7F E0 18 50 */	subf r31, r0, r3
/* 800A7C98 000A4BD8  48 00 05 61 */	bl getSubFrames__9JASDriverFv
/* 800A7C9C 000A4BDC  80 AD 8A A8 */	lwz r5, snIntCount__14JASAudioThread@sda21(r13)
/* 800A7CA0 000A4BE0  3C 80 80 4A */	lis r4, history$449@ha
/* 800A7CA4 000A4BE4  38 84 44 68 */	addi r4, r4, history$449@l
/* 800A7CA8 000A4BE8  7C 05 18 50 */	subf r0, r5, r3
/* 800A7CAC 000A4BEC  7C 03 28 40 */	cmplw r3, r5
/* 800A7CB0 000A4BF0  54 00 10 3A */	slwi r0, r0, 2
/* 800A7CB4 000A4BF4  7F E4 01 2E */	stwx r31, r4, r0
/* 800A7CB8 000A4BF8  41 82 00 54 */	beq .L_800A7D0C
/* 800A7CBC 000A4BFC  80 64 00 00 */	lwz r3, 0(r4)
/* 800A7CC0 000A4C00  3C 00 43 30 */	lis r0, 0x4330
/* 800A7CC4 000A4C04  90 01 00 08 */	stw r0, 8(r1)
/* 800A7CC8 000A4C08  C8 62 8B 28 */	lfd f3, lbl_80516E88@sda21(r2)
/* 800A7CCC 000A4C0C  90 61 00 0C */	stw r3, 0xc(r1)
/* 800A7CD0 000A4C10  C0 02 8B 20 */	lfs f0, lbl_80516E80@sda21(r2)
/* 800A7CD4 000A4C14  C8 21 00 08 */	lfd f1, 8(r1)
/* 800A7CD8 000A4C18  93 E1 00 14 */	stw r31, 0x14(r1)
/* 800A7CDC 000A4C1C  EC 41 18 28 */	fsubs f2, f1, f3
/* 800A7CE0 000A4C20  90 01 00 10 */	stw r0, 0x10(r1)
/* 800A7CE4 000A4C24  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 800A7CE8 000A4C28  EC 21 18 28 */	fsubs f1, f1, f3
/* 800A7CEC 000A4C2C  EC 22 08 24 */	fdivs f1, f2, f1
/* 800A7CF0 000A4C30  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A7CF4 000A4C34  40 80 00 18 */	bge .L_800A7D0C
/* 800A7CF8 000A4C38  3C 60 80 48 */	lis r3, lbl_80479604@ha
/* 800A7CFC 000A4C3C  38 63 96 04 */	addi r3, r3, lbl_80479604@l
/* 800A7D00 000A4C40  4C C6 31 82 */	crclr 6
/* 800A7D04 000A4C44  4B FF FB 69 */	bl JASReport__FPCce
/* 800A7D08 000A4C48  4B FF D4 99 */	bl killActiveChannel__13JASDSPChannelFv
.L_800A7D0C:
/* 800A7D0C 000A4C4C  4B FF D4 21 */	bl updateAll__13JASDSPChannelFv
/* 800A7D10 000A4C50  4B FF CD 31 */	bl subframeCallback__9JASDriverFv
/* 800A7D14 000A4C54  38 60 00 03 */	li r3, 3
/* 800A7D18 000A4C58  4B FF F8 1D */	bl probeFinish__9JASKernelFl
/* 800A7D1C 000A4C5C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800A7D20 000A4C60  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800A7D24 000A4C64  7C 08 03 A6 */	mtlr r0
/* 800A7D28 000A4C68  38 21 00 20 */	addi r1, r1, 0x20
/* 800A7D2C 000A4C6C  4E 80 00 20 */	blr 
.endfn updateDSP__9JASDriverFv

.fn readDspBuffer__9JASDriverFPsUl, global
/* 800A7D30 000A4C70  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800A7D34 000A4C74  7C 08 02 A6 */	mflr r0
/* 800A7D38 000A4C78  90 01 00 24 */	stw r0, 0x24(r1)
/* 800A7D3C 000A4C7C  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 800A7D40 000A4C80  7C 7E 1B 78 */	mr r30, r3
/* 800A7D44 000A4C84  7C 9F 23 78 */	mr r31, r4
/* 800A7D48 000A4C88  80 AD 8A E8 */	lwz r5, sDspDacReadBuffer__9JASDriver@sda21(r13)
/* 800A7D4C 000A4C8C  88 6D 81 28 */	lbz r3, sDspDacBufferCount__9JASDriver@sda21(r13)
/* 800A7D50 000A4C90  38 85 00 01 */	addi r4, r5, 1
/* 800A7D54 000A4C94  7C 04 18 00 */	cmpw r4, r3
/* 800A7D58 000A4C98  40 82 00 08 */	bne .L_800A7D60
/* 800A7D5C 000A4C9C  38 80 00 00 */	li r4, 0
.L_800A7D60:
/* 800A7D60 000A4CA0  80 0D 8A E4 */	lwz r0, sDspDacWriteBuffer__9JASDriver@sda21(r13)
/* 800A7D64 000A4CA4  7C 04 00 00 */	cmpw r4, r0
/* 800A7D68 000A4CA8  40 82 02 88 */	bne .L_800A7FF0
/* 800A7D6C 000A4CAC  28 03 00 03 */	cmplwi r3, 3
/* 800A7D70 000A4CB0  41 80 02 80 */	blt .L_800A7FF0
/* 800A7D74 000A4CB4  80 8D 8A E0 */	lwz r4, sDspDacBuffer__9JASDriver@sda21(r13)
/* 800A7D78 000A4CB8  54 A3 10 3A */	slwi r3, r5, 2
/* 800A7D7C 000A4CBC  28 1F 00 00 */	cmplwi r31, 0
/* 800A7D80 000A4CC0  57 E0 00 3C */	rlwinm r0, r31, 0, 0, 0x1e
/* 800A7D84 000A4CC4  7C 64 18 2E */	lwzx r3, r4, r3
/* 800A7D88 000A4CC8  57 E4 08 3C */	slwi r4, r31, 1
/* 800A7D8C 000A4CCC  38 C0 00 00 */	li r6, 0
/* 800A7D90 000A4CD0  38 63 FF FE */	addi r3, r3, -2
/* 800A7D94 000A4CD4  7C 03 02 AE */	lhax r0, r3, r0
/* 800A7D98 000A4CD8  7C A3 22 AE */	lhax r5, r3, r4
/* 800A7D9C 000A4CDC  40 81 01 20 */	ble .L_800A7EBC
/* 800A7DA0 000A4CE0  28 1F 00 08 */	cmplwi r31, 8
/* 800A7DA4 000A4CE4  39 1F FF F8 */	addi r8, r31, -8
/* 800A7DA8 000A4CE8  40 81 00 E4 */	ble .L_800A7E8C
/* 800A7DAC 000A4CEC  38 E8 00 07 */	addi r7, r8, 7
/* 800A7DB0 000A4CF0  38 60 00 00 */	li r3, 0
/* 800A7DB4 000A4CF4  54 E7 E8 FE */	srwi r7, r7, 3
/* 800A7DB8 000A4CF8  7C E9 03 A6 */	mtctr r7
/* 800A7DBC 000A4CFC  28 08 00 00 */	cmplwi r8, 0
/* 800A7DC0 000A4D00  40 81 00 CC */	ble .L_800A7E8C
.L_800A7DC4:
/* 800A7DC4 000A4D04  80 ED 8A E8 */	lwz r7, sDspDacReadBuffer__9JASDriver@sda21(r13)
/* 800A7DC8 000A4D08  3B 83 00 02 */	addi r28, r3, 2
/* 800A7DCC 000A4D0C  81 0D 8A E0 */	lwz r8, sDspDacBuffer__9JASDriver@sda21(r13)
/* 800A7DD0 000A4D10  39 83 00 04 */	addi r12, r3, 4
/* 800A7DD4 000A4D14  54 E7 10 3A */	slwi r7, r7, 2
/* 800A7DD8 000A4D18  39 63 00 06 */	addi r11, r3, 6
/* 800A7DDC 000A4D1C  7C E8 38 2E */	lwzx r7, r8, r7
/* 800A7DE0 000A4D20  39 43 00 08 */	addi r10, r3, 8
/* 800A7DE4 000A4D24  39 23 00 0A */	addi r9, r3, 0xa
/* 800A7DE8 000A4D28  39 03 00 0C */	addi r8, r3, 0xc
/* 800A7DEC 000A4D2C  7C 07 1B 2E */	sthx r0, r7, r3
/* 800A7DF0 000A4D30  38 E3 00 0E */	addi r7, r3, 0xe
/* 800A7DF4 000A4D34  38 63 00 10 */	addi r3, r3, 0x10
/* 800A7DF8 000A4D38  38 C6 00 08 */	addi r6, r6, 8
/* 800A7DFC 000A4D3C  83 AD 8A E8 */	lwz r29, sDspDacReadBuffer__9JASDriver@sda21(r13)
/* 800A7E00 000A4D40  83 6D 8A E0 */	lwz r27, sDspDacBuffer__9JASDriver@sda21(r13)
/* 800A7E04 000A4D44  57 BD 10 3A */	slwi r29, r29, 2
/* 800A7E08 000A4D48  7F BB E8 2E */	lwzx r29, r27, r29
/* 800A7E0C 000A4D4C  7C 1D E3 2E */	sthx r0, r29, r28
/* 800A7E10 000A4D50  83 8D 8A E8 */	lwz r28, sDspDacReadBuffer__9JASDriver@sda21(r13)
/* 800A7E14 000A4D54  83 AD 8A E0 */	lwz r29, sDspDacBuffer__9JASDriver@sda21(r13)
/* 800A7E18 000A4D58  57 9C 10 3A */	slwi r28, r28, 2
/* 800A7E1C 000A4D5C  7F 9D E0 2E */	lwzx r28, r29, r28
/* 800A7E20 000A4D60  7C 1C 63 2E */	sthx r0, r28, r12
/* 800A7E24 000A4D64  81 8D 8A E8 */	lwz r12, sDspDacReadBuffer__9JASDriver@sda21(r13)
/* 800A7E28 000A4D68  83 8D 8A E0 */	lwz r28, sDspDacBuffer__9JASDriver@sda21(r13)
/* 800A7E2C 000A4D6C  55 8C 10 3A */	slwi r12, r12, 2
/* 800A7E30 000A4D70  7D 9C 60 2E */	lwzx r12, r28, r12
/* 800A7E34 000A4D74  7C 0C 5B 2E */	sthx r0, r12, r11
/* 800A7E38 000A4D78  81 6D 8A E8 */	lwz r11, sDspDacReadBuffer__9JASDriver@sda21(r13)
/* 800A7E3C 000A4D7C  81 8D 8A E0 */	lwz r12, sDspDacBuffer__9JASDriver@sda21(r13)
/* 800A7E40 000A4D80  55 6B 10 3A */	slwi r11, r11, 2
/* 800A7E44 000A4D84  7D 6C 58 2E */	lwzx r11, r12, r11
/* 800A7E48 000A4D88  7C 0B 53 2E */	sthx r0, r11, r10
/* 800A7E4C 000A4D8C  81 4D 8A E8 */	lwz r10, sDspDacReadBuffer__9JASDriver@sda21(r13)
/* 800A7E50 000A4D90  81 6D 8A E0 */	lwz r11, sDspDacBuffer__9JASDriver@sda21(r13)
/* 800A7E54 000A4D94  55 4A 10 3A */	slwi r10, r10, 2
/* 800A7E58 000A4D98  7D 4B 50 2E */	lwzx r10, r11, r10
/* 800A7E5C 000A4D9C  7C 0A 4B 2E */	sthx r0, r10, r9
/* 800A7E60 000A4DA0  81 2D 8A E8 */	lwz r9, sDspDacReadBuffer__9JASDriver@sda21(r13)
/* 800A7E64 000A4DA4  81 4D 8A E0 */	lwz r10, sDspDacBuffer__9JASDriver@sda21(r13)
/* 800A7E68 000A4DA8  55 29 10 3A */	slwi r9, r9, 2
/* 800A7E6C 000A4DAC  7D 2A 48 2E */	lwzx r9, r10, r9
/* 800A7E70 000A4DB0  7C 09 43 2E */	sthx r0, r9, r8
/* 800A7E74 000A4DB4  81 0D 8A E8 */	lwz r8, sDspDacReadBuffer__9JASDriver@sda21(r13)
/* 800A7E78 000A4DB8  81 2D 8A E0 */	lwz r9, sDspDacBuffer__9JASDriver@sda21(r13)
/* 800A7E7C 000A4DBC  55 08 10 3A */	slwi r8, r8, 2
/* 800A7E80 000A4DC0  7D 09 40 2E */	lwzx r8, r9, r8
/* 800A7E84 000A4DC4  7C 08 3B 2E */	sthx r0, r8, r7
/* 800A7E88 000A4DC8  42 00 FF 3C */	bdnz .L_800A7DC4
.L_800A7E8C:
/* 800A7E8C 000A4DCC  7C 66 F8 50 */	subf r3, r6, r31
/* 800A7E90 000A4DD0  54 C7 08 3C */	slwi r7, r6, 1
/* 800A7E94 000A4DD4  7C 69 03 A6 */	mtctr r3
/* 800A7E98 000A4DD8  7C 06 F8 40 */	cmplw r6, r31
/* 800A7E9C 000A4DDC  40 80 00 20 */	bge .L_800A7EBC
.L_800A7EA0:
/* 800A7EA0 000A4DE0  80 6D 8A E8 */	lwz r3, sDspDacReadBuffer__9JASDriver@sda21(r13)
/* 800A7EA4 000A4DE4  80 CD 8A E0 */	lwz r6, sDspDacBuffer__9JASDriver@sda21(r13)
/* 800A7EA8 000A4DE8  54 63 10 3A */	slwi r3, r3, 2
/* 800A7EAC 000A4DEC  7C 66 18 2E */	lwzx r3, r6, r3
/* 800A7EB0 000A4DF0  7C 03 3B 2E */	sthx r0, r3, r7
/* 800A7EB4 000A4DF4  38 E7 00 02 */	addi r7, r7, 2
/* 800A7EB8 000A4DF8  42 00 FF E8 */	bdnz .L_800A7EA0
.L_800A7EBC:
/* 800A7EBC 000A4DFC  7C 1F 20 40 */	cmplw r31, r4
/* 800A7EC0 000A4E00  7F E6 FB 78 */	mr r6, r31
/* 800A7EC4 000A4E04  40 80 01 44 */	bge .L_800A8008
/* 800A7EC8 000A4E08  7C 1F 20 50 */	subf r0, r31, r4
/* 800A7ECC 000A4E0C  38 E4 FF F8 */	addi r7, r4, -8
/* 800A7ED0 000A4E10  28 00 00 08 */	cmplwi r0, 8
/* 800A7ED4 000A4E14  40 81 00 E8 */	ble .L_800A7FBC
/* 800A7ED8 000A4E18  38 07 00 07 */	addi r0, r7, 7
/* 800A7EDC 000A4E1C  7C 83 23 78 */	mr r3, r4
/* 800A7EE0 000A4E20  7C 1F 00 50 */	subf r0, r31, r0
/* 800A7EE4 000A4E24  54 00 E8 FE */	srwi r0, r0, 3
/* 800A7EE8 000A4E28  7C 09 03 A6 */	mtctr r0
/* 800A7EEC 000A4E2C  7C 1F 38 40 */	cmplw r31, r7
/* 800A7EF0 000A4E30  40 80 00 CC */	bge .L_800A7FBC
.L_800A7EF4:
/* 800A7EF4 000A4E34  80 0D 8A E8 */	lwz r0, sDspDacReadBuffer__9JASDriver@sda21(r13)
/* 800A7EF8 000A4E38  39 83 00 02 */	addi r12, r3, 2
/* 800A7EFC 000A4E3C  80 ED 8A E0 */	lwz r7, sDspDacBuffer__9JASDriver@sda21(r13)
/* 800A7F00 000A4E40  39 63 00 04 */	addi r11, r3, 4
/* 800A7F04 000A4E44  54 00 10 3A */	slwi r0, r0, 2
/* 800A7F08 000A4E48  39 43 00 06 */	addi r10, r3, 6
/* 800A7F0C 000A4E4C  7F 87 00 2E */	lwzx r28, r7, r0
/* 800A7F10 000A4E50  39 23 00 08 */	addi r9, r3, 8
/* 800A7F14 000A4E54  39 03 00 0A */	addi r8, r3, 0xa
/* 800A7F18 000A4E58  38 E3 00 0C */	addi r7, r3, 0xc
/* 800A7F1C 000A4E5C  7C BC 1B 2E */	sthx r5, r28, r3
/* 800A7F20 000A4E60  38 03 00 0E */	addi r0, r3, 0xe
/* 800A7F24 000A4E64  38 63 00 10 */	addi r3, r3, 0x10
/* 800A7F28 000A4E68  38 C6 00 08 */	addi r6, r6, 8
/* 800A7F2C 000A4E6C  83 AD 8A E8 */	lwz r29, sDspDacReadBuffer__9JASDriver@sda21(r13)
/* 800A7F30 000A4E70  83 8D 8A E0 */	lwz r28, sDspDacBuffer__9JASDriver@sda21(r13)
/* 800A7F34 000A4E74  57 BD 10 3A */	slwi r29, r29, 2
/* 800A7F38 000A4E78  7F BC E8 2E */	lwzx r29, r28, r29
/* 800A7F3C 000A4E7C  7C BD 63 2E */	sthx r5, r29, r12
/* 800A7F40 000A4E80  81 8D 8A E8 */	lwz r12, sDspDacReadBuffer__9JASDriver@sda21(r13)
/* 800A7F44 000A4E84  83 AD 8A E0 */	lwz r29, sDspDacBuffer__9JASDriver@sda21(r13)
/* 800A7F48 000A4E88  55 8C 10 3A */	slwi r12, r12, 2
/* 800A7F4C 000A4E8C  7D 9D 60 2E */	lwzx r12, r29, r12
/* 800A7F50 000A4E90  7C AC 5B 2E */	sthx r5, r12, r11
/* 800A7F54 000A4E94  81 6D 8A E8 */	lwz r11, sDspDacReadBuffer__9JASDriver@sda21(r13)
/* 800A7F58 000A4E98  81 8D 8A E0 */	lwz r12, sDspDacBuffer__9JASDriver@sda21(r13)
/* 800A7F5C 000A4E9C  55 6B 10 3A */	slwi r11, r11, 2
/* 800A7F60 000A4EA0  7D 6C 58 2E */	lwzx r11, r12, r11
/* 800A7F64 000A4EA4  7C AB 53 2E */	sthx r5, r11, r10
/* 800A7F68 000A4EA8  81 4D 8A E8 */	lwz r10, sDspDacReadBuffer__9JASDriver@sda21(r13)
/* 800A7F6C 000A4EAC  81 6D 8A E0 */	lwz r11, sDspDacBuffer__9JASDriver@sda21(r13)
/* 800A7F70 000A4EB0  55 4A 10 3A */	slwi r10, r10, 2
/* 800A7F74 000A4EB4  7D 4B 50 2E */	lwzx r10, r11, r10
/* 800A7F78 000A4EB8  7C AA 4B 2E */	sthx r5, r10, r9
/* 800A7F7C 000A4EBC  81 2D 8A E8 */	lwz r9, sDspDacReadBuffer__9JASDriver@sda21(r13)
/* 800A7F80 000A4EC0  81 4D 8A E0 */	lwz r10, sDspDacBuffer__9JASDriver@sda21(r13)
/* 800A7F84 000A4EC4  55 29 10 3A */	slwi r9, r9, 2
/* 800A7F88 000A4EC8  7D 2A 48 2E */	lwzx r9, r10, r9
/* 800A7F8C 000A4ECC  7C A9 43 2E */	sthx r5, r9, r8
/* 800A7F90 000A4ED0  81 0D 8A E8 */	lwz r8, sDspDacReadBuffer__9JASDriver@sda21(r13)
/* 800A7F94 000A4ED4  81 2D 8A E0 */	lwz r9, sDspDacBuffer__9JASDriver@sda21(r13)
/* 800A7F98 000A4ED8  55 08 10 3A */	slwi r8, r8, 2
/* 800A7F9C 000A4EDC  7D 09 40 2E */	lwzx r8, r9, r8
/* 800A7FA0 000A4EE0  7C A8 3B 2E */	sthx r5, r8, r7
/* 800A7FA4 000A4EE4  80 ED 8A E8 */	lwz r7, sDspDacReadBuffer__9JASDriver@sda21(r13)
/* 800A7FA8 000A4EE8  81 0D 8A E0 */	lwz r8, sDspDacBuffer__9JASDriver@sda21(r13)
/* 800A7FAC 000A4EEC  54 E7 10 3A */	slwi r7, r7, 2
/* 800A7FB0 000A4EF0  7C E8 38 2E */	lwzx r7, r8, r7
/* 800A7FB4 000A4EF4  7C A7 03 2E */	sthx r5, r7, r0
/* 800A7FB8 000A4EF8  42 00 FF 3C */	bdnz .L_800A7EF4
.L_800A7FBC:
/* 800A7FBC 000A4EFC  7C 06 20 50 */	subf r0, r6, r4
/* 800A7FC0 000A4F00  54 C7 08 3C */	slwi r7, r6, 1
/* 800A7FC4 000A4F04  7C 09 03 A6 */	mtctr r0
/* 800A7FC8 000A4F08  7C 06 20 40 */	cmplw r6, r4
/* 800A7FCC 000A4F0C  40 80 00 3C */	bge .L_800A8008
.L_800A7FD0:
/* 800A7FD0 000A4F10  80 0D 8A E8 */	lwz r0, sDspDacReadBuffer__9JASDriver@sda21(r13)
/* 800A7FD4 000A4F14  80 6D 8A E0 */	lwz r3, sDspDacBuffer__9JASDriver@sda21(r13)
/* 800A7FD8 000A4F18  54 00 10 3A */	slwi r0, r0, 2
/* 800A7FDC 000A4F1C  7C 63 00 2E */	lwzx r3, r3, r0
/* 800A7FE0 000A4F20  7C A3 3B 2E */	sthx r5, r3, r7
/* 800A7FE4 000A4F24  38 E7 00 02 */	addi r7, r7, 2
/* 800A7FE8 000A4F28  42 00 FF E8 */	bdnz .L_800A7FD0
/* 800A7FEC 000A4F2C  48 00 00 1C */	b .L_800A8008
.L_800A7FF0:
/* 800A7FF0 000A4F30  90 8D 8A E8 */	stw r4, sDspDacReadBuffer__9JASDriver@sda21(r13)
/* 800A7FF4 000A4F34  54 80 10 3A */	slwi r0, r4, 2
/* 800A7FF8 000A4F38  80 6D 8A E0 */	lwz r3, sDspDacBuffer__9JASDriver@sda21(r13)
/* 800A7FFC 000A4F3C  57 E4 10 3A */	slwi r4, r31, 2
/* 800A8000 000A4F40  7C 63 00 2E */	lwzx r3, r3, r0
/* 800A8004 000A4F44  48 04 46 E9 */	bl DCInvalidateRange
.L_800A8008:
/* 800A8008 000A4F48  80 6D 8A E8 */	lwz r3, sDspDacReadBuffer__9JASDriver@sda21(r13)
/* 800A800C 000A4F4C  57 E0 08 3C */	slwi r0, r31, 1
/* 800A8010 000A4F50  80 8D 8A E0 */	lwz r4, sDspDacBuffer__9JASDriver@sda21(r13)
/* 800A8014 000A4F54  7F C5 F3 78 */	mr r5, r30
/* 800A8018 000A4F58  54 63 10 3A */	slwi r3, r3, 2
/* 800A801C 000A4F5C  7F E6 FB 78 */	mr r6, r31
/* 800A8020 000A4F60  7C 84 18 2E */	lwzx r4, r4, r3
/* 800A8024 000A4F64  7C 64 02 14 */	add r3, r4, r0
/* 800A8028 000A4F68  4B FF DE 95 */	bl imixcopy__7JASCalcFPCsPCsPsUl
/* 800A802C 000A4F6C  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 800A8030 000A4F70  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800A8034 000A4F74  7C 08 03 A6 */	mtlr r0
/* 800A8038 000A4F78  38 21 00 20 */	addi r1, r1, 0x20
/* 800A803C 000A4F7C  4E 80 00 20 */	blr 
.endfn readDspBuffer__9JASDriverFPsUl

.fn finishDSPFrame__9JASDriverFv, global
/* 800A8040 000A4F80  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 800A8044 000A4F84  7C 08 02 A6 */	mflr r0
/* 800A8048 000A4F88  3C 80 80 48 */	lis r4, sMixFuncs__9JASDriver@ha
/* 800A804C 000A4F8C  90 01 00 34 */	stw r0, 0x34(r1)
/* 800A8050 000A4F90  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 800A8054 000A4F94  3B E4 95 E8 */	addi r31, r4, sMixFuncs__9JASDriver@l
/* 800A8058 000A4F98  93 C1 00 28 */	stw r30, 0x28(r1)
/* 800A805C 000A4F9C  93 A1 00 24 */	stw r29, 0x24(r1)
/* 800A8060 000A4FA0  80 6D 8A E4 */	lwz r3, sDspDacWriteBuffer__9JASDriver@sda21(r13)
/* 800A8064 000A4FA4  88 0D 81 28 */	lbz r0, sDspDacBufferCount__9JASDriver@sda21(r13)
/* 800A8068 000A4FA8  38 63 00 01 */	addi r3, r3, 1
/* 800A806C 000A4FAC  7C 03 00 00 */	cmpw r3, r0
/* 800A8070 000A4FB0  40 82 00 08 */	bne .L_800A8078
/* 800A8074 000A4FB4  38 60 00 00 */	li r3, 0
.L_800A8078:
/* 800A8078 000A4FB8  80 0D 8A E8 */	lwz r0, sDspDacReadBuffer__9JASDriver@sda21(r13)
/* 800A807C 000A4FBC  7C 03 00 00 */	cmpw r3, r0
/* 800A8080 000A4FC0  40 82 00 10 */	bne .L_800A8090
/* 800A8084 000A4FC4  38 00 00 00 */	li r0, 0
/* 800A8088 000A4FC8  90 0D 8A EC */	stw r0, sDspStatus__9JASDriver@sda21(r13)
/* 800A808C 000A4FCC  48 00 01 3C */	b .L_800A81C8
.L_800A8090:
/* 800A8090 000A4FD0  90 6D 8A E4 */	stw r3, sDspDacWriteBuffer__9JASDriver@sda21(r13)
/* 800A8094 000A4FD4  48 00 01 65 */	bl getSubFrames__9JASDriverFv
/* 800A8098 000A4FD8  90 6D 8A A8 */	stw r3, snIntCount__14JASAudioThread@sda21(r13)
/* 800A809C 000A4FDC  38 9F 00 30 */	addi r4, r31, 0x30
/* 800A80A0 000A4FE0  38 60 00 07 */	li r3, 7
/* 800A80A4 000A4FE4  4B FF F4 31 */	bl probeStart__9JASKernelFlPc
/* 800A80A8 000A4FE8  48 00 01 65 */	bl getFrameSamples__9JASDriverFv
/* 800A80AC 000A4FEC  80 0D 8A E4 */	lwz r0, sDspDacWriteBuffer__9JASDriver@sda21(r13)
/* 800A80B0 000A4FF0  7C 7E 1B 78 */	mr r30, r3
/* 800A80B4 000A4FF4  80 8D 8A E0 */	lwz r4, sDspDacBuffer__9JASDriver@sda21(r13)
/* 800A80B8 000A4FF8  54 00 10 3A */	slwi r0, r0, 2
/* 800A80BC 000A4FFC  7F A4 00 2E */	lwzx r29, r4, r0
/* 800A80C0 000A5000  48 00 01 39 */	bl getSubFrames__9JASDriverFv
/* 800A80C4 000A5004  57 C0 08 3C */	slwi r0, r30, 1
/* 800A80C8 000A5008  7F A4 EB 78 */	mr r4, r29
/* 800A80CC 000A500C  7C BD 02 14 */	add r5, r29, r0
/* 800A80D0 000A5010  4B FF D2 CD */	bl syncFrame__6JASDspFUlUlUl
/* 800A80D4 000A5014  38 00 00 01 */	li r0, 1
/* 800A80D8 000A5018  38 9F 00 10 */	addi r4, r31, 0x10
/* 800A80DC 000A501C  90 0D 8A EC */	stw r0, sDspStatus__9JASDriver@sda21(r13)
/* 800A80E0 000A5020  38 60 00 03 */	li r3, 3
/* 800A80E4 000A5024  4B FF F3 F1 */	bl probeStart__9JASKernelFlPc
/* 800A80E8 000A5028  4B FF D3 11 */	bl invalChannelAll__6JASDspFv
/* 800A80EC 000A502C  4B FF E6 B9 */	bl execAllCommand__10JASPortCmdFv
/* 800A80F0 000A5030  4B FF C9 79 */	bl DSPSyncCallback__9JASDriverFv
/* 800A80F4 000A5034  88 0D 8B 10 */	lbz r0, init$447@sda21(r13)
/* 800A80F8 000A5038  7C 00 07 75 */	extsb. r0, r0
/* 800A80FC 000A503C  40 82 00 14 */	bne .L_800A8110
/* 800A8100 000A5040  38 60 00 00 */	li r3, 0
/* 800A8104 000A5044  38 00 00 01 */	li r0, 1
/* 800A8108 000A5048  90 6D 8B 0C */	stw r3, old_time$446@sda21(r13)
/* 800A810C 000A504C  98 0D 8B 10 */	stb r0, init$447@sda21(r13)
.L_800A8110:
/* 800A8110 000A5050  48 04 AA 99 */	bl OSGetTick
/* 800A8114 000A5054  80 0D 8B 0C */	lwz r0, old_time$446@sda21(r13)
/* 800A8118 000A5058  90 6D 8B 0C */	stw r3, old_time$446@sda21(r13)
/* 800A811C 000A505C  7F A0 18 50 */	subf r29, r0, r3
/* 800A8120 000A5060  48 00 00 D9 */	bl getSubFrames__9JASDriverFv
/* 800A8124 000A5064  80 AD 8A A8 */	lwz r5, snIntCount__14JASAudioThread@sda21(r13)
/* 800A8128 000A5068  3C 80 80 4A */	lis r4, history$449@ha
/* 800A812C 000A506C  38 84 44 68 */	addi r4, r4, history$449@l
/* 800A8130 000A5070  7C 05 18 50 */	subf r0, r5, r3
/* 800A8134 000A5074  7C 03 28 40 */	cmplw r3, r5
/* 800A8138 000A5078  54 00 10 3A */	slwi r0, r0, 2
/* 800A813C 000A507C  7F A4 01 2E */	stwx r29, r4, r0
/* 800A8140 000A5080  41 82 00 50 */	beq .L_800A8190
/* 800A8144 000A5084  80 64 00 00 */	lwz r3, 0(r4)
/* 800A8148 000A5088  3C 00 43 30 */	lis r0, 0x4330
/* 800A814C 000A508C  90 01 00 08 */	stw r0, 8(r1)
/* 800A8150 000A5090  C8 62 8B 28 */	lfd f3, lbl_80516E88@sda21(r2)
/* 800A8154 000A5094  90 61 00 0C */	stw r3, 0xc(r1)
/* 800A8158 000A5098  C0 02 8B 20 */	lfs f0, lbl_80516E80@sda21(r2)
/* 800A815C 000A509C  C8 21 00 08 */	lfd f1, 8(r1)
/* 800A8160 000A50A0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 800A8164 000A50A4  EC 41 18 28 */	fsubs f2, f1, f3
/* 800A8168 000A50A8  90 01 00 10 */	stw r0, 0x10(r1)
/* 800A816C 000A50AC  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 800A8170 000A50B0  EC 21 18 28 */	fsubs f1, f1, f3
/* 800A8174 000A50B4  EC 22 08 24 */	fdivs f1, f2, f1
/* 800A8178 000A50B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A817C 000A50BC  40 80 00 14 */	bge .L_800A8190
/* 800A8180 000A50C0  38 7F 00 1C */	addi r3, r31, 0x1c
/* 800A8184 000A50C4  4C C6 31 82 */	crclr 6
/* 800A8188 000A50C8  4B FF F6 E5 */	bl JASReport__FPCce
/* 800A818C 000A50CC  4B FF D0 15 */	bl killActiveChannel__13JASDSPChannelFv
.L_800A8190:
/* 800A8190 000A50D0  4B FF CF 9D */	bl updateAll__13JASDSPChannelFv
/* 800A8194 000A50D4  4B FF C8 AD */	bl subframeCallback__9JASDriverFv
/* 800A8198 000A50D8  38 60 00 03 */	li r3, 3
/* 800A819C 000A50DC  4B FF F3 99 */	bl probeFinish__9JASKernelFl
/* 800A81A0 000A50E0  81 8D 8A F0 */	lwz r12, sDspDacCallback__9JASDriver@sda21(r13)
/* 800A81A4 000A50E4  28 0C 00 00 */	cmplwi r12, 0
/* 800A81A8 000A50E8  41 82 00 20 */	beq .L_800A81C8
/* 800A81AC 000A50EC  80 0D 8A E4 */	lwz r0, sDspDacWriteBuffer__9JASDriver@sda21(r13)
/* 800A81B0 000A50F0  7F C4 F3 78 */	mr r4, r30
/* 800A81B4 000A50F4  80 6D 8A E0 */	lwz r3, sDspDacBuffer__9JASDriver@sda21(r13)
/* 800A81B8 000A50F8  54 00 10 3A */	slwi r0, r0, 2
/* 800A81BC 000A50FC  7C 63 00 2E */	lwzx r3, r3, r0
/* 800A81C0 000A5100  7D 89 03 A6 */	mtctr r12
/* 800A81C4 000A5104  4E 80 04 21 */	bctrl 
.L_800A81C8:
/* 800A81C8 000A5108  80 01 00 34 */	lwz r0, 0x34(r1)
/* 800A81CC 000A510C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 800A81D0 000A5110  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 800A81D4 000A5114  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 800A81D8 000A5118  7C 08 03 A6 */	mtlr r0
/* 800A81DC 000A511C  38 21 00 30 */	addi r1, r1, 0x30
/* 800A81E0 000A5120  4E 80 00 20 */	blr 
.endfn finishDSPFrame__9JASDriverFv

.fn registerMixCallback__9JASDriverFPFl_Ps10JASMixMode, global
/* 800A81E4 000A5124  90 6D 8A FC */	stw r3, extMixCallback__9JASDriver@sda21(r13)
/* 800A81E8 000A5128  90 8D 81 30 */	stw r4, sMixMode__9JASDriver@sda21(r13)
/* 800A81EC 000A512C  4E 80 00 20 */	blr 
.endfn registerMixCallback__9JASDriverFPFl_Ps10JASMixMode

.fn getDacRate__9JASDriverFv, global
/* 800A81F0 000A5130  C0 2D 81 34 */	lfs f1, sDacRate__9JASDriver@sda21(r13)
/* 800A81F4 000A5134  4E 80 00 20 */	blr 
.endfn getDacRate__9JASDriverFv

.fn getSubFrames__9JASDriverFv, global
/* 800A81F8 000A5138  80 6D 81 2C */	lwz r3, sSubFrames__9JASDriver@sda21(r13)
/* 800A81FC 000A513C  4E 80 00 20 */	blr 
.endfn getSubFrames__9JASDriverFv

.fn getDacSize__9JASDriverFv, local
/* 800A8200 000A5140  80 0D 81 2C */	lwz r0, sSubFrames__9JASDriver@sda21(r13)
/* 800A8204 000A5144  1C 60 00 A0 */	mulli r3, r0, 0xa0
/* 800A8208 000A5148  4E 80 00 20 */	blr 
.endfn getDacSize__9JASDriverFv

.fn getFrameSamples__9JASDriverFv, local
/* 800A820C 000A514C  80 0D 81 2C */	lwz r0, sSubFrames__9JASDriver@sda21(r13)
/* 800A8210 000A5150  1C 60 00 50 */	mulli r3, r0, 0x50
/* 800A8214 000A5154  4E 80 00 20 */	blr 
.endfn getFrameSamples__9JASDriverFv

.fn mixMonoTrack__9JASDriverFPsUlPFl_Ps, local
/* 800A8218 000A5158  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800A821C 000A515C  7C 08 02 A6 */	mflr r0
/* 800A8220 000A5160  3C C0 80 48 */	lis r6, lbl_80479624@ha
/* 800A8224 000A5164  90 01 00 24 */	stw r0, 0x24(r1)
/* 800A8228 000A5168  38 06 96 24 */	addi r0, r6, lbl_80479624@l
/* 800A822C 000A516C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800A8230 000A5170  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800A8234 000A5174  7C 7E 1B 78 */	mr r30, r3
/* 800A8238 000A5178  38 60 00 05 */	li r3, 5
/* 800A823C 000A517C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 800A8240 000A5180  7C BD 2B 78 */	mr r29, r5
/* 800A8244 000A5184  93 81 00 10 */	stw r28, 0x10(r1)
/* 800A8248 000A5188  7C 9C 23 78 */	mr r28, r4
/* 800A824C 000A518C  7C 04 03 78 */	mr r4, r0
/* 800A8250 000A5190  4B FF F2 85 */	bl probeStart__9JASKernelFlPc
/* 800A8254 000A5194  7F AC EB 78 */	mr r12, r29
/* 800A8258 000A5198  7F 83 E3 78 */	mr r3, r28
/* 800A825C 000A519C  7D 89 03 A6 */	mtctr r12
/* 800A8260 000A51A0  4E 80 04 21 */	bctrl 
/* 800A8264 000A51A4  7C 7F 1B 79 */	or. r31, r3, r3
/* 800A8268 000A51A8  41 82 00 50 */	beq .L_800A82B8
/* 800A826C 000A51AC  38 60 00 05 */	li r3, 5
/* 800A8270 000A51B0  4B FF F2 C5 */	bl probeFinish__9JASKernelFl
/* 800A8274 000A51B4  7F 9D E3 78 */	mr r29, r28
/* 800A8278 000A51B8  48 00 00 38 */	b .L_800A82B0
.L_800A827C:
/* 800A827C 000A51BC  A8 7E 00 00 */	lha r3, 0(r30)
/* 800A8280 000A51C0  A8 1F 00 00 */	lha r0, 0(r31)
/* 800A8284 000A51C4  7C 63 02 14 */	add r3, r3, r0
/* 800A8288 000A51C8  4B FF E2 51 */	bl "clamp<s,l>__7JASCalcFl"
/* 800A828C 000A51CC  B0 7E 00 00 */	sth r3, 0(r30)
/* 800A8290 000A51D0  A8 7E 00 02 */	lha r3, 2(r30)
/* 800A8294 000A51D4  A8 1F 00 00 */	lha r0, 0(r31)
/* 800A8298 000A51D8  7C 63 02 14 */	add r3, r3, r0
/* 800A829C 000A51DC  4B FF E2 3D */	bl "clamp<s,l>__7JASCalcFl"
/* 800A82A0 000A51E0  B0 7E 00 02 */	sth r3, 2(r30)
/* 800A82A4 000A51E4  3B DE 00 04 */	addi r30, r30, 4
/* 800A82A8 000A51E8  3B FF 00 02 */	addi r31, r31, 2
/* 800A82AC 000A51EC  3B BD FF FF */	addi r29, r29, -1
.L_800A82B0:
/* 800A82B0 000A51F0  28 1D 00 00 */	cmplwi r29, 0
/* 800A82B4 000A51F4  40 82 FF C8 */	bne .L_800A827C
.L_800A82B8:
/* 800A82B8 000A51F8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800A82BC 000A51FC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800A82C0 000A5200  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800A82C4 000A5204  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 800A82C8 000A5208  83 81 00 10 */	lwz r28, 0x10(r1)
/* 800A82CC 000A520C  7C 08 03 A6 */	mtlr r0
/* 800A82D0 000A5210  38 21 00 20 */	addi r1, r1, 0x20
/* 800A82D4 000A5214  4E 80 00 20 */	blr 
.endfn mixMonoTrack__9JASDriverFPsUlPFl_Ps

.fn mixMonoTrackWide__9JASDriverFPsUlPFl_Ps, local
/* 800A82D8 000A5218  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800A82DC 000A521C  7C 08 02 A6 */	mflr r0
/* 800A82E0 000A5220  3C C0 80 48 */	lis r6, lbl_80479630@ha
/* 800A82E4 000A5224  90 01 00 24 */	stw r0, 0x24(r1)
/* 800A82E8 000A5228  38 06 96 30 */	addi r0, r6, lbl_80479630@l
/* 800A82EC 000A522C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800A82F0 000A5230  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800A82F4 000A5234  7C 7E 1B 78 */	mr r30, r3
/* 800A82F8 000A5238  38 60 00 05 */	li r3, 5
/* 800A82FC 000A523C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 800A8300 000A5240  7C BD 2B 78 */	mr r29, r5
/* 800A8304 000A5244  93 81 00 10 */	stw r28, 0x10(r1)
/* 800A8308 000A5248  7C 9C 23 78 */	mr r28, r4
/* 800A830C 000A524C  7C 04 03 78 */	mr r4, r0
/* 800A8310 000A5250  4B FF F1 C5 */	bl probeStart__9JASKernelFlPc
/* 800A8314 000A5254  7F AC EB 78 */	mr r12, r29
/* 800A8318 000A5258  7F 83 E3 78 */	mr r3, r28
/* 800A831C 000A525C  7D 89 03 A6 */	mtctr r12
/* 800A8320 000A5260  4E 80 04 21 */	bctrl 
/* 800A8324 000A5264  7C 7F 1B 79 */	or. r31, r3, r3
/* 800A8328 000A5268  41 82 00 50 */	beq .L_800A8378
/* 800A832C 000A526C  38 60 00 05 */	li r3, 5
/* 800A8330 000A5270  4B FF F2 05 */	bl probeFinish__9JASKernelFl
/* 800A8334 000A5274  7F 9D E3 78 */	mr r29, r28
/* 800A8338 000A5278  48 00 00 38 */	b .L_800A8370
.L_800A833C:
/* 800A833C 000A527C  A8 7E 00 00 */	lha r3, 0(r30)
/* 800A8340 000A5280  A8 1F 00 00 */	lha r0, 0(r31)
/* 800A8344 000A5284  7C 63 02 14 */	add r3, r3, r0
/* 800A8348 000A5288  4B FF E1 91 */	bl "clamp<s,l>__7JASCalcFl"
/* 800A834C 000A528C  B0 7E 00 00 */	sth r3, 0(r30)
/* 800A8350 000A5290  A8 7E 00 02 */	lha r3, 2(r30)
/* 800A8354 000A5294  A8 1F 00 00 */	lha r0, 0(r31)
/* 800A8358 000A5298  7C 60 18 50 */	subf r3, r0, r3
/* 800A835C 000A529C  4B FF E1 7D */	bl "clamp<s,l>__7JASCalcFl"
/* 800A8360 000A52A0  B0 7E 00 02 */	sth r3, 2(r30)
/* 800A8364 000A52A4  3B DE 00 04 */	addi r30, r30, 4
/* 800A8368 000A52A8  3B FF 00 02 */	addi r31, r31, 2
/* 800A836C 000A52AC  3B BD FF FF */	addi r29, r29, -1
.L_800A8370:
/* 800A8370 000A52B0  28 1D 00 00 */	cmplwi r29, 0
/* 800A8374 000A52B4  40 82 FF C8 */	bne .L_800A833C
.L_800A8378:
/* 800A8378 000A52B8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800A837C 000A52BC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800A8380 000A52C0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800A8384 000A52C4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 800A8388 000A52C8  83 81 00 10 */	lwz r28, 0x10(r1)
/* 800A838C 000A52CC  7C 08 03 A6 */	mtlr r0
/* 800A8390 000A52D0  38 21 00 20 */	addi r1, r1, 0x20
/* 800A8394 000A52D4  4E 80 00 20 */	blr 
.endfn mixMonoTrackWide__9JASDriverFPsUlPFl_Ps

.fn mixExtraTrack__9JASDriverFPsUlPFl_Ps, local
/* 800A8398 000A52D8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800A839C 000A52DC  7C 08 02 A6 */	mflr r0
/* 800A83A0 000A52E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 800A83A4 000A52E4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800A83A8 000A52E8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800A83AC 000A52EC  7C 7E 1B 78 */	mr r30, r3
/* 800A83B0 000A52F0  38 60 00 05 */	li r3, 5
/* 800A83B4 000A52F4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 800A83B8 000A52F8  7C 9D 23 78 */	mr r29, r4
/* 800A83BC 000A52FC  38 82 8B 30 */	addi r4, r2, lbl_80516E90@sda21
/* 800A83C0 000A5300  93 81 00 10 */	stw r28, 0x10(r1)
/* 800A83C4 000A5304  7C BC 2B 78 */	mr r28, r5
/* 800A83C8 000A5308  4B FF F1 0D */	bl probeStart__9JASKernelFlPc
/* 800A83CC 000A530C  7F 8C E3 78 */	mr r12, r28
/* 800A83D0 000A5310  7F A3 EB 78 */	mr r3, r29
/* 800A83D4 000A5314  7D 89 03 A6 */	mtctr r12
/* 800A83D8 000A5318  4E 80 04 21 */	bctrl 
/* 800A83DC 000A531C  7C 7F 1B 79 */	or. r31, r3, r3
/* 800A83E0 000A5320  41 82 00 78 */	beq .L_800A8458
/* 800A83E4 000A5324  38 60 00 05 */	li r3, 5
/* 800A83E8 000A5328  4B FF F1 4D */	bl probeFinish__9JASKernelFl
/* 800A83EC 000A532C  38 60 00 06 */	li r3, 6
/* 800A83F0 000A5330  38 82 8B 38 */	addi r4, r2, lbl_80516E98@sda21
/* 800A83F4 000A5334  4B FF F0 E1 */	bl probeStart__9JASKernelFlPc
/* 800A83F8 000A5338  80 0D 81 2C */	lwz r0, sSubFrames__9JASDriver@sda21(r13)
/* 800A83FC 000A533C  7F BC EB 78 */	mr r28, r29
/* 800A8400 000A5340  1C 00 00 50 */	mulli r0, r0, 0x50
/* 800A8404 000A5344  54 00 08 3C */	slwi r0, r0, 1
/* 800A8408 000A5348  7F BF 02 14 */	add r29, r31, r0
/* 800A840C 000A534C  48 00 00 3C */	b .L_800A8448
.L_800A8410:
/* 800A8410 000A5350  A8 7E 00 00 */	lha r3, 0(r30)
/* 800A8414 000A5354  A8 1D 00 00 */	lha r0, 0(r29)
/* 800A8418 000A5358  7C 63 02 14 */	add r3, r3, r0
/* 800A841C 000A535C  4B FF E0 BD */	bl "clamp<s,l>__7JASCalcFl"
/* 800A8420 000A5360  B0 7E 00 00 */	sth r3, 0(r30)
/* 800A8424 000A5364  A8 7E 00 02 */	lha r3, 2(r30)
/* 800A8428 000A5368  A8 1F 00 00 */	lha r0, 0(r31)
/* 800A842C 000A536C  7C 63 02 14 */	add r3, r3, r0
/* 800A8430 000A5370  4B FF E0 A9 */	bl "clamp<s,l>__7JASCalcFl"
/* 800A8434 000A5374  B0 7E 00 02 */	sth r3, 2(r30)
/* 800A8438 000A5378  3B DE 00 04 */	addi r30, r30, 4
/* 800A843C 000A537C  3B BD 00 02 */	addi r29, r29, 2
/* 800A8440 000A5380  3B FF 00 02 */	addi r31, r31, 2
/* 800A8444 000A5384  3B 9C FF FF */	addi r28, r28, -1
.L_800A8448:
/* 800A8448 000A5388  28 1C 00 00 */	cmplwi r28, 0
/* 800A844C 000A538C  40 82 FF C4 */	bne .L_800A8410
/* 800A8450 000A5390  38 60 00 06 */	li r3, 6
/* 800A8454 000A5394  4B FF F0 E1 */	bl probeFinish__9JASKernelFl
.L_800A8458:
/* 800A8458 000A5398  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800A845C 000A539C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800A8460 000A53A0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800A8464 000A53A4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 800A8468 000A53A8  83 81 00 10 */	lwz r28, 0x10(r1)
/* 800A846C 000A53AC  7C 08 03 A6 */	mtlr r0
/* 800A8470 000A53B0  38 21 00 20 */	addi r1, r1, 0x20
/* 800A8474 000A53B4  4E 80 00 20 */	blr 
.endfn mixExtraTrack__9JASDriverFPsUlPFl_Ps

.fn mixInterleaveTrack__9JASDriverFPsUlPFl_Ps, local
/* 800A8478 000A53B8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800A847C 000A53BC  7C 08 02 A6 */	mflr r0
/* 800A8480 000A53C0  7C AC 2B 78 */	mr r12, r5
/* 800A8484 000A53C4  90 01 00 24 */	stw r0, 0x24(r1)
/* 800A8488 000A53C8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800A848C 000A53CC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800A8490 000A53D0  7C 7E 1B 78 */	mr r30, r3
/* 800A8494 000A53D4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 800A8498 000A53D8  7C 9D 23 78 */	mr r29, r4
/* 800A849C 000A53DC  7F A3 EB 78 */	mr r3, r29
/* 800A84A0 000A53E0  7D 89 03 A6 */	mtctr r12
/* 800A84A4 000A53E4  4E 80 04 21 */	bctrl 
/* 800A84A8 000A53E8  28 03 00 00 */	cmplwi r3, 0
/* 800A84AC 000A53EC  41 82 00 3C */	beq .L_800A84E8
/* 800A84B0 000A53F0  7F DF F3 78 */	mr r31, r30
/* 800A84B4 000A53F4  7C 7E 1B 78 */	mr r30, r3
/* 800A84B8 000A53F8  57 BD 08 3C */	slwi r29, r29, 1
/* 800A84BC 000A53FC  48 00 00 24 */	b .L_800A84E0
.L_800A84C0:
/* 800A84C0 000A5400  A8 7F 00 00 */	lha r3, 0(r31)
/* 800A84C4 000A5404  A8 1E 00 00 */	lha r0, 0(r30)
/* 800A84C8 000A5408  7C 63 02 14 */	add r3, r3, r0
/* 800A84CC 000A540C  4B FF E0 0D */	bl "clamp<s,l>__7JASCalcFl"
/* 800A84D0 000A5410  B0 7F 00 00 */	sth r3, 0(r31)
/* 800A84D4 000A5414  3B FF 00 02 */	addi r31, r31, 2
/* 800A84D8 000A5418  3B DE 00 02 */	addi r30, r30, 2
/* 800A84DC 000A541C  3B BD FF FF */	addi r29, r29, -1
.L_800A84E0:
/* 800A84E0 000A5420  28 1D 00 00 */	cmplwi r29, 0
/* 800A84E4 000A5424  40 82 FF DC */	bne .L_800A84C0
.L_800A84E8:
/* 800A84E8 000A5428  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800A84EC 000A542C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800A84F0 000A5430  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800A84F4 000A5434  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 800A84F8 000A5438  7C 08 03 A6 */	mtlr r0
/* 800A84FC 000A543C  38 21 00 20 */	addi r1, r1, 0x20
/* 800A8500 000A5440  4E 80 00 20 */	blr 
.endfn mixInterleaveTrack__9JASDriverFPsUlPFl_Ps
