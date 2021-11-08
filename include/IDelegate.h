#ifndef _IDELEGATE_H
#define _IDELEGATE_H

template <typename T> struct IDelegate1 {
	virtual void invoke(T);
};

template <typename A, typename B, typename C> struct IDelegate3 {
	virtual void invoke(A, B, C);
};

#endif
