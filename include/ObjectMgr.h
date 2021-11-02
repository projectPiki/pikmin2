#ifndef _OBJECTMGR_H
#define _OBJECTMGR_H

#include "Container.h"
#include "Game/GenericObjectMgr.h"

template <typename T> struct ObjectMgr : public Container<T>, GenericObjectMgr {
};

template <typename T> struct TObjectNode : public CNode {
	T* m_contents; // _18
};

template <typename T> struct NodeObjectMgr : public ObjectMgr<T> {
	TObjectNode<T> m_node; // _20
};

#endif
