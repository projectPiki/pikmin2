#ifndef _STD_ALGORITHM_H
#define _STD_ALGORITHM_H

#include "types.h"

namespace std {
template <typename InputIterator, typename Predicate>
static InputIterator find_if(InputIterator first, InputIterator last, Predicate p);

template <typename ForwardIterator, typename Element, typename Predicate>
ForwardIterator upper_bound(ForwardIterator first, ForwardIterator last, const Element& value, Predicate predicate);

} // namespace std

#endif
