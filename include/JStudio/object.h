#ifndef JSTUDIO_OBJECT_H
#define JSTUDIO_OBJECT_H

#include "types.h"

namespace JStudio {
namespace object {

	struct TIDData {
		u32* idString_0x0;
		u32 lengthInBytes_0x4;

		bool isEqual(TIDData const&, TIDData const&);
	};

	struct TPRObject_ID_equal {
		int* value;
	};

} // namespace object
} // namespace JStudio

#endif
