#ifndef _PSSYSTEM_MUTEXLIST_H
#define _PSSYSTEM_MUTEXLIST_H

#include "Dolphin/os.h"
#include "JSystem/JSupport/JSUList.h"

namespace PSSystem {
template <typename T>
struct MutexList : JSUList<T> {
	inline MutexList<T>()
	    : JSUList<T>()
	{
		OSInitMutex(&mMutex);
	}

	bool append_Lock(JSULink<T>* link)
	{
		OSLockMutex(&mMutex);
		bool result = append(link);
		OSUnlockMutex(&mMutex);
		return result;
	}
	bool remove_Lock(JSULink<T>* link)
	{
		OSLockMutex(&mMutex);
		bool result = remove(link);
		OSUnlockMutex(&mMutex);
		return result;
	}

	OSMutex mMutex; // _0C
};
} // namespace PSSystem

#endif
