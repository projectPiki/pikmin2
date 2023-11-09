
#include "P2JME/Analyzer.h"
#include "P2JME/P2JME.h"

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
// void Analyzer::exec(u16, u16)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
// void Analyzer::exec(u32)
// {
// 	// UNUSED FUNCTION
// }

} // namespace P2JME
