#ifndef _VSFIFO_H
#define _VSFIFO_H

#include "types.h"
#include "Dolphin/os.h"
#include "Dolphin/gx.h"

struct VSFifo {
	VSFifo(size_t size);

	virtual ~VSFifo(); // _08

	void becomeCurrent();

	static bool isGPActive(); // should be weak

	static u8 mGpStatus[5];

	// _00 VTBL
	GXFifoObj* m_fifo; // _04
	void* m_base;      // _08
	u32 m_size;        // _0C
	u8 _10[0xC];       // _10, unknown
};

#endif