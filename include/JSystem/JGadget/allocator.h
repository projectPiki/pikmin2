#ifndef _JSYSTEM_JGADGET_ALLOCATOR_H
#define _JSYSTEM_JGADGET_ALLOCATOR_H

#include "types.h"

namespace JGadget {
template <typename T>
struct TAllocator {
	static TAllocator get() { }

	// inline TAllocator() { }

	u8 _00; // _00
};

typedef TAllocator<void*> TVoidAllocator;
}; // namespace JGadget

#endif
