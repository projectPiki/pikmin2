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
	virtual void* getObject(void* index); // _10 (weak)

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
void* Container<T>::getObject(void* index)
{
	return get(index);
}

template <typename T>
struct ArrayContainer : public Container<T> {
	inline ArrayContainer()
	{
		_18      = 1;
		mLimit   = 0;
		mCount   = 0;
		mObjects = nullptr;
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
		return (void*)mCount;
	}

	virtual T* get(void* index) // _20 (weak)
	{
		return &mObjects[(s32)index];
	}

	virtual T* getAt(int index) // _24 (weak)
	{
		return &mObjects[index];
	}

	virtual int getTo() // _28 (weak)
	{
		return mLimit;
	}

	virtual void writeObject(Stream&, T&) { } // _2C (weak)
	virtual void readObject(Stream&, T&) { }  // _30 (weak)

	virtual void write(Stream& output) // _34 (weak)
	{
		output.textBeginGroup(const_cast<char*>(mName));
		output.textWriteTab(output.mTabCount);
		output.writeInt(mLimit);
		output.textWriteText("\r\n");
		for (int i = 0; i < mLimit; i++) {
			output.textWriteTab(output.mTabCount);
			writeObject(output, mObjects[i]);
			output.textWriteText("# %d/%d\r\n", i, mLimit);
		}
		output.textEndGroup();
	}

	virtual void read(Stream& output) // _38 (weak)
	{
		mLimit = output.readInt();
		alloc(mLimit);
		mCount = mLimit;
		for (int i = 0; i < mLimit; ++i) {
			readObject(output, mObjects[i]);
		}
	}

	virtual void alloc(int limit) // _3C (weak)
	{
		mObjects = new T[limit];
		mLimit   = limit;
		mCount   = 0;
	}

	virtual void addOne(T& object) // _40 (weak)
	{
		if (mCount >= mLimit) {
			return;
		}

		mObjects[mCount++] = object;
	}

	virtual void setArray(T* objects, int count) // _44 (weak)
	{
		mObjects = objects;
		mLimit   = count;
		mCount   = count;
	}
	/////////////////// END VTABLE

	int getNum() { return mCount; }

	// The number of used objects.
	int mCount; // _1C

	// The number of allocated objects.
	int mLimit; // _20

	// Pointer to the array of objects.
	T* mObjects; // _24
};

#endif
