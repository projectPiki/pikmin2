#ifndef _JSYSTEM_JGADGET_ALLOCATOR_H
#define _JSYSTEM_JGADGET_ALLOCATOR_H

#include "types.h"

namespace JGadget {
template <typename T>
struct TAllocator {
	static TAllocator get() { }

	T* allocate(size_t count, void*) { return (T*)AllocateRaw(count * sizeof(T)); }

	void* AllocateRaw(size_t rawSize) { return operator new(rawSize); }

	void deallocate(T* p, u32) { DeallocateRaw(p); }

	void DeallocateRaw(void* p) { delete (p); }

	void construct(T* pObject, T const& value)
	{
		if (pObject) {
			*pObject = value;
		}
	}

	void destroy(T* p) { p->~T(); }

	// inline TAllocator() { }

	u8 _00; // _00
};

typedef TAllocator<void*> TVoidAllocator;
}; // namespace JGadget

#endif
