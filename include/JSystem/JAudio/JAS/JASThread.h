#ifndef _JSYSTEM_JAS_JASTHREAD_H
#define _JSYSTEM_JAS_JASTHREAD_H

#include "JSystem/JAudio/JAS/JASKernel.h"
#include "types.h"
#include "JSystem/JKernel/JKRThread.h"
#include "JSystem/JAudio/JAS/JASGenericMemPool.h"

/**
 * @size = 0x88
 */
struct JASTaskThread : public JKRThread {
	typedef void (*RunFunction)(void*);

	struct JASThreadCallStack {
		RunFunction mRunFunc; // _00
		u32 _04;              // _04
		union {
			u8* mByteBuffer[0x400];
			void* mVoidBuffer;
		}; // _08, buffer
	};

	JASTaskThread(int, int, u32);

	virtual ~JASTaskThread(); // _08
	virtual void* run();      // _0C

	int sendCmdMsg(void (*)(void*), const void*, u32);
	int sendCmdMsg(void (*)(void*), void*);

	// unused/inlined:
	JASCmdHeap::Header* allocCallStack(void (*)(void*), const void*, u32);
	void* allocCallStack(void (*)(void*), void*);
	void pause(bool);

	OSThreadQueue _7C; // _7C
	u8 _84;            // _84
};

#endif
