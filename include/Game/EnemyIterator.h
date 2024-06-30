#ifndef _ENEMYITERATOR_H
#define _ENEMYITERATOR_H

#include "Container.h"
#include "Condition.h"

// TODO: Verify virtual functions
namespace Game {
template <typename T>
struct EnemyIterator {
	inline EnemyIterator<T>(GenericContainer* container, void* startIndex = 0, Condition<T>* condition = nullptr)
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
				if (mCondition->satisfy((T*)mContainer->getObject(mIndex))) {
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
				if (mCondition->satisfy((T*)mContainer->getObject(mIndex))) {
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
		return (T*)mContainer->getObject(mIndex);
	}
	///////////////// VTABLE END

	inline Iterator<T>& operator++()
	{
		mIndex = mContainer->getNext(mIndex);
		return *this;
	}

	inline bool satisfy() { return mCondition->satisfy(mContainer->get(mIndex)); }

	// VTBL _00
	void* mIndex;                 // _04
	GenericContainer* mContainer; // _08
	Condition<T>* mCondition;     // _0C
};
} // namespace Game
#endif
