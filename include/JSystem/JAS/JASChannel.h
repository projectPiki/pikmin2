#ifndef _JSYSTEM_JAS_JASCHANNEL_H
#define _JSYSTEM_JAS_JASCHANNEL_H

#include "types.h"

// needs to be fleshed out in another header probably
namespace JASDsp {
struct TChannel;
} // namespace JASDsp

// TODO: flesh this struct out including vtable
struct JASChannel;

/**
 * @size = 0x4D
 */
struct JASChannelUpdater {
	JASChannelUpdater();

	void init();
	void initialUpdateChannel(JASChannel*, JASDsp::TChannel*);
	void updateChannel(JASChannel*, JASDsp::TChannel*);

	float _00;  // _00
	float _04;  // _04
	float _08;  // _08
	float _0C;  // _0C
	float _10;  // _10
	short _14;  // _14
	u16 _16[7]; // _16 - unknown
	short _24;  // _24
	u16 _26[3]; // _26 - unknown
	u8 _2C[8];  // _2C - unknown
	u16 _34;    // _34 - unknown
	short _36;  // _36
	short _38;  // _38
	short _3A;  // _3A
	short _3C;  // _3C
	u16 _3E;    // _3E - unknown
	u16 _40;    // _40 - unknown
	u8 _42[8];  // _42 - unknown
	u8 _4A;     // _4A
	u8 _4B;     // _4B
	u8 _4C;     // _4C
};

#endif
