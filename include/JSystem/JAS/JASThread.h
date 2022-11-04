#ifndef _JSYSTEM_JAS_JASTHREAD_H
#define _JSYSTEM_JAS_JASTHREAD_H

#include "types.h"
#include "JSystem/JKR/JKRThread.h"

/**
 * @size = 0x88
 */
struct JASTaskThread : public JKRThread {
	JASTaskThread(int, int, u32);

	virtual ~JASTaskThread(); // _08
	virtual void* run();      // _0C

	int sendCmdMsg(void (*)(void*), const void*, u32);
	int sendCmdMsg(void (*)(void*), void*);

	// unused/inlined:
	void allocCallStack(void (*)(void*), const void*, unsigned long);
	void allocCallStack(void (*)(void*), void*);
	void pause(bool);

	OSThreadQueue _7C; // _7C
	u8 _84;            // _84
};

/**
 * @size = 0x88
 */
struct JASAudioThread : public JKRThread {
	virtual ~JASAudioThread(); // _08 (weak)
	virtual void* run();       // _0C

	void stop();
	void DMACallback();
	void DSPCallback(void*);

	static void create(long);
};

#endif
