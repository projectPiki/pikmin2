#ifndef _JSYSTEM_JAS_JASAUDIOTHREAD_H
#define _JSYSTEM_JAS_JASAUDIOTHREAD_H

#include "JSystem/JKR/JKRThread.h"

/**
 * @size = 0x88
 */
struct JASAudioThread : public JKRThread {
	JASAudioThread(int, int, unsigned long); // unused/inlined

	virtual ~JASAudioThread(); // _08 (weak)
	virtual void* run();       // _0C

	void DMACallback();
	void DSPCallback(void*);

	static void create(long);
	static void stop();

	// unused/inlined:
	void pause(bool);
	void bootDSP();
	void getCurrentVCounter();

	static JASAudioThread* sAudioThread;
};

#endif
