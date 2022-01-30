#ifndef _MONOOBJECTMGR_H
#define _MONOOBJECTMGR_H

#include "types.h"
#include "ObjectMgr.h"

template <typename T> struct MonoObjectMgr : public ObjectMgr<T> {

	virtual void doAnimation() // _30 (thunk at _00)
	{
		for (int i = 0; i < m_max; i++) {
			if (m_openIds[i] == false) {
				reinterpret_cast<GenericObject*>(m_array[i])->doAnimation();
			}
		}
	}

	virtual void doEntry() // _34 (thunk at _04)
	{
		for (int i = 0; i < m_max; i++) {
			if (m_openIds[i] == false) {
				((GenericObject*)m_array[i])->doEntry();
			}
		}
	}

	virtual void doSetView(int viewNo) // _38 (thunk at _08)
	{
		for (int i = 0; i < m_max; i++) {
			if (m_openIds[i] == false) {
				((GenericObject*)m_array[i])->doSetView(viewNo);
			}
		}
	}

	virtual void doViewCalc() // _3C (thunk at _0C)
	{
		for (int i = 0; i < m_max; i++) {
			if (m_openIds[i] == false) {
				((GenericObject*)m_array[i])->doViewCalc();
			}
		}
	}

	virtual void doSimulation(float p1) // _40 (thunk at _10)
	{
		for (int i = 0; i < m_max; i++) {
			if (m_openIds[i] == false) {
				((GenericObject*)m_array[i])->doSimulation(p1);
			}
		}
	}

	virtual void doDirectDraw(Graphics& gfx) // _44 (thunk at _14)
	{
		for (int i = 0; i < m_max; i++) {
			if (m_openIds[i] == false) {
				((GenericObject*)m_array[i])->doDirectDraw(gfx);
			}
		}
	}

	virtual T* birth() // _48
	{
		int index = getEmptyIndex();
		T* result;
		if (index != -1) {
			m_openIds[index] = false;
			result           = m_array[index];
			m_activeCount++;
		} else {
			result = nullptr;
		}
		return result;
	}

	virtual void resetMgr() // _4C
	{
		m_array       = nullptr;
		m_max         = 0;
		m_activeCount = 0;
		m_openIds     = nullptr;
	}
	virtual void clearMgr() // _50
	{
		m_activeCount = 0;
		for (int i = 0; i < m_max; i++) {
			m_openIds[i] = true;
		}
	}
	virtual void onAlloc() { } // _54

	// TODO: Check if this matches
	void kill(T* item)
	{
		for (int i = 0; i < m_max; i++) {
			if (m_array[i] == item) {
				m_openIds[i] = true;
				m_activeCount--;
				return;
			}
		}
	}

	int getEmptyIndex()
	{
		for (int i = 0; i < m_max; i++) {
			if (m_openIds[i] == true) {
				return i;
			}
		}
		return -1;
	}

	int m_activeCount; // _20
	int m_max;         // _24
	T** m_array;       // _28
	s8* m_openIds;     // _2C
};

#endif
