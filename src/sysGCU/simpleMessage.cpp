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
void SimpleMessage::init(void)
{
	this->m_processor = new P2JME::TRenderingProcessor(gP2JMEMgr->m_messageRef);

	this->m_processor->setFont(gP2JMEMgr->m_font);
	this->m_processor->m_jmeFont = gP2JMEMgr->m_font;
}

/*
 * --INFO--
 * Address:	8043DC5C
 * Size:	000080
 */
void SimpleMessage::drawMessageID(Graphics& gfx, unsigned long r5,
                                  unsigned long r6)
{
	this->m_processor->preProcID(r5, r6);

	JMessage::TRenderingProcessor* jmProc
	    = static_cast<JMessage::TRenderingProcessor*>(this->m_processor);
	jmProc->reset_(nullptr);
	jmProc->setBegin_messageID(r5, r6, nullptr);
	jmProc->process(nullptr);
}
} // namespace P2JME
