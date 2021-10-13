.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q25P2JME8Analyzer
__vt__Q25P2JME8Analyzer:
  .4byte 0
  .4byte 0
  .4byte __dt__Q25P2JME8AnalyzerFv
  .4byte do_reset__Q28JMessage10TProcessorFv
  .4byte do_character__Q25P2JME8AnalyzerFi
  .4byte do_tag__Q25P2JME23TRenderingProcessorBaseFUlPCvUl
  .4byte do_systemTagCode__Q28JMessage10TProcessorFUsPCvUl
  .4byte do_select_begin__Q28JMessage10TProcessorFUl
  .4byte do_select_end__Q28JMessage10TProcessorFv
  .4byte do_select_separate__Q28JMessage10TProcessorFv
  .4byte do_reset___Q28JMessage19TRenderingProcessorFPCc
  .4byte do_setBegin_isReady___Q28JMessage10TProcessorCFv
  .4byte do_begin___Q28JMessage19TRenderingProcessorFPCvPCc
  .4byte do_end___Q28JMessage19TRenderingProcessorFv
  .4byte do_tag___Q28JMessage19TRenderingProcessorFUlPCvUl
  .4byte do_systemTagCode___Q28JMessage19TRenderingProcessorFUsPCvUl
  .4byte do_begin__Q28JMessage19TRenderingProcessorFPCvPCc
  .4byte do_end__Q28JMessage19TRenderingProcessorFv
  .4byte tagColor__Q25P2JME8AnalyzerFPCvUl
  .4byte tagSize__Q25P2JME8AnalyzerFPCvUl
  .4byte tagRuby__Q25P2JME8AnalyzerFPCvUl
  .4byte tagFont__Q25P2JME8AnalyzerFPCvUl
  .4byte tagImage__Q25P2JME8AnalyzerFUsPCvUl
  .4byte tagColorEX__Q25P2JME8AnalyzerFUsPCvUl
  .4byte tagControl__Q25P2JME8AnalyzerFUsPCvUl
  .4byte tagPosition__Q25P2JME8AnalyzerFUsPCvUl

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q25P2JME8AnalyzerFPCQ28JMessage10TReference
__ct__Q25P2JME8AnalyzerFPCQ28JMessage10TReference:
/* 804560C8 00453008  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804560CC 0045300C  7C 08 02 A6 */	mflr r0
/* 804560D0 00453010  90 01 00 14 */	stw r0, 0x14(r1)
/* 804560D4 00453014  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804560D8 00453018  7C 7F 1B 78 */	mr r31, r3
/* 804560DC 0045301C  4B FE 31 15 */	bl __ct__Q25P2JME23TRenderingProcessorBaseFPCQ28JMessage10TReference
/* 804560E0 00453020  3C 80 80 4F */	lis r4, __vt__Q25P2JME8Analyzer@ha
/* 804560E4 00453024  7F E3 FB 78 */	mr r3, r31
/* 804560E8 00453028  38 04 DC 60 */	addi r0, r4, __vt__Q25P2JME8Analyzer@l
/* 804560EC 0045302C  90 1F 00 00 */	stw r0, 0(r31)
/* 804560F0 00453030  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804560F4 00453034  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804560F8 00453038  7C 08 03 A6 */	mtlr r0
/* 804560FC 0045303C  38 21 00 10 */	addi r1, r1, 0x10
/* 80456100 00453040  4E 80 00 20 */	blr 

.global do_character__Q25P2JME8AnalyzerFi
do_character__Q25P2JME8AnalyzerFi:
/* 80456104 00453044  4E 80 00 20 */	blr 

.global exec__Q25P2JME8AnalyzerFPc
exec__Q25P2JME8AnalyzerFPc:
/* 80456108 00453048  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8045610C 0045304C  7C 08 02 A6 */	mflr r0
/* 80456110 00453050  90 01 00 24 */	stw r0, 0x24(r1)
/* 80456114 00453054  38 A1 00 08 */	addi r5, r1, 8
/* 80456118 00453058  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8045611C 0045305C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80456120 00453060  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80456124 00453064  7C 7D 1B 78 */	mr r29, r3
/* 80456128 00453068  7C 83 23 78 */	mr r3, r4
/* 8045612C 0045306C  38 81 00 0C */	addi r4, r1, 0xc
/* 80456130 00453070  4B FE 72 45 */	bl convertCharToMessageID__5P2JMEFPcPUlPUl
/* 80456134 00453074  83 C1 00 08 */	lwz r30, 8(r1)
/* 80456138 00453078  7F A3 EB 78 */	mr r3, r29
/* 8045613C 0045307C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80456140 00453080  38 80 00 00 */	li r4, 0
/* 80456144 00453084  4B BB 10 15 */	bl reset___Q28JMessage10TProcessorFPCc
/* 80456148 00453088  7F A3 EB 78 */	mr r3, r29
/* 8045614C 0045308C  7F E4 FB 78 */	mr r4, r31
/* 80456150 00453090  7F C5 F3 78 */	mr r5, r30
/* 80456154 00453094  38 C0 00 00 */	li r6, 0
/* 80456158 00453098  4B BB 0D 09 */	bl setBegin_messageID__Q28JMessage10TProcessorFUlUlPb
/* 8045615C 0045309C  7F A3 EB 78 */	mr r3, r29
/* 80456160 004530A0  38 80 00 00 */	li r4, 0
/* 80456164 004530A4  4B BB 1F F5 */	bl process__Q28JMessage19TRenderingProcessorFPCc
/* 80456168 004530A8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8045616C 004530AC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80456170 004530B0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80456174 004530B4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80456178 004530B8  7C 08 03 A6 */	mtlr r0
/* 8045617C 004530BC  38 21 00 20 */	addi r1, r1, 0x20
/* 80456180 004530C0  4E 80 00 20 */	blr 
