#ifndef _JSYSTEM_JAS_JASPROBE_H
#define _JSYSTEM_JAS_JASPROBE_H

#include "types.h"

struct JASProbe {
	JASProbe(); // unused/inlined

	// unused/inlined:
	void reset();
	void start(char*);
	void stop();

	char* mName;    // _00
	s32 mStartTime; // _04
	f32 _08;        // _08
	f32 _0C;        // _0C
	f32 _10;        // _10
	f32 _14;        // _14
	f32 _18[100];   // _18
	u32 _1A8;       // _1A8
};

#endif
