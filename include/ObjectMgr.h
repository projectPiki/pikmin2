#ifndef _OBJECTMGR_H
#define _OBJECTMGR_H

#include "Container.h"
#include "GenericObjectMgr.h"
#include "Iterator.h"

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
		while (iter.mIndex != iter.mContainer->getEnd()) {
			iter.mContainer->get(iter.mIndex)->doAnimation();
			iter.next();
		}
	}
	virtual void doEntry() // _38
	{
		Iterator<T> iter(this);
		iter.first();
		while (iter.mIndex != iter.mContainer->getEnd()) {
			iter.mContainer->get(iter.mIndex)->doEntry();
			iter.next();
		}
	}
	virtual void doSetView(int p1) // _3C
	{
		Iterator<T> iter(this);
		iter.first();
		while (iter.mIndex != iter.mContainer->getEnd()) {
			iter.mContainer->get(iter.mIndex)->doSetView(p1);
			iter.next();
		}
	}
	virtual void doViewCalc() // _40
	{
		Iterator<T> iter(this);
		iter.first();
		while (iter.mIndex != iter.mContainer->getEnd()) {
			iter.mContainer->get(iter.mIndex)->doViewCalc();
			iter.next();
		}
	}
	virtual void doSimulation(f32 constraint) // _44
	{
		Iterator<T> iter(this);
		iter.first();
		while (iter.mIndex != iter.mContainer->getEnd()) {
			iter.mContainer->get(iter.mIndex)->doSimulation(constraint);
			iter.next();
		}
	}
	virtual void doDirectDraw(Graphics& graphics) // _48
	{
		Iterator<T> iter(this);
		iter.first();
		while (iter.mIndex != iter.mContainer->getEnd()) {
			iter.mContainer->get(iter.mIndex)->doDirectDraw(graphics);
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

	TObjectNode<T>* getNext() { return static_cast<TObjectNode<T>*>(mNext); }

	T* mContents; // _18
};

template <typename T>
struct NodeObjectMgr : public ObjectMgr<T> {
	inline NodeObjectMgr()
	    : mNode()
	{
	}

	// first VTBL:
	// virtual ~NodeObjectMgr() { }      // _08
	virtual T* get(void* node) // _20
	{
		return ((TObjectNode<T>*)node)->mContents;
	}
	virtual void* getNext(void* node) // _14
	{
		return ((TObjectNode<T>*)node)->mNext;
	}
	virtual void* getStart() // _18
	{
		return mNode.mChild;
	}
	virtual void* getEnd() // _1C
	{
		return nullptr;
	}

	// second VTBL:
	virtual void resetMgr() // _20
	{
		mNode.mChild  = nullptr;
		mNode.mParent = nullptr;
		mNode.mPrev   = nullptr;
		mNode.mNext   = nullptr;
	}

	void delNode(T* contents);
	// needs to not be inlined in ItemMgr::killAllExceptOnyonMgr();
	/*
	{
	    // for (TObjectNode<T>* node = (TObjectNode<T>*)mNode.mChild; node != nullptr; node =
	(TObjectNode<T>*)node->mNext) {
	    // 	if (node->mContents == contents) {
	    // 		node->del();
	    // 		return;
	    // 	}
	    // }
	    TObjectNode<T>* node = (TObjectNode<T>*)mNode.mChild;
	    while (true) {
	        if (node == nullptr) {
	            return;
	        }
	        if (node->mContents == contents) {
	            break;
	        }
	        node = (TObjectNode<T>*)node->mNext;
	    }
	    node->del();
	    return;
	}
	*/

	TObjectNode<T> mNode; // _20
};

#endif
