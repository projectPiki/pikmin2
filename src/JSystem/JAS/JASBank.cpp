#include "JSystem/JAS/JASBank.h"

extern JKRSolidHeap* JASDram;
JKRHeap* JASBank::sCurrentHeap;

/*
 * --INFO--
 * Address:	8009C2FC
 * Size:	000014
 */
JKRHeap* JASBank::getCurrentHeap() { return sCurrentHeap ? sCurrentHeap : JASDram; }
