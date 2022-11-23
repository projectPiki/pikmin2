#ifndef _JSYSTEM_JSU_JSU_H
#define _JSYSTEM_JSU_JSU_H

#include "types.h"

// TODO: This is probably used all over the place...
inline u8 JSULoByte(u16 p1) { return p1; } // unused/inlined
// inline u8* JSULoByte(u16* p1) { return (u8*)p1; } // unused/inlined
/** @fabricated */
// inline u8 JSUHiByte(u16 p1) { return (p1 / 256); }
inline u8 JSUHiByte(u16 p1)
{
	p1 >>= 8;
	return p1;
}
// inline u8 JSUHiByte(u16 p1) { return JSULoByte((u8)(p1 / 256)); }
// inline u8 JSUHiByte(u16 p1) { return ((u8*)&p1)[0]; }
// inline u8* JSUHiByte(u16* p1) { return &((u8*)p1)[0]; }

template <typename T>
T* JSUConvertOffsetToPtr(const void* base, const void* offset)
{
	if (offset == 0) {
		return nullptr;
	}
	return reinterpret_cast<T*>(reinterpret_cast<s32>(base) + reinterpret_cast<s32>(offset));
}

template <typename T>
T* JSUConvertOffsetToPtr(const void* base, u32 offset)
{
	if (offset == 0) {
		return nullptr;
	}
	return reinterpret_cast<T*>(reinterpret_cast<u32>(base) + offset);
}

#endif
