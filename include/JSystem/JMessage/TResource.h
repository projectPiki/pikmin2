#ifndef _JSYSTEM_JMESSAGE_TRESOURCE_H
#define _JSYSTEM_JMESSAGE_TRESOURCE_H

#include "JSystem/JGadget/linklist.h"
#include "types.h"

namespace JMessage {
struct TResource {
	virtual ~TReference();                      // _08
	virtual char* do_word(unsigned long) const; // _0C

	void* _04;		// _04 - TResourceContainer* maybe
};
} // namespace JMessage

#endif
