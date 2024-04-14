#ifndef LINKLIST_H
#define LINKLIST_H

#include "types.h"
#include "stl/algorithm.h"
#include "stl/iterator.h"

namespace JGadget {
struct TLinkListNode {
	TLinkListNode()
	{
		mNext = nullptr;
		mPrev = nullptr;
	}

	TLinkListNode* getNext() const { return mNext; }
	TLinkListNode* getPrev() const { return mPrev; }
	void clear()
	{
		mNext = nullptr;
		mPrev = nullptr;
	}

	TLinkListNode* mNext; // _00
	TLinkListNode* mPrev; // _04
};

struct TNodeLinkList {
	struct iterator {
		iterator(TLinkListNode* newNode) { mNode = newNode; }

		iterator& operator++()
		{
			mNode = mNode->getNext();
			return *this;
		}

		iterator& operator--()
		{
			mNode = mNode->getPrev();
			return *this;
		}

		iterator operator++(int)
		{
			const iterator old(*this);
			++(*this);
			return old;
		}

		iterator operator--(int)
		{
			const iterator old(*this);
			--(*this);
			return old;
		}

		friend bool operator==(iterator a, iterator b) { return a.mNode == b.mNode; }
		friend bool operator!=(iterator a, iterator b) { return !(a == b); }

		TLinkListNode* operator->() const { return mNode; }
		TLinkListNode& operator*() const { return *mNode; }

		TLinkListNode* mNode; // _00
	};

	struct const_iterator {
		const_iterator(const TLinkListNode* newNode) { mNode = newNode; }
		const_iterator(iterator it) { mNode = it.mNode; }

		const_iterator& operator++()
		{
			mNode = mNode->getNext();
			return *this;
		}

		const_iterator& operator--()
		{
			mNode = mNode->getPrev();
			return *this;
		}

		const_iterator operator++(int)
		{
			const const_iterator old(*this);
			++(*this);
			return old;
		}

		const_iterator operator--(int)
		{
			const const_iterator old(*this);
			--(*this);
			return old;
		}

		friend bool operator==(const_iterator a, const_iterator b) { return a.mNode == b.mNode; }
		friend bool operator!=(const_iterator a, const_iterator b) { return !(a == b); }

		friend bool operator==(const_iterator a, iterator b) { return a.mNode == b.mNode; }
		friend bool operator!=(const_iterator a, iterator b) { return !(a == b); }

		const TLinkListNode* operator->() const { return mNode; }
		const TLinkListNode& operator*() const { return *mNode; }

		const TLinkListNode* mNode; // _00
	};

	TNodeLinkList()
	    : mLinkListNode()
	{
		Initialize_();
	}

	void Initialize_()
	{
		mCount              = 0;
		mLinkListNode.mNext = &mLinkListNode;
		mLinkListNode.mPrev = &mLinkListNode;
	}

	iterator begin() { return iterator(mLinkListNode.getNext()); }
	const_iterator begin() const { return const_iterator(mLinkListNode.getNext()); }

	iterator end() { return &mLinkListNode; }
	const_iterator end() const { return &mLinkListNode; }

	u32 size() { return mCount; }
	bool empty() { return size() == 0; }

	bool Iterator_isEnd_(const_iterator it) const { return it.mNode == &mLinkListNode; }

	~TNodeLinkList();
	TNodeLinkList::iterator Insert(TNodeLinkList::iterator, TLinkListNode*);
	TNodeLinkList::iterator Erase(TLinkListNode*);
	void Remove(TLinkListNode*);

	template <typename T>
	void Remove_if(T node, TNodeLinkList& list)
	{
		iterator it = begin();
		while (!Iterator_isEnd_(const_iterator(it))) {
			if (node(*it)) {
				iterator itPrev = it;
				++it;
				list.splice(list.end(), *this, itPrev);
			} else {
				++it;
			}
		}
	}

	template <typename T>
	void remove_if(T node)
	{
		TNodeLinkList list;
		Remove_if(node, list);
	}

	// unused/inlined:
	void erase(iterator);
	void erase(iterator, iterator);
	void clear();
	void splice(iterator, TNodeLinkList&);
	void splice(iterator, TNodeLinkList&, iterator);
	void splice(iterator, TNodeLinkList&, iterator, iterator);
	void swap(TNodeLinkList&);
	void reverse();
	TLinkListNode* Find(const TLinkListNode*);

	int mCount;                  // _00
	TLinkListNode mLinkListNode; // _04
};

template <typename T, int I>
struct TLinkList : public TNodeLinkList {
	TLinkList()
	    : TNodeLinkList()
	{
	}

	struct iterator {
		iterator(TNodeLinkList::iterator iter)
		    : mBase(iter)
		{
		}

		iterator& operator++()
		{
			++mBase;
			return *this;
		}
		iterator& operator--()
		{
			--mBase;
			return *this;
		}
		iterator operator++(int)
		{
			const iterator old(*this);
			++*this;
			return old;
		}
		iterator operator--(int)
		{
			const iterator old(*this);
			--*this;
			return old;
		}
		friend bool operator==(iterator a, iterator b) { return a.mBase == b.mBase; }
		friend bool operator!=(iterator a, iterator b) { return !(a == b); }

		T* operator->() const { return Element_toValue(mBase.operator->()); }
		T& operator*() const { return *operator->(); }

		TNodeLinkList::iterator mBase; // _00
	};

	struct const_iterator {
		const_iterator(TNodeLinkList::const_iterator iter)
		    : mBase(iter)
		{
		}
		const_iterator(iterator iter)
		    : mBase(iter.mBase)
		{
		}

		const_iterator& operator++()
		{
			++mBase;
			return *this;
		}
		const_iterator& operator--()
		{
			--mBase;
			return *this;
		}
		const_iterator operator++(int)
		{
			const const_iterator old(*this);
			++*this;
			return old;
		}
		const_iterator operator--(int)
		{
			const const_iterator old(*this);
			--*this;
			return old;
		}
		friend bool operator==(const_iterator a, const_iterator b) { return a.mBase == b.mBase; }
		friend bool operator!=(const_iterator a, const_iterator b) { return !(a == b); }

		const T* operator->() const { return Element_toValue(mBase.operator->()); }
		const T& operator*() const { return *operator->(); }

		TNodeLinkList::const_iterator mBase; // _00
	};

	static const TLinkListNode* Element_toNode(const T* element)
	{
		(void)element;
		return reinterpret_cast<const TLinkListNode*>(reinterpret_cast<const char*>(element) - I);
	}
	static TLinkListNode* Element_toNode(T* element)
	{
		(void)element;
		return reinterpret_cast<TLinkListNode*>(reinterpret_cast<char*>(element) - I);
	}
	static const T* Element_toValue(const TLinkListNode* node)
	{
		(void)node;
		return reinterpret_cast<const T*>(reinterpret_cast<const char*>(node) + I);
	}
	static T* Element_toValue(TLinkListNode* node)
	{
		(void)node;
		return reinterpret_cast<T*>(reinterpret_cast<char*>(node) + I);
	}

	iterator Insert(iterator iter, T* element) { return iterator(TNodeLinkList::Insert(iter.mBase, Element_toNode(element))); }
	iterator Erase(T* element) { return iterator(TNodeLinkList::Erase(Element_toNode(element))); }

	iterator begin() { return iterator(TNodeLinkList::begin()); }
	const_iterator begin() const { return const_iterator(const_cast<TLinkList*>(this)->begin()); }
	iterator end() { return iterator(TNodeLinkList::end()); }
	const_iterator end() const { return const_iterator(const_cast<TLinkList*>(this)->end()); }
	T& front() { return *begin(); }
	T& back() { return *--end(); }
	void Push_front(T* element) { Insert(begin(), element); }
	void Push_back(T* element) { Insert(end(), element); }
	iterator Find(const T* element) { return iterator(TNodeLinkList::Find(Element_toNode(element))); }
	void Remove(T* element) { TNodeLinkList::Remove(Element_toNode(element)); }

	// _00-_08	= TNodeLinkList
};

template <typename T, int Offset>
struct TLinkList_factory : public TLinkList<T, Offset> {
	virtual ~TLinkList_factory() = 0; // _08
	virtual T* Do_create()       = 0; // _0C
	virtual void Do_destroy(T*)  = 0; // _10

	void Clear_destroy()
	{
		while (!empty()) {
			T* item = &front();
			Do_destroy(item);
		}
	}

	void Erase_destroy(T* elem)
	{
		Erase(elem);
		Do_destroy(elem);
	}

	// _00-_08	= TNodeLinkList
	// _0C		= VTABLE
};

}; // namespace JGadget

#endif
