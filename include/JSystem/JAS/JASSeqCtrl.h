#ifndef _JSYSTEM_JAS_JASSEQCTRL_H
#define _JSYSTEM_JAS_JASSEQCTRL_H

#include "types.h"

/**
 * @size = 0x48
 */
struct JASSeqCtrl {
	void init();
	void start(void*, u32);
	void loopEnd();
	void waitCountDown();
	void callIntr(void*);
	void retIntr();
	void get16(u32) const;
	void get24(u32) const;
	void get32(u32) const;
	void read16();
	void read24();

	// void read32(); - unused/inlined

	void* _00; // _00 - unknown ptr
	u8* _04;   // _04
	int _08;   // _08
	u32 _0C;   // _0C - unknown
	void* _10; // _10 - unknown pointer
	u32 _14;   // _14
	u32 _18;   // _18
	u32 _1C;   // _1C
	u32 _20;   // _20
	u32 _24;   // _24
	u32 _28;   // _28
	u16 _2C;   // _2C - unknown
	u16 _2E;   // _2E
	void* _30; // _30 - unknown pointer
	u16 _34;   // _34
	u16 _36;   // _36
	u16 _38;   // _38
	u16 _3A;   // _3A
	u16 _3C;   // _3C
	u16 _3E;   // _3E
	int _40;   // _40
	u32 _44;   // _44
};

#endif
