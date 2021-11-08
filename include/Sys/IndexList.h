#ifndef _SYS_INDEXLIST_H
#define _SYS_INDEXLIST_H

#include "Container.h"
#include "stream.h"

namespace Sys {
struct IndexList : public ArrayContainer<int> {
	virtual ~IndexList();

	void readObject(Stream&, int&);
	void writeObject(Stream&, int&);
};
} // namespace Sys

#endif
