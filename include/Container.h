#ifndef _CONTAINER_H
#define _CONTAINER_H

#include "CNode.h"
#include "stream.h"

template <typename T> struct Container : public CNode {
	virtual ~Container();

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
	// Gets the object at the given slot index (or null if not occupied)
	// (actually constrained to taking an int argument, instead of void*).
	virtual T* getAt(void*);
	// Gets the slot count.
	virtual int getTo();

	u8 _18; // _18
	        // u8 _19[3]; // _19
};

template <typename T> struct ArrayContainer : public Container<T> {
	virtual void writeObject(Stream&, T&) {};
	virtual void readObject(Stream&, T&) {};
	virtual void write(Stream&);
	virtual void read(Stream&);
	virtual void alloc(int);
	virtual void addOne(T&);
	virtual void setArray(T*, int);

	int m_endIndex; // _1C
	int _20;        // _20
	T* m_objects;   // _24
};

// template <> struct ArrayContainer<int> {
// 	virtual ~ArrayContainer();
// 	virtual void alloc(int);
// 	virtual void write()
// }

#endif
