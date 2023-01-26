#ifndef _LOADRESOURCE_H
#define _LOADRESOURCE_H

#include "CNode.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JKernel/JKRDvdRipper.h"

struct JKRArchive;

namespace LoadResource {
// Size: 0x38
struct Node : public CNode, JKRDisposer {
	Node(char const*);

	virtual ~Node(); // _08 (weak)

	void dump();

	inline JKRArchive* getArchive() { return mArchive; }

	// _00 - _18: CNode
	// _18 - _30: JKRDisposer
	void* mFile;          // _30
	JKRArchive* mArchive; // _34
};

struct Arg {
	Arg(char const*);

	const char* mPath;             // _00
	u8* _04;                       // _04
	u32 _08;                       // _08
	u32 _0C;                       // _0C
	JKRExpandSwitch mExpandSwitch; // _10
	u32 _14;                       // _14
	JKRHeap* mHeap;                // _18
	int _1C;                       // _1C
	int _20;                       // _20
	int* _24;                      // _24
	u32* _28;                      // _28
	u8 _2C;                        // _2C
	u8 _2D;                        // _2D
};

struct ArgAramOnly : Arg {
	ArgAramOnly(char const*);
};

struct Mgr {
	Mgr();

	void dump();
	static void init();
	Node* load(Arg&);
	Node* mountArchive(Arg&);
	void search(char const*);

	CNode mAramRoot;
	CNode mDvdRoot;
};
} // namespace LoadResource

extern LoadResource::Mgr* gLoadResourceMgr;

#endif
