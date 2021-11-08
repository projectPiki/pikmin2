#ifndef _MONOOBJECTMGR_H
#define _MONOOBJECTMGR_H

#include "types.h"
#include "ObjectMgr.h"

template <typename T> struct MonoObjectMgr : public ObjectMgr<T> {
	int m_activeCount; // _20
	int m_max;         // _24
	T** m_array;       // _28
	s8* m_openIds;     // _2C
};

#endif
