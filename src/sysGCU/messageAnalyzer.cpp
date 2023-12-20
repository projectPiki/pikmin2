
#include "P2JME/Analyzer.h"
#include "P2JME/P2JME.h"

namespace P2JME {

/**
 * @note Address: 0x804560C8
 * @note Size: 0x3C
 */
Analyzer::Analyzer(JMessage::TReference const* ref)
    : TRenderingProcessorBase(ref)
{
}

/**
 * @note Address: 0x80456104
 * @note Size: 0x4
 */
void Analyzer::do_character(int) { }

/**
 * @note Address: 0x80456108
 * @note Size: 0x7C
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

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
// void Analyzer::exec(u16, u16)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x58
 */
// void Analyzer::exec(u32)
// {
// 	// UNUSED FUNCTION
// }

} // namespace P2JME
