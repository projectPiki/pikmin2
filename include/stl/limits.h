#ifndef _LIMITS_H
#define _LIMITS_H
#include "types.h"
#include "stl/iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

#define CHAR_BIT 8

#define SCHAR_MIN (-0x7F - 1)
#define SCHAR_MAX 0x7F
#define UCHAR_MAX 0xFF

#define CHAR_MIN 0
#define CHAR_MAX SCHAR_MAX

#define SHRT_MIN  (-0x7FFF - 1)
#define SHRT_MAX  0x7FFF
#define USHRT_MAX 0xFFFF

#define INT_MIN  (-0x7FFFFFFF - 1)
#define INT_MAX  0x7FFFFFFF
#define UINT_MAX 0xFFFFFFFF

#define LONG_MIN  (-0x7FFFFFFFL - 1)
#define LONG_MAX  0x7FFFFFFFL
#define ULONG_MAX 0xFFFFFFFFUL

#define LLONG_MIN  (-0x7FFFFFFFFFFFFFFFLL - 1)
#define LLONG_MAX  0x7FFFFFFFFFFFFFFFLL
#define ULLONG_MAX 0xFFFFFFFFFFFFFFFFULL

#ifdef __cplusplus
}

namespace std {
template <typename T>
class numeric_limits {
public:
	inline static T min();
	inline static T max();
};

template <>
class numeric_limits<char> {
public:
	inline static char min() { return -0x80; }
	inline static char max() { return 0x7F; }
};

template <>
class numeric_limits<s16> {
public:
	inline static s16 min() { return -0x8000; }
	inline static s16 max() { return 0x7FFF; }
};

template <>
class numeric_limits<int> {
public:
	inline static int min() { return -0x80000000; }
	inline static int max() { return 0x7FFFFFFF; }
};

template <>
class numeric_limits<s32> {
public:
	inline static s32 min() { return -0x80000000; }
	inline static s32 max() { return 0x7FFFFFFF; }
};

template <>
class numeric_limits<u8> {
public:
	inline static u8 min() { return 0x0; }
	inline static u8 max() { return 0xFF; }
};

template <>
class numeric_limits<u16> {
public:
	inline static u16 min() { return 0x0; }
	inline static u16 max() { return 0xFFFF; }
};

template <>
class numeric_limits<uint> {
public:
	inline static uint min() { return 0x0; }
	inline static uint max() { return 0xFFFFFFFF; }
};

template <>
class numeric_limits<u32> {
public:
	inline static u32 min() { return 0x0; }
	inline static u32 max() { return 0xFFFFFFFF; }
};

} // namespace std
#endif
#endif
