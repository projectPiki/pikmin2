#ifndef _P2JME_TRENDERINGPROCESSOR_H
#define _P2JME_TRENDERINGPROCESSOR_H

#include "JSystem/JMessage/TProcessor.h"
#include "JSystem/JMessage/TReference.h"
#include "types.h"

struct JUTFont;

namespace P2JME {

struct TRenderingProcessorBase : JMessage::TRenderingProcessor {
	virtual ~TRenderingProcessorBase();                                   // _08 (weak)
	virtual void do_character(int);                                       // _10 (weak)
	virtual void do_tag(unsigned long, const void*, unsigned long);       // _14
	virtual void tagColor(const void*, unsigned long);                    // _48 (weak)
	virtual void tagSize(const void*, unsigned long);                     // _4C (weak)
	virtual void tagRuby(const void*, unsigned long);                     // _50 (weak)
	virtual void tagFont(const void*, unsigned long);                     // _54 (weak)
	virtual void tagImage(unsigned short, const void*, unsigned long);    // _58 (weak)
	virtual void tagColorEX(unsigned short, const void*, unsigned long);  // _5C (weak)
	virtual void tagControl(unsigned short, const void*, unsigned long);  // _60 (weak)
	virtual void tagPosition(unsigned short, const void*, unsigned long); // _64 (weak)

	TRenderingProcessorBase(const JMessage::TReference*);
};

struct TRenderingProcessor : JMessage::TRenderingProcessor {
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
