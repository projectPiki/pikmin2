#ifndef _CONTAINER_H
#define _CONTAINER_H

#include "CNode.h"
#include "stream.h"

struct GenericContainer : public CNode {
	virtual ~GenericContainer() {};     // _00
	virtual void* getObject(void*) = 0; // _08
	virtual void* getNext(void*)   = 0; // _0C
	virtual void* getStart()       = 0; // _10
	virtual void* getEnd()         = 0; // _14
};

template <typename T> struct Container : public GenericContainer {
	inline Container() { _18 = 0; }

	virtual ~Container() {}; // _00

	// Wrapper for ::get().
	virtual void* getObject(void* index) // _08
	{
		return get(index);
	}
	// Gets the next occupied slot index after the given slot index.
	virtual void* getNext(void*); // _0C
	// Gets the first occupied slot index.
	virtual void* getStart(); // _10
	// Gets the slot count.
	virtual void* getEnd(); // _14
	// Gets the object at the given slot index (or null if not occupied).
	virtual T* get(void*); // _18
	// Gets the object at the given slot index (or null if not occupied)
	// (actually constrained to taking an int argument, instead of void*).
	virtual T* getAt(int index) // _1C
	{
		return nullptr;
	}
	// Gets the slot count.
	virtual int getTo() // _20
	{
		return 0;
	}

	u8 _18; // _18
	        // u8 _19[3]; // _19
};

template <typename T> struct ArrayContainer : public Container<T> {
	inline ArrayContainer()
	{
		_18       = 1;
		m_limit   = 0;
		m_count   = 0;
		m_objects = nullptr;
	}

	virtual ~ArrayContainer() { } // _00

	virtual T* get(void* index) // _18
	{
		return &m_objects[(s32)index];
	}
	virtual void* getNext(void* index) // _0C
	{
		return (void*)((s32)index + 1);
	}
	virtual void* getStart() // _10
	{
		return 0;
	}
	virtual void* getEnd() // _14
	{
		return (void*)m_count;
	}
	virtual T* getAt(int index) // _1C
	{
		return &m_objects[index];
	}
	virtual int getTo() // _20
	{
		return m_limit;
	}
	virtual void writeObject(Stream&, T&) {}; // _24
	virtual void readObject(Stream&, T&) {};  // _28
	virtual void write(Stream& output)        // _2C
	{
		output.textBeginGroup(const_cast<char*>(m_name));
		output.textWriteTab(output.m_tabCount);
		output.writeInt(m_limit);
		output.textWriteText("\r\n");
		for (int i = 0; i < m_limit; i++) {
			output.textWriteTab(output.m_tabCount);
			writeObject(output, m_objects[i]);
			output.textWriteText("# %d/%d\r\n", i, m_limit);
		}
		output.textEndGroup();
	}
	virtual void read(Stream& output) // _30
	{
		m_limit = output.readInt();
		alloc(m_limit);
		m_count = m_limit;
		for (int i = 0; i < m_limit; ++i) {
			readObject(output, m_objects[i]);
		}
	}
	virtual void alloc(int limit) // _34
	{
		m_objects = new T[limit];
		m_limit   = limit;
		m_count   = 0;
	}
	virtual void addOne(T& object) // _38
	{
		int index = m_count;
		if (index >= m_limit) {
			return;
		}
		T& arrayObject = m_objects[index];
		m_count++;
		arrayObject = object;
	}
	virtual void setArray(T* objects, int count) // _3C
	{
		m_objects = objects;
		m_limit   = count;
		m_count   = count;
	}

	// The number of used objects.
	int m_count; // _1C

	// The number of allocated objects.
	int m_limit; // _20

	// Pointer to the array of objects.
	T* m_objects; // _24
};

// template <> struct ArrayContainer<int> {
// 	virtual ~ArrayContainer();
// 	virtual void alloc(int);
// 	virtual void write()
// }

#endif
