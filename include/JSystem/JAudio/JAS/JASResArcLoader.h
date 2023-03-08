#ifndef _JSYSTEM_JAS_JASRESARCLOADER_H
#define _JSYSTEM_JAS_JASRESARCLOADER_H

#include "Dolphin/os.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "types.h"

namespace JASResArcLoader {
typedef void (*LoadCallback)(u32, u32);

/** @fabricated */
struct CallbackArgs {
	inline CallbackArgs(u16 arg4, u8* arg8, u32 argC, JKRArchive* archive)
	    : mArchive(archive)
	    , _04(arg4)
	    , _08(arg8)
	    , _0C(argC)
	    , mCallback(nullptr)
	    , _14(0)
	    , mQueue(nullptr)
	{
	}

	JKRArchive* mArchive;   // _00
	u16 _04;                // _04
	u8* _08;                // _08
	u32 _0C;                // _0C
	LoadCallback mCallback; // _10
	u32 _14;                // _14
	OSMessageQueue* mQueue; // _18
};

size_t getResSize(JKRArchive*, u16);
static void loadResourceCallback(void*);
int loadResource(JKRArchive*, u16, u8*, u32);
int loadResourceAsync(JKRArchive*, u16, u8*, u32, LoadCallback, u32);
} // namespace JASResArcLoader

#endif
