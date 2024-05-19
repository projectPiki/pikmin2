#ifndef _JSYSTEM_JAS_JASRESARCLOADER_H
#define _JSYSTEM_JAS_JASRESARCLOADER_H

#include "Dolphin/os.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "types.h"

namespace JASResArcLoader {
typedef void (*LoadCallback)(u32, u32);

enum ResArcMessage {
	RESARCMSG_Error   = -1,
	RESARCMSG_Success = 0,
};

/** @fabricated */
struct CallbackArgs {
	inline CallbackArgs(u16 id, u8* buf, u32 size, JKRArchive* archive)
	    : mArchive(archive)
	    , mID(id)
	    , mBuffer(buf)
	    , mBufferSize(size)
	    , mCallback(nullptr)
	    , mCallbackArg(0)
	    , mQueue(nullptr)
	{
	}

	JKRArchive* mArchive;   // _00
	u16 mID;                // _04
	u8* mBuffer;            // _08
	u32 mBufferSize;        // _0C
	LoadCallback mCallback; // _10
	u32 mCallbackArg;       // _14, arg to pass to mCallback along with readResource result
	OSMessageQueue* mQueue; // _18
};

size_t getResSize(JKRArchive* archive, u16 resourceID);
static void loadResourceCallback(void* args);
int loadResource(JKRArchive* archive, u16 id, u8* buffer, u32 size);
int loadResourceAsync(JKRArchive* archive, u16 id, u8* buffer, u32 size, LoadCallback callback, u32 cbArg);
} // namespace JASResArcLoader

#endif
