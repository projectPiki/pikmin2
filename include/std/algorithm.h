#ifndef _STD_ALGORITHM_H
#define _STD_ALGORITHM_H

#include "types.h"

namespace std {
template <typename InputIterator, typename Predicate>
InputIterator find_if(InputIterator first, InputIterator last, Predicate p)
{
	for (; first != last && !p(*first); ++first) { }
	return first;
}
} // namespace std

#endif
