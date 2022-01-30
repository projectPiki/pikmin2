#ifndef _SYS_TRIINDEXLIST_H
#define _SYS_TRIINDEXLIST_H

#include "Sys/IndexList.h"
#include "stream.h"

namespace Sys {
struct TriIndexList : public IndexList {
	/**
	 * @reifiedAddress{80133E64}
	 * @reifiedFile{plugProjectKandoU/collinfo.cpp}
	 */
	virtual ~TriIndexList() { } // _00

	void readObject(Stream&, int&);
	void writeObject(Stream&, int&);
};
} // namespace Sys

#endif
