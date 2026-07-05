#ifndef _JSYSTEM_JGADGET_SEARCH_H
#define _JSYSTEM_JGADGET_SEARCH_H

#include "types.h"
#include "stl/functional.h"
#include "stl/iterator.h"

namespace JGadget {

namespace search {

template <typename T>
struct TExpandStride_ { };

template <>
struct TExpandStride_<s32> {
	static s32 get(s32 n) { return n << 3; }
};
template <>
struct TExpandStride_<f64> {
	static f64 get(f64 n) { return n; }
};

} // namespace search

template <typename T>
inline const T& toValueFromIndex(int idx, const T* values, u32 count, const T& fallback)
{
	return (idx >= count) ? fallback : values[idx];
}

template <typename Category, typename T, typename Distance, typename Pointer, typename Reference>
struct TIterator : public std::iterator<Category, T, Distance, Pointer, Reference> { };

template <typename Iterator, typename T, typename Predicate>
inline Iterator findUpperBound_binary_all(Iterator first, Iterator last, const T& val, Predicate p)
{
	return std::upper_bound(first, last, val, p);
}

template <typename Iterator, typename T, typename Predicate>
inline Iterator findUpperBound_binary_begin(Iterator first, Iterator last, const T& val, Predicate p)
{
	if (first == last) {
		return last;
	}

	typedef typename std::iterator_traits<Iterator>::difference_type difference_type;
	difference_type dist   = std::distance(first, last);
	difference_type stride = 1;
	search::TExpandStride_<s32> expand;
	Iterator i = first;

	while (true) {
		if (p(val, *i)) {
			if (stride == 1) {
				return i;
			} else {
				break;
			}
		}
		first = i;
		dist -= stride;
		if (dist <= 0) {
			i = last;
			break;
		}
		i += stride;
		stride = expand.get(stride);
	}

	return findUpperBound_binary_all(first, i, val, p);
}

template <typename Iterator, typename T, typename Predicate>
inline Iterator findUpperBound_binary_end(Iterator first, Iterator last, const T& val, Predicate p)
{
	if (first == last) {
		return last;
	}

	typedef typename std::iterator_traits<Iterator>::difference_type difference_type;
	--last;
	difference_type dist   = std::distance(first, last);
	difference_type stride = 1;
	search::TExpandStride_<s32> expand;
	Iterator i = last;

	while (true) {
		if (!p(val, *i)) {
			if (stride == 1) {
				return ++i;
			} else {
				break;
			}
		}
		last = i;
		dist -= stride;
		if (dist <= 0) {
			i = first;
			break;
		}
		i -= stride;
		stride = expand.get(stride);
	}

	return findUpperBound_binary_all(i, ++last, val, p);
}

template <typename Iterator, typename Value>
Iterator findUpperBound_binary_current(Iterator i1, Iterator i2, Iterator i3, const Value& val)
{
	return findUpperBound_binary_current(i1, i2, i3, val, std::less<Value>());
}

template <typename Iterator, typename Value>
Iterator findUpperBound_binary_current(Iterator first, Iterator last, Iterator current, const Value& val, std::less<Value> p)
{
	return current == last || p(val, *current) ? findUpperBound_binary_end(first, current, val, p)
	                                           : findUpperBound_binary_begin(current, last, val, p);
}

} // namespace JGadget

#endif
