#ifndef _PSSYSTEM_MUTEXLIST_H
#define _PSSYSTEM_MUTEXLIST_H

#include "Dolphin/os.h"
#include "JSystem/JSupport/JSUList.h"

namespace PSSystem {
template <typename T>
struct MutexList : public JSUList<T> {
	inline MutexList<T>()
	    : JSUList<T>()
	{
		OSInitMutex(&mMutex);
	}

	bool append_Lock(JSULink<T>* link);
	bool remove_Lock(JSULink<T>* link);

	// _00-_0C = JSUList
	OSMutex mMutex; // _0C
};

template <typename T>
bool MutexList<T>::append_Lock(JSULink<T>* link)
{
	OSLockMutex(&mMutex);
	bool result = append(link);
	OSUnlockMutex(&mMutex);
	return result;
}

template <typename T>
bool MutexList<T>::remove_Lock(JSULink<T>* link)
{
	OSLockMutex(&mMutex);
	bool result = remove(link);
	OSUnlockMutex(&mMutex);
	return result;
}
} // namespace PSSystem

#endif
