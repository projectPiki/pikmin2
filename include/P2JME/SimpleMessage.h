#ifndef _P2JME_SIMPLEMESSAGE_H
#define _P2JME_SIMPLEMESSAGE_H

#include "P2JME/messageRendering.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "P2JME/P2JME.h"
#include "Graphics.h"

struct JUTFont;

namespace P2JME {

struct SimpleMessage {
	SimpleMessage();

	void init();
	void drawMessageID(Graphics&, u32, u32);

	TRenderingProcessor* mProcessor; // _00
};
} // namespace P2JME

#endif
