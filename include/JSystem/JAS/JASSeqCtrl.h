#ifndef _JSYSTEM_JAS_JASSEQCTRL_H
#define _JSYSTEM_JAS_JASSEQCTRL_H

#include "types.h"

/**
 * @size = 0x48
 */
struct JASSeqCtrl {
	void init();
	void start(void*, u32);
	bool loopEnd();
	bool waitCountDown();
	bool callIntr(void*);
	bool retIntr();
	u16 get16(u32) const;
	u32 get24(u32) const;
	u32 get32(u32) const;
	u16 read16();
	u32 read24();

	// unused/inlined
	u32 read32();

	u8* _00;    // _00
	u8* _04;    // _04
	int _08;    // _08
	u32 _0C;    // _0C - unknown
	u8* _10[8]; // _10
	u16 _30[8]; // _30
	int _40;    // _40
	u8* _44;    // _44
};

#endif
