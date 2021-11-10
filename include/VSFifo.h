#ifndef _VSFIFO_H
#define _VSFIFO_H

#include "types.h"
#include "Dolphin/gx.h"

struct VSFifo {
	VSFifo(unsigned long);
	virtual ~VSFifo();      // _00
	virtual void _04() = 0; // _04
	virtual void _08() = 0; // _08
	virtual void _0C() = 0; // _0C
	virtual void _10() = 0; // _10
	virtual void _14() = 0; // _14
	virtual void _18() = 0; // _18
	virtual void _1C() = 0; // _1C

	void becomeCurrent();
	void isGPActive();

	static u8 mGpStatus[5];

	// _00 VTBL
	GXFifoObj* m_fifo; // _04
	void* m_base;      // _08
	u32 m_size;        // _0C
};

#endif
