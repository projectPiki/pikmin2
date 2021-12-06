#ifndef _JSYSTEM_JUT_JUTGRAPHFIFO_H
#define _JSYSTEM_JUT_JUTGRAPHFIFO_H

#include "types.h"
#include "Dolphin/gx.h"

struct JUTGraphFifo {
	JUTGraphFifo(ulong);

	virtual ~JUTGraphFifo(); // _00

	void becomeCurrent();
	void setBreakPt();

	static JUTGraphFifo* sCurrentFifo;
	static u8 mGpStatus[5];

	GXFifoObj* m_fifo;
};

#endif
