#ifndef _JSYSTEM_JMESSAGE_TREFERENCE_H
#define _JSYSTEM_JMESSAGE_TREFERENCE_H

namespace JMessage {
struct TReference {
	virtual ~TReference();
	virtual void do_word(unsigned long) const;
};
} // namespace JMessage

#endif
