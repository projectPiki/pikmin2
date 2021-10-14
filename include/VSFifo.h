#ifndef _VSFIFO_H
#define _VSFIFO_H

struct VSFifo {
	VSFifo(unsigned long);
	~VSFifo();

	void becomeCurrent();
	void isGPActive();
};

#endif
