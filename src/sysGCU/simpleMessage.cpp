#include "P2JME/SimpleMessage.h"
#include "JSystem/JUtility/JUTFont.h"

namespace P2JME {

/**
 * @note Address: 0x8043DBEC
 * @note Size: 0x4
 */
SimpleMessage::SimpleMessage() { }

/**
 * @note Address: 0x8043DBF0
 * @note Size: 0x6C
 */
void SimpleMessage::init()
{
	mProcessor = new P2JME::TRenderingProcessor(gP2JMEMgr->mMsgRef);

	mProcessor->setFont(gP2JMEMgr->mFont);
	mProcessor->mRubyFont = gP2JMEMgr->mFont;
}

/**
 * @note Address: 0x8043DC5C
 * @note Size: 0x80
 */
void SimpleMessage::drawMessageID(Graphics& gfx, u32 lowerHalf, u32 upperHalf)
{
	mProcessor->preProcID(lowerHalf, upperHalf);

	JMessage::TRenderingProcessor* jmProc = static_cast<JMessage::TRenderingProcessor*>(mProcessor);
	jmProc->reset_(nullptr);
	jmProc->setBegin_messageID(lowerHalf, upperHalf, nullptr);
	jmProc->process(nullptr);
}
} // namespace P2JME
