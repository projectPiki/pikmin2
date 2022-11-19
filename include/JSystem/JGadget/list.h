#ifndef _JSYSTEM_JGADGET_LIST_H
#define _JSYSTEM_JGADGET_LIST_H

#include "JSystem/JGadget/allocator.h"
#include "types.h"
#include "std/iterator.h"

namespace JGadget {
template <typename Element, typename Allocator>
struct TList {
	struct iterator : std::iterator<std::input_iterator_tag, Element> {
		Element* m_element;
	};
	~TList(); // unused/inlined

	// unused/inlined:
	void assign(u32, const Element&);
	TList& operator=(const TList& other);
};

struct TList_pointer_void : public TList<void*, TAllocator<void*> /*space necessary here to prevent compiler error*/> {
	TList_pointer_void(); // unused/inlined?
	TList_pointer_void(const TAllocator<void*>& allocator);
	TList_pointer_void(u32, const void*&, const TAllocator<void*>&); // unused/inlined
	~TList_pointer_void();

	void insert(iterator, void* const&);
	void erase(iterator);

	// unused/inlined:
	void insert(iterator, u32, void* const&);
	void erase(iterator, iterator);
	void remove(void* const&);
	void assign(u32, void* const&);
	void resize(u32, void* const&);
	void unique();
	TList_pointer_void& operator=(const TList_pointer_void& other);
};

template <typename Iterator, typename Value>
void findUpperBound_binary_current(Iterator, Iterator, Iterator, const Value&);

template <typename Iterator, typename Value, typename Predicate>
void findUpperBound_binary_current(Iterator, Iterator, Iterator, const Value&, Predicate);
} // namespace JGadget

#endif
