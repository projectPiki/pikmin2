#ifndef _MONOOBJECTMGR_H
#define _MONOOBJECTMGR_H

#include "types.h"
#include "ObjectMgr.h"

template <typename T>
struct MonoObjectMgr : public ObjectMgr<T> {
	MonoObjectMgr();

	virtual T* birth(); // _7C (weak)

	void kill(T* item);
	// virtual ~MonoObjectMgr() { }     // _08 (weak)
	virtual void* getNext(void* idx); // _14 (weak)
	virtual void* getStart();         // _18 (weak)
	virtual void* getEnd()            // _1C (weak)
	{
		return (void*)mMax;
	}
	virtual T* getAt(int index) // _24 (weak)
	{
		return &mArray[index];
	}
	virtual int getTo() // _28 (weak)
	{
		return mMax;
	}

	virtual void doAnimation();                 // _64 (weak, thunk at _34)
	virtual void doEntry();                     // _68 (weak, thunk at _38)
	virtual void doSetView(int viewportNumber); // _6C (weak, thunk at _3C)
	virtual void doViewCalc();                  // _70 (weak, thunk at _40)
	virtual void doSimulation(f32 timeStep);    // _74 (weak, thunk at _44)
	virtual void doDirectDraw(Graphics& gfx);   // _78 (weak, thunk at _48)

	virtual void resetMgr(); // _80 (weak, thunk at _54)
	virtual void clearMgr()  // _84 (weak)
	{
		mActiveCount = 0;
		for (int i = 0; i < mMax; i++) {
			mOpenIds[i] = true;
		}
	}
	virtual void onAlloc(); // _88 (weak)

	int getEmptyIndex();

	virtual T* get(void* idx) // _20 (weak)
	{
		return &mArray[(int)idx];
	}

	void alloc(int count);

	inline int getMax() const { return mMax; }
	inline void setFlag(int i, u32 flag) { mOpenIds[i] = flag; }
	inline u32 getFlag(int i) { return mOpenIds[i]; }

	// _00		= VTBL
	// _00-_20  = ObjectMgr
	int mActiveCount; // _20
	int mMax;         // _24
	T* mArray;        // _28
	u8* mOpenIds;     // _2C
};

template <typename T>
MonoObjectMgr<T>::MonoObjectMgr()
{
	_18          = 1;
	mMax         = 0;
	mActiveCount = 0;
	mArray       = nullptr;
	mOpenIds     = nullptr;
}

template <typename T>
void MonoObjectMgr<T>::alloc(int count)
{
	mArray       = new T[count];
	mMax         = count;
	mActiveCount = 0;
	mOpenIds     = new u8[count];

	for (int i = 0; i < count; i++) {
		setFlag(i, 1);
	}

	onAlloc();

	for (int i = 0; i < count; i++) {
		mArray[i].constructor();
	}
}

template <typename T>
void MonoObjectMgr<T>::onAlloc()
{
}

template <typename T>
void MonoObjectMgr<T>::kill(T* item)
{
	for (int i = 0; i < mMax; i++) {
		if (&mArray[i] == item) {
			mOpenIds[i] = true;
			mActiveCount--;
			return;
		}
	}
}

template <typename T>
void MonoObjectMgr<T>::resetMgr()
{
	mArray       = nullptr;
	mMax         = 0;
	mActiveCount = 0;
	mOpenIds     = nullptr;
}

template <typename T>
int MonoObjectMgr<T>::getEmptyIndex()
{
	for (int i = 0; i < mMax; i++) {
		if (mOpenIds[i] == true) {
			return i;
		}
	}
	return -1;
}

template <typename T>
T* MonoObjectMgr<T>::birth()
{
	int index = getEmptyIndex();
	if (index != -1) {
		T* result       = &mArray[index];
		mOpenIds[index] = 0;
		mActiveCount++;
		return result;
	}
	return nullptr;
}

template <typename T>
void MonoObjectMgr<T>::doAnimation() // _64 (weak, thunk at _34)
{
	for (int i = 0; i < mMax; i++) {
		if (mOpenIds[i] == false) {
			mArray[i].doAnimation();
		}
	}
}

template <typename T>
void MonoObjectMgr<T>::doEntry() // _68 (weak, thunk at _38)
{
	for (int i = 0; i < mMax; i++) {
		if (mOpenIds[i] == false) {
			mArray[i].doEntry();
		}
	}
}

template <typename T>
void MonoObjectMgr<T>::doSetView(int viewportNumber) // _6C (weak, thunk at _3C)
{
	for (int i = 0; i < mMax; i++) {
		if (mOpenIds[i] == false) {
			mArray[i].doSetView(viewportNumber);
		}
	}
}

template <typename T>
void MonoObjectMgr<T>::doViewCalc() // _70 (weak, thunk at _40)
{
	for (int i = 0; i < mMax; i++) {
		if (mOpenIds[i] == false) {
			mArray[i].doViewCalc();
		}
	}
}

template <typename T>
void MonoObjectMgr<T>::doSimulation(f32 timeStep) // _74 (weak, thunk at _44)
{
	for (int i = 0; i < mMax; i++) {
		if (mOpenIds[i] == false) {
			mArray[i].doSimulation(timeStep);
		}
	}
}

template <typename T>
void MonoObjectMgr<T>::doDirectDraw(Graphics& gfx) // _78 (weak, thunk at _48)
{
	for (int i = 0; i < mMax; i++) {
		if (mOpenIds[i] == false) {
			mArray[i].doDirectDraw(gfx);
		}
	}
}

template <typename T>
void* MonoObjectMgr<T>::getNext(void* idx) // _14 (weak)
{
	for (int i = (int)idx + 1; i < mMax; i++) {
		if (mOpenIds[i] == 0) {
			return (void*)i;
		}
	}

	return (void*)mMax;
}

template <typename T>
void* MonoObjectMgr<T>::getStart() // _18 (weak)
{
	return getNext((void*)-1);
}

// template <typename T>
// void* MonoObjectMgr<T>::getEnd()
// {
// 	return (void*)mMax;
// }

// template <typename T>
// T* MonoObjectMgr<T>::get(void* idx)
// {
// 	return &mArray[(int)idx];
// }

// template <typename T>
// T* MonoObjectMgr<T>::getAt(int index)
// {
// 	return &mArray[index];
// }

#endif
