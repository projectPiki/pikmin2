#ifndef _TRIG_H
#define _TRIG_H

#include "types.h"
#include "Vector3.h"
#include "JSystem/JMath.h"

#define TAU 6.2831855f

inline bool checkASinCosBounds(f32 x) { return (x >= -1.0f) && (x <= 1.0f); }

inline int GetTableIdxNeg(f32 x) { return x *= -325.9493f; }

inline int GetTableIdxPos(f32 x) { return x *= 325.9493f; }

inline f32 sinf(f32 x)
{
	if (x < 0.0f) {
		return -JMath::sincosTable_.mTable[GetTableIdxNeg(x) & 0x7ffU].first;
	}
	return JMath::sincosTable_.mTable[GetTableIdxPos(x) & 0x7ffU].first;
}

inline f32 sinfc(const f32 x)
{
	if (x < 0.0f) {
		return -JMath::sincosTable_.mTable[(GetTableIdxNeg(x) & 0x7ffU)].first;
	}
	return JMath::sincosTable_.mTable[(GetTableIdxPos(x) & 0x7ffU)].first;
}

inline f32 cosf(f32 x)
{
	if (x < 0.0f) {
		x = -x;
	}
	return JMath::sincosTable_.mTable[(int)(x *= 325.9493f) & 0x7ffU].second;
}

inline f32 cosfc(const f32 x)
{
	f32 angle = x;
	if (angle < 0.0f) {
		angle = -angle;
	}
	return JMath::sincosTable_.mTable[(GetTableIdxPos(angle) & 0x7ffU)].second;
}

inline f32 acosf(f32 x)
{
	if (x >= 1.0f) {
		return 0.0f;
	} else if (x <= -1.0f) {
		return PI;
	} else if (x < 0.0f) {
		f32 dumb = HALF_PI;
		f32 acos = JMath::asinAcosTable_.mTable[(u32)(-x * 1023.5f)];
		return acos + dumb;
	} else {
		return HALF_PI - JMath::asinAcosTable_.mTable[(u32)(x * 1023.5f)];
	}
}

inline f32 angXZ(Vector3f& vec1, Vector3f& vec2)
{
	Vector3f pos = vec1 - vec2;
	return roundAng(JMAAtan2Radian(pos.x, pos.z));
}

inline f32 angXZ(f32 x, f32 z, Vector3f& vec)
{
	Vector3f pos = vec;
	return roundAng(JMAAtan2Radian(x - pos.x, z - pos.z));
}

inline f32 _angXZ(f32 x1, f32 z1, f32 x2, f32 z2)
{
	f32 angle = JMAAtan2Radian(x1 - x2, z1 - z2);
	return roundAng(angle);
}

inline f32 angXZ(f32 x, f32 z) { return roundAng(JMAAtan2Radian(x, z)); }

inline f32 absF(f32 val)
{
	f64 newVal = fabs(val);
	return (f32)newVal;
}

inline f32 scaledSin(f32 theta) { return sinf(theta * TAU); }

inline f32 absVal(f32 val) { return (val > 0.0f) ? val : -val; }

inline int absVal(int val) { return (val > 0) ? val : -val; }

inline f32 boundVal(f32 val, f32 limit) { return (val > 0.0f) ? limit : -limit; }

inline f32 adjustVal(f32 y, f32 x, f32 delta)
{
	f32 diff = absVal(y - x);

	return (diff < delta) ? x : (y < x) ? y + delta : y - delta;
}

inline f32 adjustVal(f32& diff, f32 y, f32 x, f32 delta)
{
	diff = absVal(y - x);

	return (diff < delta) ? x : (y < x) ? y + delta : y - delta;
}

inline f32 _normaliseAngle(f32 angle)
{
	f32 normalisedAngle = 0.0f;
	if (normalisedAngle >= angle) {
		f32 delta = normalisedAngle - angle;
		if (TAU - delta < delta) {
			normalisedAngle -= TAU;
		}
	} else {
		f32 delta = angle - normalisedAngle;
		if (TAU - delta < delta) {
			normalisedAngle += TAU;
		}
	}

	return normalisedAngle;
}

inline f32 _normaliseAngle(f32 angle, f32 start)
{
	f32 normalisedAngle = start;
	if (normalisedAngle >= angle) {
		f32 delta = normalisedAngle - angle;
		if (TAU - delta < delta) {
			normalisedAngle -= TAU;
		}
	} else {
		f32 delta = angle - normalisedAngle;
		if (TAU - delta < delta) {
			normalisedAngle += TAU;
		}
	}

	return normalisedAngle;
}

inline f32 _clampAngle(f32 angle, f32 difference, f32 limit)
{
	f32 angDistance = absVal(angle - difference);
	return angDistance < limit ? difference : (angle < difference) ? angle + limit : angle - limit;
}

inline int adjustValInt(int current, int dest, const int delta)
{
	return (absVal(current - dest) < delta) ? dest : (current < dest ? current += delta : current -= delta);
}

inline Vector3f getRotationOffset(f32 scale, f32 y, f32 angle) { return Vector3f(scale * sinf(angle), y, scale * cosf(angle)); }

inline Vector3f getRotation(f32 angle) { return Vector3f(-sinf(angle), 0.0f, cosf(angle)); }

inline f32 clamp(f32 val, f32 limit)
{
	if (absF(val) > limit) {
		val = (val > 0.0f) ? limit : -limit;
	}

	return val;
}

inline void clampAngle(f32& angle)
{
	if (angle < 0.0f) {
		angle = TAU + angle;
	} else if (angle >= TAU) {
		angle -= TAU;
	}
}

inline Vector3f getDirection(f32 angle)
{
	Vector3f vec = Vector3f(sinf(angle), 0.0f, cosf(angle));
	return vec;
}

inline Vector3f getDirection(f32 angle, f32 rad)
{
	Vector3f vec = Vector3f(rad * sinf(angle), 0.0f, rad * cosf(angle));
	return vec;
}

inline Vector3f getDirectionP2(f32 angle, f32 rad)
{
	Vector3f vec = Vector3f(rad * pikmin2_sinf(angle), 0.0f, rad * pikmin2_cosf(angle));
	return vec;
}

inline Vector3f getPerpDirection(f32 angle) { return Vector3f(cosf(angle), 0.0f, -sinf(angle)); }

inline Vector3f getDirectionMori(f32 angle)
{
	Vector3f vec = Vector3f(cosf(angle), 0.0f, sinf(angle));
	return vec;
}

inline f32 boundAboveBelow(f32 angle, f32 limit) { return (angle < -limit) ? -limit : (angle > limit) ? limit : angle; }
inline f32 boundAboveBelow(f32 angle, f32 min, f32 max) { return (angle < min) ? min : (angle > max) ? max : angle; }

#endif
