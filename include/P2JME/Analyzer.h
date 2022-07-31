#ifndef _P2JME_ANALYZER_H
#define _P2JME_ANALYZER_H

#include "types.h"
#include "P2JME/TRenderingProcessor.h"

namespace P2JME {

struct Analyzer : public TRenderingProcessorBase {
	virtual ~Analyzer();                                                  // _08 (weak)
	virtual void do_character(int);                                       // _10
	virtual void tagColor(const void*, unsigned long);                    // _48 (weak)
	virtual void tagSize(const void*, unsigned long);                     // _4C (weak)
	virtual void tagRuby(const void*, unsigned long);                     // _50 (weak)
	virtual void tagFont(const void*, unsigned long);                     // _54 (weak)
	virtual void tagImage(unsigned short, const void*, unsigned long);    // _58 (weak)
	virtual void tagColorEX(unsigned short, const void*, unsigned long);  // _5C (weak)
	virtual void tagControl(unsigned short, const void*, unsigned long);  // _60 (weak)
	virtual void tagPosition(unsigned short, const void*, unsigned long); // _64 (weak)

	Analyzer(const JMessage::TReference*);
	void exec(char*);

	inline void setIDs(u32 in1, u32 in2, u32* out1, u32* out2)
	{
		*out1 = in1;
		*out2 = in2;
	}
};

} // namespace P2JME

#endif
