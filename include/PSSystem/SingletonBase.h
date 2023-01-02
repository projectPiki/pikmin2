#ifndef _PSSYSTEM_SINGLETONBASE_H
#define _PSSYSTEM_SINGLETONBASE_H

#include "types.h"

namespace PSSystem {
template <typename T>
struct SingletonBase {

	SingletonBase(T* obj) { sInstance = obj; }

	virtual ~SingletonBase() { sInstance = nullptr; }; // _00

	// VTBL _00

	static T* sInstance;
};
} // namespace PSSystem

#endif
