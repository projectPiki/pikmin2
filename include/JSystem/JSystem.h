#ifndef _JSYSTEM_JSYSTEM_H
#define _JSYSTEM_JSYSTEM_H

#include "types.h"

inline u8 getNumByte(void* value, int bitNumber) { return ((u8*)value)[bitNumber / 8]; }

// inline u8 getNumBit(u8* value, int bitNumber) { return (value[(u32)bitNumber >> 3] & (1 << (7 - ((u32)bitNumber % 8)))); }

// static bool getNumBit_(u8* arr, int bitNo)
// {
// 	u8 bit = (arr[bitNo >> 3] & (0x80 >> (bitNo & 7)));
// 	return bit != 0;
// }

#endif
