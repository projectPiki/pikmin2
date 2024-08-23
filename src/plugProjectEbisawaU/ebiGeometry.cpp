#include "Vector2.h"
#include "ebi/Geometry.h"
#include "sysMath.h"

namespace ebi {

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
bool EGEBox2f::isIn(Vector2f&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803C9FF4
 * @note Size: 0x58
 */
bool EGEBox2f::isOut(Vector2f& point)
{
	if (point.x < i.x) {
		return true;
	}
	if (f.x < point.x) {
		return true;
	}
	if (point.y < i.y) {
		return true;
	}
	if (f.y < point.y) {
		return true;
	}
	return false;
}

/**
 * in__Q23ebi8EGEBox2fFP10Vector2<f>
 * @note Address: N/A
 * @note Size: 0x54
 */
void EGEBox2f::in(Vector2f*)
{
	// UNUSED FUNCTION
}

/**
 * isIn__Q23ebi8EGEBox2fFR10Vector2<f>f
 * @note Address: 0x803CA04C
 * @note Size: 0x70
 */
bool EGEBox2f::isIn(Vector2f& point, f32 pointSize)
{
	if (point.x - pointSize < i.x) {
		return false;
	}
	if (f.x < point.x + pointSize) {
		return false;
	}
	if (point.y - pointSize < i.y) {
		return false;
	}
	return (f.y < point.y + pointSize) == false;
}

/**
 * isOut__Q23ebi8EGEBox2fFR10Vector2<f>f
 * @note Address: 0x803CA0BC
 * @note Size: 0x68
 */
bool EGEBox2f::isOut(Vector2f& point, f32 pointSize)
{
	if (point.x + pointSize < i.x) {
		return true;
	}
	if (f.x < point.x - pointSize) {
		return true;
	}
	if (point.y + pointSize < i.y) {
		return true;
	}
	return (f.y < point.y - pointSize);
}

/**
 * Constrains the given vector to be inside the box by at least the given margin.
 *
 * in__Q23ebi8EGEBox2fFP10Vector2<f>f
 * @note Address: 0x803CA124
 * @note Size: 0x64
 */
void EGEBox2f::in(Vector2f* point, f32 margin)
{
	f32 x = i.x + margin;
	if (point->x < x) {
		point->x = x;
	} else {
		x = f.x - margin;
		if (x < point->x) {
			point->x = x;
		}
	}
	f32 y = i.y + margin;
	if (point->y < y) {
		point->y = y;
	} else {
		y = f.y - margin;
		if (y < point->y) {
			point->y = y;
		}
	}
}

/**
 * isOut__Q23ebi11EGECircle2fFR10Vector2<f>
 * @note Address: 0x803CA188
 * @note Size: 0x5C
 */
bool ebi::EGECircle2f::isOut(Vector2f& point)
{
	Vector2f di = Vector2f(point.x - mCenter.x, point.y - mCenter.y);
	return mRadius < _lenVec2D(di) ? true : false;
}

/**
 * in__Q23ebi11EGECircle2fFP10Vector2<f>
 * @note Address: 0x803CA1E4
 * @note Size: 0xB8
 */
bool EGECircle2f::in(Vector2f* point)
{
	Vector2f di = mCenter - *point;
	f32 length  = di.length();

	if (mRadius < length) {
		di.normalise();
		di *= mRadius;
		*point = mCenter - di;
		return true;
	}
	return false;
}

/**
 * out__Q23ebi11EGECircle2fFP10Vector2<f>
 * @note Address: 0x803CA29C
 * @note Size: 0xBC
 */
bool EGECircle2f::out(Vector2f* point)
{
	Vector2f di = mCenter - *point;
	if (mRadius <= di.length()) {
		return false;
	}
	di.normalise();
	di *= mRadius;
	*point = mCenter - di;
	return true;
}
} // namespace ebi
