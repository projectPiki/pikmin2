#ifndef _JSYSTEM_JMESSAGE_TREFERENCE_H
#define _JSYSTEM_JMESSAGE_TREFERENCE_H

namespace JMessage {
struct TReference {
	virtual ~TReference();                      // _08
	virtual char* do_word(unsigned long) const; // _0C
};
} // namespace JMessage

#endif
