#ifndef _JSYSTEM_JSYSTEM_H
#define _JSYSTEM_JSYSTEM_H

#include "types.h"

inline u8 getNumByte(void* value, int bitNumber)
{
	return ((u8*)value)[bitNumber / 8];
}

#endif
