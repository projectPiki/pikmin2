#ifndef _ARAM_H
#define _ARAM_H

#include "JSystem/JKR/JKRDvdRipper.h"
#include "JSystem/JKR/Aram.h"
#include "CNode.h"
#include "types.h"

namespace ARAM {
struct Node : CNode {
	inline Node();
	virtual ~Node() { } // _08

	inline int dvdToAram(char const*, bool);
	void* aramToMainRam(unsigned char*, unsigned long, unsigned long, JKRExpandSwitch, unsigned long, JKRHeap*,
	                    JKRDvdRipper::EAllocDirection, int, unsigned long*);
	inline void dump();

	JKRAramBlock* m_status; // _18
};

struct Mgr {
	Mgr();

	static void init();

	void* aramToMainRam(char const*, unsigned char*, unsigned long, unsigned long, JKRExpandSwitch, unsigned long, JKRHeap*,
	                    JKRDvdRipper::EAllocDirection, int, unsigned long*);
	void dump();
	u32 dvdToAram(char const*, bool);
	Node* search(char const* name);

	Node m_node; // _00
};
}; // namespace ARAM
extern ARAM::Mgr* gAramMgr;

#endif
