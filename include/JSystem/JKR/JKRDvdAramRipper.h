#ifndef _JSYSTEM_JKR_JKRDVDARAMRIPPER_H
#define _JSYSTEM_JKR_JKRDVDARAMRIPPER_H

#include "types.h"
#include "JSystem/JKR/JKRDvdRipper.h"

struct JKRDvdAramRipper {
	static int loadToAram(char const*, ulong, JKRExpandSwitch, ulong, ulong,
	                      ulong*);
};

#endif
