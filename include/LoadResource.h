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

	const char* mPath;                       // _00
	u8* mBuffer;                             // _04
	u32 mAddress;                            // _08
	u32 mOffset;                             // _0C
	JKRExpandSwitch mExpandSwitch;           // _10
	u32 mMaxExpandSize;                      // _14
	JKRHeap* mHeap;                          // _18
	JKRDvdRipper::EAllocDirection mAllocDir; // _1C
	int mAramID;                             // _20
	int* mDvdFileCompression;                // _24
	u32* mNewSize;                           // _28
	u8 mUseAram;                             // _2C
	u8 mUseDVD;                              // _2D
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
	Node* search(char const*);

	CNode mAramRoot;
	CNode mDvdRoot;
};
} // namespace LoadResource

extern LoadResource::Mgr* gLoadResourceMgr;

#endif
