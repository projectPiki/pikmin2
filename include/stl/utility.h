#ifndef _STD_PAIR_H
#define _STD_PAIR_H

namespace std {
template <typename T1, typename T2>
struct pair {
	T1 first;
	T2 second;
};

template <>
struct pair<f32, f32> {
	/**
	 * @note Address: 0x80035520
	 * @note Size: 0x10
	 * In: JSystem/JMath/JMATrigonometric.cpp
	 */
	pair()
	    : first(0.0f)
	    , second(0.0f) {};
	f32 first;
	f32 second;
};
} // namespace std

#endif
