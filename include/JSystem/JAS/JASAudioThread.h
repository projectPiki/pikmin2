#ifndef _JSYSTEM_JAS_JASAUDIOTHREAD_H
#define _JSYSTEM_JAS_JASAUDIOTHREAD_H

#include "JSystem/JKR/JKRThread.h"

struct JASAudioThread : public JKRThread {
	JASAudioThread(int, int, unsigned long); // unused/inlined

	virtual ~JASAudioThread(); // _08 (weak)
	virtual void* run();       // _0C

	void create(long);
	void stop();
	void DMACallback();
	void DSPCallback(void*);

	// unused/inlined:
	void pause(bool);
	void bootDSP();
	void getCurrentVCounter();

	static JASAudioThread* sAudioThread;
};

#endif
