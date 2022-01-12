#include "P2JME/SimpleMessage.h"
#include "JSystem/JUT/JUTFont.h"

namespace P2JME {

/*
 * --INFO--
 * Address:	8043DBEC
 * Size:	000004
 */
SimpleMessage::SimpleMessage(void) { }

/*
 * --INFO--
 * Address:	8043DBF0
 * Size:	00006C
 */
void SimpleMessage::init()
{
	m_processor = new P2JME::TRenderingProcessor(gP2JMEMgr->m_msgRef);

	m_processor->setFont(gP2JMEMgr->m_font);
	m_processor->m_jmeFont = gP2JMEMgr->m_font;
}

/*
 * --INFO--
 * Address:	8043DC5C
 * Size:	000080
 */
void SimpleMessage::drawMessageID(Graphics& gfx, unsigned long lowerHalf, unsigned long upperHalf)
{
	m_processor->preProcID(lowerHalf, upperHalf);

	JMessage::TRenderingProcessor* jmProc = static_cast<JMessage::TRenderingProcessor*>(m_processor);
	jmProc->reset_(nullptr);
	jmProc->setBegin_messageID(lowerHalf, upperHalf, nullptr);
	jmProc->process(nullptr);
}
} // namespace P2JME
