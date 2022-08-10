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

template <typename T, int I> struct BitFlagArray {
    inline BitFlagArray()
    {
        for (int i = 0; i < I; i++) {
            for (int j = 0; j < sizeof(T); j++) {
                m_flags[i].byteView[j] = 0;
            }
        }
    }

    BitFlag<T> m_flags[I];	// _00
};

#endif
