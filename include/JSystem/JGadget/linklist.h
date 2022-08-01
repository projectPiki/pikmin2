#ifndef LINKLIST_H
#define LINKLIST_H

#include "types.h"

namespace JGadget {
struct TLinkListNode {
	TLinkListNode()
	{
		m_next = nullptr;
		m_prev = nullptr;
	}

	TLinkListNode* m_next;
	TLinkListNode* m_prev;
};

struct TNodeLinkList {
	struct iterator {
		iterator(TLinkListNode* pNode) { m_node = pNode; }
		iterator(const iterator& iter) { *this = iter; }

		TLinkListNode* m_node;
	};

	struct TPRIsEqual_pointer_ {
		TLinkListNode* m_node;
	};

	TNodeLinkList()
	    : m_linkListNode()
	{
		Initialize_();
	}
	void Initialize_()
	{
		m_count            	  = 0;
		m_linkListNode.m_next = &m_linkListNode;
		m_linkListNode.m_prev = &m_linkListNode;
	}

	iterator end()
	{
		iterator iter(&m_linkListNode);
		return iter;
	}

	~TNodeLinkList();
	void Insert(TNodeLinkList::iterator, TLinkListNode*);
	void Erase(TLinkListNode*);
	void Remove(TLinkListNode*);
	void remove_if(TPRIsEqual_pointer_);

	int m_count; 					// _00
	TLinkListNode m_linkListNode;	// _04
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

	TLinkListNode* Element_toNode(T* element) const { return &element->m_linkListNode; }

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
