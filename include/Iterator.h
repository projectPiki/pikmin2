#ifndef _ITERATOR_H
#define _ITERATOR_H

#include "Container.h"
#include "Condition.h"

// TODO: Verify virtual functions
template <typename T>
struct Iterator {
	inline Iterator<T>(Container<T>* container, void* startIndex = 0, Condition<T>* condition = nullptr)
	    : m_condition(condition)
	{
		m_index     = startIndex;
		m_container = container;
	}

	///////////////// VTABLE
	virtual void first() // _08
	{
		if (m_condition == nullptr) {
			m_index = m_container->getStart();
		} else {
			m_index = m_container->getStart();
			while (!isDone()) {
				if (m_condition->satisfy(m_container->get(m_index))) {
					return;
				}
				m_index = m_container->getNext(m_index);
			}
		}
	}
	virtual void next() // _0C
	{
		if (m_condition == nullptr) {
			m_index = m_container->getNext(m_index);
		} else {
			m_index = m_container->getNext(m_index);
			while (!isDone()) {
				if (m_condition->satisfy(m_container->get(m_index))) {
					return;
				}
				m_index = m_container->getNext(m_index);
			}
		}
	}
	virtual bool isDone() // _10
	{
		return (m_index == m_container->getEnd());
	}
	virtual T* operator*() // _14
	{
		return m_container->get(m_index);
	}
	///////////////// VTABLE END

	inline Iterator<T>& operator++()
	{
		m_index = m_container->getNext(m_index);
		return *this;
	}

	inline bool satisfy() { return m_condition->satisfy(m_container->get(m_index)); }

	// VTBL _00
	void* m_index;             // _04;
	Container<T>* m_container; // _08
	Condition<T>* m_condition; // _0C
};

#endif
