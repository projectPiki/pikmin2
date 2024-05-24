#ifndef _P2JME_ANALYZER_H
#define _P2JME_ANALYZER_H

#include "types.h"
#include "P2JME/messageRendering.h"

namespace P2JME {

struct Analyzer : public TRenderingProcessorBase {
	// Analyzer();
	Analyzer(const JMessage::TReference*);

	virtual ~Analyzer() { }                                          // _08 (weak)
	virtual void do_character(int);                                  // _10
	virtual bool tagColor(const void*, u32) { return true; }         // _48 (weak)
	virtual bool tagSize(const void*, u32) { return true; }          // _4C (weak)
	virtual bool tagRuby(const void*, u32) { return true; }          // _50 (weak)
	virtual bool tagFont(const void*, u32) { return true; }          // _54 (weak)
	virtual bool tagImage(u16, const void*, u32) { return true; }    // _58 (weak)
	virtual bool tagColorEX(u16, const void*, u32) { return true; }  // _5C (weak)
	virtual bool tagControl(u16, const void*, u32) { return true; }  // _60 (weak)
	virtual bool tagPosition(u16, const void*, u32) { return true; } // _64 (weak)

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
