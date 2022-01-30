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
	virtual ~IndexList() { } // _00

	void readObject(Stream&, int&);
	void writeObject(Stream&, int&);
};
} // namespace Sys

#endif
