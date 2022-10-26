#ifndef _JSYSTEM_JPA_JPANODE_H
#define _JSYSTEM_JPA_JPANODE_H

#include "types.h"

template <typename T>
struct JPANode {
	JPANode();
	~JPANode();

	JPANode<T>* m_prev;
	JPANode<T>* m_next;
	T contents;
};

#endif
