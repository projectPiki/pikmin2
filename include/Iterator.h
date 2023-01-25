#ifndef _ITERATOR_H
#define _ITERATOR_H

#include "Container.h"
#include "Condition.h"

// TODO: Verify virtual functions
template <typename T>
struct Iterator {
	inline Iterator<T>(Container<T>* container, void* startIndex = 0, Condition<T>* condition = nullptr)
	    : mCondition(condition)
	{
		mIndex     = startIndex;
		mContainer = container;
	}

	///////////////// VTABLE
	virtual void first() // _08
	{
		if (mCondition == nullptr) {
			mIndex = mContainer->getStart();
		} else {
			mIndex = mContainer->getStart();
			while (!isDone()) {
				if (mCondition->satisfy(mContainer->get(mIndex))) {
					return;
				}
				mIndex = mContainer->getNext(mIndex);
			}
		}
	}
	virtual void next() // _0C
	{
		if (mCondition == nullptr) {
			mIndex = mContainer->getNext(mIndex);
		} else {
			mIndex = mContainer->getNext(mIndex);
			while (!isDone()) {
				if (mCondition->satisfy(mContainer->get(mIndex))) {
					return;
				}
				mIndex = mContainer->getNext(mIndex);
			}
		}
	}
	virtual bool isDone() // _10
	{
		return (mIndex == mContainer->getEnd());
	}
	virtual T* operator*() // _14
	{
		return mContainer->get(mIndex);
	}
	///////////////// VTABLE END

	inline Iterator<T>& operator++()
	{
		mIndex = mContainer->getNext(mIndex);
		return *this;
	}

	inline bool satisfy() { return mCondition->satisfy(mContainer->get(mIndex)); }

	// VTBL _00
	void* mIndex;             // _04;
	Container<T>* mContainer; // _08
	Condition<T>* mCondition; // _0C
};

#endif
