#ifndef _JSYSTEM_JAS_JASAUDIOTHREAD_H
#define _JSYSTEM_JAS_JASAUDIOTHREAD_H

#include "JSystem/JKernel/JKRThread.h"

enum JASAudioMessage {
	AUDIOMSG_DMA  = 0,
	AUDIOMSG_DSP  = 1,
	AUDIOMSG_Stop = 2,
};

/**
 * @size = 0x88
 */
struct JASAudioThread : public JKRThread {
	JASAudioThread(int, int, u32); // unused/inlined

	virtual ~JASAudioThread() { } // _08 (weak)
	virtual void* run();          // _0C

	static void DMACallback();
	static void DSPCallback(void*);

	static void create(s32);
	static void stop();

	// unused/inlined:
	void pause(bool);
	void bootDSP();
	void getCurrentVCounter();

	static JASAudioThread* sAudioThread;
	static OSThreadQueue sThreadQueue;
	static u32 sVFrameCounter;      // type unsure
	static volatile int snIntCount; // type unsure
	static bool sbPauseFlag;        // type unsure
};

#endif
