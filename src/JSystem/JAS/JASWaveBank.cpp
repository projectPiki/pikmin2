#include "JSystem/JAS/JASBank.h"

extern void* JASDram;
void* JASWaveBank::sCurrentHeap;

/*
 * --INFO--
 * Address:	8009C2FC
 * Size:	000014
 */
void* JASWaveBank::getCurrentHeap()
{
	return sCurrentHeap ? sCurrentHeap : JASDram;
}
