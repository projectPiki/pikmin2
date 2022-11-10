#ifndef _JSTUDIO_TCREATEOBJECT_H
#define _JSTUDIO_TCREATEOBJECT_H

#include "JStudio/stb-data.h"

namespace JStudio {
struct TObject;

struct TCreateObject {
	// ~TCreateObject();

	virtual ~TCreateObject()                                               = 0; // _08
	virtual void create(TObject**, const stb::data::TParse_TBlock_object&) = 0; // _0C

	// _00 = VTBL
};
} // namespace JStudio

#endif
