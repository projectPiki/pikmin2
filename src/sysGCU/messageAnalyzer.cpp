#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
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
*/

namespace P2JME {

/*
 * --INFO--
 * Address:	804560C8
 * Size:	00003C
 */
Analyzer::Analyzer(JMessage::TReference const*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q25P2JME23TRenderingProcessorBaseFPCQ28JMessage10TReference
	lis      r4, __vt__Q25P2JME8Analyzer@ha
	mr       r3, r31
	addi     r0, r4, __vt__Q25P2JME8Analyzer@l
	stw      r0, 0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80456104
 * Size:	000004
 */
void Analyzer::do_character(int) { }

/*
 * --INFO--
 * Address:	80456108
 * Size:	00007C
 */
void Analyzer::exec(char*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	addi     r5, r1, 8
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r3, r4
	addi     r4, r1, 0xc
	bl       convertCharToMessageID__5P2JMEFPcPUlPUl
	lwz      r30, 8(r1)
	mr       r3, r29
	lwz      r31, 0xc(r1)
	li       r4, 0
	bl       reset___Q28JMessage10TProcessorFPCc
	mr       r3, r29
	mr       r4, r31
	mr       r5, r30
	li       r6, 0
	bl       setBegin_messageID__Q28JMessage10TProcessorFUlUlPb
	mr       r3, r29
	li       r4, 0
	bl       process__Q28JMessage19TRenderingProcessorFPCc
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void Analyzer::exec(unsigned short, unsigned short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void Analyzer::exec(unsigned long)
{
	// UNUSED FUNCTION
}
} // namespace P2JME
