#include "types.h"
#include "sysMath.h"
#include "trig.h"
#include "Vector3.h"
#include "BoundBox.h"
#include "Plane.h"
#include "Matrix3f.h"
#include "Color4.h"
#include "Quat.h"
#include "Sys/Sphere.h"

Vector3f Vector3f::zero(0.0f);

/**
 * @note Address: 0x80411730
 * @note Size: 0x68
 */
f32 pikmin2_sinf(f32 x)
{
	return sinf(x);
}

/**
 * @note Address: 0x80411798
 * @note Size: 0x44
 */
f32 pikmin2_cosf(f32 x)
{
	return cosf(x);
}

/**
 * @note Address: N/A
 * @note Size: 0xF4
 */
f32 pikmin2_acosf(f32 x)
{
	if (x < -1.0f || x > 1.0f) {
		JUT_PANICLINE(65, "acosf %f\n", x);
	}
	return JMath::asinAcosTable_.acos_(x);
}

/**
 * @note Address: N/A
 * @note Size: 0xFC
 */
const f32 pikmin2_asinf(f32 x)
{
	if (x < -1.0f || x > 1.0f) {
		JUT_PANICLINE(65, "asin %f\n", x);
	}
	return JMath::asinAcosTable_.asin_(x);
}

/**
 * @note Address: 0x804117DC
 * @note Size: 0x28
 */
f32 pikmin2_atan2f(f32 x, f32 y)
{
	return JMAAtan2Radian(x, y);
}

/**
 * @note Address: 0x80411804
 * @note Size: 0x18
 * The asm seems necessary to match, but why would they do this?
 * Perhaps they didn't want to call the intrinsic.
 */
f32 pikmin2_sqrtf(register f32 x)
{
	if (x > 0.0f) {
		register f32 reg_f0;
#ifdef __MWERKS__ // clang-format off
		asm { frsqrte reg_f0, x }
#endif // clang-format on
		return reg_f0 * x;
	}
	return x;
}

/**
 * @note Address: 0x8041181C
 * @note Size: 0x3C
 */
f32 qdist2(f32 x1, f32 y1, f32 x2, f32 y2)
{
	f32 deltaX = x2 - x1;
	f32 deltaY = y2 - y1;

	f32 dist = SQUARE(deltaX) + SQUARE(deltaY);
	if (dist > 0.0f) {
		vf32 calcDist = dist * (__frsqrte(dist));
		dist          = calcDist;
	}

	return dist;
}

/**
 * @note Address: N/A
 * @note Size: 0x44
 */
f32 qdist3(f32 x1, f32 y1, f32 z1, f32 x2, f32 y2, f32 z2)
{
	f32 deltaX = x2 - x1;
	f32 deltaY = y2 - y1;
	f32 deltaZ = z2 - z1;
	return pikmin2_sqrtf(SQUARE(deltaX) + SQUARE(deltaY) + SQUARE(deltaZ));
}

/**
 * @note Address: N/A
 * @note Size: 0x10C
 */
Vector3f CRSpline(f32 t, Vector3f* controls)
{
	// 1.5f gets used in here somewhere - where isn't exactly important for now
	controls[0].y = 0.5f;
	controls[0].x = 1.5f;
	// UNUSED FUNCTION
}

/**
 * Calculates the tangent of a Catmull-Rom spline at a given parameter value.
 *
 * @param t The parameter value of the spline (between 0 and 1).
 * @param controls An array of four control points that define the spline.
 * @return The tangent vector at the given parameter value.
 *
 * @note Address: 0x80411858
 * @note Size: 0xF4
 */
Vector3f CRSplineTangent(f32 t, Vector3f* controls)
{
	f32 tSqr = t * t;
	Vector3f out;

	// Calculate the 4 basis functions for the Catmull-Rom spline
	f32 f0 = (-1.5f * tSqr) + (2.0f * t) - 0.5f;
	f32 f1 = (4.5f * tSqr) - 5.0f * t;
	f32 f2 = (-4.5f * tSqr) + (4.0f * t) + 0.5f;
	f32 f3 = (1.5f * tSqr) - t;

	// Multiply each control point by its corresponding basis function
	Vector3f ctr0 = controls[0] * f0;
	Vector3f ctr1 = controls[1] * f1;
	Vector3f ctr2 = controls[2] * f2;
	Vector3f ctr3 = controls[3] * f3;

	// Add the results together to get the tangent
	out = ctr0 + ctr1 + ctr2 + ctr3;
	return out;
}

/**
 * @note Address: 0x8041194C
 * @note Size: 0x44
 */
void BoundBox::read(Stream& stream)
{
	mMin.read(stream);
	mMax.read(stream);
}

/**
 * @note Address: 0x80411990
 * @note Size: 0x58
 */
void Vector3f::read(Stream& stream)
{
	x = stream.readFloat();
	y = stream.readFloat();
	z = stream.readFloat();
}

/**
 * @note Address: 0x804119E8
 * @note Size: 0x58
 */
void Vector3f::write(Stream& stream)
{
	stream.writeFloat(x);
	stream.writeFloat(y);
	stream.writeFloat(z);
}

/**
 * @note Address: 0x80411A40
 * @note Size: 0x64
 */
void Plane::write(Stream& stream)
{
	mNormal.write(stream);
	stream.writeFloat(mOffset);
}

/**
 * @note Address: 0x80411AA4
 * @note Size: 0x64
 */
void Plane::read(Stream& stream)
{
	mNormal.read(stream);
	mOffset = stream.readFloat();
}

/**
 * @note Address: 0x80411B08
 * @note Size: 0x64
 */
void Color4::write(Stream& stream)
{
	stream.writeByte(r);
	stream.writeByte(g);
	stream.writeByte(b);
	stream.writeByte(a);
}

/**
 * @note Address: 0x80411B6C
 * @note Size: 0x64
 */
void Color4::read(Stream& stream)
{
	r = stream.readByte();
	g = stream.readByte();
	b = stream.readByte();
	a = stream.readByte();
}

/**
 * @note Address: 0x80411BD0
 * @note Size: 0x2C
 */
// NOTE: angle needs to be in radians!
f32 roundAng(f32 angle)
{
	// if < 0, add 2PI
	if (angle < 0.0f) {
		angle += TAU;
	}

	// if > 2PI, subtract it
	if (angle >= TAU) {
		angle -= TAU;
	}

	return angle;
}

/**
 * @note Address: 0x80411BFC
 * @note Size: 0x74
 */
f32 angDist(f32 angle1, f32 angle2)
{
	f32 angle = roundAng(angle1 - angle2);

	if (angle >= PI) {
		angle = -roundAng(TAU - angle);
	}
	return angle;
}

/**
 * @note Address: 0x80411C70
 * @note Size: 0x30
 */
void Matrix3f::makeIdentity()
{
	// Identity Matrix
	// [1, 0, 0]
	// [0, 1, 0]
	// [0, 0, 1]

	mMatrix[0][0] = 1.0f;
	mMatrix[0][1] = 0.0f;
	mMatrix[0][2] = 0.0f;

	mMatrix[1][0] = 0.0f;
	mMatrix[1][1] = 1.0f;
	mMatrix[1][2] = 0.0f;

	mMatrix[2][0] = 0.0f;
	mMatrix[2][1] = 0.0f;
	mMatrix[2][2] = 1.0f;
}

/**
 * @note Address: 0x80411CA0
 * @note Size: 0x728
 */
void Matrix3f::calcEigenMatrix(Matrix3f& diagMtx, Matrix3f& eigenMtx)
{
	diagMtx = *this;
	eigenMtx.makeIdentity();

	Matrix3f jacobiMtx;
	Matrix3f intermediateMtx;
	Matrix3f transposeMtx;

	for (int i = 0; i < 50; i++) {
		f32 convThreshold = 0.01f;
		if (diagMtx.isDiagonal(convThreshold)) {
			break;
		}

		for (int row = 0; row < 2; row++) {
			for (int col = row + 1; col < 3; col++) {
				if (diagMtx.mMatrix[row][col] < convThreshold) {
					continue;
				}

				jacobiMtx          = diagMtx;
				Matrix3f& rotation = jacobiMtx;

				f32 offDiagonalElem = jacobiMtx.calcJacobi(row, col);

				f32 tangentTheta = (offDiagonalElem > 0.0f)
				                     ? 1.0f / (offDiagonalElem + pikmin2_sqrtf(offDiagonalElem * offDiagonalElem + 1.0f))
				                     : (-1.0f / (-offDiagonalElem + pikmin2_sqrtf(offDiagonalElem * offDiagonalElem + 1.0f)));

				f32 secantTheta = pikmin2_sqrtf(tangentTheta * tangentTheta + 1.0f);

				f32 cosTheta = 1.0f / secantTheta;
				f32 sinTheta = tangentTheta * cosTheta;

				jacobiMtx.makeIdentity();
				f32* rowValues = rotation.mMatrix[row];
				f32* colValues = rotation.mMatrix[col];
				rowValues[row] = cosTheta;
				colValues[col] = cosTheta;
				rowValues[col] = sinTheta;
				colValues[row] = -sinTheta;

				intermediateMtx = eigenMtx * jacobiMtx;
				eigenMtx        = intermediateMtx;

				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) {
						transposeMtx.mMatrix[i][j] = jacobiMtx.mMatrix[j][i];
					}
				}

				intermediateMtx = transposeMtx * diagMtx;
				diagMtx         = intermediateMtx * jacobiMtx;
			}
		}
	}
}

/**
 * @note Address: 0x804123C8
 * @note Size: 0x18
 */
Quat::Quat()
{
	w = 0.0f;
	v = Vector3f(0.0f);
}

/**
 * @note Address: N/A
 * @note Size: 0xC4
 */
void Quat::setAxisRotation(Vector3f& axis, f32 angle)
{
	// UNUSED/INLINED

	// NOTE: This is NOT TO MATCH ANYTHING, this is a LOGICAL EQUIVALENT to what it SHOULD BE!
	// FOR MODDERS ONLY!
#if FOR_MODDING
	// Normalize the axis
	axis.normalise();

	// Convert the angle from degrees to radians
	f32 radianAngle = angle * (PI / 180.0f);

	// Calculate the sin and cos of half the angle
	f32 cosHalfAngle = pikmin2_cosf(radianAngle / 2.0f);
	f32 sinHalfAngle = pikmin2_sinf(radianAngle / 2.0f);

	// Set the quaternion to represent the rotation
	w = cosHalfAngle;
	v = axis * sinHalfAngle;
#endif
}

/**
 * @note Address: 0x804123E0
 * @note Size: 0x20
 */
Quat::Quat(f32 _w, Vector3f vec)
{
	w = _w;
	v = vec;
}

/**
 * @note Address: N/A
 * @note Size: 0x268
 */
Quat::Quat(RPY& rpy)
{
	Quat quat(0.0f, Vector3f(0.0f, 0.0f, 0.0f));
	Quat quat2(0.0f, Vector3f(0.0f, 0.0f, 0.0f));
	*this = quat * quat2;
}

/**
 * @note Address: 0x804124FC
 * @note Size: 0x264
 */
void Quat::set(Vector3f& vec)
{
	Quat quatX;
	Quat quatY;
	Quat quatZ;

	f32 cosHalfX = cos(0.5f * vec.x);
	f32 sinHalfX = pikmin2_sinf(0.5f * vec.x);
	quatX.set(cosHalfX, sinHalfX, 0.0f, 0.0f);

	f32 cosHalfY = cos(0.5f * vec.y);
	f32 sinHalfY = pikmin2_sinf(0.5f * vec.y);
	quatY.set(cosHalfY, 0.0f, sinHalfY, 0.0f);

	f32 cosHalfZ = cos(0.5f * vec.z);
	f32 sinHalfZ = pikmin2_sinf(0.5f * vec.z);
	quatZ.set(cosHalfZ, 0.0f, 0.0f, sinHalfZ);

	*this = quatZ * quatY;
	*this = *this * quatX;
}

/**
 * @note Address: N/A
 * @note Size: 0x264
 */
void Quat::set(RPY&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80412760
 * @note Size: 0x24
 */
Quat::Quat(Quat& quat)
{
	w   = quat.w;
	v.x = quat.v.x;
	v.y = quat.v.y;
	v.z = quat.v.z;
}

/**
 * @note Address: 0x80412784
 * @note Size: 0x14
 */
void Quat::set(f32 a, f32 b, f32 c, f32 d)
{
	w   = a;
	v.x = b;
	v.y = c;
	v.z = d;
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void Quat::set(f32 w, Vector3f& xyz)
{
	set(w, xyz.x, xyz.y, xyz.z);
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
f32 Quat::norm()
{
	return v.dot(v) + w * w;
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
void Quat::conjugate()
{
	// UNUSED FUNCTION

#ifdef FOR_MODDING
	v.x = -v.x;
	v.y = -v.y;
	v.z = -v.z;
#endif
}

/**
 * @note Address: 0x80412798
 * @note Size: 0xB4
 */
Quat Quat::inverse()
{
	Quat inv       = *this;
	Vector3f inVec = v * -1.0f;
	f32 sq_mag     = norm();
	if (sq_mag > 0.0f) {
		f32 sq_norm  = 1.0f / sq_mag;
		Vector3f vec = inVec * sq_norm;
		Quat quat(sq_norm * w, vec);
		return quat;
	}

	inv.v = inVec;
	return inv;
}

/**
 * @note Address: N/A
 * @note Size: 0x128
 */
void rotate(Quat& q, Vector3f& v)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8041284C
 * @note Size: 0xA4
 */
void Quat::normalise()
{
	f32 len = pikmin2_sqrtf(w * w + v.dot(v));
	Vector3f vec(v * (1.0f / len));
	Quat quat((1.0f / len) * w, vec);
	*this = quat;
}

/**
 * Performs Spherical Linear Interpolation (SLERP) between two quaternions.
 * This function calculates a quaternion that represents a rotation from the start point to the end point
 * based on a linear interpolation parameter.
 *
 * @param q1 The end point of the path.
 * @param t The linear interpolation parameter (how far from start to end do we want to be).
 * @param qout The interpolated quaternion on the path, fraction t from start.
 *
 * @note Address: 0x804128F0
 * @note Size: 0x348
 */
void Quat::slerp(Quat& q1, f32 t, Quat& qout)
{
	f32 cosOmega = w * q1.w + v.dot(q1.v);

	if (cosOmega > 1.0f) {
		cosOmega = 1.0f;
	} else if (cosOmega < -1.0f) {
		cosOmega = -1.0f;
	}

	int flipDirection;
	if (cosOmega < 0.0) {
		cosOmega      = -cosOmega;
		flipDirection = 1;
	} else {
		flipDirection = 0;
	}

	f32 omega = pikmin2_acosf(cosOmega);

	f32 sinOmega = sinf(omega);

	f32 a;
	if (FABS(sinOmega) < 0.00001f) {
		a = 1.0f - t;
	} else {
		f32 denom  = 1.0f / sinOmega;
		f32 tOmega = t * omega;
		a          = sinf(omega - tOmega) * denom;
		t          = sinf(tOmega) * denom;
	}

	if (flipDirection != 0) {
		t = -t;
	}

	qout.v.x = (a * v.x) + (t * q1.v.x);
	qout.v.y = (a * v.y) + (t * q1.v.y);
	qout.v.z = (a * v.z) + (t * q1.v.z);
	qout.w   = (a * w) + (t * q1.w);
}

/**
 * @note Address: N/A
 * @note Size: 0x150
 */
void Quat::toMatrix(Matrix3f& m)
{
	// UNUSED FUNCTION

#if FOR_MODDING
	f32 two_xx = 2.0f * v.x * v.x;
	f32 two_yy = 2.0f * v.y * v.y;
	f32 two_zz = 2.0f * v.z * v.z;
	f32 two_xy = 2.0f * v.x * v.y;
	f32 two_xz = 2.0f * v.x * v.z;
	f32 two_yz = 2.0f * v.y * v.z;
	f32 two_wx = 2.0f * w * v.x;
	f32 two_wy = 2.0f * w * v.y;
	f32 two_wz = 2.0f * w * v.z;

	m.mMatrix[0][0] = 1.0f - (two_yy + two_zz);
	m.mMatrix[0][1] = two_xy - two_wz;
	m.mMatrix[0][2] = two_xz + two_wy;

	m.mMatrix[1][0] = two_xy + two_wz;
	m.mMatrix[1][1] = 1.0f - (two_xx + two_zz);
	m.mMatrix[1][2] = two_yz - two_wx;

	m.mMatrix[2][0] = two_xz - two_wy;
	m.mMatrix[2][1] = two_yz + two_wx;
	m.mMatrix[2][2] = 1.0f - (two_xx + two_yy);
#endif
}

/**
 * @note Address: 0x80412C38
 * @note Size: 0x33C
 */
void Quat::fromMatrixf(Matrixf& mtx)
{
	int maxElementCase;
	f32 averageElement = 0.25f * (1.0f + (mtx.mMatrix.mtxView[2][2] + (mtx.mMatrix.mtxView[0][0] + mtx.mMatrix.mtxView[1][1])));
	f32 element00      = -((0.5f * (mtx.mMatrix.mtxView[1][1] + mtx.mMatrix.mtxView[2][2])) - averageElement);
	f32 element11      = -((0.5f * (mtx.mMatrix.mtxView[2][2] + mtx.mMatrix.mtxView[0][0])) - averageElement);
	f32 element22      = -((0.5f * (mtx.mMatrix.mtxView[0][0] + mtx.mMatrix.mtxView[1][1])) - averageElement);

	if (averageElement > element00) {
		if (averageElement > element11) {
			if (averageElement > element22) {
				maxElementCase = 0; // w norm
			} else {
				maxElementCase = 3; // z norm
			}
		} else if (element11 > element22) {
			maxElementCase = 2; // y norm
		} else {
			maxElementCase = 3; // z norm
		}
	} else if (element00 > element11) {
		if (element00 > element22) {
			maxElementCase = 1; // x norm
		} else {
			maxElementCase = 3; // z norm
		}
	} else if (element11 > element22) {
		maxElementCase = 2; // y norm
	} else {
		maxElementCase = 3; // z norm
	}

	// Normalise quaternion based on the maximum element index
	switch (maxElementCase) {
	case 0: // w norm
	{
		w = pikmin2_sqrtf(averageElement);

		f32 temp_norm = 0.25f / w;
		v.x           = temp_norm * (mtx.mMatrix.mtxView[2][1] - mtx.mMatrix.mtxView[1][2]);
		v.y           = temp_norm * (mtx.mMatrix.mtxView[0][2] - mtx.mMatrix.mtxView[2][0]);
		v.z           = temp_norm * (mtx.mMatrix.mtxView[1][0] - mtx.mMatrix.mtxView[0][1]);
		break;
	}
	case 1: // x norm
	{
		v.x = pikmin2_sqrtf(element00);

		f32 temp_norm = 0.25f / v.x;
		w             = temp_norm * (mtx.mMatrix.mtxView[2][1] - mtx.mMatrix.mtxView[1][2]);
		v.y           = temp_norm * (mtx.mMatrix.mtxView[0][1] + mtx.mMatrix.mtxView[1][0]);
		v.z           = temp_norm * (mtx.mMatrix.mtxView[0][2] + mtx.mMatrix.mtxView[2][0]);
		break;
	}
	case 2: // y norm
	{
		v.y = pikmin2_sqrtf(element11);

		f32 temp_norm = 0.25f / v.y;
		w             = temp_norm * (mtx.mMatrix.mtxView[0][2] - mtx.mMatrix.mtxView[2][0]);
		v.z           = temp_norm * (mtx.mMatrix.mtxView[1][2] + mtx.mMatrix.mtxView[2][1]);
		v.x           = temp_norm * (mtx.mMatrix.mtxView[1][0] + mtx.mMatrix.mtxView[0][1]);
		break;
	}
	case 3: // z norm
	{
		v.z = pikmin2_sqrtf(element22);

		f32 temp_norm = 0.25f / v.z;
		w             = temp_norm * (mtx.mMatrix.mtxView[1][0] - mtx.mMatrix.mtxView[0][1]);
		v.x           = temp_norm * (mtx.mMatrix.mtxView[2][0] + mtx.mMatrix.mtxView[0][2]);
		v.y           = temp_norm * (mtx.mMatrix.mtxView[2][1] + mtx.mMatrix.mtxView[1][2]);
		break;
	}
	}

	if (w < 0.0f) {
		w   = -w;
		v.x = -v.x;
		v.y = -v.y;
		v.z = -v.z;
	}

	f32 len_q = pikmin2_sqrtf(w * w + v.x * v.x + v.y * v.y + v.z * v.z);
	f32 norm  = 1.0f / len_q;
	w *= norm;
	v.x *= norm;
	v.y *= norm;
	v.z *= norm;
}

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
void Plane::calcProjection(Vector3f&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x60
 */
void Plane::intersectRay(Vector3f&, Vector3f&)
{
	// UNUSED FUNCTION
}

// /**
// * @note Address: N/A
// * @note Size: 0x300
// */
// void Matrix4f::inverse(Matrix4f*)
// {
//    // UNUSED FUNCTION
// }

/**
 * @note Address: 0x80412F74
 * @note Size: 0xC8
 */
void BoundBox::makeBoundSphere(Sys::Sphere& sphere)
{
	Vector3f mid     = (mMin + mMax) / 2;
	sphere.mPosition = mid;

	f32 len_min = qdist3(mMin, mid);
	f32 len_max = qdist3(mMax, mid);

	sphere.mRadius = (len_min > len_max) ? len_min : len_max;
}

/**
 * @note Address: 0x8041303C
 * @note Size: 0x1EC
 */
int BoundBox::transform(Matrixf& mtx)
{
	// takes a 3x3 matrix M and transforms a BoundBox
	// by acting as a linear operator on each vertex

	Vector3f store[8]; // this is gonna hold a whole bunch of vertex information
	Vector3f mult_out; // vector to store matrix multiplication output
	// loop over all 8 vertices of the box
	for (int vertex = 0; vertex < 8; vertex++) {
		// bitwise operators put the right stuff in for the right vertex
		if ((vertex & 1) == 0) {
			store[vertex].x = mMin.x;
		} else {
			store[vertex].x = mMax.x;
		}

		if ((vertex & 2) == 0) {
			store[vertex].y = mMin.y;
		} else {
			store[vertex].y = mMax.y;
		}

		if ((vertex & 4) == 0) {
			store[vertex].z = mMin.z;
		} else {
			store[vertex].z = mMax.z;
		}
		// multiply M and vertex, store result in mult_out
		PSMTXMultVec(mtx.mMatrix.mtxView, (Vec*)&store[vertex], (Vec*)&mult_out);
		store[vertex] = mult_out; // hold onto result in store
	}

	// now we need to work out new bounds for the box?
	// initially set max and min to... well, max and min possible
	mMin.x = SHORT_FLOAT_MAX;
	mMin.y = SHORT_FLOAT_MAX;
	mMin.z = SHORT_FLOAT_MAX;

	mMax.x = -SHORT_FLOAT_MAX;
	mMax.y = -SHORT_FLOAT_MAX;
	mMax.z = -SHORT_FLOAT_MAX;

	int count = 0;
	for (int i = 0; i < 4; i++, count++) {
		include(store[2 * i]);
		include(store[2 * i + 1]);
	}
	return count;
}
