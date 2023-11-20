#include "JSystem/JMath.h"
#include "JSystem/JAudio/JALCalc.h"
#include "types.h"

namespace JALCalc {

const f32 cEqualCSlope = 1.0f;
const f32 cEqualPSlope = 0.5f;

/*
 * --INFO--
 * Address:    800BA244
 * Size:    000064
 */
f32 linearTransform(f32 x, f32 xStart, f32 xEnd, f32 yStart, f32 yEnd, bool unbounded)
{
	f32 result = (x - xStart) * ((yEnd - yStart) / (xEnd - xStart)) + yStart;

	// Quick exit as optimisation
	if (unbounded)
		return result;

	// If the bounds given are valid
	if (yStart < yEnd) {
		// If we overshoot the end, we clamp to the end
		if (result > yEnd)
			return yEnd;

		// If we undershoot, we clamp to the start
		if (result < yStart)
			return yStart;

		return result;
	}

	// From here, start is greater than end

	// Clamp to the start
	if (result > yStart)
		return yStart;

	// Clamp to the end
	if (result < yEnd)
		return yEnd;

	// Unknown situation, bail with lerp result
	return result;
}

/*
 * --INFO--
 * Address:	800BA2A8
 * Size:	00018C
 */
f32 getParamByExp(f32 x, f32 xStart, f32 xEnd, f32 y, f32 yStart, f32 yEnd, JALCalc::CurveSign curve)
{
	f32 result;
	if (curve == CS_1) {
		f32 newX    = exp(linearTransform(x, xStart, xEnd, 0.0f, y, true));
		f32 newXEnd = exp(y);
		result      = linearTransform(newX, 1.0f, newXEnd, yStart, yEnd, true);

	} else if (curve == CS_0) {
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

///*
// * --INFO--
// * Address:	........
// * Size:	000028
// */
// void JALCalc::getParamByExp_0_1(f32, f32, f32, f32,
// JALCalc::CurveSign)
//{
//    // UNUSED FUNCTION
//}

/*
 * --INFO--
 * Address:	800BA434
 * Size:	0000C0
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

/*
 * --INFO--
 * Address:	800BA4F4
 * Size:	000070
 */
f32 getRandom_0_1()
{
	static JMath::TRandom_fast_ oRandom(0);
	u32 next = (oRandom.next() >> 9) | 0x3F800000;
	return *(f32*)(void*)&next - 1.0f;
}

///*
// * --INFO--
// * Address:	........
// * Size:	0000A4
// */
// void JALCalc::getRandom_Sign()
//{
//    // UNUSED FUNCTION
//}

///*
// * --INFO--
// * Address:	........
// * Size:	000028
// */
// void JALCalc::pow2(f32)
//{
//    // UNUSED FUNCTION
//}

///*
// * --INFO--
// * Address:	........
// * Size:	000050
// */
// void JALCalc::getRint(f32)
//{
//    // UNUSED FUNCTION
//}

///*
// * --INFO--
// * Address:	........
// * Size:	0000F8
// */
// void JALCalc::getDist(Vec*, Vec*)
//{
//    // UNUSED FUNCTION
//}

///*
// * --INFO--
// * Address:	........
// * Size:	0000E4
// */
// void JALCalc::getDistPow(Vec*, Vec*)
//{
//    // UNUSED FUNCTION
//}
} // namespace JALCalc
