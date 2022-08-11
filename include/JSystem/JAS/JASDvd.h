#ifndef _JSYSTEM_JAS_JASDVD_H
#define _JSYSTEM_JAS_JASDVD_H

namespace JASDvd {
void checkPassDvdT(u32, u32*, void (*)(u32));
void createThread(long, int, u32);
void dvdThreadCheckBack(void*);
JASTaskThread* getThreadPointer();
} // namespace JASDvd

#endif
