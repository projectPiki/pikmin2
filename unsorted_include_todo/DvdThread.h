#ifndef _DVDTHREAD_H
#define _DVDTHREAD_H

/*
    __vt__9DvdThread:
    .4byte 0
    .4byte 0
    .4byte __dt__9DvdThreadFv
    .4byte run__9DvdThreadFv
*/

struct DvdThread {
	virtual ~DvdThread(); // _08 (weak)
	virtual void run();   // _0C

	DvdThread(unsigned long, int, int);
	void loadArchive(DvdThreadCommand*);
	void loadFile(DvdThreadCommand*);
	void sendCommand(DvdThreadCommand*);
	void sync(DvdThreadCommand*, DvdThread::ESyncBlockFlag);
	void syncAll(DvdThread::ESyncBlockFlag);
};

#endif
