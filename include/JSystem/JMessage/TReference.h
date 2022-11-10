#ifndef _JSYSTEM_JMESSAGE_TREFERENCE_H
#define _JSYSTEM_JMESSAGE_TREFERENCE_H

#include "types.h"

namespace JMessage {
struct TResourceContainer;

struct TReference {
	virtual ~TReference();            // _08
	virtual char* do_word(u32) const; // _0C

	// _00 = VTBL
	TResourceContainer* _04; // _04
};
} // namespace JMessage

#endif
