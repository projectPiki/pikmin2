#ifndef _JSYSTEM_JUT_JUTGRAPHFIFO_H
#define _JSYSTEM_JUT_JUTGRAPHFIFO_H

#include "types.h"
#include "Dolphin/gx.h"

struct JUTGraphFifo {
	static JUTGraphFifo* sCurrentFifo;
	static u8 mGpStatus[5];

	u32 _00;
	GXFifoObj* m_fifo;
};

#endif
