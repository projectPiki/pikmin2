#ifndef _VSFIFO_H
#define _VSFIFO_H

#include "types.h"

struct VSFifo {
	VSFifo(unsigned long);
	~VSFifo();

	void becomeCurrent();
	void isGPActive();

	u32 _00;       // _00
	int* m_gpFifo; // _04
	int* _08;      // _08
	int _0C;       // _0C
};

#endif
