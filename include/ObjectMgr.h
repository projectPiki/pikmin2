#ifndef _OBJECTMGR_H
#define _OBJECTMGR_H

#include "Container.h"
#include "GenericObjectMgr.h"

// TODO: this struct is 100% fake abomination. Destroy it in the future when onyonMgr cooperates. -EpochFlame
struct IntermediateObjectMgr : public GenericObjectMgr {
	virtual void fake1();
	virtual void fake2();
	virtual void fake3();
	virtual void fake4();
	virtual void fake5();
	virtual void fake6();
	virtual void fake7();
	virtual void fake8();
	virtual void fake9();
	virtual void fake10();
	virtual void fake11();
	virtual void fake12();
	virtual void fake13();
	virtual void fake14(int viewportNumber);
	virtual void fake15();
	virtual void fake16(f32 constraint);
	virtual void fake17(Graphics& gfx);
};

template <typename T>
struct ObjectMgr : public Container<T>, GenericObjectMgr {
	inline ObjectMgr()
	    : Container<T>()
	{
	}

	///////////////// VTABLE
	// virtual ~ObjectMgr() { }   // _08 (weak)
	virtual void doAnimation() // _34
	{
		Iterator<T> iter(this);
		iter.first();
		while (iter.m_index != iter.m_container->getEnd()) {
			iter.m_container->get(iter.m_index)->doAnimation();
			iter.next();
		}
	}
	virtual void doEntry() // _38
	{
		Iterator<T> iter(this);
		iter.first();
		while (iter.m_index != iter.m_container->getEnd()) {
			iter.m_container->get(iter.m_index)->doEntry();
			iter.next();
		}
	}
	virtual void doSetView(int p1) // _3C
	{
		Iterator<T> iter(this);
		iter.first();
		while (iter.m_index != iter.m_container->getEnd()) {
			iter.m_container->get(iter.m_index)->doSetView(p1);
			iter.next();
		}
	}
	virtual void doViewCalc() // _40
	{
		Iterator<T> iter(this);
		iter.first();
		while (iter.m_index != iter.m_container->getEnd()) {
			iter.m_container->get(iter.m_index)->doViewCalc();
			iter.next();
		}
	}
	virtual void doSimulation(f32 constraint) // _44
	{
		Iterator<T> iter(this);
		iter.first();
		while (iter.m_index != iter.m_container->getEnd()) {
			iter.m_container->get(iter.m_index)->doSimulation(constraint);
			iter.next();
		}
	}
	virtual void doDirectDraw(Graphics& graphics) // _48
	{
		Iterator<T> iter(this);
		iter.first();
		while (iter.m_index != iter.m_container->getEnd()) {
			iter.m_container->get(iter.m_index)->doDirectDraw(graphics);
			iter.next();
		}
	}
	///////////////// VTABLE END

	// _00		= VTBL
	// _00-_18	= Container
};

template <typename T>
struct TObjectNode : public CNode {
	virtual ~TObjectNode() { } // _08 (weak)

	TObjectNode<T>* getNext() { return static_cast<TObjectNode<T>*>(m_next); }

	T* m_contents; // _18
};

template <typename T>
struct NodeObjectMgr : public ObjectMgr<T> {
	inline NodeObjectMgr()
	    : m_node()
	{
	}

	// first VTBL:
	// virtual ~NodeObjectMgr() { }      // _08
	virtual T* get(void* node) // _20
	{
		return ((TObjectNode<T>*)node)->m_contents;
	}
	virtual void* getNext(void* node) // _14
	{
		return ((TObjectNode<T>*)node)->m_next;
	}
	virtual void* getStart() // _18
	{
		return m_node.m_child;
	}
	virtual void* getEnd() // _1C
	{
		return nullptr;
	}

	// second VTBL:
	virtual void resetMgr() // _20
	{
		m_node.m_child  = nullptr;
		m_node.m_parent = nullptr;
		m_node.m_prev   = nullptr;
		m_node.m_next   = nullptr;
	}

	void delNode(T* contents);
	// needs to not be inlined in ItemMgr::killAllExceptOnyonMgr();
	/*
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
	*/

	TObjectNode<T> m_node; // _20
};

#endif
