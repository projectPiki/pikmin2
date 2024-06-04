#ifndef _JSYSTEM_JGADGET_LIST_H
#define _JSYSTEM_JGADGET_LIST_H

#include "types.h"
#include "stl/iterator.h"
#include "JSystem/JGadget/allocator.h"

namespace JGadget {
template <typename Element, typename Allocator>
struct TList {
	struct TNode_ {
		TNode_* getNext() const { return mNext; }
		TNode_* getPrev() const { return mPrev; }
		void clear()
		{
			mNext = nullptr;
			mPrev = nullptr;
		}

		TNode_* mNext;    // _00
		TNode_* mPrev;    // _04
		Element mElement; // _08
	};

	struct iterator {
		iterator() { mNode = nullptr; }
		iterator(TNode_* node) { mNode = node; }
		iterator(const iterator& other) { mNode = other.mNode; }

		inline void operator=(const iterator& other) { mNode = other.mNode; }
		inline Element operator*() const { return mNode->mElement; }
		inline void operator++() { mNode = mNode->mNext; }
		inline TNode_ operator--(int)
		{
			TNode_ oldNode(this);
			(*this)--;
			return oldNode;
		}
		inline void operator--() { mNode = mNode->mPrev; }

		friend bool operator==(iterator a, iterator b) { return a.mNode == b.mNode; }
		friend bool operator!=(iterator a, iterator b) { return !(a == b); }

		TNode_* mNode; // _00
	};

	struct const_iterator {
		const_iterator() { mNode = nullptr; }
		const_iterator(TNode_* node) { mNode = node; }
		const_iterator(const const_iterator& other) { mNode = other.mNode; }

		inline void operator=(const_iterator& other) { mNode = other.mNode; }
		inline Element operator*() const { return mNode->mElement; }
		inline void operator++() { mNode = mNode->mNext; }
		inline TNode_ operator--(int)
		{
			TNode_ oldNode(this);
			(*this)--;
			return oldNode;
		}
		inline void operator--() { mNode = mNode->mPrev; }

		friend bool operator==(const_iterator a, const_iterator b) { return a.mNode == b.mNode; }
		friend bool operator!=(const_iterator a, const_iterator b) { return !(a == b); }

		TNode_* mNode; // _00
	};

	// not empty according to tp debug
	~TList()
	{
		Confirm();
		clear();
	}

	// unused/inlined:
	void assign(u32, const Element&);
	TList& operator=(const TList& other);

	// from TP debug:
	TNode_* CreateNode_(TNode_*, TNode_*, Element const& value);
	void DestroyNode_(TNode_*);
	void Confirm() const;

	iterator insert(iterator position, Element const& value);
	iterator erase(iterator position);
	iterator erase(iterator start, iterator end)
	{
		while (start != end) {
			start = erase(start);
		}
		return start;
	}

	void push_front(Element const& element);
	void push_back(Element element) { insert(end(), &element); }

	iterator begin() { return iterator(mNode.mNext); }
	iterator end() { return iterator(mNode.mPrev); }

	const_iterator begin() const { return const_iterator(mNode.mNext); }
	const_iterator end() const { return const_iterator(mNode.mPrev); }
	bool empty() const { return size() == 0; }
	u32 size() const { return mSize; }
	void clear() { erase(end(), begin()); }

	u8 _00;       // _00, unknown
	u32 mSize;    // _04
	TNode_ mNode; // _08
};

struct TList_pointer_void : public TList<void*, TVoidAllocator> {
	TList_pointer_void(); // unused/inlined?
	TList_pointer_void(const TVoidAllocator& allocator);
	TList_pointer_void(u32, const void*&, const TVoidAllocator&); // unused/inlined
	~TList_pointer_void();

	void insert(iterator position, void* const& value);
	void erase(iterator);

	// unused/inlined:
	void insert(iterator position, u32 count, void* const& value);
	void erase(iterator, iterator);
	void remove(void* const&);
	void assign(u32, void* const&);
	void resize(u32, void* const&);
	void unique();
	TList_pointer_void& operator=(const TList_pointer_void& other);
};

template <typename T>
struct TList_pointer : public TList_pointer_void {

	TList_pointer(const TVoidAllocator& allocator)
	    : TList_pointer_void(allocator)
	{
	}

	~TList_pointer() { }

	// _00-_10 = TList_pointer_void
};

template <typename Iterator, typename Value, typename Predicate>
void findUpperBound_binary_current(Iterator, Iterator, Iterator, const Value&, Predicate);
} // namespace JGadget

#endif
