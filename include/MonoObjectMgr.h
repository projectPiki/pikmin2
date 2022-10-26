#ifndef _MONOOBJECTMGR_H
#define _MONOOBJECTMGR_H

#include "types.h"
#include "ObjectMgr.h"

// TODO: this needs fixing, sigh
template <typename T>
struct MonoObjectMgr : public ObjectMgr<T> {

	////////////////// VTABLE
	virtual ~MonoObjectMgr();     // _08 (weak)
	virtual void* getNext(void*); // _14 (weak)
	virtual void* getStart();     // _18 (weak)
	virtual void* getEnd();       // _1C (weak)
	virtual T* get(void*);        // _20 (weak)
	virtual T* getAt(int);        // _24 (weak)
	virtual int getTo();          // _28 (weak)
	virtual void doAnimation()    // _64 (weak, thunk at _34)
	{
		for (int i = 0; i < m_max; i++) {
			if (m_openIds[i] == false) {
				reinterpret_cast<GenericObject*>(&m_array[i])->doAnimation();
			}
		}
	}
	virtual void doEntry() // _68 (weak, thunk at _38)
	{
		for (int i = 0; i < m_max; i++) {
			if (m_openIds[i] == false) {
				reinterpret_cast<GenericObject*>(&m_array[i])->doEntry();
			}
		}
	}
	virtual void doSetView(int viewNo) // _6C (weak, thunk at _3C)
	{
		for (int i = 0; i < m_max; i++) {
			if (m_openIds[i] == false) {
				reinterpret_cast<GenericObject*>(&m_array[i])->doSetView(viewNo);
			}
		}
	}
	virtual void doViewCalc() // _70 (weak, thunk at _40)
	{
		for (int i = 0; i < m_max; i++) {
			if (m_openIds[i] == false) {
				reinterpret_cast<GenericObject*>(&m_array[i])->doViewCalc();
			}
		}
	}
	virtual void doSimulation(float p1) // _74 (weak, thunk at _44)
	{
		for (int i = 0; i < m_max; i++) {
			if (m_openIds[i] == false) {
				reinterpret_cast<GenericObject*>(&m_array[i])->doSimulation(p1);
			}
		}
	}
	virtual void doDirectDraw(Graphics& gfx) // _78 (weak, thunk at _48)
	{
		for (int i = 0; i < m_max; i++) {
			if (m_openIds[i] == false) {
				reinterpret_cast<GenericObject*>(&m_array[i])->doDirectDraw(gfx);
			}
		}
	}
	virtual T* birth() // _7C (weak)
	{
		int index = getEmptyIndex();
		T* result;
		if (index != -1) {
			m_openIds[index] = false;
			result           = &m_array[index];
			m_activeCount++;
		} else {
			result = nullptr;
		}
		return result;
	}
	virtual void resetMgr() // _80 (weak, thunk at _54)
	{
		m_array       = nullptr;
		m_max         = 0;
		m_activeCount = 0;
		m_openIds     = nullptr;
	}
	virtual void clearMgr() // _84 (weak)
	{
		m_activeCount = 0;
		for (int i = 0; i < m_max; i++) {
			m_openIds[i] = true;
		}
	}
	virtual void onAlloc() { } // _88 (weak)
	////////////////// VTABLE END

	// TODO: Check if this matches
	void kill(T* item)
	{
		for (int i = 0; i < m_max; i++) {
			if (&m_array[i] == item) {
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
	T* m_array;        // _28
	s8* m_openIds;     // _2C
};

#endif
