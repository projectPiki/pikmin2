#ifndef _BITFLAG_H
#define _BITFLAG_H

#include "types.h"
#include "stream.h"

template <typename T>
struct BitFlag {
	BitFlag()
	{
		for (int i = 0; i < sizeof(T); i++) {
			byteView[i] = 0;
		}
	}

	inline void clear()
	{
		for (int i = 0; i < sizeof(T); i++) {
			byteView[i] = 0;
		}
	}

	inline void readBytes(Stream& stream)
	{
		for (int i = 0; i < sizeof(T); i++) {
			byteView[i] = stream.readByte();
		}
	}

	inline void writeBytes(Stream& stream)
	{
		for (int i = 0; i < sizeof(T); i++) {
			stream.writeByte(byteView[i]);
		}
	}

	union {
		u8 byteView[sizeof(T)];
		T typeView;
	};
};

template <typename T, int I>
struct BitFlagArray {
	inline BitFlagArray()
	{
		for (int i = 0; i < I; i++) {
			for (int j = 0; j < sizeof(T); j++) {
				mFlags[i].byteView[j] = 0;
			}
		}
	}

	inline void clear()
	{
		for (int i = 0; i < I; i++) {
			for (int j = 0; j < sizeof(T); j++) {
				mFlags[i].byteView[j] = 0;
			}
		}
	}

	BitFlag<T> mFlags[I]; // _00
};

#endif
