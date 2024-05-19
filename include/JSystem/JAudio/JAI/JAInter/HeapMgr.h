#ifndef _JSYSTEM_JAI_JAINTER_HEAPMGR_H
#define _JSYSTEM_JAI_JAINTER_HEAPMGR_H

#include "JSystem/JAudio/JAI/JAInter.h"

namespace JAInter {
namespace HeapMgr {
enum HeapKind {
	HEAP_Auto = 0,
	HEAP_Stay = 1,
};

void init(u8, u32, u8, u32);
HeapBlock* getAutoHeapPointer();
void* checkOnMemory(u32, u8*);
void releaseAutoHeapPointer(u8);
u8 checkUsefulAutoHeapPosition();
void* getFreeAutoHeapPointer(u8, u32);
u32 checkUsefulStayHeapPosition();
void* getFreeStayHeapPointer(u32, u32);
void setAutoHeapLoadedFlag(u8, u8);
void setStayHeapLoadedFlag(u8, u8);

// unused/inlined:
HeapBlock* getStayHeapPointer();
u32 getAutoHeapCount();
u32 getStayHeapCount();
void changeAutoHeapPointerToPosition(u8*);
void clearAutoHeap(JAInter::HeapBlock*);
void clearAutoHeap(u32);
void clearStayHeap(u32);
void getAutoHeapPointer(u32);

extern HeapBlock* sAutoHeap;
extern HeapBlock* sStayHeap;
extern u32 sAutoHeapCount;
extern u32 sStayHeapCount;

static inline HeapBlock* getAutoHeap(int i) { return &sAutoHeap[i]; }
static inline HeapBlock* getStayHeap(int i) { return &sStayHeap[i]; }

} // namespace HeapMgr
} // namespace JAInter

#endif
