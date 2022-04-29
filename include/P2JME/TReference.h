#ifndef _P2JME_TREFERENCE_H
#define _P2JME_TREFERENCE_H

#include "JSystem/JMessage.h"

namespace P2JME {
struct TReference : public JMessage::TReference {
	virtual ~TReference() {};
	virtual char* do_word(unsigned long) const;
};
} // namespace P2JME

#endif
