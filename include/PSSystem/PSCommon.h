#ifndef _PSSYSTEM_PSCOMMON_H
#define _PSSYSTEM_PSCOMMON_H

#include "P2Macros.h"

namespace PSSystem {

template <typename T>
struct SingletonBase {

	// inline SingletonBase()
	static inline T* newInstance()
	{
		P2ASSERTLINE(118, !SingletonBase<T>::sInstance);
		if (!SingletonBase<T>::sInstance) {
			SingletonBase<T>::sInstance = new T;
		}
		P2ASSERTLINE(121, SingletonBase<T>::sInstance);
		return SingletonBase<T>::sInstance;
	}

	// SingletonBase(T* obj) { sInstance = obj; }

	virtual ~SingletonBase() { sInstance = nullptr; }; // _00

	static inline T* getInstance()
	{
		P2ASSERTLINE(137, SingletonBase<T>::sInstance);
		return SingletonBase<T>::sInstance;
	}

	// VTBL _00

	static T* sInstance;
};

// static inline PSM::ObjCalcBase* getObjCalcBaseInstance()
// {
// 	P2ASSERTLINE(137, SingletonBase<PSM::ObjCalcBase>::sInstance);
// 	return SingletonBase<PSM::ObjCalcBase>::sInstance;
// }
} // namespace PSSystem

#endif
