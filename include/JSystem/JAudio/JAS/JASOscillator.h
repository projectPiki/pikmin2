#ifndef _JSYSTEM_JAS_JASOSCILLATOR_H
#define _JSYSTEM_JAS_JASOSCILLATOR_H

#include "types.h"

struct JASOscillator {
	struct Data {
		u32 _00;          // _00 - unknown
		f32 _04;          // _04
		short* _08;       // _08 - unknown
		const short* _0C; // _0C - unknown pointer
		f32 _10;          // _10
		f32 _14;          // _14
	};

	JASOscillator();

	void init();
	void initStart(const Data*);
	void incCounter();
	f32 getValue() const;
	bool release();
	f32 calc(const short*);

	// unused/inlined
	void forceStop();

	const Data* mData; // _00
	f32 _04;           // _04
	f32 _08;           // _08
	f32 _0C;           // _0C
	f32 _10;           // _10
	f32 _14;           // _14
	short _18;         // _18
	u16 _1A;           // _1A
	u8 _1C;            // _1C
	u8 _1D;            // _1D

	static const f32 relTableSampleCell[17];
	static const f32 relTableSqRoot[17];
	static const f32 relTableSquare[17];
	static const s16 oscTableForceStop[6];
};

#endif
