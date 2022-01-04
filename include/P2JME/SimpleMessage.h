#ifndef _P2JME_SIMPLEMESSAGE_H
#define _P2JME_SIMPLEMESSAGE_H

#include "P2JME/TRenderingProcessor.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "Graphics.h"

struct JUTFont;

namespace P2JME {
struct Mgr : public JKRDisposer {
	virtual ~Mgr();

	// _00 VTBL
	JUTFont* m_font;                // _18
	u32 _1C;                        // _1C
	u32** _20;                      // _20
	u32* _24;                       // _24
	u8 _28;                         // _28
	u32 _2C;                        // _2C
	u32 _30;                        // _30
	JMessage::TReference* m_msgRef; // _34
};

struct SimpleMessage {
	SimpleMessage();

	void init();
	void drawMessageID(Graphics&, unsigned long, unsigned long);

	TRenderingProcessor* m_processor; // _00
};
} // namespace P2JME
extern P2JME::Mgr* gP2JMEMgr;

#endif
