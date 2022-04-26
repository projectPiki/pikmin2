#ifndef LINKLIST_H
#define LINKLIST_H

#include "types.h"

namespace JGadget {
struct TLinkListNode {
	TLinkListNode()
	{
		mNext = nullptr;
		mPrev = nullptr;
	}

	TLinkListNode* mNext;
	TLinkListNode* mPrev;
};

struct TNodeLinkList {
	struct iterator {
		iterator(TLinkListNode* pNode) { node = pNode; }
		iterator(const iterator& iter) { *this = iter; }

		TLinkListNode* node;
	};

	struct TPRIsEqual_pointer_ {
		TLinkListNode* node;
	};

	TNodeLinkList()
	    : ocObject_()
	{
		Initialize_();
	}
	void Initialize_()
	{
		ptr             = nullptr;
		ocObject_.mNext = &ocObject_;
		ocObject_.mPrev = &ocObject_;
	}

	iterator end()
	{
		iterator iter(&ocObject_);
		return iter;
	}

	~TNodeLinkList();
	void Erase(TLinkListNode*);
	void Insert(TNodeLinkList::iterator, TLinkListNode*);
	void Remove(TLinkListNode*);
	void remove_if(TPRIsEqual_pointer_);

	TNodeLinkList* ptr;
	TLinkListNode ocObject_;
	int _10; // this probably shouldnt be here but idk the TLinkList from TP
	         // doesnt match what i see here
};

template <typename T, int I> struct TLinkList : public TNodeLinkList {
	TLinkList()
	    : TNodeLinkList()
	{
	}

	struct iterator : TNodeLinkList::iterator {
		iterator(TNodeLinkList::iterator iter)
		    : TNodeLinkList::iterator(iter)
		{
		}
	};

	TLinkListNode* Element_toNode(T* element) const { return &element->ocObject_; }

	void Insert(TLinkList::iterator iter, T* element)
	{
		TLinkListNode* node = Element_toNode(element);
		TNodeLinkList::Insert(iter, node);
	}

	iterator Erase(T* element)
	{
		TLinkListNode* node = Element_toNode(element);
		return ((TNodeLinkList*)this)->Erase(node);
	}

	TLinkList::iterator end()
	{
		TNodeLinkList::iterator node_iter = TNodeLinkList::end();
		TLinkList::iterator iter(node_iter);
		return iter;
	}

	void Push_back(T* element)
	{
		TLinkList::iterator iter(TLinkList::end());
		this->Insert(iter, element);
	}
};

}; // namespace JGadget

#endif
