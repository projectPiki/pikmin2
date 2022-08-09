#ifndef _JSYSTEM_JAS_JASOSCILLATOR_H
#define _JSYSTEM_JAS_JASOSCILLATOR_H

#include "types.h"

struct JASOscillator {
	struct Data {
		u8 _00[0x4]; // _00 - unknown
		float _04;   // _04
		u8 _08[0x4]; // _08 - unknown
		void* _0C;   // _0C - unknown pointer
		float _10;   // _10
		float _14;   // _14
		u8 _18[0x4]; // _18 - unknown/possibly padding
	};

	JASOscillator();

	void init();
	void initStart(const Data*);
	void incCounter();
	void getValue() const;
	void release();
	void calc(const short*);

	// unused/inlined
	void forceStop();

	Data* m_data; // _00
	float _04;    // _04
	float _08;    // _08
	float _0C;    // _0C
	float _10;    // _10
	float _14;    // _14
	short _18;    // _18
	short _1A;    // _1A
	u8 _1C;       // _1C
	u8 _1D;       // _1D
	u8 _1E[0x2];  // _1E - possibly padding
};

#endif
