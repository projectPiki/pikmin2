#ifndef _PSSYSTEM_PSCOMMON_H
#define _PSSYSTEM_PSCOMMON_H

#include "P2Macros.h"

namespace PSSystem {

template <typename T>
struct SingletonBase {
	inline SingletonBase(T* inst) { sInstance = inst; }

	inline SingletonBase() { sInstance = static_cast<T*>(this); } // needed for ConductorList

	static inline T* newInstance()
	{
		P2ASSERTLINE(118, !SingletonBase<T>::sInstance);
		if (!SingletonBase<T>::sInstance) {
			SingletonBase<T>::sInstance = new T;
		}
		P2ASSERTLINE(121, SingletonBase<T>::sInstance);
		return SingletonBase<T>::sInstance;
	}

	// used for ConductorList
	static inline T* newHeapInstance()
	{
		P2ASSERTLINE(126, !SingletonBase<T>::sInstance);
		if (!SingletonBase<T>::sInstance) {
			SingletonBase<T>::sInstance = new (JKRGetCurrentHeap(), -4) T;
		}
		P2ASSERTLINE(129, SingletonBase<T>::sInstance);
		return SingletonBase<T>::sInstance;
	}

	virtual ~SingletonBase() { sInstance = nullptr; }; // _00

	static inline T* getInstance()
	{
		P2ASSERTLINE(137, SingletonBase<T>::sInstance);
		return SingletonBase<T>::sInstance;
	}

	// VTBL _00

	static T* sInstance;
};
} // namespace PSSystem

#endif
