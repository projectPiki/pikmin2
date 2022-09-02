#ifndef _OBJECTMGR_H
#define _OBJECTMGR_H

#include "Container.h"
#include "GenericObjectMgr.h"

template <typename T> struct ObjectMgr : public Container<T>, GenericObjectMgr {
	inline ObjectMgr()
	    : Container<T>()
	{
	}

	virtual ~ObjectMgr() { }              // _08 (weak)
	virtual void doAnimation();           // _34
	virtual void doEntry();               // _38
	virtual void doSetView(int);          // _3C
	virtual void doViewCalc();            // _40
	virtual void doSimulation(float);     // _44
	virtual void doDirectDraw(Graphics&); // _48
};

template <typename T> struct TObjectNode : public CNode {
	virtual ~TObjectNode() { } // _08 (weak)

	TObjectNode<T>* getNext() { return static_cast<TObjectNode<T>*>(m_next); }

	T* m_contents; // _18
};

template <typename T> struct NodeObjectMgr : public ObjectMgr<T> {
	inline NodeObjectMgr()
	    : ObjectMgr<T>()
	    , m_node()
	{
	}
	// first VTBL:
	virtual ~NodeObjectMgr() { }      // _00
	virtual void* getNext(void* node) // _08
	{
		return ((TObjectNode<T>*)node)->m_next;
	}
	virtual void* getStart() // _0C
	{
		return m_node.m_child;
	}
	virtual void* getEnd() // _10
	{
		return nullptr;
	}
	virtual T* get(void* node) // _14
	{
		return ((TObjectNode<T>*)node)->m_contents;
	}
	// second VTBL:
	virtual void resetMgr() // _20
	{
		m_node.m_child  = nullptr;
		m_node.m_parent = nullptr;
		m_node.m_prev   = nullptr;
		m_node.m_next   = nullptr;
	}

	void delNode(T* contents)
	{
		// for (TObjectNode<T>* node = (TObjectNode<T>*)m_node.m_child; node != nullptr; node = (TObjectNode<T>*)node->m_next) {
		// 	if (node->m_contents == contents) {
		// 		node->del();
		// 		return;
		// 	}
		// }
		TObjectNode<T>* node = (TObjectNode<T>*)m_node.m_child;
		while (true) {
			if (node == nullptr) {
				return;
			}
			if (node->m_contents == contents) {
				break;
			}
			node = (TObjectNode<T>*)node->m_next;
		}
		node->del();
		return;
	}

	TObjectNode<T> m_node; // _20
};

#endif
