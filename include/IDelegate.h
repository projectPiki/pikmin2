#ifndef _IDELEGATE_H
#define _IDELEGATE_H

#include "types.h"

struct IDelegate {
	virtual void invoke() = 0; // _08
};

template <typename A>
struct IDelegate1 {
	virtual void invoke(A) = 0; // _08
};

template <typename A, typename B>
struct IDelegate2 {
	virtual void invoke(A, B) = 0; // _08
};

template <typename A, typename B, typename C>
struct IDelegate3 {
	virtual void invoke(A, B, C) = 0; // _08
};

template <typename T>
struct Delegate : public IDelegate {
	inline Delegate(T* obj, void (T::*func)())
	{
		mObject   = obj;
		mFunction = func;
	}

	virtual void invoke() { (mObject->*mFunction)(); } // _08

	// VTBL _00
	T* mObject;             // _04
	void (T::*mFunction)(); // _08
};

template <typename T, typename A>
struct Delegate1 : public IDelegate1<A> {
	inline Delegate1(T* obj, void (T::*func)(A))
	{
		mObject   = obj;
		mFunction = func;
	}

	virtual void invoke(A a) { (mObject->*mFunction)(a); } // _08

	// VTBL _00
	T* mObject;              // _04
	void (T::*mFunction)(A); // _08
};

template <typename T, typename A, typename B>
struct Delegate2 : public IDelegate2<A, B> {
	inline Delegate2(T* obj, void (T::*func)(A, B))
	{
		mObject   = obj;
		mFunction = func;
	}

	virtual void invoke(A a, B b) { (mObject->*mFunction)(a, b); } // _08

	// VTBL _00
	T* mObject;                 // _04
	void (T::*mFunction)(A, B); // _08
};

template <typename T, typename A, typename B, typename C>
struct Delegate3 : public IDelegate3<A, B, C> {
	inline Delegate3(T* obj, void (T::*func)(A, B, C))
	{
		mObject   = obj;
		mFunction = func;
	}

	virtual void invoke(A a, B b, C c) { (mObject->*mFunction)(a, b, c); } // _08

	// VTBL _00
	T* mObject;                    // _04
	void (T::*mFunction)(A, B, C); // _08
};

#endif
