#ifndef _JSYSTEM_JMATH_H
#define _JSYSTEM_JMATH_H

#include "types.h"
#include "Dolphin/math.h"
#include "std/pair.h"
struct Quaternion {
	float _00;
	float _04;
	float _08;
	float _0C;
};

namespace JMath {
template <int length, typename T> struct TAtanTable {
	T atan2_(T, T) const;
	T atan_(T) const;
	T m_table[length];
};

template <> struct TAtanTable<1024, float> {
	TAtanTable()
	{
		uint i = 0;
		do {
			m_table[i] = atan((double)i * 9.765625E-4);
		} while (i < 1024);
	}
	float atan2_(float, float) const;
	float atan_(float) const;
	float m_table[1024];
};

/**
 * @fabricatedName
 */
template <int length, typename T> struct TSinCosTable {
	/**
	 * elements are pairs of {sine, cosine}
	 */
	std::pair<T, T> m_table[length];
};

template <> struct TSinCosTable<2048, float> {
	inline TSinCosTable()
	{
		uint i = 0;
		do {
			m_table[i].first = sin((double)i * LONG_TAU / 2048.0);
			m_table[i].first = cos((double)i * LONG_TAU / 2048.0);
		} while (i < 2048);
	}
	/**
	 * elements are pairs of {sine, cosine}
	 */
	std::pair<float, float> m_table[2048];
};

#define JMASINE(x)

// extern const float sincosTable_[1024];
// extern const std::pair<float, float> sincosTable_[2048];
extern const TSinCosTable<2048, float> sincosTable_;
extern const TAtanTable<1024, float> atanTable_;

} // namespace JMath

#endif
