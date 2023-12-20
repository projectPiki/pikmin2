#include "JSystem/JAudio/JAS/JASWave.h"

extern JKRSolidHeap* JASDram;
JKRHeap* JASWaveBank::sCurrentHeap;

/**
 * @note Address: 0x8009C2FC
 * @note Size: 0x14
 */
JKRHeap* JASWaveBank::getCurrentHeap() { return sCurrentHeap ? sCurrentHeap : JASDram; }
