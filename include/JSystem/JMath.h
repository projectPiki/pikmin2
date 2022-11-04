#ifndef _JSYSTEM_JMATH_H
#define _JSYSTEM_JMATH_H

#include "Dolphin/mtx.h"
#include "Dolphin/vec.h"
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
template <int length, typename T>
struct TAtanTable {
	T atan2_(T, T) const;
	T atan_(T) const;
	T m_table[length];
};

template <>
struct TAtanTable<1024, float> {
	TAtanTable()
	{
		u32 i = 0;
		do {
			m_table[i] = atan((double)i * 9.765625E-4);
		} while (i < 1024);
	}
	float atan2_(float, float) const;
	float atan_(float) const;
	float m_table[1024];
};

template <int length, typename T>
struct TAsinAcosTable {
	T acos2_(T, T) const;
	T acos_(T) const;
	T m_table[length];
};

template <>
struct TAsinAcosTable<1024, float> {
	TAsinAcosTable()
	{
		u32 i = 0;
		do {
			m_table[i] = acos((double)i * 9.765625E-4);
		} while (i < 1024);
	}
	float acos2_(float, float) const;
	float acos_(float) const;
	float m_table[1024];
};

/**
 * @fabricatedName
 */
template <int length, typename T>
struct TSinCosTable {
	inline TSinCosTable()
	{
		u32 i = 0;
		do {
			m_table[i].first = sin((double)i * LONG_TAU / length);
			m_table[i].first = cos((double)i * LONG_TAU / length);
		} while (i < 2048);
	}

	inline float radsToLUT() const
	{
		// inline float radsToLUTConstant() const {
		return ((float)length) / TAU;
	}

	// inline int radsToLUT(float theta) {
	//     return theta < 0.0f ? theta *
	// }

	inline T sin(float x) const
	{
		return (x < 0.0f) ? -m_table[(int)(x * -radsToLUT()) & 0x7FF].first : m_table[(int)(x * radsToLUT()) & 0x7FF].first;
		// return (x < 0.0f) ? -m_table[(int)-(x * (((T)length)/TAU)) & 0x7FF].first : m_table[(int)(x * ((T)length)/TAU) & 0x7FF].first;
		// return (x < 0.0f) ? -m_table[(int)-(x * kRadsToLUT) & 0x7FF].first : m_table[(int)(x * kRadsToLUT) & 0x7FF].first;
	}
	inline T cos(float x) const
	{
		// x = (x < 0.0f) ? -(int)(x * 325.9493f) % 2048 : (int)(x * 325.9493f) % 2048;
		// x = (x < 0.0f) ? -(x * kRadsToLUT) : (x * kRadsToLUT);
		// x = (x < 0.0f) ? -(x * radsToLUT()) : (x * radsToLUT());
		// return m_table[(int)x & 0x7FF].second;
		// x = (x < 0.0f) ? -x : x;
		return m_table[(int)(((x < 0.0f) ? -x : x) * radsToLUT()) & 0x7FF].second;
		// return (x < 0.0f) ? m_table[(int)-(x * 325.9493f) % 2048].second : m_table[(int)(x * 325.9493f) % 2048].second;
	}

	/**
	 * elements are pairs of {sine, cosine}
	 */
	std::pair<T, T> m_table[length];
};

#define JMASINE(x)

// extern const float sincosTable_[1024];
// extern const std::pair<float, float> sincosTable_[2048];
extern const TSinCosTable<2048, float> sincosTable_;
extern const TAtanTable<1024, float> atanTable_;
extern const TAsinAcosTable<1024, float> asinAcosTable_;

/**
 * @fabricated
 */
inline const TSinCosTable<2048, float>* getSinCosTable() { return &sincosTable_; }

// from twilight princess repo
struct TRandom_fast_ {
	u32 value;

	TRandom_fast_(u32 param_0);

	inline u32 next()
	{
		value = value * 0x19660d + 0x3c6ef35f;
		return value;
	}

	/**
	 * @fabricated
	 */
	inline float nextFloat_0_1()
	{
		u32 nextValue = (next() >> 9) | 0x3F800000;
		return *(float*)(void*)&nextValue - 1.0f;
	}

	/**
	 * @fabricated
	 */
	inline f32 idkanymore()
	{
		float nextValue = nextFloat_0_1();
		nextValue       = nextValue * 16.0f;
		return 1.0f - ((*(u32*)(void*)&nextValue) & 0xF ^ 0x80000000) / 192.0f;
	}

	/**
	 * @fabricated
	 */
	inline float currentFloat_0_1() { return *(float*)(void*)((value >> 9) | 0x3F800000) - 1.0f; }

	/**
	 * @fabricated
	 * Needs work. See JAISe::setSeInterVolume.
	 * IDK if min is really min.
	 */
	inline float nextFloat(float min, u32 p2)
	{
		next();
		uint v3 = (p2 * 1000) / 0x7F;
		v3      = (p2 * 1000 - v3 >> 1) + (v3 >> 6);
		u32 v2  = currentFloat_0_1(); // * 0x4F800000;
		// u32 v1   = v3 * 2;
		float v7 = (float)((v2 - (v2 / (v3 * 2)) * (v3 * 2)) + 1) - ((float)(v3) / 1000.0f);
		if (min + v7 > 1.0f) {
			return 1.0f;
		}
		if (min < 0.0f - v7) {
			return 0.0f;
		}
		return min + v7;
	}
};
} // namespace JMath

void JMAEulerToQuat(short, short, short, Quaternion*);
void JMAQuatLerp(const Quaternion*, const Quaternion*, float, Quaternion*);
void JMALagrangeInterpolation(int, float*, float*, float);
void JMAFastVECMag(const Vec*);
void JMAFastVECNormalize(const Vec*, Vec*);
void JMAVECScaleAdd(const Vec*, const Vec*, Vec*, float);
void JMAVECLerp(const Vec*, const Vec*, Vec*, float);
void JMAMTXApplyScale(const Mtx, Mtx, float, float, float);
void JMAMTXScaleApply(const Mtx, Mtx, float, float, float);

#endif
