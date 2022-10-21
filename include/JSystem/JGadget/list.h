#ifndef _JSYSTEM_JGADGET_LIST_H
#define _JSYSTEM_JGADGET_LIST_H

#include "JSystem/JGadget/allocator.h"
#include "types.h"
#include "std/iterator.h"

namespace JGadget {
template <typename Element, typename Allocator> struct TList {
	struct iterator : std::iterator<std::input_iterator_tag, Element> {
		Element* m_element;
	};
	~TList(); // unused/inlined

	// unused/inlined:
	void assign(u32, const Element&);
	TList& operator=(const TList& other);
};

struct TList_pointer_void : public TList<void*, TAllocator<void*>> {
	TList_pointer_void();
	TList_pointer_void(u32, const void*&, const TAllocator<void*>&); // unused/inlined
	~TList_pointer_void();

	void insert(iterator, const void*&);
	void erase(iterator);

	// unused/inlined:
	void insert(iterator, u32, const void*&);
	void erase(iterator, iterator);
	void remove(const void*&);
	void assign(u32, const void*&);
	void resize(u32, const void*&);
	void unique();
	TList_pointer_void& operator=(const TList_pointer_void& other);
};
} // namespace JGadget

#endif
