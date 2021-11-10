#ifndef _JSYSTEM_JAS_JASINSTEFFECT_H
#define _JSYSTEM_JAS_JASINSTEFFECT_H

#include "types.h"

struct JASInstEffect {
	void setTarget(int);

	u32 _00;     // _00
	u8 m_target; // _04
};

#endif
