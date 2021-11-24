#ifndef _OBJECTMGR_H
#define _OBJECTMGR_H

#include "Container.h"
#include "Game/GenericObjectMgr.h"

template <typename T> struct ObjectMgr : public Container<T>, GenericObjectMgr {
	// first VTBL:
	virtual ~ObjectMgr(); // _00
	// second VTBL:
	virtual void doAnimation();           // _00
	virtual void doEntry();               // _04
	virtual void doSetView(int);          // _08
	virtual void doViewCalc();            // _0C
	virtual void doSimulation(float);     // _10
	virtual void doDirectDraw(Graphics&); // _14
};

template <typename T> struct TObjectNode : public CNode {
	T* m_contents; // _18
};

template <typename T> struct NodeObjectMgr : public ObjectMgr<T> {
	// first VTBL:
	virtual ~NodeObjectMgr();
	virtual int getNext(int);
	virtual int getStart();
	virtual int getEnd();
	virtual T* get(int);
	// second VTBL:
	virtual void resetMgr(); // _20

	// TODO: Remove this once the VTBLs work properly
	u32 _1C_REMOVE_ME_PLEASE; // _1C
	TObjectNode<T> m_node;    // _20
};

#endif
