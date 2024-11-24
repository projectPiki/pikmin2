#ifndef _PSSYSTEM_PSCOMMON_H
#define _PSSYSTEM_PSCOMMON_H

#include "P2Macros.h"

namespace PSSystem {

template <typename T>
struct SingletonBase {
	inline SingletonBase(T* inst) { sInstance = inst; }

	inline SingletonBase() { sInstance = static_cast<T*>(this); } // needed for things with multiple inheritances

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

// template <typename T>
// SingletonBase<T>::~SingletonBase()
// {
// 	sInstance = nullptr;
// }

struct IdLink : public JSULink<IdLink> {
	IdLink(u32 id)
	    : JSULink(this)
	    , mId(id)
	{
	}

	~IdLink() { }

	// _00-_10 = JSULink
	u32 mId; // _10
};

struct IdList : public JSUList<IdLink> {
	IdList() { }

	~IdList()
	{
		JSULink<IdLink>* link;
		while (link = (JSULink<IdLink>*)mHead) {
			remove(link);
			delete (IdLink*)link->getObjectPtr();
		}
	}

	inline void setNextLink()
	{
		JUT_ASSERTLINE(210, mNextLink, "リンクがありません"); // No link

		mNextLink = (PSSystem::IdLink*)mNextLink->getNext();
		if (!mNextLink) {
			mNextLink = (PSSystem::IdLink*)mHead;
		}
	}

	// _00-_0C = JSUList
	IdLink* mNextLink; // _0C
};

} // namespace PSSystem

#endif
