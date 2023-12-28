#ifndef _JSTUDIO_TCREATEOBJECT_H
#define _JSTUDIO_TCREATEOBJECT_H

#include "JSystem/JStudio/stb-data-parse.h"
#include "JSystem/JGadget/linklist.h"

namespace JStudio {
struct TObject;

struct TCreateObject {
	// ~TCreateObject();

	virtual ~TCreateObject()                                                              = 0; // _08
	virtual bool create(TObject** newObject, const stb::data::TParse_TBlock_object& data) = 0; // _0C

	// _00 = VTBL
	JGadget::TLinkListNode mLinkListNode; // _04
};
} // namespace JStudio

#endif
