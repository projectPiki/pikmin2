#ifndef _JSYSTEM_JMATH_H
#define _JSYSTEM_JMATH_H

#include "JSystem/JMath/Inline.h"
#include "math.h"
#include "Dolphin/mtx.h"
#include "Dolphin/vec.h"
#include "types.h"
#include "stl/utility.h"

namespace JMath {

template <typename T>
struct TAngleConstant_ {
	static const f32 RADIAN_DEG090() { return HALF_PI; }
	static const f32 RADIAN_DEG180() { return PI; }
	static const f32 RADIAN_DEG360() { return TAU; }
	static const f32 RADIAN_TO_DEGREE_FACTOR() { return 180.0f / RADIAN_DEG180(); }
};

template <int length, typename T>
struct TAtanTable {
	T atan2_(T, T) const;
	T atan_(T) const;
	T mTable[length];
};

template <>
struct TAtanTable<1024, f32> {
	TAtanTable() { init(); }

	void init()
	{
		for (int i = 0; i < (u32)1024; i++) {
			mTable[i] = atan(i / 1024.0);
		}
		mTable[0]  = 0.0f;
		mTable2[0] = TAngleConstant_<f32>::RADIAN_DEG180() / 4;
	}
	f32 atan2_(f32, f32) const;
	f32 atan_(f32) const;
	f32 atan2Radian(f32 y, f32 x) const { return atan2_(y, x); }

	f32 calc(f32 y, f32 x) const
	{
		if (x >= 0.0f) {
			if (x >= y) {
				return (0.0f == x ? 0.0f : mTable[(int)((y * 1024.0f) / x + 0.5f)]);
			} else {
				return HALF_PI - (y == 0.0f ? 0.0f : mTable[(int)((x * 1024.0f) / y + 0.5f)]);
			}
		} else {
			x = -x;
			if (x < y) {
				return (y == 0.0f ? 0.0f : mTable[(int)((x * 1024.0f) / y + 0.5f)]) + HALF_PI;
			} else {
				return PI - (x == 0.0f ? 0.0f : mTable[(int)((y * 1024.0f) / x + 0.5f)]);
			}
		}
	}

	f32 calcInverse(f32 y, f32 x) const
	{
		y = -y;
		if (x < 0.0f) {
			x = -x;
			if (x >= y) {
				return (x == 0.0f ? 0.0f : mTable[(int)((y * 1024.0f) / x + 0.5f)]) + -PI;
			} else {
				return -HALF_PI - (y == 0.0f ? 0.0f : mTable[(int)((x * 1024.0f) / y + 0.5f)]);
			}
		} else {
			if (x < y) {
				return (y == 0.0f ? 0.0f : mTable[(int)((x * 1024.0f) / y + 0.5f)]) + -HALF_PI;
			} else {
				return -(x == 0.0f ? 0.0f : mTable[(int)((y * 1024.0f) / x + 0.5f)]);
			}
		}
	}

	f32 mTable[1024];
	f32 mTable2[8];
};

template <int length, typename T>
struct TAsinAcosTable {
	T acos2_(T, T) const;
	T acos_(T) const;
	T mTable[length];
};

template <>
struct TAsinAcosTable<1024, f32> {
	TAsinAcosTable() { init(); }
	void init()
	{
		for (int i = 0; i < 1024; i++) {
			mTable[i] = asin(i / 1024.0);
		}
		mTable[0]  = 0.0f;
		mTable2[0] = TAngleConstant_<f32>::RADIAN_DEG180() / 4;
	}

	inline f32 acosDegree(f32 value) const { return acos_(value) * TAngleConstant_<f32>::RADIAN_TO_DEGREE_FACTOR(); }

	f32 acos2_(f32, f32) const;
	f32 acos_(f32 value) const
	{
		if (value >= 1.0f) {
			return 0.0f;
		}

		if (value <= -1.0f) {
			return TAngleConstant_<f32>::RADIAN_DEG180();
		}

		if (value < 0.0f) {
			return mTable[(u32)(-value * 1023.5f)] + TAngleConstant_<f32>::RADIAN_DEG090();
		}

		return TAngleConstant_<f32>::RADIAN_DEG090() - mTable[(u32)(value * 1023.5f)];
	}

	f32 asin_(f32 value) const;

	f32 mTable[1024];
	f32 mTable2[8];
};

/**
 * @fabricatedName
 */
template <int length, typename T>
struct TSinCosTable {

	TSinCosTable() { init(); }

	void init()
	{
		for (int i = 0; i < 2048; i++) {
			mTable[i].first  = ::sin(((f64)i * TAngleConstant_<f32>::RADIAN_DEG360()) / 2048.0);
			mTable[i].second = ::cos(((f64)i * TAngleConstant_<f32>::RADIAN_DEG360()) / 2048.0);
		}
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

	f32 sinShort(s16 v) const { return mTable[static_cast<u16>(v) >> 5].first; }
	f32 cosShort(s16 v) const { return mTable[static_cast<u16>(v) >> 5].second; }

	/**
	 * elements are pairs of {sine, cosine}
	 */
	std::pair<T, T> mTable[length];
};

#define JMASINE(x)

// extern const f32 sincosTable_[1024];
// extern const std::pair<f32, f32> sincosTable_[2048];
extern const TSinCosTable<2048, f32> sincosTable_ ATTRIBUTE_ALIGN(32);
extern const TAtanTable<1024, f32> atanTable_ ATTRIBUTE_ALIGN(32);
extern const TAsinAcosTable<1024, f32> asinAcosTable_ ATTRIBUTE_ALIGN(32);

/**
 * @fabricated
 */
inline const TSinCosTable<2048, f32>* getSinCosTable() { return &sincosTable_; }

// from twilight princess repo
struct TRandom_fast_ {
	u32 value;

	TRandom_fast_() { value = 0; }

	TRandom_fast_(u32 param_0);

	inline u32 next() { return value = value * 0x19660d + 0x3c6ef35f; }

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

	void setSeed(u32 seed) { value = seed; }
};

inline f32 JMAFastReciprocal(f32 value) { return __fres(value); }

inline f32 fastReciprocal(f32 value) { return JMAFastReciprocal(value); }

inline f32 acosDegree(f32 value) { return JMath::asinAcosTable_.acosDegree(value); }

} // namespace JMath

void JMAEulerToQuat(s16, s16, s16, Quaternion*);
void JMAQuatLerp(const Quaternion*, const Quaternion*, f32, Quaternion*);
void JMALagrangeInterpolation(int, f32*, f32*, f32);
void JMAFastVECMag(const Vec*);
void JMAFastVECNormalize(const Vec*, Vec*);
void JMAVECScaleAdd(const Vec*, const Vec*, Vec*, f32);
void JMAVECLerp(const Vec*, const Vec*, Vec*, f32);
void JMAMTXApplyScale(const Mtx, Mtx, f32, f32, f32);
void JMAMTXScaleApply(const Mtx, Mtx, f32, f32, f32);

inline f32 JMAAbs(f32 input) { return __fabsf(input); }

inline f32 JMAAtan2Radian(f32 y, f32 x) { return JMath::atanTable_.atan2Radian(y, x); };

inline f32 JMASCosShort(s16 v) { return JMath::sincosTable_.cosShort(v); }
inline f32 JMASinShort(s16 v) { return JMath::sincosTable_.sinShort(v); }

inline f32 JMASCos(s16 v) { return JMASCosShort(v); }
inline f32 JMASSin(s16 v) { return JMASinShort(v); }

inline f32 JMACos(f32 v) { return JMath::sincosTable_.cos(v); }
inline f32 JMASin(f32 v) { return JMath::sincosTable_.sin(v); }

inline f32 JMAFastSqrt(register f32 x)
{
	register f32 recip;

	if (x > 0.0f) {
#ifdef __MWERKS__ // clang-format off
		asm { frsqrte recip, x }
#endif // clang-format on
		return recip * x;
	}
	return x;
}

inline f32 JMAHermiteInterpolation(register f32 p1, register f32 p2, register f32 p3, register f32 p4, register f32 p5, register f32 p6,
                                   register f32 p7)
{
	register f32 ff25;
	register f32 ff31;
	register f32 ff30;
	register f32 ff29;
	register f32 ff28;
	register f32 ff27;
	register f32 ff26;
#ifdef __MWERKS__ // clang-format off
	asm {
		fsubs   ff31, p1, p2
		fsubs   ff30, p5, p2
		fdivs   ff29, ff31, ff30
		fmuls   ff28,ff29,ff29
		fadds   ff25,ff29,ff29
		fsubs   ff27,ff28,ff29
		fsubs   ff30, p3, p6
		fmsubs  ff26,ff25,ff27,ff28
		fmadds  ff25,p4,ff27,p4
		fmadds  ff26,ff26,ff30,p3
		fmadds  ff25,p7,ff27,ff25
		fmsubs  ff25,ff29,p4,ff25
		fnmsubs ff25,ff31,ff25,ff26
	}
#endif // clang-format on
	return ff25;
}

#endif
