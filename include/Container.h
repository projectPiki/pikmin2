#ifndef _CONTAINER_H
#define _CONTAINER_H

#include "CNode.h"
#include "stream.h"

struct GenericContainer : public CNode {
	/**
	 * @reifiedAddress{8010A900}
	 * @reifiedFile{plugProjectYamashitaU/pelplant.cpp}
	 */
	// virtual ~GenericContainer() { }     // _08 (weak)
	virtual void* getObject(void*) = 0; // _10
	virtual void* getNext(void*)   = 0; // _14
	virtual void* getStart()       = 0; // _18
	virtual void* getEnd()         = 0; // _1C
};

template <typename T>
struct Container : public GenericContainer {
	inline Container() { _18 = 0; }

	/////////////////// VTABLE
	// virtual ~Container() { } // _08 (weak)

	// Wrapper for ::get().
	virtual void* getObject(void* index) // _10 (weak)
	{
		return get(index);
	}

	virtual void* getEnd()       = 0; // _1C
	virtual void* getStart()     = 0; // _18
	virtual void* getNext(void*) = 0; // _14
	virtual T* get(void*)        = 0; // _20
	// Gets the object at the given slot index (or null if not occupied)
	// (actually constrained to taking an int argument, instead of void*).
	virtual T* getAt(int index) // _24 (weak)
	{
		return nullptr;
	}
	// Gets the slot count.
	virtual int getTo() // _28 (weak)
	{
		return 0;
	}
	/////////////////// END VTABLE

	u8 _18; // _18
};

template <typename T>
struct ArrayContainer : public Container<T> {
	inline ArrayContainer()
	{
		_18       = 1;
		m_limit   = 0;
		m_count   = 0;
		m_objects = nullptr;
	}

	/////////////////// VTABLE
	virtual ~ArrayContainer() { } // _08 (weak)

	virtual void* getNext(void* index) // _14 (weak)
	{
		return (void*)((s32)index + 1);
	}

	virtual void* getStart() // _18 (weak)
	{
		return 0;
	}

	virtual void* getEnd() // _1C (weak)
	{
		return (void*)m_count;
	}

	virtual T* get(void* index) // _20 (weak)
	{
		return &m_objects[(s32)index];
	}

	virtual T* getAt(int index) // _24 (weak)
	{
		return &m_objects[index];
	}

	virtual int getTo() // _28 (weak)
	{
		return m_limit;
	}

	virtual void writeObject(Stream&, T&) { } // _2C (weak)
	virtual void readObject(Stream&, T&) { }  // _30 (weak)

	virtual void write(Stream& output) // _34 (weak)
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

	virtual void read(Stream& output) // _38 (weak)
	{
		m_limit = output.readInt();
		alloc(m_limit);
		m_count = m_limit;
		for (int i = 0; i < m_limit; ++i) {
			readObject(output, m_objects[i]);
		}
	}

	virtual void alloc(int limit) // _3C (weak)
	{
		m_objects = new T[limit];
		m_limit   = limit;
		m_count   = 0;
	}

	virtual void addOne(T& object) // _40 (weak)
	{
		int index = m_count;
		if (index >= m_limit) {
			return;
		}
		T& arrayObject = m_objects[index];
		m_count++;
		arrayObject = object;
	}

	virtual void setArray(T* objects, int count) // _44 (weak)
	{
		m_objects = objects;
		m_limit   = count;
		m_count   = count;
	}
	/////////////////// END VTABLE

	// The number of used objects.
	int m_count; // _1C

	// The number of allocated objects.
	int m_limit; // _20

	// Pointer to the array of objects.
	T* m_objects; // _24
};

#endif
