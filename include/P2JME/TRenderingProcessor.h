#ifndef _P2JME_TRENDERINGPROCESSOR_H
#define _P2JME_TRENDERINGPROCESSOR_H

#include "JSystem/JMessage/TProcessor.h"
#include "JSystem/JMessage/TReference.h"
#include "types.h"

struct JUTFont;

namespace P2JME {
struct TRenderingProcessor : public JMessage::TRenderingProcessor {
	TRenderingProcessor(JMessage::TReference const*);

	void init();
	void setFont(JUTFont*); // TODO: code is _4C = arg1
	void preProcID(unsigned int, unsigned int);

	u8 _00[0x4C];       // _00
	JUTFont* _4C;       // _4C
	JUTFont* m_jmeFont; // _50
	u8 _54[0xBC];       // _54
};
} // namespace P2JME

#endif
