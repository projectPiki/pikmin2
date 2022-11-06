#ifndef _P2JME_ANALYZER_H
#define _P2JME_ANALYZER_H

#include "types.h"
#include "P2JME/TRenderingProcessor.h"

namespace P2JME {

struct Analyzer : public TRenderingProcessorBase {
	Analyzer(const JMessage::TReference*);

	virtual ~Analyzer() { }                          // _08 (weak)
	virtual void do_character(int);                  // _10
	virtual void tagColor(const void*, u32);         // _48 (weak)
	virtual void tagSize(const void*, u32);          // _4C (weak)
	virtual void tagRuby(const void*, u32);          // _50 (weak)
	virtual void tagFont(const void*, u32);          // _54 (weak)
	virtual void tagImage(u16, const void*, u32);    // _58 (weak)
	virtual void tagColorEX(u16, const void*, u32);  // _5C (weak)
	virtual void tagControl(u16, const void*, u32);  // _60 (weak)
	virtual void tagPosition(u16, const void*, u32); // _64 (weak)

	void exec(char*);

	inline void setIDs(u32 in1, u32 in2, u32* out1, u32* out2)
	{
		*out1 = in1;
		*out2 = in2;
	}

	// _00     = VTBL
	// _00-_38 = TRenderingProcessorBase
};

} // namespace P2JME

#endif
