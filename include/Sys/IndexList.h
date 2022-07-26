#ifndef _SYS_INDEXLIST_H
#define _SYS_INDEXLIST_H

#include "Container.h"
#include "stream.h"

namespace Sys {
struct IndexList : public ArrayContainer<int> {
	/**
	 * @reifiedAddress{801397AC}
	 * @reifiedFile{plugProjectKandoU/collinfo.cpp}
	 */
	virtual ~IndexList() { }                 // _08 (weak)
	virtual void writeObject(Stream&, int&); // _2C (weak)
	virtual void readObject(Stream&, int&);  // _30 (weak)
};
} // namespace Sys

#endif
