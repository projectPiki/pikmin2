#ifndef _IDELEGATE_H
#define _IDELEGATE_H

#include "types.h"

struct IDelegate {
};

template <typename T> struct IDelegate1 : public IDelegate {
	virtual void invoke(T);
};

template <typename A, typename B, typename C>
struct IDelegate3 : public IDelegate {
	virtual void invoke(A, B, C);
};

template <typename T> struct Delegate : public IDelegate1<T> {
	virtual void invoke(T);
};

template <typename T, typename A> struct Delegate1 : public IDelegate1<A> {
	inline Delegate1(T* obj, void (T::*func)(A))
	{
		m_object   = obj;
		m_function = func;
	}

	virtual void invoke(A a) { (m_object->*m_function)(a); }

	// VTBL _00
	T* m_object; // _04
	// u32 _08;        // _08
	// u32 _0C;        // _0C
	void (T::*m_function)(A); // _10
};

template <typename T, typename A, typename B, typename C>
struct Delegate3 : public IDelegate3<A, B, C> {
	inline Delegate3(T* obj, void (T::*func)(A, B, C))
	{
		m_object   = obj;
		m_function = func;
	}

	virtual void invoke(A a, B b, C c) { (m_object->*m_function)(a, b, c); }

	// VTBL _00
	T* m_object; // _04
	// u32 _08;        // _08
	// u32 _0C;        // _0C
	void (T::*m_function)(A, B, C); // _10
};

#endif
