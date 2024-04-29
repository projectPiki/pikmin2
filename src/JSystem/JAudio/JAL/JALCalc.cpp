#include "JSystem/JMath.h"
#include "JSystem/JAudio/JALCalc.h"
#include "types.h"

namespace JALCalc {

const f32 cEqualCSlope = 1.0f;
const f32 cEqualPSlope = 0.5f;

/**
 * @note Address: 0x800BA244
 * @note Size: 0x64
 */
f32 linearTransform(f32 x, f32 xStart, f32 xEnd, f32 yStart, f32 yEnd, bool unbounded)
{
	f32 result = (x - xStart) * ((yEnd - yStart) / (xEnd - xStart)) + yStart;

	// Quick exit as optimisation
	if (unbounded)
		return result;

	// If the bounds given are valid, proportion through domain = proportion through range
	// e.g. input value is 80% of the way from xStart to xEnd, output will be 80% of the way from yStart to yEnd
	if (yStart < yEnd) {
		// If we overshoot the end, we clamp to the end
		if (result > yEnd)
			return yEnd;

		// If we undershoot, we clamp to the start
		if (result < yStart)
			return yStart;

		return result;
	}

	// From here, start is greater than end, implies flipped proportionality
	// i.e. 80% of the way from xStart to xEnd maps to 20% of the way from yStart to yEnd

	// Clamp to the start
	if (result > yStart)
		return yStart;

	// Clamp to the end
	if (result < yEnd)
		return yEnd;

	// Unknown situation, bail with lerp result
	return result;
}

/**
 * @note Address: 0x800BA2A8
 * @note Size: 0x18C
 */
f32 getParamByExp(f32 x, f32 xStart, f32 xEnd, f32 y, f32 yStart, f32 yEnd, JALCalc::CurveSign curve)
{
	f32 result;
	if (curve == CS_POSITIVE_CURVE) {
		f32 newX    = exp(linearTransform(x, xStart, xEnd, 0.0f, y, true));
		f32 newXEnd = exp(y);
		result      = linearTransform(newX, 1.0f, newXEnd, yStart, yEnd, true);

	} else if (curve == CS_NEGATIVE_CURVE) {
		f32 newX      = exp(linearTransform(x, xStart, xEnd, y, 0.0f, true));
		f32 newXStart = exp(y);
		result        = linearTransform(newX, newXStart, 1.0f, yStart, yEnd, true);

	} else {
		f32 newX = linearTransform(x, xStart, xEnd, yStart, yEnd, true);
		if (yStart < yEnd) {
			if (newX > yEnd) {
				result = yEnd;
			} else if (newX < yStart) {
				result = yStart;
			} else {
				result = newX;
			}
		} else if (newX > yStart) {
			result = yStart;
		} else if (newX < yEnd) {
			result = yEnd;
		} else {
			result = newX;
		}
	}

	if (result > yEnd) {
		return yEnd;
	}

	if (result < yStart) {
		return yStart;
	}

	return result;
}

///**
// * @note Address: N/A
// * @note Size: 0x28
// */
// void JALCalc::getParamByExp_0_1(f32, f32, f32, f32,
// JALCalc::CurveSign)
//{
//    // UNUSED FUNCTION
//}

/**
 * @note Address: 0x800BA434
 * @note Size: 0xC0
 */
f32 getRandom(f32 p1, f32 p2, f32 p3)
{
	f32 val0 = 2.0f * p3;
	f32 val1 = -2.0f * (1.0f - p3);

	f32 val2;
	if (getRandom_0_1() < p3) {
		val2 = val0;
	} else {
		val2 = val1;
	}

	p1 *= val2;

	f32 val3 = pow(getRandom_0_1(), p2);
	return val3 * p1;
}

/**
 * @note Address: 0x800BA4F4
 * @note Size: 0x70
 */
f32 getRandom_0_1()
{
	static JMath::TRandom_fast_ oRandom(0);
	u32 next = (oRandom.next() >> 9) | 0x3F800000;
	return *(f32*)(void*)&next - 1.0f;
}

///**
// * @note Address: N/A
// * @note Size: 0xA4
// */
// void JALCalc::getRandom_Sign()
//{
//    // UNUSED FUNCTION
//}

///**
// * @note Address: N/A
// * @note Size: 0x28
// */
// void JALCalc::pow2(f32)
//{
//    // UNUSED FUNCTION
//}

///**
// * @note Address: N/A
// * @note Size: 0x50
// */
// void JALCalc::getRint(f32)
//{
//    // UNUSED FUNCTION
//}

///**
// * @note Address: N/A
// * @note Size: 0xF8
// */
// void JALCalc::getDist(Vec*, Vec*)
//{
//    // UNUSED FUNCTION
//}

///**
// * @note Address: N/A
// * @note Size: 0xE4
// */
// void JALCalc::getDistPow(Vec*, Vec*)
//{
//    // UNUSED FUNCTION
//}
} // namespace JALCalc
