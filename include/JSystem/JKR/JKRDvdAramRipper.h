#ifndef _JSYSTEM_JKR_JKRDVDARAMRIPPER_H
#define _JSYSTEM_JKR_JKRDVDARAMRIPPER_H

#include "types.h"
#include "JSystem/JKR/JKRDvdRipper.h"

struct JKRDvdAramRipper {
	static JKRAramBlock* loadToAram(char const*, u32, JKRExpandSwitch, u32, u32, u32*);
};

#endif
