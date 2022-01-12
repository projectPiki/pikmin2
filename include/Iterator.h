#ifndef _ITERATOR_H
#define _ITERATOR_H

#include "Container.h"
#include "Condition.h"

// TODO: Verify virtual functions
template <typename T> struct Iterator {
	inline Iterator<T>(Container<T>* container, int startIndex = 0, Condition<T>* condition = nullptr)
	    : m_condition(condition)
	{
		m_index     = startIndex;
		m_container = container;
	}

	virtual void first() // _00
	{
		if (m_condition == nullptr) {
			m_index = m_container->getStart();
		} else {
			m_index = m_container->getStart();
			while (!isDone()) {
				if (m_condition->satisfy(m_container->get(&m_index))) {
					return;
				}
				m_index = m_container->getNext(&m_index);
			}
		}
	}

	virtual void next() // _04
	{
		if (m_condition == nullptr) {
			m_index = m_container->getNext(&m_index);
		} else {
			m_index = m_container->getNext(&m_index);
			while (!isDone()) {
				if (m_condition->satisfy(m_container->get(&m_index))) {
					return;
				}
				m_index = m_container->getNext(&m_index);
			}
		}
	}

	virtual bool isDone() // _08
	{
		return (m_container->getEnd() == m_index);
	}

	virtual T* operator*() // _0C
	{
		return m_container->get(&m_index);
	}

	// VTBL _00
	int m_index;               // _04;
	Container<T>* m_container; // _08
	Condition<T>* m_condition; // _0C
};

#endif
