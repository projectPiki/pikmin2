#ifndef _JMESSAGE_TREFERENCE_H
#define _JMESSAGE_TREFERENCE_H

namespace JMessage {
struct TReference {
	virtual ~TReference();                     // _00
	virtual void do_word(unsigned long) const; // _04

	// _00 VTBL
};
} // namespace JMessage

#endif
