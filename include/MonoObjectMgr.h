#ifndef _MONOOBJECTMGR_H
#define _MONOOBJECTMGR_H

#include "types.h"
#include "ObjectMgr.h"

// TODO: this needs fixing, sigh
template <typename T>
struct MonoObjectMgr : public ObjectMgr<T> {
	MonoObjectMgr();

	////////////////// VTABLE
	virtual ~MonoObjectMgr() { }  // _08 (weak)
	virtual void* getNext(void*); // _14 (weak)
	virtual void* getStart();     // _18 (weak)
	virtual void* getEnd();       // _1C (weak)
	virtual T* get(void*);        // _20 (weak)
	virtual T* getAt(int index)   // _24 (weak)
	{
		return &mArray[index];
	}
	virtual int getTo();       // _28 (weak)
	virtual void doAnimation() // _64 (weak, thunk at _34)
	{
		for (int i = 0; i < mMax; i++) {
			if (mOpenIds[i] == false) {
				reinterpret_cast<GenericObject*>(&mArray[i])->doAnimation();
			}
		}
	}
	virtual void doEntry() // _68 (weak, thunk at _38)
	{
		for (int i = 0; i < mMax; i++) {
			if (mOpenIds[i] == false) {
				reinterpret_cast<GenericObject*>(&mArray[i])->doEntry();
			}
		}
	}
	virtual void doSetView(int viewportNumber) // _6C (weak, thunk at _3C)
	{
		for (int i = 0; i < mMax; i++) {
			if (mOpenIds[i] == false) {
				reinterpret_cast<GenericObject*>(&mArray[i])->doSetView(viewportNumber);
			}
		}
	}
	virtual void doViewCalc() // _70 (weak, thunk at _40)
	{
		for (int i = 0; i < mMax; i++) {
			if (mOpenIds[i] == false) {
				reinterpret_cast<GenericObject*>(&mArray[i])->doViewCalc();
			}
		}
	}
	virtual void doSimulation(f32 p1) // _74 (weak, thunk at _44)
	{
		for (int i = 0; i < mMax; i++) {
			if (mOpenIds[i] == false) {
				reinterpret_cast<GenericObject*>(&mArray[i])->doSimulation(p1);
			}
		}
	}
	virtual void doDirectDraw(Graphics& gfx) // _78 (weak, thunk at _48)
	{
		for (int i = 0; i < mMax; i++) {
			if (mOpenIds[i] == false) {
				reinterpret_cast<GenericObject*>(&mArray[i])->doDirectDraw(gfx);
			}
		}
	}
	virtual T* birth() // _7C (weak)
	{
		int index = getEmptyIndex();
		T* result;
		if (index != -1) {
			mOpenIds[index] = false;
			result          = &mArray[index];
			mActiveCount++;
		} else {
			result = nullptr;
		}
		return result;
	}
	virtual void resetMgr() // _80 (weak, thunk at _54)
	{
		mArray       = nullptr;
		mMax         = 0;
		mActiveCount = 0;
		mOpenIds     = nullptr;
	}
	virtual void clearMgr() // _84 (weak)
	{
		mActiveCount = 0;
		for (int i = 0; i < mMax; i++) {
			mOpenIds[i] = true;
		}
	}
	virtual void onAlloc() { } // _88 (weak)
	////////////////// VTABLE END

	// TODO: Check if this matches
	void kill(T* item);
	// {
	// 	for (int i = 0; i < mMax; i++) {
	// 		if (&mArray[i] == item) {
	// 			mOpenIds[i] = true;
	// 			mActiveCount--;
	// 			return;
	// 		}
	// 	}
	// }

	int getEmptyIndex()
	{
		for (int i = 0; i < mMax; i++) {
			if (mOpenIds[i] == true) {
				return i;
			}
		}
		return -1;
	}

	void alloc(int);

	int mActiveCount; // _20
	int mMax;         // _24
	T* mArray;        // _28
	u8* mOpenIds;     // _2C
};

#endif
