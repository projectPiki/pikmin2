#ifndef _JSYSTEM_JMESSAGE_TREFERENCE_H
#define _JSYSTEM_JMESSAGE_TREFERENCE_H

#include "types.h"

namespace JMessage {
struct TResourceContainer;

struct TReference {
	virtual ~TReference();                      // _08
	virtual char* do_word(unsigned long) const; // _0C

	TResourceContainer* _04; // _04
};
} // namespace JMessage

#endif
