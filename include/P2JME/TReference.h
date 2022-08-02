#ifndef _P2JME_TREFERENCE_H
#define _P2JME_TREFERENCE_H

#include "JSystem/JMessage/TReference.h"
// #include "JSystem/JMessage.h"

namespace P2JME {
struct TReference : public JMessage::TReference {
	virtual ~TReference() { }                   // _08
	virtual char* do_word(unsigned long) const; // _0C
};
} // namespace P2JME

#endif
