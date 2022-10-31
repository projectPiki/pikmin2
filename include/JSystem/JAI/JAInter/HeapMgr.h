#ifndef _JSYSTEM_JAI_JAINTER_HEAPMGR_H
#define _JSYSTEM_JAI_JAINTER_HEAPMGR_H

#include "JSystem/JAI/JAInter.h"

namespace JAInter {
namespace HeapMgr {
void init(unsigned char, unsigned long, unsigned char, unsigned long);
void getAutoHeapPointer();
void checkOnMemory(unsigned long, unsigned char*);
void releaseAutoHeapPointer(unsigned char);
void checkUsefulAutoHeapPosition();
void getFreeAutoHeapPointer(unsigned char, unsigned long);
void checkUsefulStayHeapPosition();
void getFreeStayHeapPointer(unsigned long, unsigned long);
void setAutoHeapLoadedFlag(unsigned char, unsigned char);
void setStayHeapLoadedFlag(unsigned char, unsigned char);

// unused/inlined:
void getStayHeapPointer();
void getAutoHeapCount();
void getStayHeapCount();
void changeAutoHeapPointerToPosition(unsigned char*);
void clearAutoHeap(JAInter::HeapBlock*);
void clearAutoHeap(unsigned long);
void clearStayHeap(unsigned long);
void getAutoHeapPointer(unsigned long);

extern HeapBlock* sAutoHeap;
extern HeapBlock* sStayHeap;
extern u32 sAutoHeapCount;
extern u32 sStayHeapCount;

} // namespace HeapMgr
} // namespace JAInter

#endif
