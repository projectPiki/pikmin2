#ifndef _MAPCODE_H
#define _MAPCODE_H

#include "types.h"
#include "Container.h"

namespace MapCode {
	typedef u8 Code;

	struct Mgr {
		struct CodeArray : ArrayContainer<MapCode::Code> {
		};

		Mgr();
	};
} // namespace MapCode

#endif
