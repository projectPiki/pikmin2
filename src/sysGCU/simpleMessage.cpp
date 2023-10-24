#include "P2JME/SimpleMessage.h"
#include "JSystem/JUtility/JUTFont.h"

namespace P2JME {

/*
 * --INFO--
 * Address:	8043DBEC
 * Size:	000004
 */
SimpleMessage::SimpleMessage() { }

/*
 * --INFO--
 * Address:	8043DBF0
 * Size:	00006C
 */
void SimpleMessage::init()
{
	mProcessor = new P2JME::TRenderingProcessor(gP2JMEMgr->mMsgRef);

	mProcessor->setFont(gP2JMEMgr->mFont);
	mProcessor->mRubyFont = gP2JMEMgr->mFont;
}

/*
 * --INFO--
 * Address:	8043DC5C
 * Size:	000080
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
