#ifndef _IDELEGATE_H
#define _IDELEGATE_H

#include "types.h"

template <typename T> struct IDelegate1 {
	virtual void invoke(T);

	// VTBL _00
	T* m_object; // _04
	u32 _08;     // _08
	u32 _0C;     // _0C
	// TODO: Proper typing.
	void* m_function; // _10
};

template <typename A, typename B, typename C> struct IDelegate3 {
	virtual void invoke(A, B, C);
};

template <typename T> struct Delegate : public IDelegate1<T> {
	virtual void invoke(T);
};

template <typename T, typename A, typename B, typename C>
struct Delegate3 : public IDelegate3<A, B, C> {
	virtual void invoke(A, B, C);
};

#endif
