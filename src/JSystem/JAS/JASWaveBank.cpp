#include "JSystem/JAS/JASWave.h"

extern JKRSolidHeap* JASDram;
JKRHeap* JASWaveBank::sCurrentHeap;

/*
 * --INFO--
 * Address:	8009C2FC
 * Size:	000014
 */
JKRHeap* JASWaveBank::getCurrentHeap() { return sCurrentHeap ? sCurrentHeap : JASDram; }
