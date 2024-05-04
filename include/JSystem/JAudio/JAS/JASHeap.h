#ifndef _JSYSTEM_JAS_JASHEAP_H
#define _JSYSTEM_JAS_JASHEAP_H

#include "Dolphin/os.h"
#include "JSystem/JAudio/JAS/JASDisposer.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"

struct JASHeap {
	JASHeap(JASDisposer*);
	~JASHeap() { }

	bool alloc(JASHeap*, u32);
	bool allocTail(JASHeap*, u32);
	bool free();
	void insertChild(JASHeap*, JASHeap*, void*, u32, bool);
	JASHeap* getTailHeap();
	u32 getTailOffset();
	u32 getCurOffset();

	bool isAllocated() { return mBase; }

	// unused/inlined:
	void adjustSize();
	void initRootHeap(void*, u32);
	void* allocAll(JASHeap*);
	void freeTail();
	void freeAll();
	int getTotalFreeSize() const;
	int getFreeSize() const;
	void dump();
	void dump(int);

	JSUTree<JASHeap> mTree; // _00
	OSMutex mMutex;         // _1C
	JASDisposer* mDisposer; // _34
	u8* mBase;              // _38
	u32 mSize;              // _3C
	JASHeap* mLastChild;    // _40
};

struct JASSolidHeap : public JASHeap {
	// unused/inlined:
	JASSolidHeap();
	JASSolidHeap(u8*, u32);
	void init(u8*, u32);
	void* alloc(u32);
	void freeLast();
	void freeAll();
	void getRemain();
};

extern JKRSolidHeap* JASDram;

#endif
