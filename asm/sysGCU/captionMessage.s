.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_8049B880:
	.asciz "messageObj.h"
.balign 4
lbl_8049B890:
	.asciz "P2Assert"

.section .data, "wa"	# 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q35P2JME7Caption8TControl
__vt__Q35P2JME7Caption8TControl:
	.4byte 0
	.4byte 0
	.4byte __dt__Q35P2JME7Caption8TControlFv
	.4byte reset__Q35P2JME7Caption8TControlFv
	.4byte update__Q25P2JME8TControlFv
	.4byte update__Q35P2JME6Window8TControlFP10ControllerP10Controller
	.4byte draw__Q35P2JME7Caption8TControlFR8Graphics
	.4byte draw__Q35P2JME6Window8TControlFPA4_fPA4_f
	.4byte setMessageID__Q25P2JME8TControlFUlUl
	.4byte setMessageID__Q25P2JME8TControlFPc
	.4byte setMessageID__Q25P2JME8TControlFUx
	.4byte setMessageCode__Q25P2JME8TControlFUsUs
	.4byte setMessageCode__Q25P2JME8TControlFUl
	.4byte onInit__Q35P2JME7Caption8TControlFv
	.4byte createReference__Q25P2JME8TControlFv
	.4byte createResourceContainer__Q25P2JME8TControlFv
	.4byte createSequenceProcessor__Q35P2JME7Caption8TControlFv
	.4byte createRenderingProcessor__Q35P2JME7Caption8TControlFv
.global __vt__Q35P2JME7Caption18TSequenceProcessor
__vt__Q35P2JME7Caption18TSequenceProcessor:
	.4byte 0
	.4byte 0
	.4byte __dt__Q35P2JME7Caption18TSequenceProcessorFv
	.4byte do_reset__Q28JMessage10TProcessorFv
	.4byte do_character__Q25P2JME18TSequenceProcessorFi
	.4byte do_tag__Q25P2JME18TSequenceProcessorFUlPCvUl
	.4byte do_systemTagCode__Q25P2JME18TSequenceProcessorFUsPCvUl
	.4byte do_select_begin__Q28JMessage10TProcessorFUl
	.4byte do_select_end__Q28JMessage10TProcessorFv
	.4byte do_select_separate__Q28JMessage10TProcessorFv
	.4byte do_reset___Q28JMessage18TSequenceProcessorFPCc
	.4byte do_setBegin_isReady___Q28JMessage18TSequenceProcessorCFv
	.4byte do_begin___Q28JMessage18TSequenceProcessorFPCvPCc
	.4byte do_end___Q28JMessage18TSequenceProcessorFv
	.4byte do_tag___Q28JMessage18TSequenceProcessorFUlPCvUl
	.4byte do_systemTagCode___Q28JMessage18TSequenceProcessorFUsPCvUl
	.4byte do_begin__Q25P2JME18TSequenceProcessorFPCvPCc
	.4byte do_end__Q25P2JME18TSequenceProcessorFv
	.4byte do_isReady__Q35P2JME7Caption18TSequenceProcessorFv
	.4byte do_jump_isReady__Q25P2JME18TSequenceProcessorFv
	.4byte do_jump__Q25P2JME18TSequenceProcessorFPCvPCc
	.4byte do_branch_query__Q25P2JME18TSequenceProcessorFUs
	.4byte do_branch_queryResult__Q25P2JME18TSequenceProcessorFv
	.4byte do_branch__Q25P2JME18TSequenceProcessorFPCvPCc
	.4byte doResetAbtnWaitSE__Q35P2JME7Caption18TSequenceProcessorFv
	.4byte doCharacterSEStart__Q35P2JME7Caption18TSequenceProcessorFv
	.4byte doCharacterSE__Q35P2JME7Caption18TSequenceProcessorFi
	.4byte doCharacterSEEnd__Q35P2JME7Caption18TSequenceProcessorFv
	.4byte doFastForwardSE__Q35P2JME6Window18TSequenceProcessorFv
	.4byte reset__Q25P2JME18TSequenceProcessorFv
.global __vt__Q35P2JME7Caption19TRenderingProcessor
__vt__Q35P2JME7Caption19TRenderingProcessor:
	.4byte 0
	.4byte 0
	.4byte __dt__Q35P2JME7Caption19TRenderingProcessorFv
	.4byte do_reset__Q28JMessage10TProcessorFv
	.4byte do_character__Q25P2JME19TRenderingProcessorFi
	.4byte do_tag__Q25P2JME19TRenderingProcessorFUlPCvUl
	.4byte do_systemTagCode__Q25P2JME19TRenderingProcessorFUsPCvUl
	.4byte do_select_begin__Q25P2JME19TRenderingProcessorFUl
	.4byte do_select_end__Q25P2JME19TRenderingProcessorFv
	.4byte do_select_separate__Q25P2JME19TRenderingProcessorFv
	.4byte do_reset___Q28JMessage19TRenderingProcessorFPCc
	.4byte do_setBegin_isReady___Q28JMessage10TProcessorCFv
	.4byte do_begin___Q28JMessage19TRenderingProcessorFPCvPCc
	.4byte do_end___Q28JMessage19TRenderingProcessorFv
	.4byte do_tag___Q28JMessage19TRenderingProcessorFUlPCvUl
	.4byte do_systemTagCode___Q28JMessage19TRenderingProcessorFUsPCvUl
	.4byte do_begin__Q25P2JME19TRenderingProcessorFPCvPCc
	.4byte do_end__Q28JMessage19TRenderingProcessorFv
	.4byte tagColor__Q25P2JME19TRenderingProcessorFPCvUl
	.4byte tagSize__Q25P2JME19TRenderingProcessorFPCvUl
	.4byte tagRuby__Q25P2JME19TRenderingProcessorFPCvUl
	.4byte tagFont__Q25P2JME19TRenderingProcessorFPCvUl
	.4byte tagImage__Q25P2JME19TRenderingProcessorFUsPCvUl
	.4byte tagColorEX__Q25P2JME19TRenderingProcessorFUsPCvUl
	.4byte tagControl__Q25P2JME19TRenderingProcessorFUsPCvUl
	.4byte tagPosition__Q25P2JME19TRenderingProcessorFUsPCvUl
	.4byte update__Q35P2JME6Window19TRenderingProcessorFv
	.4byte reset__Q35P2JME6Window19TRenderingProcessorFv
	.4byte newParagraph__Q25P2JME19TRenderingProcessorFv
	.4byte doDrawImage__Q35P2JME6Window19TRenderingProcessorFP10JUTTextureffff
	.4byte doDrawRuby__Q35P2JME6Window19TRenderingProcessorFffffib
	.4byte doDrawLetter__Q35P2JME6Window19TRenderingProcessorFffffib
	.4byte doTagControlAbtnWait__Q25P2JME19TRenderingProcessorFv
	.4byte doDrawCommon__Q35P2JME7Caption19TRenderingProcessorFffP7MatrixfP7Matrixf
	.4byte "makeMatrix__Q35P2JME6Window19TRenderingProcessorFP7MatrixfPQ35P2JME6Window8DrawInfof10Vector3<f>"
	.4byte doGetDrawInfo__Q35P2JME7Caption19TRenderingProcessorFPQ35P2JME6Window8DrawInfo

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_80520B30:
	.float 1.0
lbl_80520B34:
	.float 0.26666668
lbl_80520B38:
	.float 255.0
lbl_80520B3C:
	.float 0.0
lbl_80520B40:
	.float 10.0
lbl_80520B44:
	.float 5.0
lbl_80520B48:
	.float 0.5
lbl_80520B4C:
	.float 3.0
lbl_80520B50:
	.float 200.0
.balign 8
lbl_80520B58:
	.4byte 0x43300000
	.4byte 0x00000000
.balign 8
lbl_80520B60:
	.4byte 0x43300000
	.4byte 0x80000000
lbl_80520B68:
	.float 290.0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global doGetDrawInfo__Q35P2JME7Caption19TRenderingProcessorFPQ35P2JME6Window8DrawInfo
doGetDrawInfo__Q35P2JME7Caption19TRenderingProcessorFPQ35P2JME6Window8DrawInfo:
/* 80450FC0 0044DF00  C0 02 27 D4 */	lfs f0, lbl_80520B34@sda21(r2)
/* 80450FC4 0044DF04  D0 04 00 20 */	stfs f0, 0x20(r4)
/* 80450FC8 0044DF08  4E 80 00 20 */	blr 

.global doDrawCommon__Q35P2JME7Caption19TRenderingProcessorFffP7MatrixfP7Matrixf
doDrawCommon__Q35P2JME7Caption19TRenderingProcessorFffP7MatrixfP7Matrixf:
/* 80450FCC 0044DF0C  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80450FD0 0044DF10  7C 08 02 A6 */	mflr r0
/* 80450FD4 0044DF14  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80450FD8 0044DF18  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 80450FDC 0044DF1C  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 80450FE0 0044DF20  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 80450FE4 0044DF24  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 80450FE8 0044DF28  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 80450FEC 0044DF2C  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 80450FF0 0044DF30  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 80450FF4 0044DF34  93 C1 00 68 */	stw r30, 0x68(r1)
/* 80450FF8 0044DF38  93 A1 00 64 */	stw r29, 0x64(r1)
/* 80450FFC 0044DF3C  93 81 00 60 */	stw r28, 0x60(r1)
/* 80451000 0044DF40  7C 7C 1B 78 */	mr r28, r3
/* 80451004 0044DF44  7C 9D 23 78 */	mr r29, r4
/* 80451008 0044DF48  C0 62 27 D8 */	lfs f3, lbl_80520B38@sda21(r2)
/* 8045100C 0044DF4C  FF A0 08 90 */	fmr f29, f1
/* 80451010 0044DF50  C0 03 01 44 */	lfs f0, 0x144(r3)
/* 80451014 0044DF54  FF C0 10 90 */	fmr f30, f2
/* 80451018 0044DF58  80 83 00 40 */	lwz r4, 0x40(r3)
/* 8045101C 0044DF5C  7C BE 2B 78 */	mr r30, r5
/* 80451020 0044DF60  EF E3 00 32 */	fmuls f31, f3, f0
/* 80451024 0044DF64  38 7C 01 10 */	addi r3, r28, 0x110
/* 80451028 0044DF68  4B FE E2 11 */	bl searchDrawInfo__Q35P2JME6Window11DrawInfoMgrFi
/* 8045102C 0044DF6C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80451030 0044DF70  40 82 00 30 */	bne .L_80451060
/* 80451034 0044DF74  80 9C 00 40 */	lwz r4, 0x40(r28)
/* 80451038 0044DF78  38 7C 01 10 */	addi r3, r28, 0x110
/* 8045103C 0044DF7C  4B FE E2 2D */	bl getDrawInfo__Q35P2JME6Window11DrawInfoMgrFi
/* 80451040 0044DF80  7C 60 1B 78 */	mr r0, r3
/* 80451044 0044DF84  7F 83 E3 78 */	mr r3, r28
/* 80451048 0044DF88  81 9C 00 00 */	lwz r12, 0(r28)
/* 8045104C 0044DF8C  7C 1F 03 78 */	mr r31, r0
/* 80451050 0044DF90  7F E4 FB 78 */	mr r4, r31
/* 80451054 0044DF94  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 80451058 0044DF98  7D 89 03 A6 */	mtctr r12
/* 8045105C 0044DF9C  4E 80 04 21 */	bctrl 
.L_80451060:
/* 80451060 0044DFA0  28 1F 00 00 */	cmplwi r31, 0
/* 80451064 0044DFA4  41 82 00 34 */	beq .L_80451098
/* 80451068 0044DFA8  C0 02 27 DC */	lfs f0, lbl_80520B3C@sda21(r2)
/* 8045106C 0044DFAC  38 61 00 20 */	addi r3, r1, 0x20
/* 80451070 0044DFB0  D3 A1 00 14 */	stfs f29, 0x14(r1)
/* 80451074 0044DFB4  38 81 00 14 */	addi r4, r1, 0x14
/* 80451078 0044DFB8  D3 C1 00 18 */	stfs f30, 0x18(r1)
/* 8045107C 0044DFBC  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80451080 0044DFC0  4B FD 77 C1 */	bl "makeT__7MatrixfFR10Vector3<f>"
/* 80451084 0044DFC4  C0 3F 00 1C */	lfs f1, 0x1c(r31)
/* 80451088 0044DFC8  C0 1F 00 20 */	lfs f0, 0x20(r31)
/* 8045108C 0044DFCC  EC 01 00 24 */	fdivs f0, f1, f0
/* 80451090 0044DFD0  EF FF 00 32 */	fmuls f31, f31, f0
/* 80451094 0044DFD4  48 00 00 20 */	b .L_804510B4
.L_80451098:
/* 80451098 0044DFD8  C0 02 27 DC */	lfs f0, lbl_80520B3C@sda21(r2)
/* 8045109C 0044DFDC  38 61 00 20 */	addi r3, r1, 0x20
/* 804510A0 0044DFE0  D3 A1 00 08 */	stfs f29, 8(r1)
/* 804510A4 0044DFE4  38 81 00 08 */	addi r4, r1, 8
/* 804510A8 0044DFE8  D3 C1 00 0C */	stfs f30, 0xc(r1)
/* 804510AC 0044DFEC  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 804510B0 0044DFF0  4B FD 77 91 */	bl "makeT__7MatrixfFR10Vector3<f>"
.L_804510B4:
/* 804510B4 0044DFF4  28 1E 00 00 */	cmplwi r30, 0
/* 804510B8 0044DFF8  41 82 00 50 */	beq .L_80451108
/* 804510BC 0044DFFC  7F C4 F3 78 */	mr r4, r30
/* 804510C0 0044E000  38 61 00 20 */	addi r3, r1, 0x20
/* 804510C4 0044E004  4B C9 92 09 */	bl PSMTXCopy
/* 804510C8 0044E008  C0 5E 00 0C */	lfs f2, 0xc(r30)
/* 804510CC 0044E00C  7F C4 F3 78 */	mr r4, r30
/* 804510D0 0044E010  C0 22 27 E0 */	lfs f1, lbl_80520B40@sda21(r2)
/* 804510D4 0044E014  7F C5 F3 78 */	mr r5, r30
/* 804510D8 0044E018  C0 7E 00 1C */	lfs f3, 0x1c(r30)
/* 804510DC 0044E01C  C0 02 27 E4 */	lfs f0, lbl_80520B44@sda21(r2)
/* 804510E0 0044E020  EC 42 08 2A */	fadds f2, f2, f1
/* 804510E4 0044E024  EC 63 00 2A */	fadds f3, f3, f0
/* 804510E8 0044E028  D0 5E 00 0C */	stfs f2, 0xc(r30)
/* 804510EC 0044E02C  D0 7E 00 1C */	stfs f3, 0x1c(r30)
/* 804510F0 0044E030  80 7C 00 44 */	lwz r3, 0x44(r28)
/* 804510F4 0044E034  4B C9 92 0D */	bl PSMTXConcat
/* 804510F8 0044E038  80 7C 00 48 */	lwz r3, 0x48(r28)
/* 804510FC 0044E03C  7F C4 F3 78 */	mr r4, r30
/* 80451100 0044E040  7F C5 F3 78 */	mr r5, r30
/* 80451104 0044E044  4B C9 91 FD */	bl PSMTXConcat
.L_80451108:
/* 80451108 0044E048  38 81 00 20 */	addi r4, r1, 0x20
/* 8045110C 0044E04C  80 7C 00 44 */	lwz r3, 0x44(r28)
/* 80451110 0044E050  7C 85 23 78 */	mr r5, r4
/* 80451114 0044E054  4B C9 91 ED */	bl PSMTXConcat
/* 80451118 0044E058  38 81 00 20 */	addi r4, r1, 0x20
/* 8045111C 0044E05C  80 7C 00 48 */	lwz r3, 0x48(r28)
/* 80451120 0044E060  7C 85 23 78 */	mr r5, r4
/* 80451124 0044E064  4B C9 91 DD */	bl PSMTXConcat
/* 80451128 0044E068  28 1D 00 00 */	cmplwi r29, 0
/* 8045112C 0044E06C  41 82 00 14 */	beq .L_80451140
/* 80451130 0044E070  7F A4 EB 78 */	mr r4, r29
/* 80451134 0044E074  38 61 00 20 */	addi r3, r1, 0x20
/* 80451138 0044E078  4B C9 91 95 */	bl PSMTXCopy
/* 8045113C 0044E07C  48 00 00 10 */	b .L_8045114C
.L_80451140:
/* 80451140 0044E080  38 61 00 20 */	addi r3, r1, 0x20
/* 80451144 0044E084  38 80 00 00 */	li r4, 0
/* 80451148 0044E088  4B C9 84 31 */	bl GXLoadPosMtxImm
.L_8045114C:
/* 8045114C 0044E08C  C0 02 27 DC */	lfs f0, lbl_80520B3C@sda21(r2)
/* 80451150 0044E090  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80451154 0044E094  4C 41 13 82 */	cror 2, 1, 2
/* 80451158 0044E098  40 82 00 10 */	bne .L_80451168
/* 8045115C 0044E09C  C0 02 27 E8 */	lfs f0, lbl_80520B48@sda21(r2)
/* 80451160 0044E0A0  EC 00 F8 2A */	fadds f0, f0, f31
/* 80451164 0044E0A4  48 00 00 0C */	b .L_80451170
.L_80451168:
/* 80451168 0044E0A8  C0 02 27 E8 */	lfs f0, lbl_80520B48@sda21(r2)
/* 8045116C 0044E0AC  EC 1F 00 28 */	fsubs f0, f31, f0
.L_80451170:
/* 80451170 0044E0B0  FC 00 00 1E */	fctiwz f0, f0
/* 80451174 0044E0B4  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 80451178 0044E0B8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8045117C 0044E0BC  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 80451180 0044E0C0  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 80451184 0044E0C4  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 80451188 0044E0C8  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 8045118C 0044E0CC  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 80451190 0044E0D0  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 80451194 0044E0D4  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 80451198 0044E0D8  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 8045119C 0044E0DC  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 804511A0 0044E0E0  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 804511A4 0044E0E4  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 804511A8 0044E0E8  83 81 00 60 */	lwz r28, 0x60(r1)
/* 804511AC 0044E0EC  7C 08 03 A6 */	mtlr r0
/* 804511B0 0044E0F0  38 21 00 A0 */	addi r1, r1, 0xa0
/* 804511B4 0044E0F4  4E 80 00 20 */	blr 

.global __ct__Q35P2JME7Caption8TControlFv
__ct__Q35P2JME7Caption8TControlFv:
/* 804511B8 0044E0F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804511BC 0044E0FC  7C 08 02 A6 */	mflr r0
/* 804511C0 0044E100  90 01 00 14 */	stw r0, 0x14(r1)
/* 804511C4 0044E104  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804511C8 0044E108  7C 7F 1B 78 */	mr r31, r3
/* 804511CC 0044E10C  4B FE EF 21 */	bl __ct__Q35P2JME6Window8TControlFv
/* 804511D0 0044E110  3C 60 80 4F */	lis r3, __vt__Q35P2JME7Caption8TControl@ha
/* 804511D4 0044E114  38 80 00 00 */	li r4, 0
/* 804511D8 0044E118  38 63 D5 30 */	addi r3, r3, __vt__Q35P2JME7Caption8TControl@l
/* 804511DC 0044E11C  38 00 00 06 */	li r0, 6
/* 804511E0 0044E120  90 7F 00 00 */	stw r3, 0(r31)
/* 804511E4 0044E124  7F E3 FB 78 */	mr r3, r31
/* 804511E8 0044E128  90 9F 00 5C */	stw r4, 0x5c(r31)
/* 804511EC 0044E12C  90 9F 00 60 */	stw r4, 0x60(r31)
/* 804511F0 0044E130  90 9F 00 64 */	stw r4, 0x64(r31)
/* 804511F4 0044E134  90 1F 00 68 */	stw r0, 0x68(r31)
/* 804511F8 0044E138  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804511FC 0044E13C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80451200 0044E140  7C 08 03 A6 */	mtlr r0
/* 80451204 0044E144  38 21 00 10 */	addi r1, r1, 0x10
/* 80451208 0044E148  4E 80 00 20 */	blr 

.global onInit__Q35P2JME7Caption8TControlFv
onInit__Q35P2JME7Caption8TControlFv:
/* 8045120C 0044E14C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80451210 0044E150  7C 08 02 A6 */	mflr r0
/* 80451214 0044E154  90 01 00 24 */	stw r0, 0x24(r1)
/* 80451218 0044E158  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8045121C 0044E15C  7C 7F 1B 78 */	mr r31, r3
/* 80451220 0044E160  80 8D 9B D8 */	lwz r4, gP2JMEMgr@sda21(r13)
/* 80451224 0044E164  28 04 00 00 */	cmplwi r4, 0
/* 80451228 0044E168  41 82 00 1C */	beq .L_80451244
/* 8045122C 0044E16C  80 84 00 18 */	lwz r4, 0x18(r4)
/* 80451230 0044E170  4B FE 78 9D */	bl setFont__Q25P2JME8TControlFP7JUTFont
/* 80451234 0044E174  80 8D 9B D8 */	lwz r4, gP2JMEMgr@sda21(r13)
/* 80451238 0044E178  7F E3 FB 78 */	mr r3, r31
/* 8045123C 0044E17C  80 84 00 18 */	lwz r4, 0x18(r4)
/* 80451240 0044E180  4B FE 78 F9 */	bl setRubyFont__Q25P2JME8TControlFP7JUTFont
.L_80451244:
/* 80451244 0044E184  7F E3 FB 78 */	mr r3, r31
/* 80451248 0044E188  38 80 01 00 */	li r4, 0x100
/* 8045124C 0044E18C  4B FE EE F1 */	bl initRenderingProcessor__Q35P2JME6Window8TControlFUl
/* 80451250 0044E190  C0 02 27 EC */	lfs f0, lbl_80520B4C@sda21(r2)
/* 80451254 0044E194  7F E3 FB 78 */	mr r3, r31
/* 80451258 0044E198  38 80 00 00 */	li r4, 0
/* 8045125C 0044E19C  38 A0 00 00 */	li r5, 0
/* 80451260 0044E1A0  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 80451264 0044E1A4  4B FE 7D 19 */	bl setLocate__Q25P2JME8TControlFii
/* 80451268 0044E1A8  4B FD 1F BD */	bl getRenderModeObj__6SystemFv
/* 8045126C 0044E1AC  A0 83 00 04 */	lhz r4, 4(r3)
/* 80451270 0044E1B0  3C 00 43 30 */	lis r0, 0x4330
/* 80451274 0044E1B4  90 01 00 08 */	stw r0, 8(r1)
/* 80451278 0044E1B8  38 00 00 00 */	li r0, 0
/* 8045127C 0044E1BC  C8 42 27 F8 */	lfd f2, lbl_80520B58@sda21(r2)
/* 80451280 0044E1C0  38 60 00 01 */	li r3, 1
/* 80451284 0044E1C4  90 81 00 0C */	stw r4, 0xc(r1)
/* 80451288 0044E1C8  80 9F 00 40 */	lwz r4, 0x40(r31)
/* 8045128C 0044E1CC  C8 21 00 08 */	lfd f1, 8(r1)
/* 80451290 0044E1D0  C0 02 27 F0 */	lfs f0, lbl_80520B50@sda21(r2)
/* 80451294 0044E1D4  EC 21 10 28 */	fsubs f1, f1, f2
/* 80451298 0044E1D8  D0 24 00 38 */	stfs f1, 0x38(r4)
/* 8045129C 0044E1DC  80 9F 00 40 */	lwz r4, 0x40(r31)
/* 804512A0 0044E1E0  D0 04 00 3C */	stfs f0, 0x3c(r4)
/* 804512A4 0044E1E4  80 BF 00 40 */	lwz r5, 0x40(r31)
/* 804512A8 0044E1E8  80 85 00 8C */	lwz r4, 0x8c(r5)
/* 804512AC 0044E1EC  54 84 07 30 */	rlwinm r4, r4, 0, 0x1c, 0x18
/* 804512B0 0044E1F0  90 85 00 8C */	stw r4, 0x8c(r5)
/* 804512B4 0044E1F4  80 85 00 8C */	lwz r4, 0x8c(r5)
/* 804512B8 0044E1F8  60 84 00 20 */	ori r4, r4, 0x20
/* 804512BC 0044E1FC  90 85 00 8C */	stw r4, 0x8c(r5)
/* 804512C0 0044E200  80 BF 00 40 */	lwz r5, 0x40(r31)
/* 804512C4 0044E204  80 85 00 8C */	lwz r4, 0x8c(r5)
/* 804512C8 0044E208  54 84 06 28 */	rlwinm r4, r4, 0, 0x18, 0x14
/* 804512CC 0044E20C  90 85 00 8C */	stw r4, 0x8c(r5)
/* 804512D0 0044E210  80 85 00 8C */	lwz r4, 0x8c(r5)
/* 804512D4 0044E214  60 84 02 00 */	ori r4, r4, 0x200
/* 804512D8 0044E218  90 85 00 8C */	stw r4, 0x8c(r5)
/* 804512DC 0044E21C  90 1F 00 5C */	stw r0, 0x5c(r31)
/* 804512E0 0044E220  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 804512E4 0044E224  80 01 00 24 */	lwz r0, 0x24(r1)
/* 804512E8 0044E228  7C 08 03 A6 */	mtlr r0
/* 804512EC 0044E22C  38 21 00 20 */	addi r1, r1, 0x20
/* 804512F0 0044E230  4E 80 00 20 */	blr 

.global reset__Q35P2JME7Caption8TControlFv
reset__Q35P2JME7Caption8TControlFv:
/* 804512F4 0044E234  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804512F8 0044E238  7C 08 02 A6 */	mflr r0
/* 804512FC 0044E23C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80451300 0044E240  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80451304 0044E244  7C 7F 1B 78 */	mr r31, r3
/* 80451308 0044E248  4B FE F0 BD */	bl reset__Q35P2JME6Window8TControlFv
/* 8045130C 0044E24C  38 00 00 00 */	li r0, 0
/* 80451310 0044E250  90 1F 00 5C */	stw r0, 0x5c(r31)
/* 80451314 0044E254  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80451318 0044E258  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8045131C 0044E25C  7C 08 03 A6 */	mtlr r0
/* 80451320 0044E260  38 21 00 10 */	addi r1, r1, 0x10
/* 80451324 0044E264  4E 80 00 20 */	blr 

.global updateSetFrame__Q35P2JME7Caption8TControlFl
updateSetFrame__Q35P2JME7Caption8TControlFl:
/* 80451328 0044E268  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8045132C 0044E26C  7C 08 02 A6 */	mflr r0
/* 80451330 0044E270  90 01 00 24 */	stw r0, 0x24(r1)
/* 80451334 0044E274  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80451338 0044E278  7C 9F 23 78 */	mr r31, r4
/* 8045133C 0044E27C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80451340 0044E280  7C 7E 1B 78 */	mr r30, r3
/* 80451344 0044E284  80 03 00 5C */	lwz r0, 0x5c(r3)
/* 80451348 0044E288  38 60 00 00 */	li r3, 0
/* 8045134C 0044E28C  2C 00 00 00 */	cmpwi r0, 0
/* 80451350 0044E290  40 82 00 2C */	bne .L_8045137C
/* 80451354 0044E294  80 1E 00 60 */	lwz r0, 0x60(r30)
/* 80451358 0044E298  7C 1F 00 00 */	cmpw r31, r0
/* 8045135C 0044E29C  41 80 00 20 */	blt .L_8045137C
/* 80451360 0044E2A0  80 9E 00 64 */	lwz r4, 0x64(r30)
/* 80451364 0044E2A4  80 1E 00 68 */	lwz r0, 0x68(r30)
/* 80451368 0044E2A8  7C 04 02 14 */	add r0, r4, r0
/* 8045136C 0044E2AC  7C 1F 00 00 */	cmpw r31, r0
/* 80451370 0044E2B0  41 81 00 0C */	bgt .L_8045137C
/* 80451374 0044E2B4  38 00 00 01 */	li r0, 1
/* 80451378 0044E2B8  90 1E 00 5C */	stw r0, 0x5c(r30)
.L_8045137C:
/* 8045137C 0044E2BC  80 1E 00 5C */	lwz r0, 0x5c(r30)
/* 80451380 0044E2C0  2C 00 00 00 */	cmpwi r0, 0
/* 80451384 0044E2C4  41 82 00 B4 */	beq .L_80451438
/* 80451388 0044E2C8  80 1E 00 60 */	lwz r0, 0x60(r30)
/* 8045138C 0044E2CC  7C 1F 00 00 */	cmpw r31, r0
/* 80451390 0044E2D0  41 80 00 18 */	blt .L_804513A8
/* 80451394 0044E2D4  80 9E 00 64 */	lwz r4, 0x64(r30)
/* 80451398 0044E2D8  80 1E 00 68 */	lwz r0, 0x68(r30)
/* 8045139C 0044E2DC  7C 04 02 14 */	add r0, r4, r0
/* 804513A0 0044E2E0  7C 1F 00 00 */	cmpw r31, r0
/* 804513A4 0044E2E4  40 81 00 10 */	ble .L_804513B4
.L_804513A8:
/* 804513A8 0044E2E8  38 00 00 00 */	li r0, 0
/* 804513AC 0044E2EC  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 804513B0 0044E2F0  48 00 00 88 */	b .L_80451438
.L_804513B4:
/* 804513B4 0044E2F4  7F C3 F3 78 */	mr r3, r30
/* 804513B8 0044E2F8  4B FE 7A 95 */	bl update__Q25P2JME8TControlFv
/* 804513BC 0044E2FC  80 1E 00 64 */	lwz r0, 0x64(r30)
/* 804513C0 0044E300  7C 1F 00 00 */	cmpw r31, r0
/* 804513C4 0044E304  40 81 00 60 */	ble .L_80451424
/* 804513C8 0044E308  38 00 00 02 */	li r0, 2
/* 804513CC 0044E30C  3C A0 43 30 */	lis r5, 0x4330
/* 804513D0 0044E310  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 804513D4 0044E314  C8 42 28 00 */	lfd f2, lbl_80520B60@sda21(r2)
/* 804513D8 0044E318  80 9E 00 64 */	lwz r4, 0x64(r30)
/* 804513DC 0044E31C  80 1E 00 68 */	lwz r0, 0x68(r30)
/* 804513E0 0044E320  7C 84 F8 50 */	subf r4, r4, r31
/* 804513E4 0044E324  90 A1 00 08 */	stw r5, 8(r1)
/* 804513E8 0044E328  6C 84 80 00 */	xoris r4, r4, 0x8000
/* 804513EC 0044E32C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 804513F0 0044E330  90 81 00 0C */	stw r4, 0xc(r1)
/* 804513F4 0044E334  C0 62 27 D0 */	lfs f3, lbl_80520B30@sda21(r2)
/* 804513F8 0044E338  C8 01 00 08 */	lfd f0, 8(r1)
/* 804513FC 0044E33C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80451400 0044E340  EC 20 10 28 */	fsubs f1, f0, f2
/* 80451404 0044E344  80 9E 00 40 */	lwz r4, 0x40(r30)
/* 80451408 0044E348  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8045140C 0044E34C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80451410 0044E350  EC 00 10 28 */	fsubs f0, f0, f2
/* 80451414 0044E354  EC 01 00 24 */	fdivs f0, f1, f0
/* 80451418 0044E358  EC 03 00 28 */	fsubs f0, f3, f0
/* 8045141C 0044E35C  D0 04 01 44 */	stfs f0, 0x144(r4)
/* 80451420 0044E360  48 00 00 18 */	b .L_80451438
.L_80451424:
/* 80451424 0044E364  C0 02 27 D0 */	lfs f0, lbl_80520B30@sda21(r2)
/* 80451428 0044E368  38 00 00 01 */	li r0, 1
/* 8045142C 0044E36C  80 9E 00 40 */	lwz r4, 0x40(r30)
/* 80451430 0044E370  D0 04 01 44 */	stfs f0, 0x144(r4)
/* 80451434 0044E374  90 1E 00 5C */	stw r0, 0x5c(r30)
.L_80451438:
/* 80451438 0044E378  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8045143C 0044E37C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80451440 0044E380  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80451444 0044E384  7C 08 03 A6 */	mtlr r0
/* 80451448 0044E388  38 21 00 20 */	addi r1, r1, 0x20
/* 8045144C 0044E38C  4E 80 00 20 */	blr 

.global draw__Q35P2JME7Caption8TControlFR8Graphics
draw__Q35P2JME7Caption8TControlFR8Graphics:
/* 80451450 0044E390  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80451454 0044E394  7C 08 02 A6 */	mflr r0
/* 80451458 0044E398  90 01 00 54 */	stw r0, 0x54(r1)
/* 8045145C 0044E39C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80451460 0044E3A0  7C 9F 23 78 */	mr r31, r4
/* 80451464 0044E3A4  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80451468 0044E3A8  7C 7E 1B 78 */	mr r30, r3
/* 8045146C 0044E3AC  80 03 00 5C */	lwz r0, 0x5c(r3)
/* 80451470 0044E3B0  2C 00 00 00 */	cmpwi r0, 0
/* 80451474 0044E3B4  41 82 00 48 */	beq .L_804514BC
/* 80451478 0044E3B8  C0 22 27 DC */	lfs f1, lbl_80520B3C@sda21(r2)
/* 8045147C 0044E3BC  38 61 00 14 */	addi r3, r1, 0x14
/* 80451480 0044E3C0  C0 02 28 08 */	lfs f0, lbl_80520B68@sda21(r2)
/* 80451484 0044E3C4  38 81 00 08 */	addi r4, r1, 8
/* 80451488 0044E3C8  D0 21 00 08 */	stfs f1, 8(r1)
/* 8045148C 0044E3CC  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80451490 0044E3D0  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 80451494 0044E3D4  4B FD 73 AD */	bl "makeT__7MatrixfFR10Vector3<f>"
/* 80451498 0044E3D8  38 7F 01 90 */	addi r3, r31, 0x190
/* 8045149C 0044E3DC  81 9F 01 90 */	lwz r12, 0x190(r31)
/* 804514A0 0044E3E0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 804514A4 0044E3E4  7D 89 03 A6 */	mtctr r12
/* 804514A8 0044E3E8  4E 80 04 21 */	bctrl 
/* 804514AC 0044E3EC  7F C3 F3 78 */	mr r3, r30
/* 804514B0 0044E3F0  38 81 00 14 */	addi r4, r1, 0x14
/* 804514B4 0044E3F4  38 BF 02 10 */	addi r5, r31, 0x210
/* 804514B8 0044E3F8  4B FE 7A 45 */	bl draw__Q25P2JME8TControlFPA4_fPA4_f
.L_804514BC:
/* 804514BC 0044E3FC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 804514C0 0044E400  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 804514C4 0044E404  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 804514C8 0044E408  7C 08 03 A6 */	mtlr r0
/* 804514CC 0044E40C  38 21 00 50 */	addi r1, r1, 0x50
/* 804514D0 0044E410  4E 80 00 20 */	blr 

.global start__Q35P2JME7Caption8TControlFPcll
start__Q35P2JME7Caption8TControlFPcll:
/* 804514D4 0044E414  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 804514D8 0044E418  7C 08 02 A6 */	mflr r0
/* 804514DC 0044E41C  90 01 00 24 */	stw r0, 0x24(r1)
/* 804514E0 0044E420  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 804514E4 0044E424  7C DF 33 78 */	mr r31, r6
/* 804514E8 0044E428  93 C1 00 18 */	stw r30, 0x18(r1)
/* 804514EC 0044E42C  7C BE 2B 78 */	mr r30, r5
/* 804514F0 0044E430  93 A1 00 14 */	stw r29, 0x14(r1)
/* 804514F4 0044E434  7C 7D 1B 78 */	mr r29, r3
/* 804514F8 0044E438  81 83 00 00 */	lwz r12, 0(r3)
/* 804514FC 0044E43C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80451500 0044E440  7D 89 03 A6 */	mtctr r12
/* 80451504 0044E444  4E 80 04 21 */	bctrl 
/* 80451508 0044E448  93 DD 00 60 */	stw r30, 0x60(r29)
/* 8045150C 0044E44C  93 FD 00 64 */	stw r31, 0x64(r29)
/* 80451510 0044E450  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80451514 0044E454  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80451518 0044E458  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8045151C 0044E45C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80451520 0044E460  7C 08 03 A6 */	mtlr r0
/* 80451524 0044E464  38 21 00 20 */	addi r1, r1, 0x20
/* 80451528 0044E468  4E 80 00 20 */	blr 

.global createSequenceProcessor__Q35P2JME7Caption8TControlFv
createSequenceProcessor__Q35P2JME7Caption8TControlFv:
/* 8045152C 0044E46C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80451530 0044E470  7C 08 02 A6 */	mflr r0
/* 80451534 0044E474  90 01 00 14 */	stw r0, 0x14(r1)
/* 80451538 0044E478  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8045153C 0044E47C  93 C1 00 08 */	stw r30, 8(r1)
/* 80451540 0044E480  7C 7E 1B 78 */	mr r30, r3
/* 80451544 0044E484  38 60 00 70 */	li r3, 0x70
/* 80451548 0044E488  4B BD 29 5D */	bl __nw__FUl
/* 8045154C 0044E48C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80451550 0044E490  41 82 00 48 */	beq .L_80451598
/* 80451554 0044E494  80 1E 00 38 */	lwz r0, 0x38(r30)
/* 80451558 0044E498  28 00 00 00 */	cmplwi r0, 0
/* 8045155C 0044E49C  40 82 00 20 */	bne .L_8045157C
/* 80451560 0044E4A0  3C 60 80 4A */	lis r3, lbl_8049B880@ha
/* 80451564 0044E4A4  3C A0 80 4A */	lis r5, lbl_8049B890@ha
/* 80451568 0044E4A8  38 63 B8 80 */	addi r3, r3, lbl_8049B880@l
/* 8045156C 0044E4AC  38 80 00 79 */	li r4, 0x79
/* 80451570 0044E4B0  38 A5 B8 90 */	addi r5, r5, lbl_8049B890@l
/* 80451574 0044E4B4  4C C6 31 82 */	crclr 6
/* 80451578 0044E4B8  4B BD 90 C9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045157C:
/* 8045157C 0044E4BC  80 9E 00 38 */	lwz r4, 0x38(r30)
/* 80451580 0044E4C0  7F E3 FB 78 */	mr r3, r31
/* 80451584 0044E4C4  7F C5 F3 78 */	mr r5, r30
/* 80451588 0044E4C8  4B FE DD 41 */	bl __ct__Q35P2JME6Window18TSequenceProcessorFPQ28JMessage10TReferencePQ28JMessage8TControl
/* 8045158C 0044E4CC  3C 60 80 4F */	lis r3, __vt__Q35P2JME7Caption18TSequenceProcessor@ha
/* 80451590 0044E4D0  38 03 D5 78 */	addi r0, r3, __vt__Q35P2JME7Caption18TSequenceProcessor@l
/* 80451594 0044E4D4  90 1F 00 00 */	stw r0, 0(r31)
.L_80451598:
/* 80451598 0044E4D8  93 FE 00 3C */	stw r31, 0x3c(r30)
/* 8045159C 0044E4DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804515A0 0044E4E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804515A4 0044E4E4  83 C1 00 08 */	lwz r30, 8(r1)
/* 804515A8 0044E4E8  7C 08 03 A6 */	mtlr r0
/* 804515AC 0044E4EC  38 21 00 10 */	addi r1, r1, 0x10
/* 804515B0 0044E4F0  4E 80 00 20 */	blr 

.global createRenderingProcessor__Q35P2JME7Caption8TControlFv
createRenderingProcessor__Q35P2JME7Caption8TControlFv:
/* 804515B4 0044E4F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804515B8 0044E4F8  7C 08 02 A6 */	mflr r0
/* 804515BC 0044E4FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 804515C0 0044E500  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804515C4 0044E504  93 C1 00 08 */	stw r30, 8(r1)
/* 804515C8 0044E508  7C 7E 1B 78 */	mr r30, r3
/* 804515CC 0044E50C  38 60 01 48 */	li r3, 0x148
/* 804515D0 0044E510  4B BD 28 D5 */	bl __nw__FUl
/* 804515D4 0044E514  7C 7F 1B 79 */	or. r31, r3, r3
/* 804515D8 0044E518  41 82 00 4C */	beq .L_80451624
/* 804515DC 0044E51C  80 1E 00 38 */	lwz r0, 0x38(r30)
/* 804515E0 0044E520  28 00 00 00 */	cmplwi r0, 0
/* 804515E4 0044E524  40 82 00 20 */	bne .L_80451604
/* 804515E8 0044E528  3C 60 80 4A */	lis r3, lbl_8049B880@ha
/* 804515EC 0044E52C  3C A0 80 4A */	lis r5, lbl_8049B890@ha
/* 804515F0 0044E530  38 63 B8 80 */	addi r3, r3, lbl_8049B880@l
/* 804515F4 0044E534  38 80 00 79 */	li r4, 0x79
/* 804515F8 0044E538  38 A5 B8 90 */	addi r5, r5, lbl_8049B890@l
/* 804515FC 0044E53C  4C C6 31 82 */	crclr 6
/* 80451600 0044E540  4B BD 90 41 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80451604:
/* 80451604 0044E544  80 9E 00 38 */	lwz r4, 0x38(r30)
/* 80451608 0044E548  7F E3 FB 78 */	mr r3, r31
/* 8045160C 0044E54C  4B FE DE F1 */	bl __ct__Q35P2JME6Window19TRenderingProcessorFPQ28JMessage10TReference
/* 80451610 0044E550  3C 60 80 4F */	lis r3, __vt__Q35P2JME7Caption19TRenderingProcessor@ha
/* 80451614 0044E554  C0 02 27 D0 */	lfs f0, lbl_80520B30@sda21(r2)
/* 80451618 0044E558  38 03 D5 F0 */	addi r0, r3, __vt__Q35P2JME7Caption19TRenderingProcessor@l
/* 8045161C 0044E55C  90 1F 00 00 */	stw r0, 0(r31)
/* 80451620 0044E560  D0 1F 01 44 */	stfs f0, 0x144(r31)
.L_80451624:
/* 80451624 0044E564  93 FE 00 40 */	stw r31, 0x40(r30)
/* 80451628 0044E568  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045162C 0044E56C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80451630 0044E570  83 C1 00 08 */	lwz r30, 8(r1)
/* 80451634 0044E574  7C 08 03 A6 */	mtlr r0
/* 80451638 0044E578  38 21 00 10 */	addi r1, r1, 0x10
/* 8045163C 0044E57C  4E 80 00 20 */	blr 

.global __dt__Q35P2JME7Caption18TSequenceProcessorFv
__dt__Q35P2JME7Caption18TSequenceProcessorFv:
/* 80451640 0044E580  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80451644 0044E584  7C 08 02 A6 */	mflr r0
/* 80451648 0044E588  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045164C 0044E58C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80451650 0044E590  7C 9F 23 78 */	mr r31, r4
/* 80451654 0044E594  93 C1 00 08 */	stw r30, 8(r1)
/* 80451658 0044E598  7C 7E 1B 79 */	or. r30, r3, r3
/* 8045165C 0044E59C  41 82 00 48 */	beq .L_804516A4
/* 80451660 0044E5A0  3C 80 80 4F */	lis r4, __vt__Q35P2JME7Caption18TSequenceProcessor@ha
/* 80451664 0044E5A4  38 04 D5 78 */	addi r0, r4, __vt__Q35P2JME7Caption18TSequenceProcessor@l
/* 80451668 0044E5A8  90 1E 00 00 */	stw r0, 0(r30)
/* 8045166C 0044E5AC  41 82 00 28 */	beq .L_80451694
/* 80451670 0044E5B0  3C 80 80 4F */	lis r4, __vt__Q35P2JME6Window18TSequenceProcessor@ha
/* 80451674 0044E5B4  38 04 CD 34 */	addi r0, r4, __vt__Q35P2JME6Window18TSequenceProcessor@l
/* 80451678 0044E5B8  90 1E 00 00 */	stw r0, 0(r30)
/* 8045167C 0044E5BC  41 82 00 18 */	beq .L_80451694
/* 80451680 0044E5C0  3C A0 80 4F */	lis r5, __vt__Q25P2JME18TSequenceProcessor@ha
/* 80451684 0044E5C4  38 80 00 00 */	li r4, 0
/* 80451688 0044E5C8  38 05 C8 F8 */	addi r0, r5, __vt__Q25P2JME18TSequenceProcessor@l
/* 8045168C 0044E5CC  90 1E 00 00 */	stw r0, 0(r30)
/* 80451690 0044E5D0  4B BB 61 99 */	bl __dt__Q28JMessage18TSequenceProcessorFv
.L_80451694:
/* 80451694 0044E5D4  7F E0 07 35 */	extsh. r0, r31
/* 80451698 0044E5D8  40 81 00 0C */	ble .L_804516A4
/* 8045169C 0044E5DC  7F C3 F3 78 */	mr r3, r30
/* 804516A0 0044E5E0  4B BD 2A 15 */	bl __dl__FPv
.L_804516A4:
/* 804516A4 0044E5E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804516A8 0044E5E8  7F C3 F3 78 */	mr r3, r30
/* 804516AC 0044E5EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804516B0 0044E5F0  83 C1 00 08 */	lwz r30, 8(r1)
/* 804516B4 0044E5F4  7C 08 03 A6 */	mtlr r0
/* 804516B8 0044E5F8  38 21 00 10 */	addi r1, r1, 0x10
/* 804516BC 0044E5FC  4E 80 00 20 */	blr 

.global do_isReady__Q35P2JME7Caption18TSequenceProcessorFv
do_isReady__Q35P2JME7Caption18TSequenceProcessorFv: # weak function
/* 804516C0 0044E600  38 60 00 01 */	li r3, 1
/* 804516C4 0044E604  4E 80 00 20 */	blr 

.global doResetAbtnWaitSE__Q35P2JME7Caption18TSequenceProcessorFv
doResetAbtnWaitSE__Q35P2JME7Caption18TSequenceProcessorFv:
/* 804516C8 0044E608  4E 80 00 20 */	blr 

.global doCharacterSE__Q35P2JME7Caption18TSequenceProcessorFi
doCharacterSE__Q35P2JME7Caption18TSequenceProcessorFi:
/* 804516CC 0044E60C  4E 80 00 20 */	blr 

.global doCharacterSEStart__Q35P2JME7Caption18TSequenceProcessorFv
doCharacterSEStart__Q35P2JME7Caption18TSequenceProcessorFv:
/* 804516D0 0044E610  4E 80 00 20 */	blr 

.global doCharacterSEEnd__Q35P2JME7Caption18TSequenceProcessorFv
doCharacterSEEnd__Q35P2JME7Caption18TSequenceProcessorFv:
/* 804516D4 0044E614  4E 80 00 20 */	blr 

.global __dt__Q35P2JME7Caption19TRenderingProcessorFv
__dt__Q35P2JME7Caption19TRenderingProcessorFv: # weak function
/* 804516D8 0044E618  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804516DC 0044E61C  7C 08 02 A6 */	mflr r0
/* 804516E0 0044E620  90 01 00 14 */	stw r0, 0x14(r1)
/* 804516E4 0044E624  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804516E8 0044E628  7C 9F 23 78 */	mr r31, r4
/* 804516EC 0044E62C  93 C1 00 08 */	stw r30, 8(r1)
/* 804516F0 0044E630  7C 7E 1B 79 */	or. r30, r3, r3
/* 804516F4 0044E634  41 82 00 80 */	beq .L_80451774
/* 804516F8 0044E638  3C 60 80 4F */	lis r3, __vt__Q35P2JME7Caption19TRenderingProcessor@ha
/* 804516FC 0044E63C  38 03 D5 F0 */	addi r0, r3, __vt__Q35P2JME7Caption19TRenderingProcessor@l
/* 80451700 0044E640  90 1E 00 00 */	stw r0, 0(r30)
/* 80451704 0044E644  41 82 00 60 */	beq .L_80451764
/* 80451708 0044E648  3C 60 80 4F */	lis r3, __vt__Q35P2JME6Window19TRenderingProcessor@ha
/* 8045170C 0044E64C  34 1E 01 10 */	addic. r0, r30, 0x110
/* 80451710 0044E650  38 03 CC A4 */	addi r0, r3, __vt__Q35P2JME6Window19TRenderingProcessor@l
/* 80451714 0044E654  90 1E 00 00 */	stw r0, 0(r30)
/* 80451718 0044E658  41 82 00 1C */	beq .L_80451734
/* 8045171C 0044E65C  38 7E 01 28 */	addi r3, r30, 0x128
/* 80451720 0044E660  38 80 FF FF */	li r4, -1
/* 80451724 0044E664  4B FB FE 65 */	bl __dt__5CNodeFv
/* 80451728 0044E668  38 7E 01 10 */	addi r3, r30, 0x110
/* 8045172C 0044E66C  38 80 FF FF */	li r4, -1
/* 80451730 0044E670  4B FB FE 59 */	bl __dt__5CNodeFv
.L_80451734:
/* 80451734 0044E674  28 1E 00 00 */	cmplwi r30, 0
/* 80451738 0044E678  41 82 00 2C */	beq .L_80451764
/* 8045173C 0044E67C  3C 60 80 4F */	lis r3, __vt__Q25P2JME19TRenderingProcessor@ha
/* 80451740 0044E680  38 03 CA B0 */	addi r0, r3, __vt__Q25P2JME19TRenderingProcessor@l
/* 80451744 0044E684  90 1E 00 00 */	stw r0, 0(r30)
/* 80451748 0044E688  41 82 00 1C */	beq .L_80451764
/* 8045174C 0044E68C  3C 80 80 4F */	lis r4, __vt__Q25P2JME23TRenderingProcessorBase@ha
/* 80451750 0044E690  7F C3 F3 78 */	mr r3, r30
/* 80451754 0044E694  38 04 CB 34 */	addi r0, r4, __vt__Q25P2JME23TRenderingProcessorBase@l
/* 80451758 0044E698  38 80 00 00 */	li r4, 0
/* 8045175C 0044E69C  90 1E 00 00 */	stw r0, 0(r30)
/* 80451760 0044E6A0  4B BB 69 9D */	bl __dt__Q28JMessage19TRenderingProcessorFv
.L_80451764:
/* 80451764 0044E6A4  7F E0 07 35 */	extsh. r0, r31
/* 80451768 0044E6A8  40 81 00 0C */	ble .L_80451774
/* 8045176C 0044E6AC  7F C3 F3 78 */	mr r3, r30
/* 80451770 0044E6B0  4B BD 29 45 */	bl __dl__FPv
.L_80451774:
/* 80451774 0044E6B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80451778 0044E6B8  7F C3 F3 78 */	mr r3, r30
/* 8045177C 0044E6BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80451780 0044E6C0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80451784 0044E6C4  7C 08 03 A6 */	mtlr r0
/* 80451788 0044E6C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8045178C 0044E6CC  4E 80 00 20 */	blr 
