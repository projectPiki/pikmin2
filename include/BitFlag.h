#ifndef _BITFLAG_H
#define _BITFLAG_H

#include "types.h"

template <typename T> struct BitFlag {
	BitFlag();

	T flags;
};

template <> struct BitFlag<u8> {
	BitFlag();

	u8 flags;
};

template <> struct BitFlag<ulong> {
	BitFlag();

	ulong flags;
};

template <> struct BitFlag<u16> {
	BitFlag();

	u16 flags;
};

#endif
