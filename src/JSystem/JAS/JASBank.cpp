#include "JSystem/JAS/JASBank.h"

extern void* JASDram;
void* JASBank::sCurrentHeap;

/*
 * --INFO--
 * Address:	8009C2FC
 * Size:	000014
 */
void* JASBank::getCurrentHeap() { return sCurrentHeap ? sCurrentHeap : JASDram; }
