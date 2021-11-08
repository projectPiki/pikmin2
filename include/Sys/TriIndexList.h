#ifndef _SYS_TRIINDEXLIST_H
#define _SYS_TRIINDEXLIST_H

#include "Sys/IndexList.h"
#include "stream.h"

namespace Sys {
struct TriIndexList : public IndexList {
	virtual ~TriIndexList();

	void readObject(Stream&, int&);
	void writeObject(Stream&, int&);
};
} // namespace Sys

#endif
