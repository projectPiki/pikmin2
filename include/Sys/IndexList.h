#ifndef _SYS_INDEXLIST_H
#define _SYS_INDEXLIST_H

namespace Sys {
struct IndexList {
	~IndexList();

	void readObject(struct Stream&, int&);
	void writeObject(Stream&, int&);
};
} // namespace Sys

#endif
