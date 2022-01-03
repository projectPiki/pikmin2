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

}; // namespace JGadget

#endif
