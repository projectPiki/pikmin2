#ifndef _JSYSTEM_JAS_JASDISPOSER_H
#define _JSYSTEM_JAS_JASDISPOSER_H

#include "types.h"

struct JASDisposer {
	virtual void onDispose() { } // _08 (weak)

	// _00 = VTBL
};

#endif
