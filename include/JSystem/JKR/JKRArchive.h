#ifndef _JSYSTEM_JKRARCHIVE_H
#define _JSYSTEM_JKRARCHIVE_H

#include "JSystem/JKR/JKRHeap.h"
#include "types.h"

struct JKRArchive {
	enum EMountMode { EMM_Unk0 = 0, EMM_Unk1, EMM_Unk2 };
	enum EMountDirection { EMD_Unk0 = 0, EMD_Unk1, EMD_Unk2 };

	// TODO: determine return type
	static u32* mount(char const*, JKRArchive::EMountMode, JKRHeap*,
	                  JKRArchive::EMountDirection);
};

#endif