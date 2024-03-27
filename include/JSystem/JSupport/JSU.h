#ifndef _JSYSTEM_JSU_JSU_H
#define _JSYSTEM_JSU_JSU_H

#include "types.h"

// TODO: This is probably used all over the place...
inline u8 JSULoByte(u16 data) { return data & 0xFF; }

inline u8 JSUHiByte(u16 data)
{
	data >>= 8;
	return data;
}

template <typename T>
T* JSUConvertOffsetToPtr(const void* base, const void* offset)
{
	if (offset == 0) {
		return nullptr;
	}
	return (T*)((s32)(base) + (s32)(offset));
}

template <typename T>
T* JSUConvertOffsetToPtr(const void* base, u32 offset)
{
	if (offset == 0) {
		return nullptr;
	}
	return (T*)((s32)base + offset);
}

#endif
