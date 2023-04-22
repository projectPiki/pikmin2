#ifndef _STD_FUNCTIONAL_H
#define _STD_FUNCTIONAL_H

#include "types.h"

namespace std {
template <typename LHS, typename RHS, typename Result>
struct binary_function {
	typedef LHS first_argument_type;
	typedef RHS second_argument_type;
	typedef Result result_type;
};

template <typename T>
struct less : public binary_function<T, T, bool> {
	bool operator()(const T& lhs, const T& rhs) const { return lhs < rhs; }
};
} // namespace std

#endif
