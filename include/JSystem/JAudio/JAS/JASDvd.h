#ifndef _JSYSTEM_JAS_JASDVD_H
#define _JSYSTEM_JAS_JASDVD_H

#include "types.h"

struct JASTaskThread;

namespace JASDvd {

typedef void (*JASDvdCallback)(u32);

/**
 * @fabricated
 */
struct DVDThreadCheckBackArgs {
	u32 _00;            // _00
	u32* _04;           // _04
	JASDvdCallback _08; // _08
};

void checkPassDvdT(u32, u32*, JASDvdCallback);
bool createThread(s32, int, u32);
void dvdThreadCheckBack(void*);
JASTaskThread* getThreadPointer();

// unused/inlined:
void pauseDvdT();
void unpauseDvdT();

extern JASTaskThread* sThread;
} // namespace JASDvd

#endif
