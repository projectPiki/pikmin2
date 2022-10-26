#ifndef _CONDITION_H
#define _CONDITION_H

template <typename T>
struct Condition {
	virtual bool satisfy(T*) = 0; // _08

	// VTBL _00
};

#endif
