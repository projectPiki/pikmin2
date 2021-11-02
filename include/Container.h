#ifndef _CONTAINER_H
#define _CONTAINER_H

#include "CNode.h"

template <typename T> struct Container : public CNode {
	// Wrapper for ::get().
	virtual T* getObject(int);
	// Gets the next occupied slot index after the given slot index.
	virtual int getNext(int);
	// Gets the first occupied slot index.
	virtual int getStart();
	// Gets the slot count.
	virtual int getEnd();
	// Gets the object at the given slot index (or null if not occupied).
	virtual T* get(int);
	// Gets the object at the given slot index (or null if not occupied) (actually constrained to taking an int argument, instead of void*).
	virtual T* getAt(void*);
	// Gets the slot count.
	virtual int getTo();

	u8 _18;    // _18
	u8 _19[3]; // _19
};

#endif
