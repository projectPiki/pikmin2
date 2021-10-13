#ifndef _BITFLAG_H
#define _BITFLAG_H

#include "types.h"

template <typename T> struct BitFlag {
};

template <> struct BitFlag<u8> {
};

template <> struct BitFlag<ulong> {
};

template <> struct BitFlag<u16> {
};

#endif
