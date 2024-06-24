#ifndef _JSYSTEM_JGADGET_ENUMERATOR_H
#define _JSYSTEM_JGADGET_ENUMERATOR_H

#include "types.h"
#include "JSystem/JGadget/linklist.h"
#include "JSystem/JGadget/vector.h"

namespace JGadget {
template <typename Element>
struct TEnumerator {
	inline TEnumerator(Element current, Element end)
	    : mCurrent(current)
	    , mEnd(end)
	{
	}

	Element operator*()
	{
		Element result = mCurrent;
		++mCurrent;
		return result;
	}

	bool isEnd() const { return mCurrent != mEnd; }

	operator bool() const { return isEnd(); }

	Element mCurrent; // _00
	Element mEnd;     // _[size of Element]
};

// This is from Wind Waker:
// TEnumerator2 should be the same but there are two issues:
// 1. How to derive the iterator return type for operator* (the debug makes it seem like operator* is called
// so the return value should be what the iterator points to)
// 2. Calling the * operator seems to make functions using TEnumerator<T*> not work. See
// JStudio::TAdaptor::adaptor_setVariableValue_n
// Perhaps template specialization?
template <typename Iterator, typename T>
struct TEnumerator2 {
	inline TEnumerator2(Iterator current, Iterator end)
	    : mCurrent(current)
	    , mEnd(end)
	{
	}

	T& operator*()
	{
		T& result = *mCurrent;
		++mCurrent;
		return result;
	}

	bool isEnd() const { return mCurrent != mEnd; }

	operator bool() const { return isEnd(); }

	Iterator mCurrent; // _00
	Iterator mEnd;     // _04
};

template <typename T, int I>
struct TContainerEnumerator : public TEnumerator2<TLinkList<T, I>::iterator, T> {
	TContainerEnumerator(TLinkList<T, I>* list)
	    : TEnumerator2<TLinkList<T, I>::iterator, T>(list->begin(), list->end())
	{
	}

	// _00-_08 - TEnumerator2
};

template <typename T, int I>
struct TContainerEnumerator_const : public TEnumerator2<TLinkList<T, I>::const_iterator, const T> {
	inline TContainerEnumerator_const(const TLinkList<T, I>* list)
	    : TEnumerator2<TLinkList<T, I>::const_iterator, const T>(list->begin(), list->end())
	{
	}

	// _00-_08 = TEnumerator2
};

// this is just for some things in JStudio/functionvalue.cpp
template <typename T>
struct TContainerEnumerator_const_TVector : public TEnumerator<const T*> {
	inline TContainerEnumerator_const_TVector(JGadget::TVector_pointer<T> const& vector)
	    : JGadget::TEnumerator<const T*>(vector.begin(), vector.end())
	{
	}

	// _00-_08 = TEnumerator
};

template <typename T>
struct TContainerEnumerator_ {
	TContainerEnumerator_(T& a)
	    : enumerator(a.begin(), a.end())
	{
	}
	JGadget::TEnumerator<T::iterator> enumerator;
};
} // namespace JGadget

#endif
