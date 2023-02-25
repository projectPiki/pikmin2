.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
	.4byte __sinit_windowMessage_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8049ACA8, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_8049ACA8
.balign 4
.obj lbl_8049ACB4, local
	.asciz "windowMessage.cpp"
.endobj lbl_8049ACB4
.balign 4
.obj lbl_8049ACC8, local
	.asciz "P2Assert"
.endobj lbl_8049ACC8
.balign 4
.obj lbl_8049ACD4, local
	.asciz "DrawInfoMgr::init"
.endobj lbl_8049ACD4
.balign 4
.obj lbl_8049ACE8, local
	.asciz "PSGame.h"
.endobj lbl_8049ACE8
.balign 4
.obj lbl_8049ACF4, local
	.asciz "messageObj.h"
.endobj lbl_8049ACF4

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj __vt__Q35P2JME6Window8TControl, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q35P2JME6Window8TControlFv
	.4byte reset__Q35P2JME6Window8TControlFv
	.4byte update__Q25P2JME8TControlFv
	.4byte update__Q35P2JME6Window8TControlFP10ControllerP10Controller
	.4byte draw__Q35P2JME6Window8TControlFR8Graphics
	.4byte draw__Q35P2JME6Window8TControlFPA4_fPA4_f
	.4byte setMessageID__Q25P2JME8TControlFUlUl
	.4byte setMessageID__Q25P2JME8TControlFPc
	.4byte setMessageID__Q25P2JME8TControlFUx
	.4byte setMessageCode__Q25P2JME8TControlFUsUs
	.4byte setMessageCode__Q25P2JME8TControlFUl
	.4byte onInit__Q35P2JME6Window8TControlFv
	.4byte createReference__Q25P2JME8TControlFv
	.4byte createResourceContainer__Q25P2JME8TControlFv
	.4byte createSequenceProcessor__Q35P2JME6Window8TControlFv
	.4byte createRenderingProcessor__Q35P2JME6Window8TControlFv
.endobj __vt__Q35P2JME6Window8TControl
.obj __vt__Q35P2JME6Window19TRenderingProcessor, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q35P2JME6Window19TRenderingProcessorFv
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
	.4byte doDrawCommon__Q35P2JME6Window19TRenderingProcessorFffP7MatrixfP7Matrixf
	.4byte "makeMatrix__Q35P2JME6Window19TRenderingProcessorFP7MatrixfPQ35P2JME6Window8DrawInfof10Vector3<f>"
	.4byte doGetDrawInfo__Q35P2JME6Window19TRenderingProcessorFPQ35P2JME6Window8DrawInfo
.endobj __vt__Q35P2JME6Window19TRenderingProcessor
.obj __vt__Q35P2JME6Window18TSequenceProcessor, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q35P2JME6Window18TSequenceProcessorFv
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
	.4byte do_isReady__Q25P2JME18TSequenceProcessorFv
	.4byte do_jump_isReady__Q25P2JME18TSequenceProcessorFv
	.4byte do_jump__Q25P2JME18TSequenceProcessorFPCvPCc
	.4byte do_branch_query__Q25P2JME18TSequenceProcessorFUs
	.4byte do_branch_queryResult__Q25P2JME18TSequenceProcessorFv
	.4byte do_branch__Q25P2JME18TSequenceProcessorFPCvPCc
	.4byte doResetAbtnWaitSE__Q25P2JME18TSequenceProcessorFv
	.4byte doCharacterSEStart__Q35P2JME6Window18TSequenceProcessorFv
	.4byte doCharacterSE__Q35P2JME6Window18TSequenceProcessorFi
	.4byte doCharacterSEEnd__Q35P2JME6Window18TSequenceProcessorFv
	.4byte doFastForwardSE__Q35P2JME6Window18TSequenceProcessorFv
	.4byte reset__Q25P2JME18TSequenceProcessorFv
.endobj __vt__Q35P2JME6Window18TSequenceProcessor
.obj __vt__Q35P2JME6Window8DrawInfo, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q35P2JME6Window8DrawInfoFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__Q35P2JME6Window8DrawInfo

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80520920, local
	.asciz ""
.endobj lbl_80520920
.balign 4
.obj lbl_80520924, local
	.float 0.0
.endobj lbl_80520924
.obj lbl_80520928, local
	.float 0.5
.endobj lbl_80520928
.obj lbl_8052092C, local
	.float 30.0
.endobj lbl_8052092C
.obj lbl_80520930, local # half-pi
	.float 1.5707964
.endobj lbl_80520930
.obj lbl_80520934, local
	.float 255.0
.endobj lbl_80520934
.obj lbl_80520938, local
	.float 10.0
.endobj lbl_80520938
.obj lbl_8052093C, local
	.float 5.0
.endobj lbl_8052093C
.balign 8
.obj lbl_80520940, local
	.8byte 0x4330000000000000
.endobj lbl_80520940
.obj lbl_80520948, local
	.float 12.566371
.endobj lbl_80520948
.obj lbl_8052094C, local
	.float 325.9493
.endobj lbl_8052094C
.obj lbl_80520950, local
	.float 1.0
.endobj lbl_80520950
.obj lbl_80520954, local
	.float 0.8
.endobj lbl_80520954
.obj lbl_80520958, local
	.float 2.0
.endobj lbl_80520958
.obj lbl_8052095C, local # tau
	.float 6.2831855
.endobj lbl_8052095C
.obj lbl_80520960, local
	.float 4.0
.endobj lbl_80520960
.obj lbl_80520964, local
	.float 15.0
.endobj lbl_80520964
.obj lbl_80520968, local # pi
	.float 3.1415927
.endobj lbl_80520968
.obj lbl_8052096C, local
	.float 50.0
.endobj lbl_8052096C
.obj lbl_80520970, local
	.float 232.0
.endobj lbl_80520970

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q35P2JME6Window8DrawInfoFv, global
/* 8043F188 0043C0C8  3C A0 80 4F */	lis r5, __vt__5CNode@ha
/* 8043F18C 0043C0CC  3C 80 80 4F */	lis r4, __vt__Q35P2JME6Window8DrawInfo@ha
/* 8043F190 0043C0D0  38 05 B5 28 */	addi r0, r5, __vt__5CNode@l
/* 8043F194 0043C0D4  38 C0 00 00 */	li r6, 0
/* 8043F198 0043C0D8  90 03 00 00 */	stw r0, 0(r3)
/* 8043F19C 0043C0DC  38 A2 25 C0 */	addi r5, r2, lbl_80520920@sda21
/* 8043F1A0 0043C0E0  38 84 CD AC */	addi r4, r4, __vt__Q35P2JME6Window8DrawInfo@l
/* 8043F1A4 0043C0E4  38 00 FF FF */	li r0, -1
/* 8043F1A8 0043C0E8  90 C3 00 10 */	stw r6, 0x10(r3)
/* 8043F1AC 0043C0EC  C0 22 25 C4 */	lfs f1, lbl_80520924@sda21(r2)
/* 8043F1B0 0043C0F0  90 C3 00 0C */	stw r6, 0xc(r3)
/* 8043F1B4 0043C0F4  C0 02 25 C8 */	lfs f0, lbl_80520928@sda21(r2)
/* 8043F1B8 0043C0F8  90 C3 00 08 */	stw r6, 8(r3)
/* 8043F1BC 0043C0FC  90 C3 00 04 */	stw r6, 4(r3)
/* 8043F1C0 0043C100  90 A3 00 14 */	stw r5, 0x14(r3)
/* 8043F1C4 0043C104  90 83 00 00 */	stw r4, 0(r3)
/* 8043F1C8 0043C108  90 03 00 18 */	stw r0, 0x18(r3)
/* 8043F1CC 0043C10C  D0 23 00 1C */	stfs f1, 0x1c(r3)
/* 8043F1D0 0043C110  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 8043F1D4 0043C114  4E 80 00 20 */	blr 
.endfn __ct__Q35P2JME6Window8DrawInfoFv

.fn __dt__Q35P2JME6Window8DrawInfoFv, weak
/* 8043F1D8 0043C118  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8043F1DC 0043C11C  7C 08 02 A6 */	mflr r0
/* 8043F1E0 0043C120  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043F1E4 0043C124  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8043F1E8 0043C128  7C 9F 23 78 */	mr r31, r4
/* 8043F1EC 0043C12C  93 C1 00 08 */	stw r30, 8(r1)
/* 8043F1F0 0043C130  7C 7E 1B 79 */	or. r30, r3, r3
/* 8043F1F4 0043C134  41 82 00 28 */	beq .L_8043F21C
/* 8043F1F8 0043C138  3C A0 80 4F */	lis r5, __vt__Q35P2JME6Window8DrawInfo@ha
/* 8043F1FC 0043C13C  38 80 00 00 */	li r4, 0
/* 8043F200 0043C140  38 05 CD AC */	addi r0, r5, __vt__Q35P2JME6Window8DrawInfo@l
/* 8043F204 0043C144  90 1E 00 00 */	stw r0, 0(r30)
/* 8043F208 0043C148  4B FD 23 81 */	bl __dt__5CNodeFv
/* 8043F20C 0043C14C  7F E0 07 35 */	extsh. r0, r31
/* 8043F210 0043C150  40 81 00 0C */	ble .L_8043F21C
/* 8043F214 0043C154  7F C3 F3 78 */	mr r3, r30
/* 8043F218 0043C158  4B BE 4E 9D */	bl __dl__FPv
.L_8043F21C:
/* 8043F21C 0043C15C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8043F220 0043C160  7F C3 F3 78 */	mr r3, r30
/* 8043F224 0043C164  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8043F228 0043C168  83 C1 00 08 */	lwz r30, 8(r1)
/* 8043F22C 0043C16C  7C 08 03 A6 */	mtlr r0
/* 8043F230 0043C170  38 21 00 10 */	addi r1, r1, 0x10
/* 8043F234 0043C174  4E 80 00 20 */	blr 
.endfn __dt__Q35P2JME6Window8DrawInfoFv

.fn searchDrawInfo__Q35P2JME6Window11DrawInfoMgrFi, global
/* 8043F238 0043C178  80 A3 00 10 */	lwz r5, 0x10(r3)
/* 8043F23C 0043C17C  38 60 00 00 */	li r3, 0
/* 8043F240 0043C180  48 00 00 1C */	b .L_8043F25C
.L_8043F244:
/* 8043F244 0043C184  80 05 00 18 */	lwz r0, 0x18(r5)
/* 8043F248 0043C188  7C 04 00 00 */	cmpw r4, r0
/* 8043F24C 0043C18C  40 82 00 0C */	bne .L_8043F258
/* 8043F250 0043C190  7C A3 2B 78 */	mr r3, r5
/* 8043F254 0043C194  4E 80 00 20 */	blr 
.L_8043F258:
/* 8043F258 0043C198  80 A5 00 04 */	lwz r5, 4(r5)
.L_8043F25C:
/* 8043F25C 0043C19C  28 05 00 00 */	cmplwi r5, 0
/* 8043F260 0043C1A0  40 82 FF E4 */	bne .L_8043F244
/* 8043F264 0043C1A4  4E 80 00 20 */	blr 
.endfn searchDrawInfo__Q35P2JME6Window11DrawInfoMgrFi

.fn getDrawInfo__Q35P2JME6Window11DrawInfoMgrFi, global
/* 8043F268 0043C1A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8043F26C 0043C1AC  7C 08 02 A6 */	mflr r0
/* 8043F270 0043C1B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043F274 0043C1B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8043F278 0043C1B8  93 C1 00 08 */	stw r30, 8(r1)
/* 8043F27C 0043C1BC  7C 7E 1B 78 */	mr r30, r3
/* 8043F280 0043C1C0  83 E3 00 28 */	lwz r31, 0x28(r3)
/* 8043F284 0043C1C4  28 1F 00 00 */	cmplwi r31, 0
/* 8043F288 0043C1C8  41 82 00 24 */	beq .L_8043F2AC
/* 8043F28C 0043C1CC  90 9F 00 18 */	stw r4, 0x18(r31)
/* 8043F290 0043C1D0  7F E3 FB 78 */	mr r3, r31
/* 8043F294 0043C1D4  C0 02 25 C4 */	lfs f0, lbl_80520924@sda21(r2)
/* 8043F298 0043C1D8  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 8043F29C 0043C1DC  4B FD 23 35 */	bl del__5CNodeFv
/* 8043F2A0 0043C1E0  7F C3 F3 78 */	mr r3, r30
/* 8043F2A4 0043C1E4  7F E4 FB 78 */	mr r4, r31
/* 8043F2A8 0043C1E8  4B FD 21 61 */	bl add__5CNodeFP5CNode
.L_8043F2AC:
/* 8043F2AC 0043C1EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8043F2B0 0043C1F0  7F E3 FB 78 */	mr r3, r31
/* 8043F2B4 0043C1F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8043F2B8 0043C1F8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8043F2BC 0043C1FC  7C 08 03 A6 */	mtlr r0
/* 8043F2C0 0043C200  38 21 00 10 */	addi r1, r1, 0x10
/* 8043F2C4 0043C204  4E 80 00 20 */	blr 
.endfn getDrawInfo__Q35P2JME6Window11DrawInfoMgrFi

.fn __ct__Q35P2JME6Window18TSequenceProcessorFPQ28JMessage10TReferencePQ28JMessage8TControl, global
/* 8043F2C8 0043C208  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8043F2CC 0043C20C  7C 08 02 A6 */	mflr r0
/* 8043F2D0 0043C210  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043F2D4 0043C214  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8043F2D8 0043C218  7C 7F 1B 78 */	mr r31, r3
/* 8043F2DC 0043C21C  4B FF 85 69 */	bl __ct__Q25P2JME18TSequenceProcessorFPCQ28JMessage10TReferencePQ28JMessage8TControl
/* 8043F2E0 0043C220  3C 80 80 4F */	lis r4, __vt__Q35P2JME6Window18TSequenceProcessor@ha
/* 8043F2E4 0043C224  7F E3 FB 78 */	mr r3, r31
/* 8043F2E8 0043C228  38 04 CD 34 */	addi r0, r4, __vt__Q35P2JME6Window18TSequenceProcessor@l
/* 8043F2EC 0043C22C  90 1F 00 00 */	stw r0, 0(r31)
/* 8043F2F0 0043C230  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8043F2F4 0043C234  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8043F2F8 0043C238  7C 08 03 A6 */	mtlr r0
/* 8043F2FC 0043C23C  38 21 00 10 */	addi r1, r1, 0x10
/* 8043F300 0043C240  4E 80 00 20 */	blr 
.endfn __ct__Q35P2JME6Window18TSequenceProcessorFPQ28JMessage10TReferencePQ28JMessage8TControl

.fn doCharacterSE__Q35P2JME6Window18TSequenceProcessorFi, global
/* 8043F304 0043C244  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8043F308 0043C248  7C 08 02 A6 */	mflr r0
/* 8043F30C 0043C24C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043F310 0043C250  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8043F314 0043C254  80 8D 9B 54 */	lwz r4, moviePlayer__4Game@sda21(r13)
/* 8043F318 0043C258  28 04 00 00 */	cmplwi r4, 0
/* 8043F31C 0043C25C  41 82 00 14 */	beq .L_8043F330
/* 8043F320 0043C260  41 82 00 74 */	beq .L_8043F394
/* 8043F324 0043C264  80 04 01 F0 */	lwz r0, 0x1f0(r4)
/* 8043F328 0043C268  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8043F32C 0043C26C  40 82 00 68 */	bne .L_8043F394
.L_8043F330:
/* 8043F330 0043C270  80 03 00 68 */	lwz r0, 0x68(r3)
/* 8043F334 0043C274  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 8043F338 0043C278  40 82 00 5C */	bne .L_8043F394
/* 8043F33C 0043C27C  88 03 00 6C */	lbz r0, 0x6c(r3)
/* 8043F340 0043C280  3B E0 00 00 */	li r31, 0
/* 8043F344 0043C284  2C 00 00 00 */	cmpwi r0, 0
/* 8043F348 0043C288  41 82 00 14 */	beq .L_8043F35C
/* 8043F34C 0043C28C  41 80 00 10 */	blt .L_8043F35C
/* 8043F350 0043C290  2C 00 00 03 */	cmpwi r0, 3
/* 8043F354 0043C294  40 80 00 08 */	bge .L_8043F35C
/* 8043F358 0043C298  3B E0 00 01 */	li r31, 1
.L_8043F35C:
/* 8043F35C 0043C29C  80 0D 91 C8 */	lwz r0, "sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13)
/* 8043F360 0043C2A0  28 00 00 00 */	cmplwi r0, 0
/* 8043F364 0043C2A4  40 82 00 20 */	bne .L_8043F384
/* 8043F368 0043C2A8  3C 60 80 4A */	lis r3, lbl_8049ACE8@ha
/* 8043F36C 0043C2AC  3C A0 80 4A */	lis r5, lbl_8049ACC8@ha
/* 8043F370 0043C2B0  38 63 AC E8 */	addi r3, r3, lbl_8049ACE8@l
/* 8043F374 0043C2B4  38 80 02 37 */	li r4, 0x237
/* 8043F378 0043C2B8  38 A5 AC C8 */	addi r5, r5, lbl_8049ACC8@l
/* 8043F37C 0043C2BC  4C C6 31 82 */	crclr 6
/* 8043F380 0043C2C0  4B BE B2 C1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8043F384:
/* 8043F384 0043C2C4  80 6D 91 C8 */	lwz r3, "sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13)
/* 8043F388 0043C2C8  7F E5 FB 78 */	mr r5, r31
/* 8043F38C 0043C2CC  38 80 18 50 */	li r4, 0x1850
/* 8043F390 0043C2D0  4B EF FF D9 */	bl playMessageVoice__Q26PSGame5SeMgrFUlb
.L_8043F394:
/* 8043F394 0043C2D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8043F398 0043C2D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8043F39C 0043C2DC  7C 08 03 A6 */	mtlr r0
/* 8043F3A0 0043C2E0  38 21 00 10 */	addi r1, r1, 0x10
/* 8043F3A4 0043C2E4  4E 80 00 20 */	blr 
.endfn doCharacterSE__Q35P2JME6Window18TSequenceProcessorFi

.fn doCharacterSEStart__Q35P2JME6Window18TSequenceProcessorFv, global
/* 8043F3A8 0043C2E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8043F3AC 0043C2EC  7C 08 02 A6 */	mflr r0
/* 8043F3B0 0043C2F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043F3B4 0043C2F4  80 8D 9B 54 */	lwz r4, moviePlayer__4Game@sda21(r13)
/* 8043F3B8 0043C2F8  28 04 00 00 */	cmplwi r4, 0
/* 8043F3BC 0043C2FC  41 82 00 14 */	beq .L_8043F3D0
/* 8043F3C0 0043C300  41 82 00 54 */	beq .L_8043F414
/* 8043F3C4 0043C304  80 04 01 F0 */	lwz r0, 0x1f0(r4)
/* 8043F3C8 0043C308  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8043F3CC 0043C30C  40 82 00 48 */	bne .L_8043F414
.L_8043F3D0:
/* 8043F3D0 0043C310  80 03 00 68 */	lwz r0, 0x68(r3)
/* 8043F3D4 0043C314  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 8043F3D8 0043C318  40 82 00 3C */	bne .L_8043F414
/* 8043F3DC 0043C31C  80 0D 91 C8 */	lwz r0, "sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13)
/* 8043F3E0 0043C320  28 00 00 00 */	cmplwi r0, 0
/* 8043F3E4 0043C324  40 82 00 20 */	bne .L_8043F404
/* 8043F3E8 0043C328  3C 60 80 4A */	lis r3, lbl_8049ACE8@ha
/* 8043F3EC 0043C32C  3C A0 80 4A */	lis r5, lbl_8049ACC8@ha
/* 8043F3F0 0043C330  38 63 AC E8 */	addi r3, r3, lbl_8049ACE8@l
/* 8043F3F4 0043C334  38 80 02 37 */	li r4, 0x237
/* 8043F3F8 0043C338  38 A5 AC C8 */	addi r5, r5, lbl_8049ACC8@l
/* 8043F3FC 0043C33C  4C C6 31 82 */	crclr 6
/* 8043F400 0043C340  4B BE B2 41 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8043F404:
/* 8043F404 0043C344  80 6D 91 C8 */	lwz r3, "sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13)
/* 8043F408 0043C348  38 80 18 46 */	li r4, 0x1846
/* 8043F40C 0043C34C  38 A0 00 00 */	li r5, 0
/* 8043F410 0043C350  4B EF FF 59 */	bl playMessageVoice__Q26PSGame5SeMgrFUlb
.L_8043F414:
/* 8043F414 0043C354  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8043F418 0043C358  7C 08 03 A6 */	mtlr r0
/* 8043F41C 0043C35C  38 21 00 10 */	addi r1, r1, 0x10
/* 8043F420 0043C360  4E 80 00 20 */	blr 
.endfn doCharacterSEStart__Q35P2JME6Window18TSequenceProcessorFv

.fn doCharacterSEEnd__Q35P2JME6Window18TSequenceProcessorFv, global
/* 8043F424 0043C364  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8043F428 0043C368  7C 08 02 A6 */	mflr r0
/* 8043F42C 0043C36C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043F430 0043C370  80 8D 9B 54 */	lwz r4, moviePlayer__4Game@sda21(r13)
/* 8043F434 0043C374  28 04 00 00 */	cmplwi r4, 0
/* 8043F438 0043C378  41 82 00 14 */	beq .L_8043F44C
/* 8043F43C 0043C37C  41 82 00 54 */	beq .L_8043F490
/* 8043F440 0043C380  80 04 01 F0 */	lwz r0, 0x1f0(r4)
/* 8043F444 0043C384  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8043F448 0043C388  40 82 00 48 */	bne .L_8043F490
.L_8043F44C:
/* 8043F44C 0043C38C  80 03 00 68 */	lwz r0, 0x68(r3)
/* 8043F450 0043C390  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 8043F454 0043C394  40 82 00 3C */	bne .L_8043F490
/* 8043F458 0043C398  80 0D 91 C8 */	lwz r0, "sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13)
/* 8043F45C 0043C39C  28 00 00 00 */	cmplwi r0, 0
/* 8043F460 0043C3A0  40 82 00 20 */	bne .L_8043F480
/* 8043F464 0043C3A4  3C 60 80 4A */	lis r3, lbl_8049ACE8@ha
/* 8043F468 0043C3A8  3C A0 80 4A */	lis r5, lbl_8049ACC8@ha
/* 8043F46C 0043C3AC  38 63 AC E8 */	addi r3, r3, lbl_8049ACE8@l
/* 8043F470 0043C3B0  38 80 02 37 */	li r4, 0x237
/* 8043F474 0043C3B4  38 A5 AC C8 */	addi r5, r5, lbl_8049ACC8@l
/* 8043F478 0043C3B8  4C C6 31 82 */	crclr 6
/* 8043F47C 0043C3BC  4B BE B1 C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8043F480:
/* 8043F480 0043C3C0  80 6D 91 C8 */	lwz r3, "sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13)
/* 8043F484 0043C3C4  38 80 18 5F */	li r4, 0x185f
/* 8043F488 0043C3C8  38 A0 00 00 */	li r5, 0
/* 8043F48C 0043C3CC  4B EF FE DD */	bl playMessageVoice__Q26PSGame5SeMgrFUlb
.L_8043F490:
/* 8043F490 0043C3D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8043F494 0043C3D4  7C 08 03 A6 */	mtlr r0
/* 8043F498 0043C3D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8043F49C 0043C3DC  4E 80 00 20 */	blr 
.endfn doCharacterSEEnd__Q35P2JME6Window18TSequenceProcessorFv

.fn doFastForwardSE__Q35P2JME6Window18TSequenceProcessorFv, global
/* 8043F4A0 0043C3E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8043F4A4 0043C3E4  7C 08 02 A6 */	mflr r0
/* 8043F4A8 0043C3E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043F4AC 0043C3EC  80 0D 91 C8 */	lwz r0, "sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13)
/* 8043F4B0 0043C3F0  28 00 00 00 */	cmplwi r0, 0
/* 8043F4B4 0043C3F4  40 82 00 20 */	bne .L_8043F4D4
/* 8043F4B8 0043C3F8  3C 60 80 4A */	lis r3, lbl_8049ACE8@ha
/* 8043F4BC 0043C3FC  3C A0 80 4A */	lis r5, lbl_8049ACC8@ha
/* 8043F4C0 0043C400  38 63 AC E8 */	addi r3, r3, lbl_8049ACE8@l
/* 8043F4C4 0043C404  38 80 02 37 */	li r4, 0x237
/* 8043F4C8 0043C408  38 A5 AC C8 */	addi r5, r5, lbl_8049ACC8@l
/* 8043F4CC 0043C40C  4C C6 31 82 */	crclr 6
/* 8043F4D0 0043C410  4B BE B1 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8043F4D4:
/* 8043F4D4 0043C414  80 6D 91 C8 */	lwz r3, "sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13)
/* 8043F4D8 0043C418  4B EF FF B1 */	bl stopMessageVoice__Q26PSGame5SeMgrFv
/* 8043F4DC 0043C41C  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8043F4E0 0043C420  38 80 18 6E */	li r4, 0x186e
/* 8043F4E4 0043C424  38 A0 00 00 */	li r5, 0
/* 8043F4E8 0043C428  4B EF 91 49 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8043F4EC 0043C42C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8043F4F0 0043C430  7C 08 03 A6 */	mtlr r0
/* 8043F4F4 0043C434  38 21 00 10 */	addi r1, r1, 0x10
/* 8043F4F8 0043C438  4E 80 00 20 */	blr 
.endfn doFastForwardSE__Q35P2JME6Window18TSequenceProcessorFv

.fn __ct__Q35P2JME6Window19TRenderingProcessorFPQ28JMessage10TReference, global
/* 8043F4FC 0043C43C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8043F500 0043C440  7C 08 02 A6 */	mflr r0
/* 8043F504 0043C444  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043F508 0043C448  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8043F50C 0043C44C  7C 7F 1B 78 */	mr r31, r3
/* 8043F510 0043C450  93 C1 00 08 */	stw r30, 8(r1)
/* 8043F514 0043C454  4B FF 9E CD */	bl __ct__Q25P2JME19TRenderingProcessorFPCQ28JMessage10TReference
/* 8043F518 0043C458  3C 60 80 4F */	lis r3, __vt__Q35P2JME6Window19TRenderingProcessor@ha
/* 8043F51C 0043C45C  3B DF 01 10 */	addi r30, r31, 0x110
/* 8043F520 0043C460  38 03 CC A4 */	addi r0, r3, __vt__Q35P2JME6Window19TRenderingProcessor@l
/* 8043F524 0043C464  90 1F 00 00 */	stw r0, 0(r31)
/* 8043F528 0043C468  7F C3 F3 78 */	mr r3, r30
/* 8043F52C 0043C46C  4B FD 1E 65 */	bl __ct__5CNodeFv
/* 8043F530 0043C470  38 7E 00 18 */	addi r3, r30, 0x18
/* 8043F534 0043C474  4B FD 1E 5D */	bl __ct__5CNodeFv
/* 8043F538 0043C478  C0 02 25 CC */	lfs f0, lbl_8052092C@sda21(r2)
/* 8043F53C 0043C47C  7F E3 FB 78 */	mr r3, r31
/* 8043F540 0043C480  D0 1F 01 40 */	stfs f0, 0x140(r31)
/* 8043F544 0043C484  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8043F548 0043C488  83 C1 00 08 */	lwz r30, 8(r1)
/* 8043F54C 0043C48C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8043F550 0043C490  7C 08 03 A6 */	mtlr r0
/* 8043F554 0043C494  38 21 00 10 */	addi r1, r1, 0x10
/* 8043F558 0043C498  4E 80 00 20 */	blr 
.endfn __ct__Q35P2JME6Window19TRenderingProcessorFPQ28JMessage10TReference

.fn doDrawCommon__Q35P2JME6Window19TRenderingProcessorFffP7MatrixfP7Matrixf, global
/* 8043F55C 0043C49C  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 8043F560 0043C4A0  7C 08 02 A6 */	mflr r0
/* 8043F564 0043C4A4  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 8043F568 0043C4A8  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 8043F56C 0043C4AC  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 8043F570 0043C4B0  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 8043F574 0043C4B4  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 8043F578 0043C4B8  DB A1 00 B0 */	stfd f29, 0xb0(r1)
/* 8043F57C 0043C4BC  F3 A1 00 B8 */	psq_st f29, 184(r1), 0, qr0
/* 8043F580 0043C4C0  DB 81 00 A0 */	stfd f28, 0xa0(r1)
/* 8043F584 0043C4C4  F3 81 00 A8 */	psq_st f28, 168(r1), 0, qr0
/* 8043F588 0043C4C8  DB 61 00 90 */	stfd f27, 0x90(r1)
/* 8043F58C 0043C4CC  F3 61 00 98 */	psq_st f27, 152(r1), 0, qr0
/* 8043F590 0043C4D0  BF 61 00 7C */	stmw r27, 0x7c(r1)
/* 8043F594 0043C4D4  7C 7D 1B 78 */	mr r29, r3
/* 8043F598 0043C4D8  FF C0 08 90 */	fmr f30, f1
/* 8043F59C 0043C4DC  FF E0 10 90 */	fmr f31, f2
/* 8043F5A0 0043C4E0  80 C3 00 40 */	lwz r6, 0x40(r3)
/* 8043F5A4 0043C4E4  80 63 01 20 */	lwz r3, 0x120(r3)
/* 8043F5A8 0043C4E8  7C 9E 23 78 */	mr r30, r4
/* 8043F5AC 0043C4EC  7C BF 2B 78 */	mr r31, r5
/* 8043F5B0 0043C4F0  3B 60 00 FF */	li r27, 0xff
/* 8043F5B4 0043C4F4  3B 80 00 00 */	li r28, 0
/* 8043F5B8 0043C4F8  48 00 00 1C */	b .L_8043F5D4
.L_8043F5BC:
/* 8043F5BC 0043C4FC  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8043F5C0 0043C500  7C 06 00 00 */	cmpw r6, r0
/* 8043F5C4 0043C504  40 82 00 0C */	bne .L_8043F5D0
/* 8043F5C8 0043C508  7C 7C 1B 78 */	mr r28, r3
/* 8043F5CC 0043C50C  48 00 00 10 */	b .L_8043F5DC
.L_8043F5D0:
/* 8043F5D0 0043C510  80 63 00 04 */	lwz r3, 4(r3)
.L_8043F5D4:
/* 8043F5D4 0043C514  28 03 00 00 */	cmplwi r3, 0
/* 8043F5D8 0043C518  40 82 FF E4 */	bne .L_8043F5BC
.L_8043F5DC:
/* 8043F5DC 0043C51C  C0 3D 01 40 */	lfs f1, 0x140(r29)
/* 8043F5E0 0043C520  FC 00 08 50 */	fneg f0, f1
/* 8043F5E4 0043C524  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8043F5E8 0043C528  4C 41 13 82 */	cror 2, 1, 2
/* 8043F5EC 0043C52C  40 82 02 44 */	bne .L_8043F830
/* 8043F5F0 0043C530  C0 5D 00 3C */	lfs f2, 0x3c(r29)
/* 8043F5F4 0043C534  EC 02 08 2A */	fadds f0, f2, f1
/* 8043F5F8 0043C538  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8043F5FC 0043C53C  40 80 02 34 */	bge .L_8043F830
/* 8043F600 0043C540  C0 02 25 C4 */	lfs f0, lbl_80520924@sda21(r2)
/* 8043F604 0043C544  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8043F608 0043C548  4C 41 13 82 */	cror 2, 1, 2
/* 8043F60C 0043C54C  40 82 00 18 */	bne .L_8043F624
/* 8043F610 0043C550  FC 1F 10 40 */	fcmpo cr0, f31, f2
/* 8043F614 0043C554  40 80 00 10 */	bge .L_8043F624
/* 8043F618 0043C558  FF 80 00 90 */	fmr f28, f0
/* 8043F61C 0043C55C  FF 60 00 90 */	fmr f27, f0
/* 8043F620 0043C560  48 00 00 B8 */	b .L_8043F6D8
.L_8043F624:
/* 8043F624 0043C564  C0 02 25 C4 */	lfs f0, lbl_80520924@sda21(r2)
/* 8043F628 0043C568  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8043F62C 0043C56C  40 80 00 0C */	bge .L_8043F638
/* 8043F630 0043C570  FF 80 F8 90 */	fmr f28, f31
/* 8043F634 0043C574  48 00 00 08 */	b .L_8043F63C
.L_8043F638:
/* 8043F638 0043C578  EF 9F 10 28 */	fsubs f28, f31, f2
.L_8043F63C:
/* 8043F63C 0043C57C  EC 5C 07 32 */	fmuls f2, f28, f28
/* 8043F640 0043C580  C0 02 25 C4 */	lfs f0, lbl_80520924@sda21(r2)
/* 8043F644 0043C584  EC 21 10 78 */	fmsubs f1, f1, f1, f2
/* 8043F648 0043C588  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8043F64C 0043C58C  40 81 00 14 */	ble .L_8043F660
/* 8043F650 0043C590  40 81 00 14 */	ble .L_8043F664
/* 8043F654 0043C594  FC 00 08 34 */	frsqrte f0, f1
/* 8043F658 0043C598  EC 20 00 72 */	fmuls f1, f0, f1
/* 8043F65C 0043C59C  48 00 00 08 */	b .L_8043F664
.L_8043F660:
/* 8043F660 0043C5A0  FC 20 00 90 */	fmr f1, f0
.L_8043F664:
/* 8043F664 0043C5A4  FF A0 08 50 */	fneg f29, f1
/* 8043F668 0043C5A8  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8043F66C 0043C5AC  FC 40 E0 90 */	fmr f2, f28
/* 8043F670 0043C5B0  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8043F674 0043C5B4  FC 20 E8 90 */	fmr f1, f29
/* 8043F678 0043C5B8  4B BF 5A 91 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8043F67C 0043C5BC  C0 BD 01 40 */	lfs f5, 0x140(r29)
/* 8043F680 0043C5C0  C0 82 25 D0 */	lfs f4, lbl_80520930@sda21(r2)
/* 8043F684 0043C5C4  EC 7C 28 24 */	fdivs f3, f28, f5
/* 8043F688 0043C5C8  C0 42 25 D4 */	lfs f2, lbl_80520934@sda21(r2)
/* 8043F68C 0043C5CC  C0 02 25 C4 */	lfs f0, lbl_80520924@sda21(r2)
/* 8043F690 0043C5D0  FC 60 1A 10 */	fabs f3, f3
/* 8043F694 0043C5D4  EF 64 08 2A */	fadds f27, f4, f1
/* 8043F698 0043C5D8  EF 9D 28 2A */	fadds f28, f29, f5
/* 8043F69C 0043C5DC  FC 20 18 18 */	frsp f1, f3
/* 8043F6A0 0043C5E0  EC 22 00 72 */	fmuls f1, f2, f1
/* 8043F6A4 0043C5E4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8043F6A8 0043C5E8  4C 41 13 82 */	cror 2, 1, 2
/* 8043F6AC 0043C5EC  40 82 00 10 */	bne .L_8043F6BC
/* 8043F6B0 0043C5F0  C0 02 25 C8 */	lfs f0, lbl_80520928@sda21(r2)
/* 8043F6B4 0043C5F4  EC 00 08 2A */	fadds f0, f0, f1
/* 8043F6B8 0043C5F8  48 00 00 0C */	b .L_8043F6C4
.L_8043F6BC:
/* 8043F6BC 0043C5FC  C0 02 25 C8 */	lfs f0, lbl_80520928@sda21(r2)
/* 8043F6C0 0043C600  EC 01 00 28 */	fsubs f0, f1, f0
.L_8043F6C4:
/* 8043F6C4 0043C604  FC 00 00 1E */	fctiwz f0, f0
/* 8043F6C8 0043C608  D8 01 00 60 */	stfd f0, 0x60(r1)
/* 8043F6CC 0043C60C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8043F6D0 0043C610  20 00 00 FF */	subfic r0, r0, 0xff
/* 8043F6D4 0043C614  54 1B 06 3E */	clrlwi r27, r0, 0x18
.L_8043F6D8:
/* 8043F6D8 0043C618  28 1C 00 00 */	cmplwi r28, 0
/* 8043F6DC 0043C61C  40 82 00 4C */	bne .L_8043F728
/* 8043F6E0 0043C620  83 9D 01 38 */	lwz r28, 0x138(r29)
/* 8043F6E4 0043C624  80 1D 00 40 */	lwz r0, 0x40(r29)
/* 8043F6E8 0043C628  28 1C 00 00 */	cmplwi r28, 0
/* 8043F6EC 0043C62C  41 82 00 24 */	beq .L_8043F710
/* 8043F6F0 0043C630  90 1C 00 18 */	stw r0, 0x18(r28)
/* 8043F6F4 0043C634  7F 83 E3 78 */	mr r3, r28
/* 8043F6F8 0043C638  C0 02 25 C4 */	lfs f0, lbl_80520924@sda21(r2)
/* 8043F6FC 0043C63C  D0 1C 00 1C */	stfs f0, 0x1c(r28)
/* 8043F700 0043C640  4B FD 1E D1 */	bl del__5CNodeFv
/* 8043F704 0043C644  7F 84 E3 78 */	mr r4, r28
/* 8043F708 0043C648  38 7D 01 10 */	addi r3, r29, 0x110
/* 8043F70C 0043C64C  4B FD 1C FD */	bl add__5CNodeFP5CNode
.L_8043F710:
/* 8043F710 0043C650  81 9D 00 00 */	lwz r12, 0(r29)
/* 8043F714 0043C654  7F A3 EB 78 */	mr r3, r29
/* 8043F718 0043C658  7F 84 E3 78 */	mr r4, r28
/* 8043F71C 0043C65C  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 8043F720 0043C660  7D 89 03 A6 */	mtctr r12
/* 8043F724 0043C664  4E 80 04 21 */	bctrl 
.L_8043F728:
/* 8043F728 0043C668  28 1C 00 00 */	cmplwi r28, 0
/* 8043F72C 0043C66C  41 82 00 50 */	beq .L_8043F77C
/* 8043F730 0043C670  D3 C1 00 20 */	stfs f30, 0x20(r1)
/* 8043F734 0043C674  7F A3 EB 78 */	mr r3, r29
/* 8043F738 0043C678  FC 20 D8 90 */	fmr f1, f27
/* 8043F73C 0043C67C  7F 85 E3 78 */	mr r5, r28
/* 8043F740 0043C680  D3 E1 00 24 */	stfs f31, 0x24(r1)
/* 8043F744 0043C684  38 81 00 2C */	addi r4, r1, 0x2c
/* 8043F748 0043C688  81 01 00 20 */	lwz r8, 0x20(r1)
/* 8043F74C 0043C68C  38 C1 00 08 */	addi r6, r1, 8
/* 8043F750 0043C690  D3 81 00 28 */	stfs f28, 0x28(r1)
/* 8043F754 0043C694  80 E1 00 24 */	lwz r7, 0x24(r1)
/* 8043F758 0043C698  80 01 00 28 */	lwz r0, 0x28(r1)
/* 8043F75C 0043C69C  91 01 00 08 */	stw r8, 8(r1)
/* 8043F760 0043C6A0  90 E1 00 0C */	stw r7, 0xc(r1)
/* 8043F764 0043C6A4  90 01 00 10 */	stw r0, 0x10(r1)
/* 8043F768 0043C6A8  81 9D 00 00 */	lwz r12, 0(r29)
/* 8043F76C 0043C6AC  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 8043F770 0043C6B0  7D 89 03 A6 */	mtctr r12
/* 8043F774 0043C6B4  4E 80 04 21 */	bctrl 
/* 8043F778 0043C6B8  48 00 00 1C */	b .L_8043F794
.L_8043F77C:
/* 8043F77C 0043C6BC  D3 C1 00 14 */	stfs f30, 0x14(r1)
/* 8043F780 0043C6C0  38 61 00 2C */	addi r3, r1, 0x2c
/* 8043F784 0043C6C4  38 81 00 14 */	addi r4, r1, 0x14
/* 8043F788 0043C6C8  D3 E1 00 18 */	stfs f31, 0x18(r1)
/* 8043F78C 0043C6CC  D3 81 00 1C */	stfs f28, 0x1c(r1)
/* 8043F790 0043C6D0  4B FE 90 B1 */	bl "makeT__7MatrixfFR10Vector3<f>"
.L_8043F794:
/* 8043F794 0043C6D4  28 1F 00 00 */	cmplwi r31, 0
/* 8043F798 0043C6D8  41 82 00 50 */	beq .L_8043F7E8
/* 8043F79C 0043C6DC  7F E4 FB 78 */	mr r4, r31
/* 8043F7A0 0043C6E0  38 61 00 2C */	addi r3, r1, 0x2c
/* 8043F7A4 0043C6E4  4B CA AB 29 */	bl PSMTXCopy
/* 8043F7A8 0043C6E8  C0 5F 00 0C */	lfs f2, 0xc(r31)
/* 8043F7AC 0043C6EC  7F E4 FB 78 */	mr r4, r31
/* 8043F7B0 0043C6F0  C0 22 25 D8 */	lfs f1, lbl_80520938@sda21(r2)
/* 8043F7B4 0043C6F4  7F E5 FB 78 */	mr r5, r31
/* 8043F7B8 0043C6F8  C0 7F 00 1C */	lfs f3, 0x1c(r31)
/* 8043F7BC 0043C6FC  C0 02 25 DC */	lfs f0, lbl_8052093C@sda21(r2)
/* 8043F7C0 0043C700  EC 42 08 2A */	fadds f2, f2, f1
/* 8043F7C4 0043C704  EC 63 00 2A */	fadds f3, f3, f0
/* 8043F7C8 0043C708  D0 5F 00 0C */	stfs f2, 0xc(r31)
/* 8043F7CC 0043C70C  D0 7F 00 1C */	stfs f3, 0x1c(r31)
/* 8043F7D0 0043C710  80 7D 00 44 */	lwz r3, 0x44(r29)
/* 8043F7D4 0043C714  4B CA AB 2D */	bl PSMTXConcat
/* 8043F7D8 0043C718  80 7D 00 48 */	lwz r3, 0x48(r29)
/* 8043F7DC 0043C71C  7F E4 FB 78 */	mr r4, r31
/* 8043F7E0 0043C720  7F E5 FB 78 */	mr r5, r31
/* 8043F7E4 0043C724  4B CA AB 1D */	bl PSMTXConcat
.L_8043F7E8:
/* 8043F7E8 0043C728  38 81 00 2C */	addi r4, r1, 0x2c
/* 8043F7EC 0043C72C  80 7D 00 44 */	lwz r3, 0x44(r29)
/* 8043F7F0 0043C730  7C 85 23 78 */	mr r5, r4
/* 8043F7F4 0043C734  4B CA AB 0D */	bl PSMTXConcat
/* 8043F7F8 0043C738  38 81 00 2C */	addi r4, r1, 0x2c
/* 8043F7FC 0043C73C  80 7D 00 48 */	lwz r3, 0x48(r29)
/* 8043F800 0043C740  7C 85 23 78 */	mr r5, r4
/* 8043F804 0043C744  4B CA AA FD */	bl PSMTXConcat
/* 8043F808 0043C748  28 1E 00 00 */	cmplwi r30, 0
/* 8043F80C 0043C74C  41 82 00 14 */	beq .L_8043F820
/* 8043F810 0043C750  7F C4 F3 78 */	mr r4, r30
/* 8043F814 0043C754  38 61 00 2C */	addi r3, r1, 0x2c
/* 8043F818 0043C758  4B CA AA B5 */	bl PSMTXCopy
/* 8043F81C 0043C75C  48 00 00 18 */	b .L_8043F834
.L_8043F820:
/* 8043F820 0043C760  38 61 00 2C */	addi r3, r1, 0x2c
/* 8043F824 0043C764  38 80 00 00 */	li r4, 0
/* 8043F828 0043C768  4B CA 9D 51 */	bl GXLoadPosMtxImm
/* 8043F82C 0043C76C  48 00 00 08 */	b .L_8043F834
.L_8043F830:
/* 8043F830 0043C770  3B 60 00 00 */	li r27, 0
.L_8043F834:
/* 8043F834 0043C774  57 63 06 3E */	clrlwi r3, r27, 0x18
/* 8043F838 0043C778  3C 00 43 30 */	lis r0, 0x4330
/* 8043F83C 0043C77C  90 61 00 64 */	stw r3, 0x64(r1)
/* 8043F840 0043C780  C8 42 25 E0 */	lfd f2, lbl_80520940@sda21(r2)
/* 8043F844 0043C784  90 01 00 60 */	stw r0, 0x60(r1)
/* 8043F848 0043C788  C0 1D 00 78 */	lfs f0, 0x78(r29)
/* 8043F84C 0043C78C  C8 21 00 60 */	lfd f1, 0x60(r1)
/* 8043F850 0043C790  EC 21 10 28 */	fsubs f1, f1, f2
/* 8043F854 0043C794  EC 01 00 32 */	fmuls f0, f1, f0
/* 8043F858 0043C798  FC 00 00 1E */	fctiwz f0, f0
/* 8043F85C 0043C79C  D8 01 00 68 */	stfd f0, 0x68(r1)
/* 8043F860 0043C7A0  80 61 00 6C */	lwz r3, 0x6c(r1)
/* 8043F864 0043C7A4  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 8043F868 0043C7A8  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 8043F86C 0043C7AC  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 8043F870 0043C7B0  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 8043F874 0043C7B4  E3 A1 00 B8 */	psq_l f29, 184(r1), 0, qr0
/* 8043F878 0043C7B8  CB A1 00 B0 */	lfd f29, 0xb0(r1)
/* 8043F87C 0043C7BC  E3 81 00 A8 */	psq_l f28, 168(r1), 0, qr0
/* 8043F880 0043C7C0  CB 81 00 A0 */	lfd f28, 0xa0(r1)
/* 8043F884 0043C7C4  E3 61 00 98 */	psq_l f27, 152(r1), 0, qr0
/* 8043F888 0043C7C8  CB 61 00 90 */	lfd f27, 0x90(r1)
/* 8043F88C 0043C7CC  BB 61 00 7C */	lmw r27, 0x7c(r1)
/* 8043F890 0043C7D0  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 8043F894 0043C7D4  7C 08 03 A6 */	mtlr r0
/* 8043F898 0043C7D8  38 21 00 E0 */	addi r1, r1, 0xe0
/* 8043F89C 0043C7DC  4E 80 00 20 */	blr 
.endfn doDrawCommon__Q35P2JME6Window19TRenderingProcessorFffP7MatrixfP7Matrixf

.fn doGetDrawInfo__Q35P2JME6Window19TRenderingProcessorFPQ35P2JME6Window8DrawInfo, weak
/* 8043F8A0 0043C7E0  4E 80 00 20 */	blr 
.endfn doGetDrawInfo__Q35P2JME6Window19TRenderingProcessorFPQ35P2JME6Window8DrawInfo

.fn "makeMatrix__Q35P2JME6Window19TRenderingProcessorFP7MatrixfPQ35P2JME6Window8DrawInfof10Vector3<f>", global
/* 8043F8A4 0043C7E4  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8043F8A8 0043C7E8  7C 08 02 A6 */	mflr r0
/* 8043F8AC 0043C7EC  90 01 00 64 */	stw r0, 0x64(r1)
/* 8043F8B0 0043C7F0  88 03 00 DC */	lbz r0, 0xdc(r3)
/* 8043F8B4 0043C7F4  2C 00 00 01 */	cmpwi r0, 1
/* 8043F8B8 0043C7F8  41 82 01 08 */	beq .L_8043F9C0
/* 8043F8BC 0043C7FC  40 80 00 10 */	bge .L_8043F8CC
/* 8043F8C0 0043C800  2C 00 00 00 */	cmpwi r0, 0
/* 8043F8C4 0043C804  40 80 00 14 */	bge .L_8043F8D8
/* 8043F8C8 0043C808  48 00 02 50 */	b .L_8043FB18
.L_8043F8CC:
/* 8043F8CC 0043C80C  2C 00 00 03 */	cmpwi r0, 3
/* 8043F8D0 0043C810  40 80 02 48 */	bge .L_8043FB18
/* 8043F8D4 0043C814  48 00 01 94 */	b .L_8043FA68
.L_8043F8D8:
/* 8043F8D8 0043C818  C0 65 00 1C */	lfs f3, 0x1c(r5)
/* 8043F8DC 0043C81C  C0 05 00 20 */	lfs f0, 0x20(r5)
/* 8043F8E0 0043C820  C0 42 25 E8 */	lfs f2, lbl_80520948@sda21(r2)
/* 8043F8E4 0043C824  EC A3 00 24 */	fdivs f5, f3, f0
/* 8043F8E8 0043C828  C0 02 25 C4 */	lfs f0, lbl_80520924@sda21(r2)
/* 8043F8EC 0043C82C  EC 42 01 72 */	fmuls f2, f2, f5
/* 8043F8F0 0043C830  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8043F8F4 0043C834  40 80 00 08 */	bge .L_8043F8FC
/* 8043F8F8 0043C838  FC 40 10 50 */	fneg f2, f2
.L_8043F8FC:
/* 8043F8FC 0043C83C  C0 02 25 EC */	lfs f0, lbl_8052094C@sda21(r2)
/* 8043F900 0043C840  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8043F904 0043C844  C0 82 25 F0 */	lfs f4, lbl_80520950@sda21(r2)
/* 8043F908 0043C848  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8043F90C 0043C84C  EC 62 00 32 */	fmuls f3, f2, f0
/* 8043F910 0043C850  C0 42 25 F4 */	lfs f2, lbl_80520954@sda21(r2)
/* 8043F914 0043C854  EC 04 28 28 */	fsubs f0, f4, f5
/* 8043F918 0043C858  38 E3 00 04 */	addi r7, r3, 4
/* 8043F91C 0043C85C  D0 81 00 44 */	stfs f4, 0x44(r1)
/* 8043F920 0043C860  FC A0 18 1E */	fctiwz f5, f3
/* 8043F924 0043C864  EC 62 00 32 */	fmuls f3, f2, f0
/* 8043F928 0043C868  D0 81 00 4C */	stfs f4, 0x4c(r1)
/* 8043F92C 0043C86C  C0 42 25 E8 */	lfs f2, lbl_80520948@sda21(r2)
/* 8043F930 0043C870  D8 A1 00 50 */	stfd f5, 0x50(r1)
/* 8043F934 0043C874  C0 02 25 C4 */	lfs f0, lbl_80520924@sda21(r2)
/* 8043F938 0043C878  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8043F93C 0043C87C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8043F940 0043C880  7C A7 04 2E */	lfsx f5, r7, r0
/* 8043F944 0043C884  EC 63 21 7C */	fnmsubs f3, f3, f5, f4
/* 8043F948 0043C888  D0 61 00 48 */	stfs f3, 0x48(r1)
/* 8043F94C 0043C88C  C0 85 00 1C */	lfs f4, 0x1c(r5)
/* 8043F950 0043C890  C0 65 00 20 */	lfs f3, 0x20(r5)
/* 8043F954 0043C894  EC A4 18 24 */	fdivs f5, f4, f3
/* 8043F958 0043C898  EC 62 01 72 */	fmuls f3, f2, f5
/* 8043F95C 0043C89C  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8043F960 0043C8A0  40 80 00 08 */	bge .L_8043F968
/* 8043F964 0043C8A4  FC 60 18 50 */	fneg f3, f3
.L_8043F968:
/* 8043F968 0043C8A8  C0 42 25 EC */	lfs f2, lbl_8052094C@sda21(r2)
/* 8043F96C 0043C8AC  7C 83 23 78 */	mr r3, r4
/* 8043F970 0043C8B0  C0 02 25 F0 */	lfs f0, lbl_80520950@sda21(r2)
/* 8043F974 0043C8B4  38 81 00 44 */	addi r4, r1, 0x44
/* 8043F978 0043C8B8  EC 83 00 B2 */	fmuls f4, f3, f2
/* 8043F97C 0043C8BC  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 8043F980 0043C8C0  C0 62 25 C4 */	lfs f3, lbl_80520924@sda21(r2)
/* 8043F984 0043C8C4  EC 00 28 28 */	fsubs f0, f0, f5
/* 8043F988 0043C8C8  C0 42 25 D0 */	lfs f2, lbl_80520930@sda21(r2)
/* 8043F98C 0043C8CC  38 A1 00 38 */	addi r5, r1, 0x38
/* 8043F990 0043C8D0  FC 20 20 1E */	fctiwz f1, f4
/* 8043F994 0043C8D4  D0 61 00 3C */	stfs f3, 0x3c(r1)
/* 8043F998 0043C8D8  EC 02 00 32 */	fmuls f0, f2, f0
/* 8043F99C 0043C8DC  D8 21 00 58 */	stfd f1, 0x58(r1)
/* 8043F9A0 0043C8E0  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 8043F9A4 0043C8E4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8043F9A8 0043C8E8  7C 27 04 2E */	lfsx f1, r7, r0
/* 8043F9AC 0043C8EC  EC 00 00 72 */	fmuls f0, f0, f1
/* 8043F9B0 0043C8F0  FC 00 00 50 */	fneg f0, f0
/* 8043F9B4 0043C8F4  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 8043F9B8 0043C8F8  4B FE 89 21 */	bl "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
/* 8043F9BC 0043C8FC  48 00 01 5C */	b .L_8043FB18
.L_8043F9C0:
/* 8043F9C0 0043C900  C0 65 00 1C */	lfs f3, 0x1c(r5)
/* 8043F9C4 0043C904  C0 05 00 20 */	lfs f0, 0x20(r5)
/* 8043F9C8 0043C908  C0 42 25 FC */	lfs f2, lbl_8052095C@sda21(r2)
/* 8043F9CC 0043C90C  EC 83 00 24 */	fdivs f4, f3, f0
/* 8043F9D0 0043C910  C0 62 25 F8 */	lfs f3, lbl_80520958@sda21(r2)
/* 8043F9D4 0043C914  C0 02 25 C4 */	lfs f0, lbl_80520924@sda21(r2)
/* 8043F9D8 0043C918  EC 42 01 32 */	fmuls f2, f2, f4
/* 8043F9DC 0043C91C  EC 63 00 B2 */	fmuls f3, f3, f2
/* 8043F9E0 0043C920  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8043F9E4 0043C924  40 80 00 08 */	bge .L_8043F9EC
/* 8043F9E8 0043C928  FC 60 18 50 */	fneg f3, f3
.L_8043F9EC:
/* 8043F9EC 0043C92C  C0 42 25 EC */	lfs f2, lbl_8052094C@sda21(r2)
/* 8043F9F0 0043C930  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8043F9F4 0043C934  C0 02 25 C4 */	lfs f0, lbl_80520924@sda21(r2)
/* 8043F9F8 0043C938  38 E3 71 A0 */	addi r7, r3, sincosTable___5JMath@l
/* 8043F9FC 0043C93C  EC 43 00 B2 */	fmuls f2, f3, f2
/* 8043FA00 0043C940  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 8043FA04 0043C944  C0 A2 25 F0 */	lfs f5, lbl_80520950@sda21(r2)
/* 8043FA08 0043C948  7C 83 23 78 */	mr r3, r4
/* 8043FA0C 0043C94C  C0 62 25 F8 */	lfs f3, lbl_80520958@sda21(r2)
/* 8043FA10 0043C950  38 81 00 2C */	addi r4, r1, 0x2c
/* 8043FA14 0043C954  FC 20 10 1E */	fctiwz f1, f2
/* 8043FA18 0043C958  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8043FA1C 0043C95C  EC 85 20 28 */	fsubs f4, f5, f4
/* 8043FA20 0043C960  38 A1 00 20 */	addi r5, r1, 0x20
/* 8043FA24 0043C964  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8043FA28 0043C968  D8 21 00 58 */	stfd f1, 0x58(r1)
/* 8043FA2C 0043C96C  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 8043FA30 0043C970  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8043FA34 0043C974  7C E7 02 14 */	add r7, r7, r0
/* 8043FA38 0043C978  C0 07 00 04 */	lfs f0, 4(r7)
/* 8043FA3C 0043C97C  EC 03 00 32 */	fmuls f0, f3, f0
/* 8043FA40 0043C980  EC 00 01 32 */	fmuls f0, f0, f4
/* 8043FA44 0043C984  EC 04 00 32 */	fmuls f0, f4, f0
/* 8043FA48 0043C988  FC 00 02 10 */	fabs f0, f0
/* 8043FA4C 0043C98C  FC 00 00 18 */	frsp f0, f0
/* 8043FA50 0043C990  EC 05 00 2A */	fadds f0, f5, f0
/* 8043FA54 0043C994  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8043FA58 0043C998  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8043FA5C 0043C99C  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8043FA60 0043C9A0  4B FE 88 79 */	bl "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
/* 8043FA64 0043C9A4  48 00 00 B4 */	b .L_8043FB18
.L_8043FA68:
/* 8043FA68 0043C9A8  C0 65 00 1C */	lfs f3, 0x1c(r5)
/* 8043FA6C 0043C9AC  C0 05 00 20 */	lfs f0, 0x20(r5)
/* 8043FA70 0043C9B0  C0 42 25 FC */	lfs f2, lbl_8052095C@sda21(r2)
/* 8043FA74 0043C9B4  EC 83 00 24 */	fdivs f4, f3, f0
/* 8043FA78 0043C9B8  C0 62 25 F8 */	lfs f3, lbl_80520958@sda21(r2)
/* 8043FA7C 0043C9BC  C0 02 25 C4 */	lfs f0, lbl_80520924@sda21(r2)
/* 8043FA80 0043C9C0  EC 42 01 32 */	fmuls f2, f2, f4
/* 8043FA84 0043C9C4  EC 43 00 B2 */	fmuls f2, f3, f2
/* 8043FA88 0043C9C8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8043FA8C 0043C9CC  40 80 00 08 */	bge .L_8043FA94
/* 8043FA90 0043C9D0  FC 40 10 50 */	fneg f2, f2
.L_8043FA94:
/* 8043FA94 0043C9D4  C0 02 25 EC */	lfs f0, lbl_8052094C@sda21(r2)
/* 8043FA98 0043C9D8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8043FA9C 0043C9DC  C0 E2 25 F0 */	lfs f7, lbl_80520950@sda21(r2)
/* 8043FAA0 0043C9E0  38 E3 71 A0 */	addi r7, r3, sincosTable___5JMath@l
/* 8043FAA4 0043C9E4  EC 02 00 32 */	fmuls f0, f2, f0
/* 8043FAA8 0043C9E8  C0 62 25 C4 */	lfs f3, lbl_80520924@sda21(r2)
/* 8043FAAC 0043C9EC  EC C7 20 28 */	fsubs f6, f7, f4
/* 8043FAB0 0043C9F0  7C 83 23 78 */	mr r3, r4
/* 8043FAB4 0043C9F4  C0 A2 26 00 */	lfs f5, lbl_80520960@sda21(r2)
/* 8043FAB8 0043C9F8  38 81 00 14 */	addi r4, r1, 0x14
/* 8043FABC 0043C9FC  FC 80 00 1E */	fctiwz f4, f0
/* 8043FAC0 0043CA00  D0 21 00 08 */	stfs f1, 8(r1)
/* 8043FAC4 0043CA04  C0 42 26 04 */	lfs f2, lbl_80520964@sda21(r2)
/* 8043FAC8 0043CA08  38 A1 00 08 */	addi r5, r1, 8
/* 8043FACC 0043CA0C  C0 06 00 04 */	lfs f0, 4(r6)
/* 8043FAD0 0043CA10  D8 81 00 58 */	stfd f4, 0x58(r1)
/* 8043FAD4 0043CA14  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 8043FAD8 0043CA18  D0 E1 00 14 */	stfs f7, 0x14(r1)
/* 8043FADC 0043CA1C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8043FAE0 0043CA20  7C E7 02 14 */	add r7, r7, r0
/* 8043FAE4 0043CA24  D0 E1 00 18 */	stfs f7, 0x18(r1)
/* 8043FAE8 0043CA28  C0 87 00 04 */	lfs f4, 4(r7)
/* 8043FAEC 0043CA2C  D0 E1 00 1C */	stfs f7, 0x1c(r1)
/* 8043FAF0 0043CA30  EC 25 01 32 */	fmuls f1, f5, f4
/* 8043FAF4 0043CA34  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 8043FAF8 0043CA38  EC 21 01 B2 */	fmuls f1, f1, f6
/* 8043FAFC 0043CA3C  D0 61 00 10 */	stfs f3, 0x10(r1)
/* 8043FB00 0043CA40  EC 26 00 72 */	fmuls f1, f6, f1
/* 8043FB04 0043CA44  FC 20 0A 10 */	fabs f1, f1
/* 8043FB08 0043CA48  FC 20 08 18 */	frsp f1, f1
/* 8043FB0C 0043CA4C  EC 02 00 7C */	fnmsubs f0, f2, f1, f0
/* 8043FB10 0043CA50  D0 06 00 04 */	stfs f0, 4(r6)
/* 8043FB14 0043CA54  4B FE 87 C5 */	bl "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
.L_8043FB18:
/* 8043FB18 0043CA58  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8043FB1C 0043CA5C  7C 08 03 A6 */	mtlr r0
/* 8043FB20 0043CA60  38 21 00 60 */	addi r1, r1, 0x60
/* 8043FB24 0043CA64  4E 80 00 20 */	blr 
.endfn "makeMatrix__Q35P2JME6Window19TRenderingProcessorFP7MatrixfPQ35P2JME6Window8DrawInfof10Vector3<f>"

.fn doDrawLetter__Q35P2JME6Window19TRenderingProcessorFffffib, global
/* 8043FB28 0043CA68  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 8043FB2C 0043CA6C  7C 08 02 A6 */	mflr r0
/* 8043FB30 0043CA70  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 8043FB34 0043CA74  DB E1 00 A0 */	stfd f31, 0xa0(r1)
/* 8043FB38 0043CA78  F3 E1 00 A8 */	psq_st f31, 168(r1), 0, qr0
/* 8043FB3C 0043CA7C  DB C1 00 90 */	stfd f30, 0x90(r1)
/* 8043FB40 0043CA80  F3 C1 00 98 */	psq_st f30, 152(r1), 0, qr0
/* 8043FB44 0043CA84  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 8043FB48 0043CA88  93 C1 00 88 */	stw r30, 0x88(r1)
/* 8043FB4C 0043CA8C  93 A1 00 84 */	stw r29, 0x84(r1)
/* 8043FB50 0043CA90  93 81 00 80 */	stw r28, 0x80(r1)
/* 8043FB54 0043CA94  81 83 00 00 */	lwz r12, 0(r3)
/* 8043FB58 0043CA98  7C 9D 23 78 */	mr r29, r4
/* 8043FB5C 0043CA9C  7C BE 2B 78 */	mr r30, r5
/* 8043FB60 0043CAA0  FF C0 18 90 */	fmr f30, f3
/* 8043FB64 0043CAA4  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 8043FB68 0043CAA8  FF E0 20 90 */	fmr f31, f4
/* 8043FB6C 0043CAAC  7C 7C 1B 78 */	mr r28, r3
/* 8043FB70 0043CAB0  38 81 00 50 */	addi r4, r1, 0x50
/* 8043FB74 0043CAB4  38 A1 00 20 */	addi r5, r1, 0x20
/* 8043FB78 0043CAB8  7D 89 03 A6 */	mtctr r12
/* 8043FB7C 0043CABC  4E 80 04 21 */	bctrl 
/* 8043FB80 0043CAC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8043FB84 0043CAC4  7C 7F 1B 78 */	mr r31, r3
/* 8043FB88 0043CAC8  41 82 00 E0 */	beq .L_8043FC68
/* 8043FB8C 0043CACC  38 61 00 20 */	addi r3, r1, 0x20
/* 8043FB90 0043CAD0  38 80 00 00 */	li r4, 0
/* 8043FB94 0043CAD4  4B CA 99 E5 */	bl GXLoadPosMtxImm
/* 8043FB98 0043CAD8  38 60 FF FF */	li r3, -1
/* 8043FB9C 0043CADC  57 E0 FE 7E */	rlwinm r0, r31, 0x1f, 0x19, 0x1f
/* 8043FBA0 0043CAE0  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8043FBA4 0043CAE4  38 60 00 00 */	li r3, 0
/* 8043FBA8 0043CAE8  38 81 00 18 */	addi r4, r1, 0x18
/* 8043FBAC 0043CAEC  38 A1 00 14 */	addi r5, r1, 0x14
/* 8043FBB0 0043CAF0  98 61 00 1E */	stb r3, 0x1e(r1)
/* 8043FBB4 0043CAF4  98 61 00 1D */	stb r3, 0x1d(r1)
/* 8043FBB8 0043CAF8  98 61 00 1C */	stb r3, 0x1c(r1)
/* 8043FBBC 0043CAFC  98 01 00 1F */	stb r0, 0x1f(r1)
/* 8043FBC0 0043CB00  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8043FBC4 0043CB04  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043FBC8 0043CB08  90 01 00 18 */	stw r0, 0x18(r1)
/* 8043FBCC 0043CB0C  90 01 00 08 */	stw r0, 8(r1)
/* 8043FBD0 0043CB10  80 7C 00 4C */	lwz r3, 0x4c(r28)
/* 8043FBD4 0043CB14  4B BE D6 3D */	bl setGradColor__7JUTFontFQ28JUtility6TColorQ28JUtility6TColor
/* 8043FBD8 0043CB18  80 7C 00 4C */	lwz r3, 0x4c(r28)
/* 8043FBDC 0043CB1C  FC 60 F0 90 */	fmr f3, f30
/* 8043FBE0 0043CB20  C0 22 25 C4 */	lfs f1, lbl_80520924@sda21(r2)
/* 8043FBE4 0043CB24  FC 80 F8 90 */	fmr f4, f31
/* 8043FBE8 0043CB28  81 83 00 00 */	lwz r12, 0(r3)
/* 8043FBEC 0043CB2C  7F A4 EB 78 */	mr r4, r29
/* 8043FBF0 0043CB30  FC 40 08 90 */	fmr f2, f1
/* 8043FBF4 0043CB34  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8043FBF8 0043CB38  7F C5 F3 78 */	mr r5, r30
/* 8043FBFC 0043CB3C  7D 89 03 A6 */	mtctr r12
/* 8043FC00 0043CB40  4E 80 04 21 */	bctrl 
/* 8043FC04 0043CB44  38 61 00 50 */	addi r3, r1, 0x50
/* 8043FC08 0043CB48  38 80 00 00 */	li r4, 0
/* 8043FC0C 0043CB4C  4B CA 99 6D */	bl GXLoadPosMtxImm
/* 8043FC10 0043CB50  9B FC 00 67 */	stb r31, 0x67(r28)
/* 8043FC14 0043CB54  38 81 00 10 */	addi r4, r1, 0x10
/* 8043FC18 0043CB58  38 A1 00 0C */	addi r5, r1, 0xc
/* 8043FC1C 0043CB5C  9B FC 00 6B */	stb r31, 0x6b(r28)
/* 8043FC20 0043CB60  80 1C 00 68 */	lwz r0, 0x68(r28)
/* 8043FC24 0043CB64  90 01 00 0C */	stw r0, 0xc(r1)
/* 8043FC28 0043CB68  80 1C 00 64 */	lwz r0, 0x64(r28)
/* 8043FC2C 0043CB6C  90 01 00 10 */	stw r0, 0x10(r1)
/* 8043FC30 0043CB70  80 7C 00 4C */	lwz r3, 0x4c(r28)
/* 8043FC34 0043CB74  4B BE D5 DD */	bl setGradColor__7JUTFontFQ28JUtility6TColorQ28JUtility6TColor
/* 8043FC38 0043CB78  80 7C 00 4C */	lwz r3, 0x4c(r28)
/* 8043FC3C 0043CB7C  FC 60 F0 90 */	fmr f3, f30
/* 8043FC40 0043CB80  C0 22 25 C4 */	lfs f1, lbl_80520924@sda21(r2)
/* 8043FC44 0043CB84  FC 80 F8 90 */	fmr f4, f31
/* 8043FC48 0043CB88  81 83 00 00 */	lwz r12, 0(r3)
/* 8043FC4C 0043CB8C  7F A4 EB 78 */	mr r4, r29
/* 8043FC50 0043CB90  FC 40 08 90 */	fmr f2, f1
/* 8043FC54 0043CB94  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8043FC58 0043CB98  7F C5 F3 78 */	mr r5, r30
/* 8043FC5C 0043CB9C  7D 89 03 A6 */	mtctr r12
/* 8043FC60 0043CBA0  4E 80 04 21 */	bctrl 
/* 8043FC64 0043CBA4  48 00 00 1C */	b .L_8043FC80
.L_8043FC68:
/* 8043FC68 0043CBA8  FC 20 F0 90 */	fmr f1, f30
/* 8043FC6C 0043CBAC  80 9C 00 4C */	lwz r4, 0x4c(r28)
/* 8043FC70 0043CBB0  7F 83 E3 78 */	mr r3, r28
/* 8043FC74 0043CBB4  7F A5 EB 78 */	mr r5, r29
/* 8043FC78 0043CBB8  7F C6 F3 78 */	mr r6, r30
/* 8043FC7C 0043CBBC  4B FF C6 99 */	bl calcWidth__Q25P2JME19TRenderingProcessorFP7JUTFontifb
.L_8043FC80:
/* 8043FC80 0043CBC0  E3 E1 00 A8 */	psq_l f31, 168(r1), 0, qr0
/* 8043FC84 0043CBC4  CB E1 00 A0 */	lfd f31, 0xa0(r1)
/* 8043FC88 0043CBC8  E3 C1 00 98 */	psq_l f30, 152(r1), 0, qr0
/* 8043FC8C 0043CBCC  CB C1 00 90 */	lfd f30, 0x90(r1)
/* 8043FC90 0043CBD0  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 8043FC94 0043CBD4  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 8043FC98 0043CBD8  83 A1 00 84 */	lwz r29, 0x84(r1)
/* 8043FC9C 0043CBDC  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 8043FCA0 0043CBE0  83 81 00 80 */	lwz r28, 0x80(r1)
/* 8043FCA4 0043CBE4  7C 08 03 A6 */	mtlr r0
/* 8043FCA8 0043CBE8  38 21 00 B0 */	addi r1, r1, 0xb0
/* 8043FCAC 0043CBEC  4E 80 00 20 */	blr 
.endfn doDrawLetter__Q35P2JME6Window19TRenderingProcessorFffffib

.fn doDrawRuby__Q35P2JME6Window19TRenderingProcessorFffffib, global
/* 8043FCB0 0043CBF0  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8043FCB4 0043CBF4  7C 08 02 A6 */	mflr r0
/* 8043FCB8 0043CBF8  90 01 00 54 */	stw r0, 0x54(r1)
/* 8043FCBC 0043CBFC  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8043FCC0 0043CC00  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8043FCC4 0043CC04  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 8043FCC8 0043CC08  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 8043FCCC 0043CC0C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8043FCD0 0043CC10  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8043FCD4 0043CC14  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8043FCD8 0043CC18  81 83 00 00 */	lwz r12, 0(r3)
/* 8043FCDC 0043CC1C  7C 9E 23 78 */	mr r30, r4
/* 8043FCE0 0043CC20  7C BF 2B 78 */	mr r31, r5
/* 8043FCE4 0043CC24  FF C0 18 90 */	fmr f30, f3
/* 8043FCE8 0043CC28  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 8043FCEC 0043CC2C  FF E0 20 90 */	fmr f31, f4
/* 8043FCF0 0043CC30  7C 7D 1B 78 */	mr r29, r3
/* 8043FCF4 0043CC34  38 80 00 00 */	li r4, 0
/* 8043FCF8 0043CC38  38 A0 00 00 */	li r5, 0
/* 8043FCFC 0043CC3C  7D 89 03 A6 */	mtctr r12
/* 8043FD00 0043CC40  4E 80 04 21 */	bctrl 
/* 8043FD04 0043CC44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8043FD08 0043CC48  41 82 00 D8 */	beq .L_8043FDE0
/* 8043FD0C 0043CC4C  80 1D 00 6C */	lwz r0, 0x6c(r29)
/* 8043FD10 0043CC50  38 81 00 10 */	addi r4, r1, 0x10
/* 8043FD14 0043CC54  90 01 00 18 */	stw r0, 0x18(r1)
/* 8043FD18 0043CC58  98 61 00 1B */	stb r3, 0x1b(r1)
/* 8043FD1C 0043CC5C  80 01 00 18 */	lwz r0, 0x18(r1)
/* 8043FD20 0043CC60  90 01 00 10 */	stw r0, 0x10(r1)
/* 8043FD24 0043CC64  80 7D 00 50 */	lwz r3, 0x50(r29)
/* 8043FD28 0043CC68  4B BE D4 95 */	bl setCharColor__7JUTFontFQ28JUtility6TColor
/* 8043FD2C 0043CC6C  80 1D 00 CC */	lwz r0, 0xcc(r29)
/* 8043FD30 0043CC70  38 81 00 0C */	addi r4, r1, 0xc
/* 8043FD34 0043CC74  38 60 00 01 */	li r3, 1
/* 8043FD38 0043CC78  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043FD3C 0043CC7C  88 A1 00 14 */	lbz r5, 0x14(r1)
/* 8043FD40 0043CC80  88 C1 00 15 */	lbz r6, 0x15(r1)
/* 8043FD44 0043CC84  54 A0 0F FE */	srwi r0, r5, 0x1f
/* 8043FD48 0043CC88  88 E1 00 16 */	lbz r7, 0x16(r1)
/* 8043FD4C 0043CC8C  7C A0 2A 14 */	add r5, r0, r5
/* 8043FD50 0043CC90  7C A9 0E 70 */	srawi r9, r5, 1
/* 8043FD54 0043CC94  54 C0 0F FE */	srwi r0, r6, 0x1f
/* 8043FD58 0043CC98  7C 00 32 14 */	add r0, r0, r6
/* 8043FD5C 0043CC9C  54 E6 0F FE */	srwi r6, r7, 0x1f
/* 8043FD60 0043CCA0  7C 08 0E 70 */	srawi r8, r0, 1
/* 8043FD64 0043CCA4  88 A1 00 17 */	lbz r5, 0x17(r1)
/* 8043FD68 0043CCA8  7C C6 3A 14 */	add r6, r6, r7
/* 8043FD6C 0043CCAC  99 21 00 14 */	stb r9, 0x14(r1)
/* 8043FD70 0043CCB0  54 A0 0F FE */	srwi r0, r5, 0x1f
/* 8043FD74 0043CCB4  7C C6 0E 70 */	srawi r6, r6, 1
/* 8043FD78 0043CCB8  99 01 00 15 */	stb r8, 0x15(r1)
/* 8043FD7C 0043CCBC  7C 00 2A 14 */	add r0, r0, r5
/* 8043FD80 0043CCC0  7C 00 0E 70 */	srawi r0, r0, 1
/* 8043FD84 0043CCC4  98 C1 00 16 */	stb r6, 0x16(r1)
/* 8043FD88 0043CCC8  98 01 00 17 */	stb r0, 0x17(r1)
/* 8043FD8C 0043CCCC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8043FD90 0043CCD0  90 01 00 0C */	stw r0, 0xc(r1)
/* 8043FD94 0043CCD4  4B CA 88 CD */	bl GXSetTevColor
/* 8043FD98 0043CCD8  80 7D 00 50 */	lwz r3, 0x50(r29)
/* 8043FD9C 0043CCDC  FC 60 F0 90 */	fmr f3, f30
/* 8043FDA0 0043CCE0  C0 22 25 C4 */	lfs f1, lbl_80520924@sda21(r2)
/* 8043FDA4 0043CCE4  FC 80 F8 90 */	fmr f4, f31
/* 8043FDA8 0043CCE8  81 83 00 00 */	lwz r12, 0(r3)
/* 8043FDAC 0043CCEC  7F C4 F3 78 */	mr r4, r30
/* 8043FDB0 0043CCF0  FC 40 08 90 */	fmr f2, f1
/* 8043FDB4 0043CCF4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8043FDB8 0043CCF8  7F E5 FB 78 */	mr r5, r31
/* 8043FDBC 0043CCFC  7D 89 03 A6 */	mtctr r12
/* 8043FDC0 0043CD00  4E 80 04 21 */	bctrl 
/* 8043FDC4 0043CD04  80 1D 00 CC */	lwz r0, 0xcc(r29)
/* 8043FDC8 0043CD08  FF E0 08 90 */	fmr f31, f1
/* 8043FDCC 0043CD0C  38 81 00 08 */	addi r4, r1, 8
/* 8043FDD0 0043CD10  38 60 00 01 */	li r3, 1
/* 8043FDD4 0043CD14  90 01 00 08 */	stw r0, 8(r1)
/* 8043FDD8 0043CD18  4B CA 88 89 */	bl GXSetTevColor
/* 8043FDDC 0043CD1C  48 00 00 20 */	b .L_8043FDFC
.L_8043FDE0:
/* 8043FDE0 0043CD20  FC 20 F0 90 */	fmr f1, f30
/* 8043FDE4 0043CD24  80 9D 00 50 */	lwz r4, 0x50(r29)
/* 8043FDE8 0043CD28  7F A3 EB 78 */	mr r3, r29
/* 8043FDEC 0043CD2C  7F C5 F3 78 */	mr r5, r30
/* 8043FDF0 0043CD30  7F E6 FB 78 */	mr r6, r31
/* 8043FDF4 0043CD34  4B FF C5 21 */	bl calcWidth__Q25P2JME19TRenderingProcessorFP7JUTFontifb
/* 8043FDF8 0043CD38  FF E0 08 90 */	fmr f31, f1
.L_8043FDFC:
/* 8043FDFC 0043CD3C  FC 20 F8 90 */	fmr f1, f31
/* 8043FE00 0043CD40  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8043FE04 0043CD44  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8043FE08 0043CD48  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 8043FE0C 0043CD4C  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 8043FE10 0043CD50  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8043FE14 0043CD54  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8043FE18 0043CD58  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8043FE1C 0043CD5C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8043FE20 0043CD60  7C 08 03 A6 */	mtlr r0
/* 8043FE24 0043CD64  38 21 00 50 */	addi r1, r1, 0x50
/* 8043FE28 0043CD68  4E 80 00 20 */	blr 
.endfn doDrawRuby__Q35P2JME6Window19TRenderingProcessorFffffib

.fn doDrawImage__Q35P2JME6Window19TRenderingProcessorFP10JUTTextureffff, global
/* 8043FE2C 0043CD6C  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 8043FE30 0043CD70  7C 08 02 A6 */	mflr r0
/* 8043FE34 0043CD74  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8043FE38 0043CD78  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 8043FE3C 0043CD7C  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 8043FE40 0043CD80  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 8043FE44 0043CD84  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 8043FE48 0043CD88  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 8043FE4C 0043CD8C  93 C1 00 78 */	stw r30, 0x78(r1)
/* 8043FE50 0043CD90  81 83 00 00 */	lwz r12, 0(r3)
/* 8043FE54 0043CD94  7C 9F 23 78 */	mr r31, r4
/* 8043FE58 0043CD98  FF C0 18 90 */	fmr f30, f3
/* 8043FE5C 0043CD9C  7C 7E 1B 78 */	mr r30, r3
/* 8043FE60 0043CDA0  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 8043FE64 0043CDA4  FF E0 20 90 */	fmr f31, f4
/* 8043FE68 0043CDA8  38 81 00 40 */	addi r4, r1, 0x40
/* 8043FE6C 0043CDAC  38 A1 00 10 */	addi r5, r1, 0x10
/* 8043FE70 0043CDB0  7D 89 03 A6 */	mtctr r12
/* 8043FE74 0043CDB4  4E 80 04 21 */	bctrl 
/* 8043FE78 0043CDB8  54 67 06 3F */	clrlwi. r7, r3, 0x18
/* 8043FE7C 0043CDBC  41 82 01 64 */	beq .L_8043FFE0
/* 8043FE80 0043CDC0  88 1E 00 73 */	lbz r0, 0x73(r30)
/* 8043FE84 0043CDC4  38 C0 FF FF */	li r6, -1
/* 8043FE88 0043CDC8  3C 80 80 81 */	lis r4, 0x80808081@ha
/* 8043FE8C 0043CDCC  90 C1 00 0C */	stw r6, 0xc(r1)
/* 8043FE90 0043CDD0  7C 00 39 D6 */	mullw r0, r0, r7
/* 8043FE94 0043CDD4  7F C3 F3 78 */	mr r3, r30
/* 8043FE98 0043CDD8  38 A4 80 81 */	addi r5, r4, 0x80808081@l
/* 8043FE9C 0043CDDC  90 C1 00 08 */	stw r6, 8(r1)
/* 8043FEA0 0043CDE0  7C 85 00 96 */	mulhw r4, r5, r0
/* 8043FEA4 0043CDE4  7C 04 02 14 */	add r0, r4, r0
/* 8043FEA8 0043CDE8  7C 00 3E 70 */	srawi r0, r0, 7
/* 8043FEAC 0043CDEC  54 04 0F FE */	srwi r4, r0, 0x1f
/* 8043FEB0 0043CDF0  7C 00 22 14 */	add r0, r0, r4
/* 8043FEB4 0043CDF4  98 1E 00 73 */	stb r0, 0x73(r30)
/* 8043FEB8 0043CDF8  88 1E 00 77 */	lbz r0, 0x77(r30)
/* 8043FEBC 0043CDFC  7C 00 39 D6 */	mullw r0, r0, r7
/* 8043FEC0 0043CE00  7C 85 00 96 */	mulhw r4, r5, r0
/* 8043FEC4 0043CE04  7C 04 02 14 */	add r0, r4, r0
/* 8043FEC8 0043CE08  7C 00 3E 70 */	srawi r0, r0, 7
/* 8043FECC 0043CE0C  54 04 0F FE */	srwi r4, r0, 0x1f
/* 8043FED0 0043CE10  7C 00 22 14 */	add r0, r0, r4
/* 8043FED4 0043CE14  98 1E 00 77 */	stb r0, 0x77(r30)
/* 8043FED8 0043CE18  89 5E 00 70 */	lbz r10, 0x70(r30)
/* 8043FEDC 0043CE1C  89 3E 00 71 */	lbz r9, 0x71(r30)
/* 8043FEE0 0043CE20  89 1E 00 72 */	lbz r8, 0x72(r30)
/* 8043FEE4 0043CE24  88 FE 00 73 */	lbz r7, 0x73(r30)
/* 8043FEE8 0043CE28  88 DE 00 74 */	lbz r6, 0x74(r30)
/* 8043FEEC 0043CE2C  88 BE 00 75 */	lbz r5, 0x75(r30)
/* 8043FEF0 0043CE30  88 9E 00 76 */	lbz r4, 0x76(r30)
/* 8043FEF4 0043CE34  88 1E 00 77 */	lbz r0, 0x77(r30)
/* 8043FEF8 0043CE38  99 41 00 0C */	stb r10, 0xc(r1)
/* 8043FEFC 0043CE3C  99 21 00 0D */	stb r9, 0xd(r1)
/* 8043FF00 0043CE40  99 01 00 0E */	stb r8, 0xe(r1)
/* 8043FF04 0043CE44  98 E1 00 0F */	stb r7, 0xf(r1)
/* 8043FF08 0043CE48  98 C1 00 08 */	stb r6, 8(r1)
/* 8043FF0C 0043CE4C  98 A1 00 09 */	stb r5, 9(r1)
/* 8043FF10 0043CE50  98 81 00 0A */	stb r4, 0xa(r1)
/* 8043FF14 0043CE54  98 01 00 0B */	stb r0, 0xb(r1)
/* 8043FF18 0043CE58  4B FF BB C5 */	bl setImageGX__Q25P2JME19TRenderingProcessorFv
/* 8043FF1C 0043CE5C  38 61 00 10 */	addi r3, r1, 0x10
/* 8043FF20 0043CE60  38 80 00 00 */	li r4, 0
/* 8043FF24 0043CE64  4B CA 96 55 */	bl GXLoadPosMtxImm
/* 8043FF28 0043CE68  88 1E 00 73 */	lbz r0, 0x73(r30)
/* 8043FF2C 0043CE6C  38 A0 00 00 */	li r5, 0
/* 8043FF30 0043CE70  C0 22 25 C4 */	lfs f1, lbl_80520924@sda21(r2)
/* 8043FF34 0043CE74  FC 60 F0 90 */	fmr f3, f30
/* 8043FF38 0043CE78  98 BE 00 70 */	stb r5, 0x70(r30)
/* 8043FF3C 0043CE7C  54 00 FE 3E */	rlwinm r0, r0, 0x1f, 0x18, 0x1f
/* 8043FF40 0043CE80  FC 40 08 90 */	fmr f2, f1
/* 8043FF44 0043CE84  7F C3 F3 78 */	mr r3, r30
/* 8043FF48 0043CE88  98 BE 00 71 */	stb r5, 0x71(r30)
/* 8043FF4C 0043CE8C  FC 80 F8 90 */	fmr f4, f31
/* 8043FF50 0043CE90  7F E4 FB 78 */	mr r4, r31
/* 8043FF54 0043CE94  98 BE 00 72 */	stb r5, 0x72(r30)
/* 8043FF58 0043CE98  98 1E 00 73 */	stb r0, 0x73(r30)
/* 8043FF5C 0043CE9C  88 1E 00 77 */	lbz r0, 0x77(r30)
/* 8043FF60 0043CEA0  98 BE 00 74 */	stb r5, 0x74(r30)
/* 8043FF64 0043CEA4  54 00 FE 3E */	rlwinm r0, r0, 0x1f, 0x18, 0x1f
/* 8043FF68 0043CEA8  98 BE 00 75 */	stb r5, 0x75(r30)
/* 8043FF6C 0043CEAC  98 BE 00 76 */	stb r5, 0x76(r30)
/* 8043FF70 0043CEB0  98 1E 00 77 */	stb r0, 0x77(r30)
/* 8043FF74 0043CEB4  4B FF BE 9D */	bl drawImage__Q25P2JME19TRenderingProcessorFP10JUTTextureffff
/* 8043FF78 0043CEB8  38 61 00 40 */	addi r3, r1, 0x40
/* 8043FF7C 0043CEBC  38 80 00 00 */	li r4, 0
/* 8043FF80 0043CEC0  4B CA 95 F9 */	bl GXLoadPosMtxImm
/* 8043FF84 0043CEC4  88 01 00 0C */	lbz r0, 0xc(r1)
/* 8043FF88 0043CEC8  FC 60 F0 90 */	fmr f3, f30
/* 8043FF8C 0043CECC  C0 22 25 C4 */	lfs f1, lbl_80520924@sda21(r2)
/* 8043FF90 0043CED0  FC 80 F8 90 */	fmr f4, f31
/* 8043FF94 0043CED4  98 1E 00 70 */	stb r0, 0x70(r30)
/* 8043FF98 0043CED8  7F C3 F3 78 */	mr r3, r30
/* 8043FF9C 0043CEDC  88 01 00 0D */	lbz r0, 0xd(r1)
/* 8043FFA0 0043CEE0  88 A1 00 0E */	lbz r5, 0xe(r1)
/* 8043FFA4 0043CEE4  FC 40 08 90 */	fmr f2, f1
/* 8043FFA8 0043CEE8  98 1E 00 71 */	stb r0, 0x71(r30)
/* 8043FFAC 0043CEEC  7F E4 FB 78 */	mr r4, r31
/* 8043FFB0 0043CEF0  88 01 00 0F */	lbz r0, 0xf(r1)
/* 8043FFB4 0043CEF4  98 BE 00 72 */	stb r5, 0x72(r30)
/* 8043FFB8 0043CEF8  88 A1 00 08 */	lbz r5, 8(r1)
/* 8043FFBC 0043CEFC  98 1E 00 73 */	stb r0, 0x73(r30)
/* 8043FFC0 0043CF00  88 01 00 09 */	lbz r0, 9(r1)
/* 8043FFC4 0043CF04  98 BE 00 74 */	stb r5, 0x74(r30)
/* 8043FFC8 0043CF08  88 A1 00 0A */	lbz r5, 0xa(r1)
/* 8043FFCC 0043CF0C  98 1E 00 75 */	stb r0, 0x75(r30)
/* 8043FFD0 0043CF10  88 01 00 0B */	lbz r0, 0xb(r1)
/* 8043FFD4 0043CF14  98 BE 00 76 */	stb r5, 0x76(r30)
/* 8043FFD8 0043CF18  98 1E 00 77 */	stb r0, 0x77(r30)
/* 8043FFDC 0043CF1C  4B FF BE 35 */	bl drawImage__Q25P2JME19TRenderingProcessorFP10JUTTextureffff
.L_8043FFE0:
/* 8043FFE0 0043CF20  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 8043FFE4 0043CF24  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 8043FFE8 0043CF28  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 8043FFEC 0043CF2C  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 8043FFF0 0043CF30  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 8043FFF4 0043CF34  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 8043FFF8 0043CF38  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 8043FFFC 0043CF3C  7C 08 03 A6 */	mtlr r0
/* 80440000 0043CF40  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80440004 0043CF44  4E 80 00 20 */	blr 
.endfn doDrawImage__Q35P2JME6Window19TRenderingProcessorFP10JUTTextureffff

.fn update__Q35P2JME6Window19TRenderingProcessorFv, global
/* 80440008 0043CF48  80 83 01 20 */	lwz r4, 0x120(r3)
/* 8044000C 0043CF4C  48 00 00 30 */	b .L_8044003C
.L_80440010:
/* 80440010 0043CF50  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80440014 0043CF54  C0 24 00 1C */	lfs f1, 0x1c(r4)
/* 80440018 0043CF58  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8044001C 0043CF5C  EC 01 00 2A */	fadds f0, f1, f0
/* 80440020 0043CF60  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 80440024 0043CF64  C0 04 00 1C */	lfs f0, 0x1c(r4)
/* 80440028 0043CF68  C0 24 00 20 */	lfs f1, 0x20(r4)
/* 8044002C 0043CF6C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80440030 0043CF70  40 81 00 08 */	ble .L_80440038
/* 80440034 0043CF74  D0 24 00 1C */	stfs f1, 0x1c(r4)
.L_80440038:
/* 80440038 0043CF78  80 84 00 04 */	lwz r4, 4(r4)
.L_8044003C:
/* 8044003C 0043CF7C  28 04 00 00 */	cmplwi r4, 0
/* 80440040 0043CF80  40 82 FF D0 */	bne .L_80440010
/* 80440044 0043CF84  4E 80 00 20 */	blr 
.endfn update__Q35P2JME6Window19TRenderingProcessorFv

.fn reset__Q35P2JME6Window19TRenderingProcessorFv, global
/* 80440048 0043CF88  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8044004C 0043CF8C  7C 08 02 A6 */	mflr r0
/* 80440050 0043CF90  90 01 00 34 */	stw r0, 0x34(r1)
/* 80440054 0043CF94  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80440058 0043CF98  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8044005C 0043CF9C  BF 41 00 08 */	stmw r26, 8(r1)
/* 80440060 0043CFA0  7C 7A 1B 78 */	mr r26, r3
/* 80440064 0043CFA4  4B FF C2 A1 */	bl reset__Q25P2JME19TRenderingProcessorFv
/* 80440068 0043CFA8  3C 80 80 4A */	lis r4, lbl_8049ACB4@ha
/* 8044006C 0043CFAC  3C 60 80 4A */	lis r3, lbl_8049ACC8@ha
/* 80440070 0043CFB0  83 7A 01 20 */	lwz r27, 0x120(r26)
/* 80440074 0043CFB4  3B A4 AC B4 */	addi r29, r4, lbl_8049ACB4@l
/* 80440078 0043CFB8  C3 E2 25 C4 */	lfs f31, lbl_80520924@sda21(r2)
/* 8044007C 0043CFBC  3B C3 AC C8 */	addi r30, r3, lbl_8049ACC8@l
/* 80440080 0043CFC0  3B E0 FF FF */	li r31, -1
/* 80440084 0043CFC4  48 00 00 44 */	b .L_804400C8
.L_80440088:
/* 80440088 0043CFC8  28 1B 00 00 */	cmplwi r27, 0
/* 8044008C 0043CFCC  83 9B 00 04 */	lwz r28, 4(r27)
/* 80440090 0043CFD0  40 82 00 18 */	bne .L_804400A8
/* 80440094 0043CFD4  7F A3 EB 78 */	mr r3, r29
/* 80440098 0043CFD8  7F C5 F3 78 */	mr r5, r30
/* 8044009C 0043CFDC  38 80 00 FD */	li r4, 0xfd
/* 804400A0 0043CFE0  4C C6 31 82 */	crclr 6
/* 804400A4 0043CFE4  4B BE A5 9D */	bl panic_f__12JUTExceptionFPCciPCce
.L_804400A8:
/* 804400A8 0043CFE8  93 FB 00 18 */	stw r31, 0x18(r27)
/* 804400AC 0043CFEC  7F 63 DB 78 */	mr r3, r27
/* 804400B0 0043CFF0  D3 FB 00 1C */	stfs f31, 0x1c(r27)
/* 804400B4 0043CFF4  4B FD 15 1D */	bl del__5CNodeFv
/* 804400B8 0043CFF8  7F 64 DB 78 */	mr r4, r27
/* 804400BC 0043CFFC  38 7A 01 28 */	addi r3, r26, 0x128
/* 804400C0 0043D000  4B FD 13 49 */	bl add__5CNodeFP5CNode
/* 804400C4 0043D004  7F 9B E3 78 */	mr r27, r28
.L_804400C8:
/* 804400C8 0043D008  28 1B 00 00 */	cmplwi r27, 0
/* 804400CC 0043D00C  40 82 FF BC */	bne .L_80440088
/* 804400D0 0043D010  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 804400D4 0043D014  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 804400D8 0043D018  BB 41 00 08 */	lmw r26, 8(r1)
/* 804400DC 0043D01C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 804400E0 0043D020  7C 08 03 A6 */	mtlr r0
/* 804400E4 0043D024  38 21 00 30 */	addi r1, r1, 0x30
/* 804400E8 0043D028  4E 80 00 20 */	blr 
.endfn reset__Q35P2JME6Window19TRenderingProcessorFv

.fn __ct__Q35P2JME6Window8TControlFv, global
/* 804400EC 0043D02C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804400F0 0043D030  7C 08 02 A6 */	mflr r0
/* 804400F4 0043D034  90 01 00 14 */	stw r0, 0x14(r1)
/* 804400F8 0043D038  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804400FC 0043D03C  7C 7F 1B 78 */	mr r31, r3
/* 80440100 0043D040  4B FF 89 35 */	bl __ct__Q25P2JME8TControlFv
/* 80440104 0043D044  3C 60 80 4F */	lis r3, __vt__Q35P2JME6Window8TControl@ha
/* 80440108 0043D048  C0 22 26 00 */	lfs f1, lbl_80520960@sda21(r2)
/* 8044010C 0043D04C  38 03 CC 5C */	addi r0, r3, __vt__Q35P2JME6Window8TControl@l
/* 80440110 0043D050  C0 02 25 C4 */	lfs f0, lbl_80520924@sda21(r2)
/* 80440114 0043D054  90 1F 00 00 */	stw r0, 0(r31)
/* 80440118 0043D058  7F E3 FB 78 */	mr r3, r31
/* 8044011C 0043D05C  D0 3F 00 50 */	stfs f1, 0x50(r31)
/* 80440120 0043D060  D0 1F 00 54 */	stfs f0, 0x54(r31)
/* 80440124 0043D064  D0 1F 00 58 */	stfs f0, 0x58(r31)
/* 80440128 0043D068  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8044012C 0043D06C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80440130 0043D070  7C 08 03 A6 */	mtlr r0
/* 80440134 0043D074  38 21 00 10 */	addi r1, r1, 0x10
/* 80440138 0043D078  4E 80 00 20 */	blr 
.endfn __ct__Q35P2JME6Window8TControlFv

.fn initRenderingProcessor__Q35P2JME6Window8TControlFUl, global
/* 8044013C 0043D07C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80440140 0043D080  7C 08 02 A6 */	mflr r0
/* 80440144 0043D084  3C A0 80 4A */	lis r5, lbl_8049ACA8@ha
/* 80440148 0043D088  90 01 00 24 */	stw r0, 0x24(r1)
/* 8044014C 0043D08C  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80440150 0043D090  7C 9B 23 78 */	mr r27, r4
/* 80440154 0043D094  3B E5 AC A8 */	addi r31, r5, lbl_8049ACA8@l
/* 80440158 0043D098  83 C3 00 40 */	lwz r30, 0x40(r3)
/* 8044015C 0043D09C  81 9E 01 28 */	lwz r12, 0x128(r30)
/* 80440160 0043D0A0  38 7E 01 28 */	addi r3, r30, 0x128
/* 80440164 0043D0A4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80440168 0043D0A8  7D 89 03 A6 */	mtctr r12
/* 8044016C 0043D0AC  4E 80 04 21 */	bctrl 
/* 80440170 0043D0B0  2C 03 00 00 */	cmpwi r3, 0
/* 80440174 0043D0B4  41 82 00 18 */	beq .L_8044018C
/* 80440178 0043D0B8  38 7F 00 0C */	addi r3, r31, 0xc
/* 8044017C 0043D0BC  38 BF 00 20 */	addi r5, r31, 0x20
/* 80440180 0043D0C0  38 80 00 9E */	li r4, 0x9e
/* 80440184 0043D0C4  4C C6 31 82 */	crclr 6
/* 80440188 0043D0C8  4B BE A4 B9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044018C:
/* 8044018C 0043D0CC  38 7E 01 10 */	addi r3, r30, 0x110
/* 80440190 0043D0D0  81 9E 01 10 */	lwz r12, 0x110(r30)
/* 80440194 0043D0D4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80440198 0043D0D8  7D 89 03 A6 */	mtctr r12
/* 8044019C 0043D0DC  4E 80 04 21 */	bctrl 
/* 804401A0 0043D0E0  2C 03 00 00 */	cmpwi r3, 0
/* 804401A4 0043D0E4  41 82 00 18 */	beq .L_804401BC
/* 804401A8 0043D0E8  38 7F 00 0C */	addi r3, r31, 0xc
/* 804401AC 0043D0EC  38 BF 00 20 */	addi r5, r31, 0x20
/* 804401B0 0043D0F0  38 80 00 9F */	li r4, 0x9f
/* 804401B4 0043D0F4  4C C6 31 82 */	crclr 6
/* 804401B8 0043D0F8  4B BE A4 89 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804401BC:
/* 804401BC 0043D0FC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804401C0 0043D100  38 9F 00 2C */	addi r4, r31, 0x2c
/* 804401C4 0043D104  38 A0 00 00 */	li r5, 0
/* 804401C8 0043D108  4B FE 31 95 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 804401CC 0043D10C  1C 7B 00 24 */	mulli r3, r27, 0x24
/* 804401D0 0043D110  38 63 00 10 */	addi r3, r3, 0x10
/* 804401D4 0043D114  4B BE 3D D9 */	bl __nwa__FUl
/* 804401D8 0043D118  3C 80 80 44 */	lis r4, __ct__Q35P2JME6Window8DrawInfoFv@ha
/* 804401DC 0043D11C  3C A0 80 44 */	lis r5, __dt__Q35P2JME6Window8DrawInfoFv@ha
/* 804401E0 0043D120  38 84 F1 88 */	addi r4, r4, __ct__Q35P2JME6Window8DrawInfoFv@l
/* 804401E4 0043D124  7F 67 DB 78 */	mr r7, r27
/* 804401E8 0043D128  38 A5 F1 D8 */	addi r5, r5, __dt__Q35P2JME6Window8DrawInfoFv@l
/* 804401EC 0043D12C  38 C0 00 24 */	li r6, 0x24
/* 804401F0 0043D130  4B C8 18 01 */	bl __construct_new_array
/* 804401F4 0043D134  3B A0 00 00 */	li r29, 0
/* 804401F8 0043D138  7C 7C 1B 78 */	mr r28, r3
/* 804401FC 0043D13C  48 00 00 18 */	b .L_80440214
.L_80440200:
/* 80440200 0043D140  7F 84 E3 78 */	mr r4, r28
/* 80440204 0043D144  38 7E 01 28 */	addi r3, r30, 0x128
/* 80440208 0043D148  4B FD 12 01 */	bl add__5CNodeFP5CNode
/* 8044020C 0043D14C  3B 9C 00 24 */	addi r28, r28, 0x24
/* 80440210 0043D150  3B BD 00 01 */	addi r29, r29, 1
.L_80440214:
/* 80440214 0043D154  7C 1D D8 40 */	cmplw r29, r27
/* 80440218 0043D158  41 80 FF E8 */	blt .L_80440200
/* 8044021C 0043D15C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80440220 0043D160  38 9F 00 2C */	addi r4, r31, 0x2c
/* 80440224 0043D164  4B FE 31 41 */	bl heapStatusEnd__6SystemFPc
/* 80440228 0043D168  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8044022C 0043D16C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80440230 0043D170  7C 08 03 A6 */	mtlr r0
/* 80440234 0043D174  38 21 00 20 */	addi r1, r1, 0x20
/* 80440238 0043D178  4E 80 00 20 */	blr 
.endfn initRenderingProcessor__Q35P2JME6Window8TControlFUl

.fn update__Q35P2JME6Window8TControlFP10ControllerP10Controller, global
/* 8044023C 0043D17C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80440240 0043D180  7C 08 02 A6 */	mflr r0
/* 80440244 0043D184  90 01 00 24 */	stw r0, 0x24(r1)
/* 80440248 0043D188  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8044024C 0043D18C  7C 9F 23 78 */	mr r31, r4
/* 80440250 0043D190  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80440254 0043D194  7C 7E 1B 78 */	mr r30, r3
/* 80440258 0043D198  4B FF 88 51 */	bl setController__Q25P2JME8TControlFP10ControllerP10Controller
/* 8044025C 0043D19C  7F C3 F3 78 */	mr r3, r30
/* 80440260 0043D1A0  4B FF 8B ED */	bl update__Q25P2JME8TControlFv
/* 80440264 0043D1A4  80 9E 00 3C */	lwz r4, 0x3c(r30)
/* 80440268 0043D1A8  28 04 00 00 */	cmplwi r4, 0
/* 8044026C 0043D1AC  41 82 01 40 */	beq .L_804403AC
/* 80440270 0043D1B0  80 A4 00 68 */	lwz r5, 0x68(r4)
/* 80440274 0043D1B4  54 A0 07 7B */	rlwinm. r0, r5, 0, 0x1d, 0x1d
/* 80440278 0043D1B8  41 82 01 34 */	beq .L_804403AC
/* 8044027C 0043D1BC  54 A0 07 FF */	clrlwi. r0, r5, 0x1f
/* 80440280 0043D1C0  40 82 00 38 */	bne .L_804402B8
/* 80440284 0043D1C4  60 A0 00 01 */	ori r0, r5, 1
/* 80440288 0043D1C8  C0 02 25 C4 */	lfs f0, lbl_80520924@sda21(r2)
/* 8044028C 0043D1CC  90 04 00 68 */	stw r0, 0x68(r4)
/* 80440290 0043D1D0  80 9E 00 40 */	lwz r4, 0x40(r30)
/* 80440294 0043D1D4  C0 24 00 58 */	lfs f1, 0x58(r4)
/* 80440298 0043D1D8  D0 3E 00 54 */	stfs f1, 0x54(r30)
/* 8044029C 0043D1DC  80 9E 00 40 */	lwz r4, 0x40(r30)
/* 804402A0 0043D1E0  C0 5E 00 54 */	lfs f2, 0x54(r30)
/* 804402A4 0043D1E4  C0 24 00 3C */	lfs f1, 0x3c(r4)
/* 804402A8 0043D1E8  EC 22 08 28 */	fsubs f1, f2, f1
/* 804402AC 0043D1EC  D0 3E 00 58 */	stfs f1, 0x58(r30)
/* 804402B0 0043D1F0  D0 1E 00 48 */	stfs f0, 0x48(r30)
/* 804402B4 0043D1F4  48 00 00 F8 */	b .L_804403AC
.L_804402B8:
/* 804402B8 0043D1F8  C0 3E 00 48 */	lfs f1, 0x48(r30)
/* 804402BC 0043D1FC  C0 02 25 C8 */	lfs f0, lbl_80520928@sda21(r2)
/* 804402C0 0043D200  C0 42 25 F0 */	lfs f2, lbl_80520950@sda21(r2)
/* 804402C4 0043D204  EC 61 00 24 */	fdivs f3, f1, f0
/* 804402C8 0043D208  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 804402CC 0043D20C  40 81 00 20 */	ble .L_804402EC
/* 804402D0 0043D210  54 A0 00 3C */	rlwinm r0, r5, 0, 0, 0x1e
/* 804402D4 0043D214  90 04 00 68 */	stw r0, 0x68(r4)
/* 804402D8 0043D218  80 9E 00 3C */	lwz r4, 0x3c(r30)
/* 804402DC 0043D21C  80 04 00 68 */	lwz r0, 0x68(r4)
/* 804402E0 0043D220  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 804402E4 0043D224  90 04 00 68 */	stw r0, 0x68(r4)
/* 804402E8 0043D228  48 00 00 54 */	b .L_8044033C
.L_804402EC:
/* 804402EC 0043D22C  C0 22 26 08 */	lfs f1, lbl_80520968@sda21(r2)
/* 804402F0 0043D230  C0 02 25 C4 */	lfs f0, lbl_80520924@sda21(r2)
/* 804402F4 0043D234  EC 41 00 F2 */	fmuls f2, f1, f3
/* 804402F8 0043D238  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 804402FC 0043D23C  40 80 00 08 */	bge .L_80440304
/* 80440300 0043D240  FC 40 10 50 */	fneg f2, f2
.L_80440304:
/* 80440304 0043D244  C0 02 25 EC */	lfs f0, lbl_8052094C@sda21(r2)
/* 80440308 0043D248  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 8044030C 0043D24C  38 84 71 A0 */	addi r4, r4, sincosTable___5JMath@l
/* 80440310 0043D250  C0 22 25 F0 */	lfs f1, lbl_80520950@sda21(r2)
/* 80440314 0043D254  EC 02 00 32 */	fmuls f0, f2, f0
/* 80440318 0043D258  C0 42 25 C8 */	lfs f2, lbl_80520928@sda21(r2)
/* 8044031C 0043D25C  FC 00 00 1E */	fctiwz f0, f0
/* 80440320 0043D260  D8 01 00 08 */	stfd f0, 8(r1)
/* 80440324 0043D264  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80440328 0043D268  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8044032C 0043D26C  7C 84 02 14 */	add r4, r4, r0
/* 80440330 0043D270  C0 04 00 04 */	lfs f0, 4(r4)
/* 80440334 0043D274  EC 01 00 28 */	fsubs f0, f1, f0
/* 80440338 0043D278  EC 42 00 32 */	fmuls f2, f2, f0
.L_8044033C:
/* 8044033C 0043D27C  C0 3E 00 54 */	lfs f1, 0x54(r30)
/* 80440340 0043D280  28 1F 00 00 */	cmplwi r31, 0
/* 80440344 0043D284  C0 1E 00 58 */	lfs f0, 0x58(r30)
/* 80440348 0043D288  80 9E 00 40 */	lwz r4, 0x40(r30)
/* 8044034C 0043D28C  EC 00 08 28 */	fsubs f0, f0, f1
/* 80440350 0043D290  EC 02 08 3A */	fmadds f0, f2, f0, f1
/* 80440354 0043D294  D0 04 00 58 */	stfs f0, 0x58(r4)
/* 80440358 0043D298  41 82 00 10 */	beq .L_80440368
/* 8044035C 0043D29C  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 80440360 0043D2A0  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 80440364 0043D2A4  40 82 00 18 */	bne .L_8044037C
.L_80440368:
/* 80440368 0043D2A8  28 1F 00 00 */	cmplwi r31, 0
/* 8044036C 0043D2AC  41 82 00 2C */	beq .L_80440398
/* 80440370 0043D2B0  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 80440374 0043D2B4  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 80440378 0043D2B8  41 82 00 20 */	beq .L_80440398
.L_8044037C:
/* 8044037C 0043D2BC  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 80440380 0043D2C0  C0 42 25 F8 */	lfs f2, lbl_80520958@sda21(r2)
/* 80440384 0043D2C4  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 80440388 0043D2C8  C0 1E 00 48 */	lfs f0, 0x48(r30)
/* 8044038C 0043D2CC  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80440390 0043D2D0  D0 1E 00 48 */	stfs f0, 0x48(r30)
/* 80440394 0043D2D4  48 00 00 18 */	b .L_804403AC
.L_80440398:
/* 80440398 0043D2D8  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8044039C 0043D2DC  C0 3E 00 48 */	lfs f1, 0x48(r30)
/* 804403A0 0043D2E0  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 804403A4 0043D2E4  EC 01 00 2A */	fadds f0, f1, f0
/* 804403A8 0043D2E8  D0 1E 00 48 */	stfs f0, 0x48(r30)
.L_804403AC:
/* 804403AC 0043D2EC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 804403B0 0043D2F0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 804403B4 0043D2F4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 804403B8 0043D2F8  7C 08 03 A6 */	mtlr r0
/* 804403BC 0043D2FC  38 21 00 20 */	addi r1, r1, 0x20
/* 804403C0 0043D300  4E 80 00 20 */	blr 
.endfn update__Q35P2JME6Window8TControlFP10ControllerP10Controller

.fn reset__Q35P2JME6Window8TControlFv, global
/* 804403C4 0043D304  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804403C8 0043D308  7C 08 02 A6 */	mflr r0
/* 804403CC 0043D30C  90 01 00 14 */	stw r0, 0x14(r1)
/* 804403D0 0043D310  4B FF 8A 0D */	bl reset__Q25P2JME8TControlFv
/* 804403D4 0043D314  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804403D8 0043D318  7C 08 03 A6 */	mtlr r0
/* 804403DC 0043D31C  38 21 00 10 */	addi r1, r1, 0x10
/* 804403E0 0043D320  4E 80 00 20 */	blr 
.endfn reset__Q35P2JME6Window8TControlFv

.fn draw__Q35P2JME6Window8TControlFR8Graphics, global
/* 804403E4 0043D324  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 804403E8 0043D328  7C 08 02 A6 */	mflr r0
/* 804403EC 0043D32C  C0 42 26 0C */	lfs f2, lbl_8052096C@sda21(r2)
/* 804403F0 0043D330  90 01 00 54 */	stw r0, 0x54(r1)
/* 804403F4 0043D334  C0 22 26 10 */	lfs f1, lbl_80520970@sda21(r2)
/* 804403F8 0043D338  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 804403FC 0043D33C  7C 9F 23 78 */	mr r31, r4
/* 80440400 0043D340  C0 02 25 C4 */	lfs f0, lbl_80520924@sda21(r2)
/* 80440404 0043D344  38 81 00 08 */	addi r4, r1, 8
/* 80440408 0043D348  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8044040C 0043D34C  7C 7E 1B 78 */	mr r30, r3
/* 80440410 0043D350  38 61 00 14 */	addi r3, r1, 0x14
/* 80440414 0043D354  D0 41 00 08 */	stfs f2, 8(r1)
/* 80440418 0043D358  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8044041C 0043D35C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80440420 0043D360  4B FE 84 21 */	bl "makeT__7MatrixfFR10Vector3<f>"
/* 80440424 0043D364  38 7F 01 90 */	addi r3, r31, 0x190
/* 80440428 0043D368  81 9F 01 90 */	lwz r12, 0x190(r31)
/* 8044042C 0043D36C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80440430 0043D370  7D 89 03 A6 */	mtctr r12
/* 80440434 0043D374  4E 80 04 21 */	bctrl 
/* 80440438 0043D378  7F C3 F3 78 */	mr r3, r30
/* 8044043C 0043D37C  38 81 00 14 */	addi r4, r1, 0x14
/* 80440440 0043D380  38 BF 02 10 */	addi r5, r31, 0x210
/* 80440444 0043D384  4B FF 8A B9 */	bl draw__Q25P2JME8TControlFPA4_fPA4_f
/* 80440448 0043D388  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8044044C 0043D38C  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80440450 0043D390  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80440454 0043D394  7C 08 03 A6 */	mtlr r0
/* 80440458 0043D398  38 21 00 50 */	addi r1, r1, 0x50
/* 8044045C 0043D39C  4E 80 00 20 */	blr 
.endfn draw__Q35P2JME6Window8TControlFR8Graphics

.fn onInit__Q35P2JME6Window8TControlFv, global
/* 80440460 0043D3A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80440464 0043D3A4  7C 08 02 A6 */	mflr r0
/* 80440468 0043D3A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044046C 0043D3AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80440470 0043D3B0  7C 7F 1B 78 */	mr r31, r3
/* 80440474 0043D3B4  80 8D 9B D8 */	lwz r4, gP2JMEMgr@sda21(r13)
/* 80440478 0043D3B8  28 04 00 00 */	cmplwi r4, 0
/* 8044047C 0043D3BC  41 82 00 1C */	beq .L_80440498
/* 80440480 0043D3C0  80 84 00 18 */	lwz r4, 0x18(r4)
/* 80440484 0043D3C4  4B FF 86 49 */	bl setFont__Q25P2JME8TControlFP7JUTFont
/* 80440488 0043D3C8  80 8D 9B D8 */	lwz r4, gP2JMEMgr@sda21(r13)
/* 8044048C 0043D3CC  7F E3 FB 78 */	mr r3, r31
/* 80440490 0043D3D0  80 84 00 18 */	lwz r4, 0x18(r4)
/* 80440494 0043D3D4  4B FF 86 A5 */	bl setRubyFont__Q25P2JME8TControlFP7JUTFont
.L_80440498:
/* 80440498 0043D3D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044049C 0043D3DC  38 60 00 01 */	li r3, 1
/* 804404A0 0043D3E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804404A4 0043D3E4  7C 08 03 A6 */	mtlr r0
/* 804404A8 0043D3E8  38 21 00 10 */	addi r1, r1, 0x10
/* 804404AC 0043D3EC  4E 80 00 20 */	blr 
.endfn onInit__Q35P2JME6Window8TControlFv

.fn __dt__Q35P2JME6Window19TRenderingProcessorFv, weak
/* 804404B0 0043D3F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804404B4 0043D3F4  7C 08 02 A6 */	mflr r0
/* 804404B8 0043D3F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 804404BC 0043D3FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804404C0 0043D400  7C 9F 23 78 */	mr r31, r4
/* 804404C4 0043D404  93 C1 00 08 */	stw r30, 8(r1)
/* 804404C8 0043D408  7C 7E 1B 79 */	or. r30, r3, r3
/* 804404CC 0043D40C  41 82 00 70 */	beq .L_8044053C
/* 804404D0 0043D410  3C 60 80 4F */	lis r3, __vt__Q35P2JME6Window19TRenderingProcessor@ha
/* 804404D4 0043D414  34 1E 01 10 */	addic. r0, r30, 0x110
/* 804404D8 0043D418  38 03 CC A4 */	addi r0, r3, __vt__Q35P2JME6Window19TRenderingProcessor@l
/* 804404DC 0043D41C  90 1E 00 00 */	stw r0, 0(r30)
/* 804404E0 0043D420  41 82 00 1C */	beq .L_804404FC
/* 804404E4 0043D424  38 7E 01 28 */	addi r3, r30, 0x128
/* 804404E8 0043D428  38 80 FF FF */	li r4, -1
/* 804404EC 0043D42C  4B FD 10 9D */	bl __dt__5CNodeFv
/* 804404F0 0043D430  38 7E 01 10 */	addi r3, r30, 0x110
/* 804404F4 0043D434  38 80 FF FF */	li r4, -1
/* 804404F8 0043D438  4B FD 10 91 */	bl __dt__5CNodeFv
.L_804404FC:
/* 804404FC 0043D43C  28 1E 00 00 */	cmplwi r30, 0
/* 80440500 0043D440  41 82 00 2C */	beq .L_8044052C
/* 80440504 0043D444  3C 60 80 4F */	lis r3, __vt__Q25P2JME19TRenderingProcessor@ha
/* 80440508 0043D448  38 03 CA B0 */	addi r0, r3, __vt__Q25P2JME19TRenderingProcessor@l
/* 8044050C 0043D44C  90 1E 00 00 */	stw r0, 0(r30)
/* 80440510 0043D450  41 82 00 1C */	beq .L_8044052C
/* 80440514 0043D454  3C 80 80 4F */	lis r4, __vt__Q25P2JME23TRenderingProcessorBase@ha
/* 80440518 0043D458  7F C3 F3 78 */	mr r3, r30
/* 8044051C 0043D45C  38 04 CB 34 */	addi r0, r4, __vt__Q25P2JME23TRenderingProcessorBase@l
/* 80440520 0043D460  38 80 00 00 */	li r4, 0
/* 80440524 0043D464  90 1E 00 00 */	stw r0, 0(r30)
/* 80440528 0043D468  4B BC 7B D5 */	bl __dt__Q28JMessage19TRenderingProcessorFv
.L_8044052C:
/* 8044052C 0043D46C  7F E0 07 35 */	extsh. r0, r31
/* 80440530 0043D470  40 81 00 0C */	ble .L_8044053C
/* 80440534 0043D474  7F C3 F3 78 */	mr r3, r30
/* 80440538 0043D478  4B BE 3B 7D */	bl __dl__FPv
.L_8044053C:
/* 8044053C 0043D47C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80440540 0043D480  7F C3 F3 78 */	mr r3, r30
/* 80440544 0043D484  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80440548 0043D488  83 C1 00 08 */	lwz r30, 8(r1)
/* 8044054C 0043D48C  7C 08 03 A6 */	mtlr r0
/* 80440550 0043D490  38 21 00 10 */	addi r1, r1, 0x10
/* 80440554 0043D494  4E 80 00 20 */	blr 
.endfn __dt__Q35P2JME6Window19TRenderingProcessorFv

.fn __dt__Q35P2JME6Window18TSequenceProcessorFv, weak
/* 80440558 0043D498  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044055C 0043D49C  7C 08 02 A6 */	mflr r0
/* 80440560 0043D4A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80440564 0043D4A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80440568 0043D4A8  7C 9F 23 78 */	mr r31, r4
/* 8044056C 0043D4AC  93 C1 00 08 */	stw r30, 8(r1)
/* 80440570 0043D4B0  7C 7E 1B 79 */	or. r30, r3, r3
/* 80440574 0043D4B4  41 82 00 38 */	beq .L_804405AC
/* 80440578 0043D4B8  3C 80 80 4F */	lis r4, __vt__Q35P2JME6Window18TSequenceProcessor@ha
/* 8044057C 0043D4BC  38 04 CD 34 */	addi r0, r4, __vt__Q35P2JME6Window18TSequenceProcessor@l
/* 80440580 0043D4C0  90 1E 00 00 */	stw r0, 0(r30)
/* 80440584 0043D4C4  41 82 00 18 */	beq .L_8044059C
/* 80440588 0043D4C8  3C A0 80 4F */	lis r5, __vt__Q25P2JME18TSequenceProcessor@ha
/* 8044058C 0043D4CC  38 80 00 00 */	li r4, 0
/* 80440590 0043D4D0  38 05 C8 F8 */	addi r0, r5, __vt__Q25P2JME18TSequenceProcessor@l
/* 80440594 0043D4D4  90 1E 00 00 */	stw r0, 0(r30)
/* 80440598 0043D4D8  4B BC 72 91 */	bl __dt__Q28JMessage18TSequenceProcessorFv
.L_8044059C:
/* 8044059C 0043D4DC  7F E0 07 35 */	extsh. r0, r31
/* 804405A0 0043D4E0  40 81 00 0C */	ble .L_804405AC
/* 804405A4 0043D4E4  7F C3 F3 78 */	mr r3, r30
/* 804405A8 0043D4E8  4B BE 3B 0D */	bl __dl__FPv
.L_804405AC:
/* 804405AC 0043D4EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804405B0 0043D4F0  7F C3 F3 78 */	mr r3, r30
/* 804405B4 0043D4F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804405B8 0043D4F8  83 C1 00 08 */	lwz r30, 8(r1)
/* 804405BC 0043D4FC  7C 08 03 A6 */	mtlr r0
/* 804405C0 0043D500  38 21 00 10 */	addi r1, r1, 0x10
/* 804405C4 0043D504  4E 80 00 20 */	blr 
.endfn __dt__Q35P2JME6Window18TSequenceProcessorFv

.fn __sinit_windowMessage_cpp, local
/* 804405C8 0043D508  3C 80 80 51 */	lis r4, __float_nan@ha
/* 804405CC 0043D50C  38 00 FF FF */	li r0, -1
/* 804405D0 0043D510  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 804405D4 0043D514  3C 60 80 4F */	lis r3, govNAN___Q24Game5P2JST@ha
/* 804405D8 0043D518  90 0D 9C 08 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 804405DC 0043D51C  D4 03 CC 50 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 804405E0 0043D520  D0 0D 9C 0C */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 804405E4 0043D524  D0 03 00 04 */	stfs f0, 4(r3)
/* 804405E8 0043D528  D0 03 00 08 */	stfs f0, 8(r3)
/* 804405EC 0043D52C  4E 80 00 20 */	blr 
.endfn __sinit_windowMessage_cpp
