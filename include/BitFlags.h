#ifndef _BITFLAGS_H
#define _BITFLAGS_H

#include "stream.h"
#include "types.h"

// TODO
struct BitFlags {
	u8* m_flagArr; // _00 flag array
	u16 _04;       // _04
	u16 m_flagCnt; // _06 flag count

	BitFlags();
	void dump();
	void read(Stream&);
	void write(Stream&);
	void create(u16, u8* flags);

	void reset();
	void all_zero();
	void all_one();

	inline void set_all(u8 value)
	{
		for (s32 i = 0; i < m_flagCnt; i++) {
			m_flagArr[i] = value;
		}
	}

	void setFlag(u16);
	void resetFlag(u16);
	bool isFlag(u16);
};

#endif
