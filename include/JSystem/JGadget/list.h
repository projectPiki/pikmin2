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

		Element& getElement() { return *(Element*)(this + 1); }
		const Element& getElement() const { return *(const Element*)(this + 1); }

		TNode_* mNext; // _00
		TNode_* mPrev; // _04
	};

	struct iterator {
		iterator() { mNode = nullptr; }
		iterator(TNode_* node) { mNode = node; }

		inline void operator=(const iterator& other) { mNode = other.mNode; }
		inline Element operator*() const { return mNode->getElement(); }
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
		const_iterator(const TNode_* node) { mNode = node; }
		const_iterator(const const_iterator& other) { mNode = other.mNode; }

		inline void operator=(const_iterator& other) { mNode = other.mNode; }
		inline Element operator*() const { return mNode->getElement(); }
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

		const TNode_* mNode; // _00
	};

	~TList() { clear(); }

	// unused/inlined:
	void assign(u32, const Element&);
	TList& operator=(const TList& other);

	// from TP debug:
	TNode_* CreateNode_(TNode_* nextNode, TNode_* prevNode, Element const& value)
	{
		TNode_* newNode = (TNode_*)mAllocator.AllocateRaw(sizeof(TNode_) + sizeof(Element));
		if (!newNode) {
			return nullptr;
		}

		newNode->mNext = nextNode;
		newNode->mPrev = prevNode;
		mAllocator.construct(&newNode->getElement(), value);
		return newNode;
	}

	void DestroyNode_(TNode_* node)
	{
		mAllocator.destroy(&node->getElement());
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
	typedef TList_pointer_void Base;
	struct iterator : Base::iterator {
		iterator() { }
		iterator(typename Base::TNode_* node)
		    : Base::iterator(node)
		{
		}
		iterator(Base::iterator it)
		    : Base::iterator(it)
		{
		}
		T& operator*() const { return *(T*)&this->mNode->getElement(); }
		iterator& operator++()
		{
			Base::iterator::operator++();
			return *this;
		}
		iterator& operator--()
		{
			Base::iterator::operator--();
			return *this;
		}
		friend bool operator==(iterator a, iterator b) { return a.mNode == b.mNode; }
		friend bool operator!=(iterator a, iterator b) { return !(a == b); }
	};
	struct const_iterator : Base::const_iterator {
		const_iterator() { }
		const_iterator(Base::const_iterator it)
		    : Base::const_iterator(it)
		{
		}
		const T& operator*() const { return *(const T*)&this->mNode->getElement(); }
		const_iterator& operator++()
		{
			Base::const_iterator::operator++();
			return *this;
		}
		friend bool operator==(const_iterator a, const_iterator b) { return a.mNode == b.mNode; }
		friend bool operator!=(const_iterator a, const_iterator b) { return !(a == b); }
	};
	TList_pointer(const TVoidAllocator& allocator)
	    : Base(allocator)
	{
	}
	~TList_pointer() { }
	iterator begin() { return iterator(Base::begin()); }
	iterator end() { return iterator(Base::end()); }
	const_iterator begin() const { return const_iterator(Base::const_iterator(this->mNode.mNext)); }
	const_iterator end() const { return const_iterator(Base::const_iterator(&this->mNode)); }
	iterator insert(iterator where, const T& value) { return iterator(Base::insert(where, (void* const&)value)); }
	T& back() { return *--end(); }
	void pop_back() { erase(--end()); }
	iterator erase(iterator where) { return iterator(Base::erase(where)); }
};

} // namespace JGadget

#endif
