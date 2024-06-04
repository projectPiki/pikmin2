#ifndef MSL_ALGORITHM_H_
#define MSL_ALGORITHM_H_

#include "mem.h"

namespace std {
template <class ForwardIterator, class T>
ForwardIterator lower_bound(ForwardIterator first, ForwardIterator last, const T& val)
{
	int count = last - first; // probably needs to be std::distance or w/e but im not gonna be the one to implement it
	ForwardIterator it;
	u32 step;

	while (count > 0) {
		it   = first;
		step = count / 2;
		it += step;
		if (*it < val) {
			first = ++it;
			count -= step + 1;
		} else {
			count = step;
		}
	}
}

template <class ForwardIterator, class T>
ForwardIterator upper_bound(ForwardIterator first, ForwardIterator last, const T& val);

template <class InputIt, class UnaryPredicate>
InputIt find_if(InputIt first, InputIt last, UnaryPredicate p);

/*
template<class OutputIt, class Size, int A2>
struct __fill_n {
    OutputIt fill_n(OutputIt first, Size count, const unsigned long& value);
};

template<>
unsigned long* __fill_n<unsigned long, long, 0>::fill_n(unsigned long* first, long count, const unsigned long& value) {
    for (; count > 0; count--) {
        *first++ = value;
    }
    return first;
}

template<class OutputIt, class Size, class T>
OutputIt fill_n(OutputIt first, Size count, const T& value) {
    return __fill_n::fill_n(first, count, value);
}


template<class ForwardIt, class T>
void __fill(ForwardIt first, ForwardIt last, const T& value, std::random_access_iterator_tag param_3) {
    fill_n(first, last - first, value);
}
*/

template <class ForwardIt, class T>
void fill(ForwardIt first, ForwardIt last, const T& value)
{
	for (; first != last; ++first) {
		*first = value;
	}
}

template <class InputIt, class OutputIt>
inline OutputIt copy(InputIt first, InputIt last, OutputIt d_first)
{
	for (; first < last;) {
		*d_first++ = *first++;
	}
	return d_first;
}

template <class T, int N>
class __copy_backward {
public:
	static T* copy_backward(T* begin, T* end, T* dest)
	{
#ifdef DEBUG
		size_t size = (end - begin);
		dest -= size;
		memmove(dest, begin, size * sizeof(begin));
		return dest;
#else
		for (; end > begin;) {
			*--dest = *--end;
		}
		return end;
#endif
	}
};

template <class T>
inline T* copy_backward(T* first, T* last, T* d_last)
{
	return __copy_backward<T, 1>::copy_backward(first, last, d_last);
}

} // namespace std

#endif
