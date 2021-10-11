#ifndef _JSYSTEM_JMATH_H
#define _JSYSTEM_JMATH_H

namespace JMath {
template <int length, typename T> struct TAtanTable {
	T atan2_(T, T) const;
	T m_table[length];
};

extern const float sincosTable_[1024];
extern const TAtanTable<1024, float> atanTable_;

} // namespace JMath

#endif