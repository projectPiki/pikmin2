#ifndef _BITFLAG_H
#define _BITFLAG_H

#include "types.h"

template <typename T> struct BitFlag {
	BitFlag()
	{
		for (int i = 0; i < sizeof(T); i++) {
			byteView[i] = 0;
		}
	}

	union {
		u8 byteView[sizeof(T)];
		T typeView;
	};
};

#endif
