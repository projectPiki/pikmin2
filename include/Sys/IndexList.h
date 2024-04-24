#ifndef _SYS_INDEXLIST_H
#define _SYS_INDEXLIST_H

#include "Container.h"
#include "stream.h"

namespace Sys {
struct IndexList : public ArrayContainer<int> {
	virtual ~IndexList() { }                          // _08 (weak)
	virtual void writeObject(Stream& stream, int& p1) // _2C (weak)
	{
		stream.writeInt(p1);
	}
	virtual void readObject(Stream& stream, int& p1) // _30 (weak)
	{
		p1 = stream.readInt();
	}

	inline int getIndex(int idx) { return mObjects[idx]; }
};
} // namespace Sys

#endif
