#ifndef _ITERATOR_H
#define _ITERATOR_H

#include "Container.h"
#include "Condition.h"

/**
 * @brief A generic iterator struct for iterating over a container.
 *
 * @tparam T The type of elements in the container.
 */
template <typename T>
struct Iterator {
	/**
	 * @brief Constructs an Iterator object.
	 *
	 * @param container Pointer to the container to iterate over.
	 * @param startIndex Optional parameter specifying the starting index of the iteration.
	 * @param condition Optional condition to filter the elements during iteration.
	 */
	inline Iterator<T>(Container<T>* container, void* startIndex = 0, Condition<T>* condition = nullptr)
	    : mCondition(condition)
	{
		mIndex     = startIndex;
		mContainer = container;
	}

	/**
	 * @brief Moves the iterator to the first element in the container.
	 * If a condition is specified, it finds the first element that satisfies the condition.
	 */
	virtual void first() // _08
	{
		if (mCondition == nullptr) {
			mIndex = mContainer->getStart();
			return;
		}

		mIndex = mContainer->getStart();
		while (!isDone()) {
			if (mCondition->satisfy(mContainer->get(mIndex))) {
				return;
			}
			mIndex = mContainer->getNext(mIndex);
		}
	}

	/**
	 * @brief Moves the iterator to the next element in the container.
	 * If a condition is specified, it finds the next element that satisfies the condition.
	 */
	virtual void next() // _0C
	{
		if (mCondition == nullptr) {
			mIndex = mContainer->getNext(mIndex);
			return;
		}

		mIndex = mContainer->getNext(mIndex);
		while (!isDone()) {
			if (mCondition->satisfy(mContainer->get(mIndex))) {
				return;
			}
			mIndex = mContainer->getNext(mIndex);
		}
	}

	/**
	 * @brief Checks if the iterator has reached the end of the container.
	 *
	 * @return true if the iterator has reached the end, false otherwise.
	 */
	virtual bool isDone() // _10
	{
		return mIndex == mContainer->getEnd();
	}

	/**
	 * @brief Dereferences the iterator and returns a pointer to the current element.
	 *
	 * @return Pointer to the current element.
	 */
	virtual T* operator*() // _14
	{
		return mContainer->get(mIndex);
	}

	/**
	 * @brief Pre-increments the iterator to the next element in the container.
	 *
	 * @return Reference to the incremented iterator.
	 */
	inline Iterator<T>& operator++()
	{
		mIndex = mContainer->getNext(mIndex);
		return *this;
	}

	/**
	 * @brief Checks if the current element satisfies the condition.
	 *
	 * @return true if the current element satisfies the condition, false otherwise.
	 */
	inline bool satisfy() { return mCondition->satisfy(mContainer->get(mIndex)); }

	void* mIndex;             // _04;
	Container<T>* mContainer; // _08
	Condition<T>* mCondition; // _0C
};

#endif
