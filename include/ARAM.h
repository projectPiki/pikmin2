#ifndef _ARAM_H
#define _ARAM_H

#include "JSystem/JKR/JKRDvdRipper.h"
#include "types.h"

namespace ARAM {
struct Mgr {
	Mgr();

	void* aramToMainRam(const char*, uchar*, ulong, ulong, JKRExpandSwitch,
	                    ulong, JKRHeap*, JKRDvdRipper::EAllocDirection, int,
	                    ulong*);
	void dump();
	void dvdToAram(const char*, bool);
	void init();
	void search(const char*);
};

struct Node {
	~Node();
};
} // namespace ARAM

extern ARAM::Mgr* gAramMgr;

#endif
