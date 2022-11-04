#ifndef _JSYSTEM_JAS_JASPROBE_H
#define _JSYSTEM_JAS_JASPROBE_H

#include "types.h"

struct JASProbe {
	JASProbe(); // unused/inlined

	// unused/inlined:
	void reset();
	void start(char*);
	void stop();

	char* m_name;     // _00
	long m_startTime; // _04
	float _08;        // _08
	float _0C;        // _0C
	float _10;        // _10
	float _14;        // _14
	float _18[100];   // _18
	u32 _1A8;         // _1A8
};

#endif
