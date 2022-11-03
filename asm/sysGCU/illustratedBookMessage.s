.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_8049BAA0:
	.asciz "illustratedBookMessage.cpp"
.balign 4
lbl_8049BABC:
	.asciz "P2Assert"
.balign 4
lbl_8049BAC8:
	.asciz "messageObj.h"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q35P2JME15IllustratedBook8TControl
__vt__Q35P2JME15IllustratedBook8TControl:
	.4byte 0
	.4byte 0
	.4byte __dt__Q35P2JME15IllustratedBook8TControlFv
	.4byte reset__Q35P2JME15IllustratedBook8TControlFv
	.4byte update__Q25P2JME8TControlFv
	.4byte update__Q35P2JME15IllustratedBook8TControlFP10ControllerP10Controller
	.4byte draw__Q35P2JME15IllustratedBook8TControlFR8Graphics
	.4byte draw__Q35P2JME15IllustratedBook8TControlFPA4_fPA4_f
	.4byte setMessageID__Q25P2JME8TControlFUlUl
	.4byte setMessageID__Q25P2JME8TControlFPc
	.4byte setMessageID__Q25P2JME8TControlFUx
	.4byte setMessageCode__Q25P2JME8TControlFUsUs
	.4byte setMessageCode__Q25P2JME8TControlFUl
	.4byte onInit__Q35P2JME15IllustratedBook8TControlFv
	.4byte createReference__Q25P2JME8TControlFv
	.4byte createResourceContainer__Q25P2JME8TControlFv
	.4byte createSequenceProcessor__Q35P2JME15IllustratedBook8TControlFv
	.4byte createRenderingProcessor__Q35P2JME15IllustratedBook8TControlFv
.global __vt__Q35P2JME15IllustratedBook19TRenderingProcessor
__vt__Q35P2JME15IllustratedBook19TRenderingProcessor:
	.4byte 0
	.4byte 0
	.4byte __dt__Q35P2JME15IllustratedBook19TRenderingProcessorFv
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
	.4byte doTagControlAbtnWait__Q35P2JME15IllustratedBook19TRenderingProcessorFv
	.4byte doDrawCommon__Q35P2JME6Window19TRenderingProcessorFffP7MatrixfP7Matrixf
	.4byte "makeMatrix__Q35P2JME15IllustratedBook19TRenderingProcessorFP7MatrixfPQ35P2JME6Window8DrawInfof10Vector3<f>"
	.4byte doGetDrawInfo__Q35P2JME6Window19TRenderingProcessorFPQ35P2JME6Window8DrawInfo
.global __vt__Q35P2JME15IllustratedBook18TSequenceProcessor
__vt__Q35P2JME15IllustratedBook18TSequenceProcessor:
	.4byte 0
	.4byte 0
	.4byte __dt__Q35P2JME15IllustratedBook18TSequenceProcessorFv
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
	.4byte do_isReady__Q25P2JME13TSeqProcNoSeqFv
	.4byte do_jump_isReady__Q25P2JME18TSequenceProcessorFv
	.4byte do_jump__Q25P2JME18TSequenceProcessorFPCvPCc
	.4byte do_branch_query__Q25P2JME18TSequenceProcessorFUs
	.4byte do_branch_queryResult__Q25P2JME18TSequenceProcessorFv
	.4byte do_branch__Q25P2JME18TSequenceProcessorFPCvPCc
	.4byte doResetAbtnWaitSE__Q25P2JME18TSequenceProcessorFv
	.4byte doCharacterSEStart__Q25P2JME18TSequenceProcessorFv
	.4byte doCharacterSE__Q25P2JME18TSequenceProcessorFi
	.4byte doCharacterSEEnd__Q25P2JME18TSequenceProcessorFv
	.4byte doFastForwardSE__Q25P2JME18TSequenceProcessorFv
	.4byte reset__Q25P2JME18TSequenceProcessorFv
.global __vt__Q25P2JME13TSeqProcNoSeq
__vt__Q25P2JME13TSeqProcNoSeq:
	.4byte 0
	.4byte 0
	.4byte __dt__Q25P2JME13TSeqProcNoSeqFv
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
	.4byte do_isReady__Q25P2JME13TSeqProcNoSeqFv
	.4byte do_jump_isReady__Q25P2JME18TSequenceProcessorFv
	.4byte do_jump__Q25P2JME18TSequenceProcessorFPCvPCc
	.4byte do_branch_query__Q25P2JME18TSequenceProcessorFUs
	.4byte do_branch_queryResult__Q25P2JME18TSequenceProcessorFv
	.4byte do_branch__Q25P2JME18TSequenceProcessorFPCvPCc
	.4byte doResetAbtnWaitSE__Q25P2JME18TSequenceProcessorFv
	.4byte doCharacterSEStart__Q25P2JME18TSequenceProcessorFv
	.4byte doCharacterSE__Q25P2JME18TSequenceProcessorFi
	.4byte doCharacterSEEnd__Q25P2JME18TSequenceProcessorFv
	.4byte doFastForwardSE__Q25P2JME18TSequenceProcessorFv
	.4byte reset__Q25P2JME18TSequenceProcessorFv

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_80520BC0:
	.float 1.0
lbl_80520BC4:
	.float 0.0
lbl_80520BC8:
	.float 3.5
lbl_80520BCC:
	.float 0.08
lbl_80520BD0:
	.float 60.0
.balign 8
lbl_80520BD8:
	.4byte 0x43300000
	.4byte 0x80000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __dt__Q25P2JME13TSeqProcNoSeqFv
__dt__Q25P2JME13TSeqProcNoSeqFv:
/* 80454F88 00451EC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80454F8C 00451ECC  7C 08 02 A6 */	mflr r0
/* 80454F90 00451ED0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80454F94 00451ED4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80454F98 00451ED8  7C 9F 23 78 */	mr r31, r4
/* 80454F9C 00451EDC  93 C1 00 08 */	stw r30, 8(r1)
/* 80454FA0 00451EE0  7C 7E 1B 79 */	or. r30, r3, r3
/* 80454FA4 00451EE4  41 82 00 38 */	beq .L_80454FDC
/* 80454FA8 00451EE8  3C 80 80 4F */	lis r4, __vt__Q25P2JME13TSeqProcNoSeq@ha
/* 80454FAC 00451EEC  38 04 DA 38 */	addi r0, r4, __vt__Q25P2JME13TSeqProcNoSeq@l
/* 80454FB0 00451EF0  90 1E 00 00 */	stw r0, 0(r30)
/* 80454FB4 00451EF4  41 82 00 18 */	beq .L_80454FCC
/* 80454FB8 00451EF8  3C A0 80 4F */	lis r5, __vt__Q25P2JME18TSequenceProcessor@ha
/* 80454FBC 00451EFC  38 80 00 00 */	li r4, 0
/* 80454FC0 00451F00  38 05 C8 F8 */	addi r0, r5, __vt__Q25P2JME18TSequenceProcessor@l
/* 80454FC4 00451F04  90 1E 00 00 */	stw r0, 0(r30)
/* 80454FC8 00451F08  4B BB 28 61 */	bl __dt__Q28JMessage18TSequenceProcessorFv
.L_80454FCC:
/* 80454FCC 00451F0C  7F E0 07 35 */	extsh. r0, r31
/* 80454FD0 00451F10  40 81 00 0C */	ble .L_80454FDC
/* 80454FD4 00451F14  7F C3 F3 78 */	mr r3, r30
/* 80454FD8 00451F18  4B BC F0 DD */	bl __dl__FPv
.L_80454FDC:
/* 80454FDC 00451F1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80454FE0 00451F20  7F C3 F3 78 */	mr r3, r30
/* 80454FE4 00451F24  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80454FE8 00451F28  83 C1 00 08 */	lwz r30, 8(r1)
/* 80454FEC 00451F2C  7C 08 03 A6 */	mtlr r0
/* 80454FF0 00451F30  38 21 00 10 */	addi r1, r1, 0x10
/* 80454FF4 00451F34  4E 80 00 20 */	blr 

.global "makeMatrix__Q35P2JME15IllustratedBook19TRenderingProcessorFP7MatrixfPQ35P2JME6Window8DrawInfof10Vector3<f>"
"makeMatrix__Q35P2JME15IllustratedBook19TRenderingProcessorFP7MatrixfPQ35P2JME6Window8DrawInfof10Vector3<f>":
/* 80454FF8 00451F38  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80454FFC 00451F3C  7C 08 02 A6 */	mflr r0
/* 80455000 00451F40  7C 83 23 78 */	mr r3, r4
/* 80455004 00451F44  C0 42 28 60 */	lfs f2, lbl_80520BC0@sda21(r2)
/* 80455008 00451F48  90 01 00 24 */	stw r0, 0x24(r1)
/* 8045500C 00451F4C  38 81 00 14 */	addi r4, r1, 0x14
/* 80455010 00451F50  C0 02 28 64 */	lfs f0, lbl_80520BC4@sda21(r2)
/* 80455014 00451F54  38 A1 00 08 */	addi r5, r1, 8
/* 80455018 00451F58  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8045501C 00451F5C  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 80455020 00451F60  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 80455024 00451F64  D0 21 00 08 */	stfs f1, 8(r1)
/* 80455028 00451F68  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8045502C 00451F6C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80455030 00451F70  4B FD 32 A9 */	bl "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
/* 80455034 00451F74  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80455038 00451F78  7C 08 03 A6 */	mtlr r0
/* 8045503C 00451F7C  38 21 00 20 */	addi r1, r1, 0x20
/* 80455040 00451F80  4E 80 00 20 */	blr 

.global __ct__Q35P2JME15IllustratedBook8TControlFv
__ct__Q35P2JME15IllustratedBook8TControlFv:
/* 80455044 00451F84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80455048 00451F88  7C 08 02 A6 */	mflr r0
/* 8045504C 00451F8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80455050 00451F90  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80455054 00451F94  7C 7F 1B 78 */	mr r31, r3
/* 80455058 00451F98  4B FE B0 95 */	bl __ct__Q35P2JME6Window8TControlFv
/* 8045505C 00451F9C  3C 60 80 4F */	lis r3, __vt__Q35P2JME15IllustratedBook8TControl@ha
/* 80455060 00451FA0  C0 42 28 64 */	lfs f2, lbl_80520BC4@sda21(r2)
/* 80455064 00451FA4  38 63 D8 E8 */	addi r3, r3, __vt__Q35P2JME15IllustratedBook8TControl@l
/* 80455068 00451FA8  38 00 00 00 */	li r0, 0
/* 8045506C 00451FAC  90 7F 00 00 */	stw r3, 0(r31)
/* 80455070 00451FB0  7F E3 FB 78 */	mr r3, r31
/* 80455074 00451FB4  C0 22 28 68 */	lfs f1, lbl_80520BC8@sda21(r2)
/* 80455078 00451FB8  D0 5F 00 5C */	stfs f2, 0x5c(r31)
/* 8045507C 00451FBC  C0 02 28 6C */	lfs f0, lbl_80520BCC@sda21(r2)
/* 80455080 00451FC0  D0 5F 00 60 */	stfs f2, 0x60(r31)
/* 80455084 00451FC4  90 1F 00 64 */	stw r0, 0x64(r31)
/* 80455088 00451FC8  D0 3F 00 6C */	stfs f1, 0x6c(r31)
/* 8045508C 00451FCC  D0 1F 00 70 */	stfs f0, 0x70(r31)
/* 80455090 00451FD0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80455094 00451FD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80455098 00451FD8  7C 08 03 A6 */	mtlr r0
/* 8045509C 00451FDC  38 21 00 10 */	addi r1, r1, 0x10
/* 804550A0 00451FE0  4E 80 00 20 */	blr 

.global onInit__Q35P2JME15IllustratedBook8TControlFv
onInit__Q35P2JME15IllustratedBook8TControlFv:
/* 804550A4 00451FE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804550A8 00451FE8  7C 08 02 A6 */	mflr r0
/* 804550AC 00451FEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 804550B0 00451FF0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804550B4 00451FF4  7C 7F 1B 78 */	mr r31, r3
/* 804550B8 00451FF8  4B FE B3 A9 */	bl onInit__Q35P2JME6Window8TControlFv
/* 804550BC 00451FFC  7F E3 FB 78 */	mr r3, r31
/* 804550C0 00452000  38 80 02 00 */	li r4, 0x200
/* 804550C4 00452004  4B FE B0 79 */	bl initRenderingProcessor__Q35P2JME6Window8TControlFUl
/* 804550C8 00452008  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804550CC 0045200C  38 60 00 01 */	li r3, 1
/* 804550D0 00452010  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804550D4 00452014  7C 08 03 A6 */	mtlr r0
/* 804550D8 00452018  38 21 00 10 */	addi r1, r1, 0x10
/* 804550DC 0045201C  4E 80 00 20 */	blr 

.global reset__Q35P2JME15IllustratedBook8TControlFv
reset__Q35P2JME15IllustratedBook8TControlFv:
/* 804550E0 00452020  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804550E4 00452024  7C 08 02 A6 */	mflr r0
/* 804550E8 00452028  90 01 00 14 */	stw r0, 0x14(r1)
/* 804550EC 0045202C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804550F0 00452030  7C 7F 1B 78 */	mr r31, r3
/* 804550F4 00452034  4B FE B2 D1 */	bl reset__Q35P2JME6Window8TControlFv
/* 804550F8 00452038  C0 02 28 64 */	lfs f0, lbl_80520BC4@sda21(r2)
/* 804550FC 0045203C  D0 1F 00 5C */	stfs f0, 0x5c(r31)
/* 80455100 00452040  D0 1F 00 68 */	stfs f0, 0x68(r31)
/* 80455104 00452044  D0 1F 00 60 */	stfs f0, 0x60(r31)
/* 80455108 00452048  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8045510C 0045204C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80455110 00452050  7C 08 03 A6 */	mtlr r0
/* 80455114 00452054  38 21 00 10 */	addi r1, r1, 0x10
/* 80455118 00452058  4E 80 00 20 */	blr 

.global getScrollPosition__Q35P2JME15IllustratedBook8TControlFv
getScrollPosition__Q35P2JME15IllustratedBook8TControlFv:
/* 8045511C 0045205C  C0 23 00 68 */	lfs f1, 0x68(r3)
/* 80455120 00452060  C0 02 28 64 */	lfs f0, lbl_80520BC4@sda21(r2)
/* 80455124 00452064  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80455128 00452068  4C 41 13 82 */	cror 2, 1, 2
/* 8045512C 0045206C  40 82 00 0C */	bne .L_80455138
/* 80455130 00452070  C0 22 28 60 */	lfs f1, lbl_80520BC0@sda21(r2)
/* 80455134 00452074  4E 80 00 20 */	blr 
.L_80455138:
/* 80455138 00452078  C0 03 00 5C */	lfs f0, 0x5c(r3)
/* 8045513C 0045207C  EC 20 08 24 */	fdivs f1, f0, f1
/* 80455140 00452080  4E 80 00 20 */	blr 

.global scroll__Q35P2JME15IllustratedBook8TControlFf
scroll__Q35P2JME15IllustratedBook8TControlFf:
/* 80455144 00452084  C0 02 28 64 */	lfs f0, lbl_80520BC4@sda21(r2)
/* 80455148 00452088  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8045514C 0045208C  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 80455150 00452090  41 82 00 D8 */	beq .L_80455228
/* 80455154 00452094  C0 03 00 6C */	lfs f0, 0x6c(r3)
/* 80455158 00452098  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8045515C 0045209C  EC 61 00 32 */	fmuls f3, f1, f0
/* 80455160 004520A0  C0 82 28 70 */	lfs f4, lbl_80520BD0@sda21(r2)
/* 80455164 004520A4  C0 44 00 54 */	lfs f2, 0x54(r4)
/* 80455168 004520A8  C0 03 00 5C */	lfs f0, 0x5c(r3)
/* 8045516C 004520AC  EC 64 00 F2 */	fmuls f3, f4, f3
/* 80455170 004520B0  EC 03 00 BA */	fmadds f0, f3, f2, f0
/* 80455174 004520B4  D0 03 00 5C */	stfs f0, 0x5c(r3)
/* 80455178 004520B8  C0 03 00 5C */	lfs f0, 0x5c(r3)
/* 8045517C 004520BC  C0 43 00 68 */	lfs f2, 0x68(r3)
/* 80455180 004520C0  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80455184 004520C4  40 80 00 08 */	bge .L_8045518C
/* 80455188 004520C8  D0 43 00 5C */	stfs f2, 0x5c(r3)
.L_8045518C:
/* 8045518C 004520CC  C0 43 00 5C */	lfs f2, 0x5c(r3)
/* 80455190 004520D0  C0 02 28 64 */	lfs f0, lbl_80520BC4@sda21(r2)
/* 80455194 004520D4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80455198 004520D8  40 81 00 08 */	ble .L_804551A0
/* 8045519C 004520DC  D0 03 00 5C */	stfs f0, 0x5c(r3)
.L_804551A0:
/* 804551A0 004520E0  C0 02 28 64 */	lfs f0, lbl_80520BC4@sda21(r2)
/* 804551A4 004520E4  80 83 00 40 */	lwz r4, 0x40(r3)
/* 804551A8 004520E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 804551AC 004520EC  C0 44 00 C0 */	lfs f2, 0xc0(r4)
/* 804551B0 004520F0  40 81 00 0C */	ble .L_804551BC
/* 804551B4 004520F4  38 80 00 00 */	li r4, 0
/* 804551B8 004520F8  48 00 00 08 */	b .L_804551C0
.L_804551BC:
/* 804551BC 004520FC  38 80 FF FF */	li r4, -1
.L_804551C0:
/* 804551C0 00452100  C0 03 00 5C */	lfs f0, 0x5c(r3)
/* 804551C4 00452104  3C 00 43 30 */	lis r0, 0x4330
/* 804551C8 00452108  90 01 00 10 */	stw r0, 0x10(r1)
/* 804551CC 0045210C  EC 00 10 24 */	fdivs f0, f0, f2
/* 804551D0 00452110  C8 22 28 78 */	lfd f1, lbl_80520BD8@sda21(r2)
/* 804551D4 00452114  FC 00 00 1E */	fctiwz f0, f0
/* 804551D8 00452118  D8 01 00 08 */	stfd f0, 8(r1)
/* 804551DC 0045211C  80 01 00 0C */	lwz r0, 0xc(r1)
/* 804551E0 00452120  7C 04 02 14 */	add r0, r4, r0
/* 804551E4 00452124  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 804551E8 00452128  90 01 00 14 */	stw r0, 0x14(r1)
/* 804551EC 0045212C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 804551F0 00452130  EC 00 08 28 */	fsubs f0, f0, f1
/* 804551F4 00452134  EC 00 00 B2 */	fmuls f0, f0, f2
/* 804551F8 00452138  D0 03 00 60 */	stfs f0, 0x60(r3)
/* 804551FC 0045213C  C0 03 00 60 */	lfs f0, 0x60(r3)
/* 80455200 00452140  C0 23 00 68 */	lfs f1, 0x68(r3)
/* 80455204 00452144  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80455208 00452148  40 80 00 08 */	bge .L_80455210
/* 8045520C 0045214C  D0 23 00 60 */	stfs f1, 0x60(r3)
.L_80455210:
/* 80455210 00452150  C0 23 00 60 */	lfs f1, 0x60(r3)
/* 80455214 00452154  C0 02 28 64 */	lfs f0, lbl_80520BC4@sda21(r2)
/* 80455218 00452158  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8045521C 0045215C  40 81 00 14 */	ble .L_80455230
/* 80455220 00452160  D0 03 00 60 */	stfs f0, 0x60(r3)
/* 80455224 00452164  48 00 00 0C */	b .L_80455230
.L_80455228:
/* 80455228 00452168  C0 03 00 60 */	lfs f0, 0x60(r3)
/* 8045522C 0045216C  D0 03 00 5C */	stfs f0, 0x5c(r3)
.L_80455230:
/* 80455230 00452170  38 21 00 20 */	addi r1, r1, 0x20
/* 80455234 00452174  4E 80 00 20 */	blr 

.global update__Q35P2JME15IllustratedBook8TControlFP10ControllerP10Controller
update__Q35P2JME15IllustratedBook8TControlFP10ControllerP10Controller:
/* 80455238 00452178  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8045523C 0045217C  7C 08 02 A6 */	mflr r0
/* 80455240 00452180  90 01 00 34 */	stw r0, 0x34(r1)
/* 80455244 00452184  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80455248 00452188  7C 7F 1B 78 */	mr r31, r3
/* 8045524C 0045218C  4B FE 3C 01 */	bl update__Q25P2JME8TControlFv
/* 80455250 00452190  80 BF 00 40 */	lwz r5, 0x40(r31)
/* 80455254 00452194  3C 00 43 30 */	lis r0, 0x4330
/* 80455258 00452198  90 01 00 08 */	stw r0, 8(r1)
/* 8045525C 0045219C  88 85 00 A4 */	lbz r4, 0xa4(r5)
/* 80455260 004521A0  C8 42 28 78 */	lfd f2, lbl_80520BD8@sda21(r2)
/* 80455264 004521A4  38 84 00 01 */	addi r4, r4, 1
/* 80455268 004521A8  C0 85 00 C0 */	lfs f4, 0xc0(r5)
/* 8045526C 004521AC  6C 84 80 00 */	xoris r4, r4, 0x8000
/* 80455270 004521B0  C0 05 00 3C */	lfs f0, 0x3c(r5)
/* 80455274 004521B4  90 81 00 0C */	stw r4, 0xc(r1)
/* 80455278 004521B8  C0 62 28 70 */	lfs f3, lbl_80520BD0@sda21(r2)
/* 8045527C 004521BC  C8 21 00 08 */	lfd f1, 8(r1)
/* 80455280 004521C0  90 01 00 18 */	stw r0, 0x18(r1)
/* 80455284 004521C4  EC 21 10 28 */	fsubs f1, f1, f2
/* 80455288 004521C8  EC 04 00 7C */	fnmsubs f0, f4, f1, f0
/* 8045528C 004521CC  D0 1F 00 68 */	stfs f0, 0x68(r31)
/* 80455290 004521D0  80 9F 00 40 */	lwz r4, 0x40(r31)
/* 80455294 004521D4  C0 1F 00 68 */	lfs f0, 0x68(r31)
/* 80455298 004521D8  C0 24 00 C0 */	lfs f1, 0xc0(r4)
/* 8045529C 004521DC  EC 00 08 24 */	fdivs f0, f0, f1
/* 804552A0 004521E0  FC 00 00 1E */	fctiwz f0, f0
/* 804552A4 004521E4  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 804552A8 004521E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804552AC 004521EC  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 804552B0 004521F0  90 01 00 1C */	stw r0, 0x1c(r1)
/* 804552B4 004521F4  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 804552B8 004521F8  EC 00 10 28 */	fsubs f0, f0, f2
/* 804552BC 004521FC  EC 00 00 72 */	fmuls f0, f0, f1
/* 804552C0 00452200  D0 1F 00 68 */	stfs f0, 0x68(r31)
/* 804552C4 00452204  80 BF 00 40 */	lwz r5, 0x40(r31)
/* 804552C8 00452208  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 804552CC 0045220C  C0 85 00 58 */	lfs f4, 0x58(r5)
/* 804552D0 00452210  C0 1F 00 5C */	lfs f0, 0x5c(r31)
/* 804552D4 00452214  C0 5F 00 70 */	lfs f2, 0x70(r31)
/* 804552D8 00452218  EC 20 20 28 */	fsubs f1, f0, f4
/* 804552DC 0045221C  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 804552E0 00452220  EC 22 00 72 */	fmuls f1, f2, f1
/* 804552E4 00452224  EC 23 00 72 */	fmuls f1, f3, f1
/* 804552E8 00452228  EC 01 00 32 */	fmuls f0, f1, f0
/* 804552EC 0045222C  EC 00 20 2A */	fadds f0, f0, f4
/* 804552F0 00452230  D0 05 00 58 */	stfs f0, 0x58(r5)
/* 804552F4 00452234  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 804552F8 00452238  80 01 00 34 */	lwz r0, 0x34(r1)
/* 804552FC 0045223C  7C 08 03 A6 */	mtlr r0
/* 80455300 00452240  38 21 00 30 */	addi r1, r1, 0x30
/* 80455304 00452244  4E 80 00 20 */	blr 

.global setTextBoxInfo__Q35P2JME15IllustratedBook8TControlFP10J2DTextBox
setTextBoxInfo__Q35P2JME15IllustratedBook8TControlFP10J2DTextBox:
/* 80455308 00452248  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8045530C 0045224C  7C 08 02 A6 */	mflr r0
/* 80455310 00452250  90 01 00 14 */	stw r0, 0x14(r1)
/* 80455314 00452254  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80455318 00452258  7C 9F 23 78 */	mr r31, r4
/* 8045531C 0045225C  93 C1 00 08 */	stw r30, 8(r1)
/* 80455320 00452260  7C 7E 1B 78 */	mr r30, r3
/* 80455324 00452264  7F E3 FB 78 */	mr r3, r31
/* 80455328 00452268  81 9F 00 00 */	lwz r12, 0(r31)
/* 8045532C 0045226C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80455330 00452270  7D 89 03 A6 */	mtctr r12
/* 80455334 00452274  4E 80 04 21 */	bctrl 
/* 80455338 00452278  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 8045533C 0045227C  28 00 00 13 */	cmplwi r0, 0x13
/* 80455340 00452280  41 82 00 20 */	beq .L_80455360
/* 80455344 00452284  3C 60 80 4A */	lis r3, lbl_8049BAA0@ha
/* 80455348 00452288  3C A0 80 4A */	lis r5, lbl_8049BABC@ha
/* 8045534C 0045228C  38 63 BA A0 */	addi r3, r3, lbl_8049BAA0@l
/* 80455350 00452290  38 80 00 D4 */	li r4, 0xd4
/* 80455354 00452294  38 A5 BA BC */	addi r5, r5, lbl_8049BABC@l
/* 80455358 00452298  4C C6 31 82 */	crclr 6
/* 8045535C 0045229C  4B BD 52 E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80455360:
/* 80455360 004522A0  93 FE 00 64 */	stw r31, 0x64(r30)
/* 80455364 004522A4  80 7E 00 40 */	lwz r3, 0x40(r30)
/* 80455368 004522A8  80 9E 00 64 */	lwz r4, 0x64(r30)
/* 8045536C 004522AC  4B FE 7B 01 */	bl setTextBoxInfo__Q25P2JME19TRenderingProcessorFP7J2DPane
/* 80455370 004522B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80455374 004522B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80455378 004522B8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8045537C 004522BC  7C 08 03 A6 */	mtlr r0
/* 80455380 004522C0  38 21 00 10 */	addi r1, r1, 0x10
/* 80455384 004522C4  4E 80 00 20 */	blr 

.global draw__Q35P2JME15IllustratedBook8TControlFPA4_fPA4_f
draw__Q35P2JME15IllustratedBook8TControlFPA4_fPA4_f:
/* 80455388 004522C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8045538C 004522CC  7C 08 02 A6 */	mflr r0
/* 80455390 004522D0  28 04 00 00 */	cmplwi r4, 0
/* 80455394 004522D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80455398 004522D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8045539C 004522DC  7C BF 2B 78 */	mr r31, r5
/* 804553A0 004522E0  93 C1 00 08 */	stw r30, 8(r1)
/* 804553A4 004522E4  7C 7E 1B 78 */	mr r30, r3
/* 804553A8 004522E8  40 82 00 34 */	bne .L_804553DC
/* 804553AC 004522EC  80 1E 00 64 */	lwz r0, 0x64(r30)
/* 804553B0 004522F0  28 00 00 00 */	cmplwi r0, 0
/* 804553B4 004522F4  40 82 00 20 */	bne .L_804553D4
/* 804553B8 004522F8  3C 60 80 4A */	lis r3, lbl_8049BAA0@ha
/* 804553BC 004522FC  3C A0 80 4A */	lis r5, lbl_8049BABC@ha
/* 804553C0 00452300  38 63 BA A0 */	addi r3, r3, lbl_8049BAA0@l
/* 804553C4 00452304  38 80 00 E1 */	li r4, 0xe1
/* 804553C8 00452308  38 A5 BA BC */	addi r5, r5, lbl_8049BABC@l
/* 804553CC 0045230C  4C C6 31 82 */	crclr 6
/* 804553D0 00452310  4B BD 52 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804553D4:
/* 804553D4 00452314  80 7E 00 64 */	lwz r3, 0x64(r30)
/* 804553D8 00452318  38 83 00 80 */	addi r4, r3, 0x80
.L_804553DC:
/* 804553DC 0045231C  7F C3 F3 78 */	mr r3, r30
/* 804553E0 00452320  7F E5 FB 78 */	mr r5, r31
/* 804553E4 00452324  4B FE 3B 19 */	bl draw__Q25P2JME8TControlFPA4_fPA4_f
/* 804553E8 00452328  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804553EC 0045232C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804553F0 00452330  83 C1 00 08 */	lwz r30, 8(r1)
/* 804553F4 00452334  7C 08 03 A6 */	mtlr r0
/* 804553F8 00452338  38 21 00 10 */	addi r1, r1, 0x10
/* 804553FC 0045233C  4E 80 00 20 */	blr 

.global __dt__Q35P2JME15IllustratedBook8TControlFv
__dt__Q35P2JME15IllustratedBook8TControlFv:
/* 80455400 00452340  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80455404 00452344  7C 08 02 A6 */	mflr r0
/* 80455408 00452348  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045540C 0045234C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80455410 00452350  7C 9F 23 78 */	mr r31, r4
/* 80455414 00452354  93 C1 00 08 */	stw r30, 8(r1)
/* 80455418 00452358  7C 7E 1B 79 */	or. r30, r3, r3
/* 8045541C 0045235C  41 82 00 48 */	beq .L_80455464
/* 80455420 00452360  3C 80 80 4F */	lis r4, __vt__Q35P2JME15IllustratedBook8TControl@ha
/* 80455424 00452364  38 04 D8 E8 */	addi r0, r4, __vt__Q35P2JME15IllustratedBook8TControl@l
/* 80455428 00452368  90 1E 00 00 */	stw r0, 0(r30)
/* 8045542C 0045236C  41 82 00 28 */	beq .L_80455454
/* 80455430 00452370  3C 80 80 4F */	lis r4, __vt__Q35P2JME6Window8TControl@ha
/* 80455434 00452374  38 04 CC 5C */	addi r0, r4, __vt__Q35P2JME6Window8TControl@l
/* 80455438 00452378  90 1E 00 00 */	stw r0, 0(r30)
/* 8045543C 0045237C  41 82 00 18 */	beq .L_80455454
/* 80455440 00452380  3C A0 80 4F */	lis r5, __vt__Q25P2JME8TControl@ha
/* 80455444 00452384  38 80 00 00 */	li r4, 0
/* 80455448 00452388  38 05 C9 F0 */	addi r0, r5, __vt__Q25P2JME8TControl@l
/* 8045544C 0045238C  90 1E 00 00 */	stw r0, 0(r30)
/* 80455450 00452390  4B BB 2F 99 */	bl __dt__Q28JMessage8TControlFv
.L_80455454:
/* 80455454 00452394  7F E0 07 35 */	extsh. r0, r31
/* 80455458 00452398  40 81 00 0C */	ble .L_80455464
/* 8045545C 0045239C  7F C3 F3 78 */	mr r3, r30
/* 80455460 004523A0  4B BC EC 55 */	bl __dl__FPv
.L_80455464:
/* 80455464 004523A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80455468 004523A8  7F C3 F3 78 */	mr r3, r30
/* 8045546C 004523AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80455470 004523B0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80455474 004523B4  7C 08 03 A6 */	mtlr r0
/* 80455478 004523B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8045547C 004523BC  4E 80 00 20 */	blr 

.global draw__Q35P2JME15IllustratedBook8TControlFR8Graphics
draw__Q35P2JME15IllustratedBook8TControlFR8Graphics:
/* 80455480 004523C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80455484 004523C4  7C 08 02 A6 */	mflr r0
/* 80455488 004523C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045548C 004523CC  4B FE AF 59 */	bl draw__Q35P2JME6Window8TControlFR8Graphics
/* 80455490 004523D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80455494 004523D4  7C 08 03 A6 */	mtlr r0
/* 80455498 004523D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8045549C 004523DC  4E 80 00 20 */	blr 

.global createRenderingProcessor__Q35P2JME15IllustratedBook8TControlFv
createRenderingProcessor__Q35P2JME15IllustratedBook8TControlFv:
/* 804554A0 004523E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804554A4 004523E4  7C 08 02 A6 */	mflr r0
/* 804554A8 004523E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 804554AC 004523EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804554B0 004523F0  93 C1 00 08 */	stw r30, 8(r1)
/* 804554B4 004523F4  7C 7E 1B 78 */	mr r30, r3
/* 804554B8 004523F8  38 60 01 44 */	li r3, 0x144
/* 804554BC 004523FC  4B BC E9 E9 */	bl __nw__FUl
/* 804554C0 00452400  7C 7F 1B 79 */	or. r31, r3, r3
/* 804554C4 00452404  41 82 00 44 */	beq .L_80455508
/* 804554C8 00452408  80 1E 00 38 */	lwz r0, 0x38(r30)
/* 804554CC 0045240C  28 00 00 00 */	cmplwi r0, 0
/* 804554D0 00452410  40 82 00 20 */	bne .L_804554F0
/* 804554D4 00452414  3C 60 80 4A */	lis r3, lbl_8049BAC8@ha
/* 804554D8 00452418  3C A0 80 4A */	lis r5, lbl_8049BABC@ha
/* 804554DC 0045241C  38 63 BA C8 */	addi r3, r3, lbl_8049BAC8@l
/* 804554E0 00452420  38 80 00 79 */	li r4, 0x79
/* 804554E4 00452424  38 A5 BA BC */	addi r5, r5, lbl_8049BABC@l
/* 804554E8 00452428  4C C6 31 82 */	crclr 6
/* 804554EC 0045242C  4B BD 51 55 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804554F0:
/* 804554F0 00452430  80 9E 00 38 */	lwz r4, 0x38(r30)
/* 804554F4 00452434  7F E3 FB 78 */	mr r3, r31
/* 804554F8 00452438  4B FE A0 05 */	bl __ct__Q35P2JME6Window19TRenderingProcessorFPQ28JMessage10TReference
/* 804554FC 0045243C  3C 60 80 4F */	lis r3, __vt__Q35P2JME15IllustratedBook19TRenderingProcessor@ha
/* 80455500 00452440  38 03 D9 30 */	addi r0, r3, __vt__Q35P2JME15IllustratedBook19TRenderingProcessor@l
/* 80455504 00452444  90 1F 00 00 */	stw r0, 0(r31)
.L_80455508:
/* 80455508 00452448  93 FE 00 40 */	stw r31, 0x40(r30)
/* 8045550C 0045244C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80455510 00452450  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80455514 00452454  83 C1 00 08 */	lwz r30, 8(r1)
/* 80455518 00452458  7C 08 03 A6 */	mtlr r0
/* 8045551C 0045245C  38 21 00 10 */	addi r1, r1, 0x10
/* 80455520 00452460  4E 80 00 20 */	blr 

.global createSequenceProcessor__Q35P2JME15IllustratedBook8TControlFv
createSequenceProcessor__Q35P2JME15IllustratedBook8TControlFv:
/* 80455524 00452464  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80455528 00452468  7C 08 02 A6 */	mflr r0
/* 8045552C 0045246C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80455530 00452470  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80455534 00452474  93 C1 00 08 */	stw r30, 8(r1)
/* 80455538 00452478  7C 7E 1B 78 */	mr r30, r3
/* 8045553C 0045247C  38 60 00 70 */	li r3, 0x70
/* 80455540 00452480  4B BC E9 65 */	bl __nw__FUl
/* 80455544 00452484  7C 7F 1B 79 */	or. r31, r3, r3
/* 80455548 00452488  41 82 00 54 */	beq .L_8045559C
/* 8045554C 0045248C  80 1E 00 38 */	lwz r0, 0x38(r30)
/* 80455550 00452490  28 00 00 00 */	cmplwi r0, 0
/* 80455554 00452494  40 82 00 20 */	bne .L_80455574
/* 80455558 00452498  3C 60 80 4A */	lis r3, lbl_8049BAC8@ha
/* 8045555C 0045249C  3C A0 80 4A */	lis r5, lbl_8049BABC@ha
/* 80455560 004524A0  38 63 BA C8 */	addi r3, r3, lbl_8049BAC8@l
/* 80455564 004524A4  38 80 00 79 */	li r4, 0x79
/* 80455568 004524A8  38 A5 BA BC */	addi r5, r5, lbl_8049BABC@l
/* 8045556C 004524AC  4C C6 31 82 */	crclr 6
/* 80455570 004524B0  4B BD 50 D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80455574:
/* 80455574 004524B4  80 9E 00 38 */	lwz r4, 0x38(r30)
/* 80455578 004524B8  7F E3 FB 78 */	mr r3, r31
/* 8045557C 004524BC  7F C5 F3 78 */	mr r5, r30
/* 80455580 004524C0  4B FE 22 C5 */	bl __ct__Q25P2JME18TSequenceProcessorFPCQ28JMessage10TReferencePQ28JMessage8TControl
/* 80455584 004524C4  3C 80 80 4F */	lis r4, __vt__Q25P2JME13TSeqProcNoSeq@ha
/* 80455588 004524C8  3C 60 80 4F */	lis r3, __vt__Q35P2JME15IllustratedBook18TSequenceProcessor@ha
/* 8045558C 004524CC  38 04 DA 38 */	addi r0, r4, __vt__Q25P2JME13TSeqProcNoSeq@l
/* 80455590 004524D0  90 1F 00 00 */	stw r0, 0(r31)
/* 80455594 004524D4  38 03 D9 C0 */	addi r0, r3, __vt__Q35P2JME15IllustratedBook18TSequenceProcessor@l
/* 80455598 004524D8  90 1F 00 00 */	stw r0, 0(r31)
.L_8045559C:
/* 8045559C 004524DC  93 FE 00 3C */	stw r31, 0x3c(r30)
/* 804555A0 004524E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804555A4 004524E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804555A8 004524E8  83 C1 00 08 */	lwz r30, 8(r1)
/* 804555AC 004524EC  7C 08 03 A6 */	mtlr r0
/* 804555B0 004524F0  38 21 00 10 */	addi r1, r1, 0x10
/* 804555B4 004524F4  4E 80 00 20 */	blr 

.global __dt__Q35P2JME15IllustratedBook19TRenderingProcessorFv
__dt__Q35P2JME15IllustratedBook19TRenderingProcessorFv:
/* 804555B8 004524F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804555BC 004524FC  7C 08 02 A6 */	mflr r0
/* 804555C0 00452500  90 01 00 14 */	stw r0, 0x14(r1)
/* 804555C4 00452504  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804555C8 00452508  7C 9F 23 78 */	mr r31, r4
/* 804555CC 0045250C  93 C1 00 08 */	stw r30, 8(r1)
/* 804555D0 00452510  7C 7E 1B 79 */	or. r30, r3, r3
/* 804555D4 00452514  41 82 00 80 */	beq .L_80455654
/* 804555D8 00452518  3C 60 80 4F */	lis r3, __vt__Q35P2JME15IllustratedBook19TRenderingProcessor@ha
/* 804555DC 0045251C  38 03 D9 30 */	addi r0, r3, __vt__Q35P2JME15IllustratedBook19TRenderingProcessor@l
/* 804555E0 00452520  90 1E 00 00 */	stw r0, 0(r30)
/* 804555E4 00452524  41 82 00 60 */	beq .L_80455644
/* 804555E8 00452528  3C 60 80 4F */	lis r3, __vt__Q35P2JME6Window19TRenderingProcessor@ha
/* 804555EC 0045252C  34 1E 01 10 */	addic. r0, r30, 0x110
/* 804555F0 00452530  38 03 CC A4 */	addi r0, r3, __vt__Q35P2JME6Window19TRenderingProcessor@l
/* 804555F4 00452534  90 1E 00 00 */	stw r0, 0(r30)
/* 804555F8 00452538  41 82 00 1C */	beq .L_80455614
/* 804555FC 0045253C  38 7E 01 28 */	addi r3, r30, 0x128
/* 80455600 00452540  38 80 FF FF */	li r4, -1
/* 80455604 00452544  4B FB BF 85 */	bl __dt__5CNodeFv
/* 80455608 00452548  38 7E 01 10 */	addi r3, r30, 0x110
/* 8045560C 0045254C  38 80 FF FF */	li r4, -1
/* 80455610 00452550  4B FB BF 79 */	bl __dt__5CNodeFv
.L_80455614:
/* 80455614 00452554  28 1E 00 00 */	cmplwi r30, 0
/* 80455618 00452558  41 82 00 2C */	beq .L_80455644
/* 8045561C 0045255C  3C 60 80 4F */	lis r3, __vt__Q25P2JME19TRenderingProcessor@ha
/* 80455620 00452560  38 03 CA B0 */	addi r0, r3, __vt__Q25P2JME19TRenderingProcessor@l
/* 80455624 00452564  90 1E 00 00 */	stw r0, 0(r30)
/* 80455628 00452568  41 82 00 1C */	beq .L_80455644
/* 8045562C 0045256C  3C 80 80 4F */	lis r4, __vt__Q25P2JME23TRenderingProcessorBase@ha
/* 80455630 00452570  7F C3 F3 78 */	mr r3, r30
/* 80455634 00452574  38 04 CB 34 */	addi r0, r4, __vt__Q25P2JME23TRenderingProcessorBase@l
/* 80455638 00452578  38 80 00 00 */	li r4, 0
/* 8045563C 0045257C  90 1E 00 00 */	stw r0, 0(r30)
/* 80455640 00452580  4B BB 2A BD */	bl __dt__Q28JMessage19TRenderingProcessorFv
.L_80455644:
/* 80455644 00452584  7F E0 07 35 */	extsh. r0, r31
/* 80455648 00452588  40 81 00 0C */	ble .L_80455654
/* 8045564C 0045258C  7F C3 F3 78 */	mr r3, r30
/* 80455650 00452590  4B BC EA 65 */	bl __dl__FPv
.L_80455654:
/* 80455654 00452594  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80455658 00452598  7F C3 F3 78 */	mr r3, r30
/* 8045565C 0045259C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80455660 004525A0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80455664 004525A4  7C 08 03 A6 */	mtlr r0
/* 80455668 004525A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8045566C 004525AC  4E 80 00 20 */	blr 

.global doTagControlAbtnWait__Q35P2JME15IllustratedBook19TRenderingProcessorFv
doTagControlAbtnWait__Q35P2JME15IllustratedBook19TRenderingProcessorFv:
/* 80455670 004525B0  38 60 00 01 */	li r3, 1
/* 80455674 004525B4  4E 80 00 20 */	blr 

.global __dt__Q35P2JME15IllustratedBook18TSequenceProcessorFv
__dt__Q35P2JME15IllustratedBook18TSequenceProcessorFv:
/* 80455678 004525B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8045567C 004525BC  7C 08 02 A6 */	mflr r0
/* 80455680 004525C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80455684 004525C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80455688 004525C8  7C 9F 23 78 */	mr r31, r4
/* 8045568C 004525CC  93 C1 00 08 */	stw r30, 8(r1)
/* 80455690 004525D0  7C 7E 1B 79 */	or. r30, r3, r3
/* 80455694 004525D4  41 82 00 48 */	beq .L_804556DC
/* 80455698 004525D8  3C 80 80 4F */	lis r4, __vt__Q35P2JME15IllustratedBook18TSequenceProcessor@ha
/* 8045569C 004525DC  38 04 D9 C0 */	addi r0, r4, __vt__Q35P2JME15IllustratedBook18TSequenceProcessor@l
/* 804556A0 004525E0  90 1E 00 00 */	stw r0, 0(r30)
/* 804556A4 004525E4  41 82 00 28 */	beq .L_804556CC
/* 804556A8 004525E8  3C 80 80 4F */	lis r4, __vt__Q25P2JME13TSeqProcNoSeq@ha
/* 804556AC 004525EC  38 04 DA 38 */	addi r0, r4, __vt__Q25P2JME13TSeqProcNoSeq@l
/* 804556B0 004525F0  90 1E 00 00 */	stw r0, 0(r30)
/* 804556B4 004525F4  41 82 00 18 */	beq .L_804556CC
/* 804556B8 004525F8  3C A0 80 4F */	lis r5, __vt__Q25P2JME18TSequenceProcessor@ha
/* 804556BC 004525FC  38 80 00 00 */	li r4, 0
/* 804556C0 00452600  38 05 C8 F8 */	addi r0, r5, __vt__Q25P2JME18TSequenceProcessor@l
/* 804556C4 00452604  90 1E 00 00 */	stw r0, 0(r30)
/* 804556C8 00452608  4B BB 21 61 */	bl __dt__Q28JMessage18TSequenceProcessorFv
.L_804556CC:
/* 804556CC 0045260C  7F E0 07 35 */	extsh. r0, r31
/* 804556D0 00452610  40 81 00 0C */	ble .L_804556DC
/* 804556D4 00452614  7F C3 F3 78 */	mr r3, r30
/* 804556D8 00452618  4B BC E9 DD */	bl __dl__FPv
.L_804556DC:
/* 804556DC 0045261C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804556E0 00452620  7F C3 F3 78 */	mr r3, r30
/* 804556E4 00452624  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804556E8 00452628  83 C1 00 08 */	lwz r30, 8(r1)
/* 804556EC 0045262C  7C 08 03 A6 */	mtlr r0
/* 804556F0 00452630  38 21 00 10 */	addi r1, r1, 0x10
/* 804556F4 00452634  4E 80 00 20 */	blr 

.global do_isReady__Q25P2JME13TSeqProcNoSeqFv
do_isReady__Q25P2JME13TSeqProcNoSeqFv:
/* 804556F8 00452638  38 60 00 01 */	li r3, 1
/* 804556FC 0045263C  4E 80 00 20 */	blr 
