#ifndef _JSYSTEM_JGADGET_VECTOR_H
#define _JSYSTEM_JGADGET_VECTOR_H

#include "JSystem/JGadget/allocator.h"
#include "types.h"

namespace JGadget {
namespace vector {
void extend_default(u32, u32, u32);
} // namespace vector

template <typename Element, typename Allocator>
struct TVector {
	struct Destructed_deallocate_ {
		~Destructed_deallocate_(); // unused/inlined
	};

	TVector(u32, const Element&, const Allocator&);
	~TVector();

	void insert(Element*, u32, const Element&);
	void Insert_raw(Element*, u32);
	void insert(Element*, const Element&);
	void assign(u32, const Element&);
	void resize(u32, const Element&);
	void Resize_raw(u32);
	void operator=(const TVector<Element, Allocator>& rhs);
};

template <typename Element>
struct TVector_pointer {
	void begin();
	void end();
};

struct TVector_pointer_void : TVector<void*, TAllocator<void*>> {
	TVector_pointer_void(const JGadget::TAllocator<void*>& allocator);
	TVector_pointer_void(u32, void* const&, const JGadget::TAllocator<void*>& allocator); // unused/inlined

	~TVector_pointer_void();

	void insert(void**, void* const&);
	void erase(void**, void**);

	// unused/inlined:
	void insert(void**, u32, void* const&);
	void erase(void**);
	void assign(u32, void* const&);
	void resize(u32, void* const&);
	void reserve(u32);
	void operator=(const TVector_pointer_void& rhs);
	void Insert_raw(void**, u32);
	void Resize_raw(u32);
};
} // namespace JGadget

#endif
