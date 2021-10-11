#ifndef _P2JME_SIMPLEMESSAGE_H
#define _P2JME_SIMPLEMESSAGE_H

#include "Graphics.h"
#include "JSystem/JUTFont.h"
#include "P2JME/TRenderingProcessor.h"

// TODO: split off
struct Mgr {
	u8 _00[24];                         // _0
	JUTFont* m_font;                    // _18
	u8 _1C[24];                         // _1C
	JMessage::TReference* m_messageRef; // _34
};
extern Mgr* gP2JMEMgr;

namespace P2JME {

struct SimpleMessage {
	SimpleMessage();

	void init();
	void drawMessageID(Graphics&, unsigned long, unsigned long);

	TRenderingProcessor* m_processor; // _00
};

} // namespace P2JME

#endif