#ifndef _JSYSTEM_JAS_JASRESARCLOADER_H
#define _JSYSTEM_JAS_JASRESARCLOADER_H

#include "Dolphin/os.h"
#include "JSystem/JKR/JKRArchive.h"
#include "types.h"

namespace JASResArcLoader {
typedef void (*LoadCallback)(u32, u32);

/** @fabricated */
struct CallbackArgs {
	JKRArchive* m_archive;   // _00
	u16 _04;                 // _04
	u8* _08;                 // _08
	u32 _0C;                 // _0C
	LoadCallback m_callback; // _10
	u32 _14;                 // _14
	OSMessageQueue* m_queue; // _18
};

size_t getResSize(JKRArchive*, u16);
void loadResourceCallback(void*);
int loadResource(JKRArchive*, u16, u8*, u32);
bool loadResourceAsync(JKRArchive*, u16, u8*, u32, LoadCallback, u32);
} // namespace JASResArcLoader

#endif
