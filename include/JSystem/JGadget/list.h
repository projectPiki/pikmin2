#ifndef _JSYSTEM_JGADGET_LIST_H
#define _JSYSTEM_JGADGET_LIST_H

#include "types.h"
#include "stl/iterator.h"
#include "JSystem/JGadget/allocator.h"

namespace JGadget {
// clang-format off
template <typename Element, typename Allocator = TAllocator<Element> >
// clang-format on
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

	~TList() { clear(); }

	// unused/inlined:
	void assign(u32, const Element&);
	TList& operator=(const TList& other);

	// from TP debug:
	TNode_* CreateNode_(TNode_* nextNode, TNode_* prevNode, Element const& value)
	{
		TNode_* newNode = (TNode_*)mAllocator.AllocateRaw(sizeof(TNode_));
		if (!newNode) {
			return nullptr;
		}

		newNode->mNext = nextNode;
		newNode->mPrev = prevNode;
		mAllocator.construct(&newNode->mElement, value);
		return newNode;
	}

	void DestroyNode_(TNode_* node)
	{
		mAllocator.destroy(&node->mElement);
		mAllocator.DeallocateRaw(node);
	}

	void Confirm() const;

	iterator insert(iterator position, Element const& value)
	{
		TNode_* currNode = position.mNode;
		TNode_* prevNode = currNode->mPrev;
		TNode_* newNode  = CreateNode_(currNode, prevNode, value);
		if (!newNode) {
			return end();
		}

		currNode->mPrev = newNode;
		prevNode->mNext = newNode;
		mSize++;
		return iterator(newNode);
	}

	iterator erase(iterator position)
	{
		TNode_* currNode       = position.mNode;
		TNode_* nextNode       = currNode->mNext;
		currNode->mPrev->mNext = nextNode;
		nextNode->mPrev        = currNode->mPrev;
		DestroyNode_(currNode);
		mSize--;
		return iterator(nextNode);
	}

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
	iterator end() { return iterator(&mNode); }

	// const_iterator begin() const { return const_iterator(mNode.mNext); }
	// const_iterator end() const { return const_iterator(mNode.mPrev); }
	bool empty() const { return size() == 0; }
	u32 size() const { return mSize; }
	iterator clear() { return erase(begin(), end()); }

	Allocator mAllocator; // _00
	u32 mSize;            // _04
	TNode_ mNode;         // _08
};

struct TList_pointer_void : public TList<void*> {
	TList_pointer_void(); // unused/inlined?
	TList_pointer_void(const TVoidAllocator& allocator);
	TList_pointer_void(u32, const void*&, const TVoidAllocator&); // unused/inlined
	~TList_pointer_void();

	iterator insert(iterator position, void* const& value);
	iterator erase(iterator);

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
