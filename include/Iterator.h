#ifndef _ITERATOR_H
#define _ITERATOR_H

template <typename T> struct Container;
template <typename T> struct Condition;

template <typename T> struct Iterator {

	virtual T* first();     // _00
	virtual T* next();      // _04
	virtual bool isDone();  // _08
	virtual T* operator*(); // _0C

	// VTBL _00
	int m_index;               // _04;
	Container<T>* m_container; // _08
	Condition<T>* m_condition; // _0C
};

#endif
