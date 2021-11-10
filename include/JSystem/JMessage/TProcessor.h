#ifndef _JSYSTEM_JMESSAGE_TPROCESSOR_H
#define _JSYSTEM_JMESSAGE_TPROCESSOR_H

namespace JMessage {
struct TProcessor {
	void reset_(char const*);
	void setBegin_messageID(unsigned long, unsigned long, bool*);
};

struct TSequenceProcessor {
};

struct TRenderingProcessor : public TProcessor {
	void process(char const*);
};
} // namespace JMessage

#endif
