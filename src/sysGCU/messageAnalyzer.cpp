
#include "types.h"
#include "P2JME/Analyzer.h"
#include "P2JME/P2JME.h"

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
Analyzer::Analyzer(JMessage::TReference const* ref)
    : TRenderingProcessorBase(ref)
{
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
void Analyzer::exec(char* msg)
{
	u32 msgID1;
	u32 msgID2;
	u32 beginID1;
	u32 beginID2;

	convertCharToMessageID(msg, &msgID1, &msgID2);
	setIDs(msgID1, msgID2, &beginID1, &beginID2);
	reset_(0);
	setBegin_messageID(beginID1, beginID2, 0);
	process(0);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
// void Analyzer::exec(unsigned short, unsigned short)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
// void Analyzer::exec(unsigned long)
// {
// 	// UNUSED FUNCTION
// }
} // namespace P2JME
