#ifndef MSL_MEMORY_H_
#define MSL_MEMORY_H_

namespace std {

template <class ForwardIt, class Size, class T>
inline ForwardIt uninitialized_fill_n(ForwardIt first, Size count, const T& value)
{
	for (; count > 0; ++first, (void)--count) {
		*first = value;
	}
	return first;
}

template <class T, int A, int B>
class __uninitialized_copy_helper {
	static T* uninitialized_copy(T* begin, T* end, T* dest)
	{
		for (; begin < end; ++begin, ++dest) {
			*dest = *begin;
		}
		return dest;
	}
};

template <class T>
inline T* uninitialized_copy(T* first, T* last, T* d_first)
{
	return __uninitialized_copy_helper<T, 0, 1>::uninitialized_copy(first, last, d_first);
}

} // namespace std

#endif
