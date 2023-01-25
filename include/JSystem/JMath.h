#ifndef _JSYSTEM_JMATH_H
#define _JSYSTEM_JMATH_H

#include "Dolphin/mtx.h"
#include "Dolphin/vec.h"
#include "types.h"
#include "Dolphin/math.h"
#include "std/pair.h"
struct Quaternion {
	f32 _00;
	f32 _04;
	f32 _08;
	f32 _0C;
};

namespace JMath {
template <int length, typename T>
struct TAtanTable {
	T atan2_(T, T) const;
	T atan_(T) const;
	T mTable[length];
};

template <>
struct TAtanTable<1024, f32> {
	TAtanTable()
	{
		u32 i = 0;
		do {
			mTable[i] = atan((f64)i * 9.765625E-4);
		} while (i < 1024);
	}
	f32 atan2_(f32, f32) const;
	f32 atan_(f32) const;
	f32 mTable[1024];
};

template <int length, typename T>
struct TAsinAcosTable {
	T acos2_(T, T) const;
	T acos_(T) const;
	T mTable[length];
};

template <>
struct TAsinAcosTable<1024, f32> {
	TAsinAcosTable()
	{
		u32 i = 0;
		do {
			mTable[i] = acos((f64)i * 9.765625E-4);
		} while (i < 1024);
	}
	f32 acos2_(f32, f32) const;
	f32 acos_(f32) const;
	f32 mTable[1024];
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
			mTable[i].first = sin((f64)i * LONG_TAU / length);
			mTable[i].first = cos((f64)i * LONG_TAU / length);
		} while (i < 2048);
	}

	inline f32 radsToLUT() const
	{
		// inline f32 radsToLUTConstant() const {
		return ((f32)length) / TAU;
	}

	// inline int radsToLUT(f32 theta) {
	//     return theta < 0.0f ? theta *
	// }

	inline T sin(f32 x) const
	{
		return (x < 0.0f) ? -mTable[(int)(x * -radsToLUT()) & 0x7FF].first : mTable[(int)(x * radsToLUT()) & 0x7FF].first;
		// return (x < 0.0f) ? -mTable[(int)-(x * (((T)length)/TAU)) & 0x7FF].first : mTable[(int)(x * ((T)length)/TAU) & 0x7FF].first;
		// return (x < 0.0f) ? -mTable[(int)-(x * kRadsToLUT) & 0x7FF].first : mTable[(int)(x * kRadsToLUT) & 0x7FF].first;
	}
	inline T cos(f32 x) const
	{
		// x = (x < 0.0f) ? -(int)(x * 325.9493f) % 2048 : (int)(x * 325.9493f) % 2048;
		// x = (x < 0.0f) ? -(x * kRadsToLUT) : (x * kRadsToLUT);
		// x = (x < 0.0f) ? -(x * radsToLUT()) : (x * radsToLUT());
		// return mTable[(int)x & 0x7FF].second;
		// x = (x < 0.0f) ? -x : x;
		return mTable[(int)(((x < 0.0f) ? -x : x) * radsToLUT()) & 0x7FF].second;
		// return (x < 0.0f) ? mTable[(int)-(x * 325.9493f) % 2048].second : mTable[(int)(x * 325.9493f) % 2048].second;
	}

	/**
	 * elements are pairs of {sine, cosine}
	 */
	std::pair<T, T> mTable[length];
};

#define JMASINE(x)

// extern const f32 sincosTable_[1024];
// extern const std::pair<f32, f32> sincosTable_[2048];
extern const TSinCosTable<2048, f32> sincosTable_;
extern const TAtanTable<1024, f32> atanTable_;
extern const TAsinAcosTable<1024, f32> asinAcosTable_;

/**
 * @fabricated
 */
inline const TSinCosTable<2048, f32>* getSinCosTable() { return &sincosTable_; }

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
	inline f32 nextFloat_0_1()
	{
		u32 nextValue = (next() >> 9) | 0x3F800000;
		return *(f32*)(void*)&nextValue - 1.0f;
	}

	/**
	 * @fabricated
	 */
	inline f32 idkanymore()
	{
		f32 nextValue = nextFloat_0_1();
		nextValue     = nextValue * 16.0f;
		return 1.0f - ((*(u32*)(void*)&nextValue) & 0xF ^ 0x80000000) / 192.0f;
	}

	/**
	 * @fabricated
	 */
	inline f32 currentFloat_0_1() { return *(f32*)(void*)((value >> 9) | 0x3F800000) - 1.0f; }

	/**
	 * @fabricated
	 * Needs work. See JAISe::setSeInterVolume.
	 * IDK if min is really min.
	 */
	inline f32 nextFloat(f32 min, u32 p2)
	{
		next();
		uint v3 = (p2 * 1000) / 0x7F;
		v3      = (p2 * 1000 - v3 >> 1) + (v3 >> 6);
		u32 v2  = currentFloat_0_1(); // * 0x4F800000;
		// u32 v1   = v3 * 2;
		f32 v7 = (f32)((v2 - (v2 / (v3 * 2)) * (v3 * 2)) + 1) - ((f32)(v3) / 1000.0f);
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
void JMAQuatLerp(const Quaternion*, const Quaternion*, f32, Quaternion*);
void JMALagrangeInterpolation(int, f32*, f32*, f32);
void JMAFastVECMag(const Vec*);
void JMAFastVECNormalize(const Vec*, Vec*);
void JMAVECScaleAdd(const Vec*, const Vec*, Vec*, f32);
void JMAVECLerp(const Vec*, const Vec*, Vec*, f32);
void JMAMTXApplyScale(const Mtx, Mtx, f32, f32, f32);
void JMAMTXScaleApply(const Mtx, Mtx, f32, f32, f32);

#endif
