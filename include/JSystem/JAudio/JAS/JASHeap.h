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
	void getTailHeap();
	int getTailOffset();
	int getCurOffset();

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
	OSMutex mMutexObject;   // _1C
	JASDisposer* mDisposer; // _34
	u8* _38;                // _38
	u32 _3C;                // _3C
	u32 _40;                // _40
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
