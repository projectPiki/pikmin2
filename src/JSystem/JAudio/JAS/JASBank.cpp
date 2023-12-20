#include "JSystem/JAudio/JAS/JASBank.h"

extern JKRSolidHeap* JASDram;
JKRHeap* JASBank::sCurrentHeap;

/**
 * @note Address: 0x8009C2FC
 * @note Size: 0x14
 */
JKRHeap* JASBank::getCurrentHeap() { return sCurrentHeap ? sCurrentHeap : JASDram; }
