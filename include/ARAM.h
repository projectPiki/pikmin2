#ifndef _ARAM_H
#define _ARAM_H

#include "JSystem/JKernel/JKRDvdRipper.h"
#include "JSystem/JKernel/JKRAram.h"
#include "CNode.h"
#include "types.h"

namespace ARAM {
struct Node : CNode {
	inline Node();
	virtual ~Node() { } // _08

	inline u32 dvdToAram(char const*, bool);
	void* aramToMainRam(u8*, u32, u32, JKRExpandSwitch, u32, JKRHeap*, JKRDvdRipper::EAllocDirection, int, u32*);
	inline void dump();

	JKRAramBlock* mStatus; // _18
};

struct Mgr {
	Mgr();

	static void init();

	void* aramToMainRam(char const*, u8*, u32, u32, JKRExpandSwitch, u32, JKRHeap*, JKRDvdRipper::EAllocDirection, int, u32*);
	void dump();
	u32 dvdToAram(char const*, bool);
	Node* search(char const* name);

	CNode mNode; // _00
};
}; // namespace ARAM
extern ARAM::Mgr* gAramMgr;

#endif
