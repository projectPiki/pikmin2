#ifndef _P2JME_TRENDERINGPROCESSOR_H
#define _P2JME_TRENDERINGPROCESSOR_H

#include "JSystem/JMessage.h"
#include "JSystem/JUTFont.h"
#include "types.h"

namespace P2JME {
struct TRenderingProcessor : public JMessage::TRenderingProcessor {
	TRenderingProcessor(JMessage::TReference const*);

	void init();
	void setFont(JUTFont*); // TODO: code is _4C = arg1
	void preProcID(unsigned int, unsigned int);

	u8 _00[0x4C]; // _00
	JUTFont* _4C; // _4C
	JUTFont* _50; // _50
	u8 _54[0xBC]; // _54
};
} // namespace P2JME

#endif