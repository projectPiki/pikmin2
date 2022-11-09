#ifndef _JSYSTEM_JAS_JASOSCILLATOR_H
#define _JSYSTEM_JAS_JASOSCILLATOR_H

#include "types.h"

struct JASOscillator {
	struct Data {
		u32 _00;    // _00 - unknown
		float _04;  // _04
		short* _08; // _08 - unknown
		short* _0C; // _0C - unknown pointer
		float _10;  // _10
		float _14;  // _14
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

	const Data* m_data; // _00
	float _04;          // _04
	float _08;          // _08
	float _0C;          // _0C
	float _10;          // _10
	float _14;          // _14
	short _18;          // _18
	u16 _1A;            // _1A
	u8 _1C;             // _1C
	u8 _1D;             // _1D

	static const f32 relTableSampleCell[17];
	static const f32 relTableSqRoot[17];
	static const f32 relTableSquare[17];
	static const s16 oscTableForceStop[6];
};

#endif
