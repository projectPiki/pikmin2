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

	virtual void doAnimation();                    // _34
	virtual void doEntry();                        // _38
	virtual void doSetView(int viewportNumber);    // _3C
	virtual void doViewCalc();                     // _40
	virtual void doSimulation(f32 constraint);     // _44
	virtual void doDirectDraw(Graphics& graphics); // _48

	// _00		= VTBL
	// _00-_1C	= Container
	// _1C-_20  = GenericObjectMgr
};

template <typename T>
void ObjectMgr<T>::doAnimation()
{
	Iterator<T> iter(this);
	iter.first();
	while (!iter.isDone()) {
		(*iter)->doAnimation();
		iter.next();
	}
}

template <typename T>
void ObjectMgr<T>::doEntry()
{
	Iterator<T> iter(this);
	iter.first();
	while (!iter.isDone()) {
		(*iter)->doEntry();
		iter.next();
	}
}

template <typename T>
void ObjectMgr<T>::doSetView(int viewportNumber)
{
	Iterator<T> iter(this);
	iter.first();
	while (!iter.isDone()) {
		(*iter)->doSetView(viewportNumber);
		iter.next();
	}
}

template <typename T>
void ObjectMgr<T>::doViewCalc()
{
	Iterator<T> iter(this);
	iter.first();
	while (!iter.isDone()) {
		(*iter)->doViewCalc();
		iter.next();
	}
}

template <typename T>
void ObjectMgr<T>::doSimulation(f32 constraint)
{
	Iterator<T> iter(this);
	iter.first();
	while (!iter.isDone()) {
		(*iter)->doSimulation(constraint);
		iter.next();
	}
}

template <typename T>
void ObjectMgr<T>::doDirectDraw(Graphics& gfx)
{
	Iterator<T> iter(this);
	iter.first();
	while (!iter.isDone()) {
		(*iter)->doDirectDraw(gfx);
		iter.next();
	}
}

template <typename T>
struct TObjectNode : public CNode {
	TObjectNode() { }
	TObjectNode(T* obj) { mContents = obj; }
	virtual ~TObjectNode() { } // _08 (weak)

	TObjectNode<T>* getNext() { return static_cast<TObjectNode<T>*>(mNext); }

	// _00     = VTBL
	// _00-_18 = CNode
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

	// this has to be here for weak ordering in gamePlatMgr
	void delNode(T* obj);

	// second VTBL:
	virtual void resetMgr() // _20
	{
		mNode.clearRelations();
	}

	// _00     = VTBL
	// _00-_20 = ObjectMgr
	TObjectNode<T> mNode; // _20
};

template <typename T>
void NodeObjectMgr<T>::delNode(T* obj)
{
	FOREACH_NODE(TObjectNode<T>, mNode.mChild, node)
	{
		if (node->mContents == obj) {
			node->del();
			return;
		}
	}
}

#endif
