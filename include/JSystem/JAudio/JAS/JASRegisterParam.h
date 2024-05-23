#ifndef _JSYSTEM_JAS_JASREGISTERPARAM_H
#define _JSYSTEM_JAS_JASREGISTERPARAM_H

#include "types.h"

/**
 * @size = 0x30
 */
struct JASRegisterParam {
	JASRegisterParam();

	void init();
	void inherit(const JASRegisterParam&);
	u8 getBankNumber() const;
	u8 getProgramNumber() const;

	// unused/inlined:
	void setFlag(u16);
	void setBankNumber(u8);

	u16 _00[6]; // _00 - unknown
	u16 _0C;    // _0C - bankAndProgramNumber?
	u16 _0E;    // _0E - unknown
	u16 _10;    // _10
	u16 _12;    // _12
	u16 _14;    // _14
	u16 _16[2]; // _16 - unknown
	u16 _1A;    // _1A
	u8 _1C[4];  // _1C - unknown
	u32 _20[4]; // _20
};

#endif
