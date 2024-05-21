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
f32 pikmin2_sinf(f32 x) { return sinf(x); }

/**
 * @note Address: 0x80411798
 * @note Size: 0x44
 */
f32 pikmin2_cosf(f32 x) { return cosf(x); }

/**
 * @note Address: N/A
 * @note Size: 0xF4
 */
f32 pikmin2_acosf(f32 x) { return acosfDumb(x); }

/**
 * @note Address: N/A
 * @note Size: 0xFC
 */
f32 pikmin2_asinf(f32 x) { return JMath::asinAcosTable_.asin_(x); }

/**
 * @note Address: 0x804117DC
 * @note Size: 0x28
 */
f32 pikmin2_atan2f(f32 x, f32 y) { return JMath::atanTable_.atan2_(x, y); }

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
#endif // clang-format off
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

	f32 xdiff = (x2 - x1);
	f32 ydiff = (y2 - y1);

	f32 dist = ((xdiff * xdiff) + (ydiff * ydiff));
	if (dist > 0.0f) {
		vf32 calcDist = dist * (__frsqrte(dist));
		dist                  = calcDist;
	}
	return dist;
}

/**
 * @note Address: N/A
 * @note Size: 0x44
 */
f32 qdist3(f32 x1, f32 y1, f32 z1, f32 x2, f32 y2, f32 z2)
{
	f32 xdiff = (x2 - x1);
	f32 ydiff = (y2 - y1);
	f32 zdiff = (z2 - z1);
	Vector3f xyz(xdiff, ydiff, zdiff);

	return xyz.qLength();
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
 * @note Address: 0x80411858
 * @note Size: 0xF4
 */
Vector3f CRSplineTangent(f32 t, Vector3f* controls)
/* == Centripetal Catmull-Rom Spline tangent calculation ==
Outputs tangent vector of desired point, given:
- coords for a set of 4 control points (controls[0] to controls[4]) for the curve, and
- a parameter for the curve, t, between 0 and 1
    - t represents how 'far' between controls[1] and controls[2] the desired point is
    - so t=0, point will be controls[1]; t=1, point will be controls[2]
*/
{
	f32 tSqr = t * t;
	Vector3f out;

	// set coefficients - the floats are from centripetal CR matrices, assuming no tension
	// (this is actually just drawn out matrix multiplication)
	f32 f0 = (-1.5f * tSqr) + (2.0f * t) - 0.5f;
	f32 f1 = (4.5f * tSqr) - 5.0f * t;
	f32 f2 = (-4.5f * tSqr) + (4.0f * t) + 0.5f;
	f32 f3 = (1.5f * tSqr) - t;

	Vector3f ctr0 = controls[0] * f0;
	Vector3f ctr1 = controls[1] * f1;
	Vector3f ctr2 = controls[2] * f2;
	Vector3f ctr3 = controls[3] * f3;
	out           = ctr0 + ctr1 + ctr2 + ctr3;

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
void Matrix3f::calcEigenMatrix(Matrix3f& D, Matrix3f& P)
{
	/*  Diagonalises matrix (M), producing a diagonal matrix D, and an orthogonal matrix P
	 -- assumption is matrices D and P are both just 'locations' to store the outputs
	 -- D = P * M * transpose(P)
	 -- Diagonal elements of D are (approx) eigenvalues of M
	 -- Corresponding columns of P are (approx) eigenvectors of M for each eigenvalue
	 -- uses Jacobi algorithm with max 50 iterations for convergence
	 -- Matrix M assumed to be symmetric and diagonalisable
	*/
	// make initial outputs
	// initial D is just the 'input' matrix, i.e. what this is called on
	D = *this;
	// initial P is the identity (matrix equivalent of '1')
	P.makeIdentity(); // P is 0x50(r1)

	// declare some matrices we'll use to store stuff as we go
	Matrix3f J;     // this is 0x128(r1), Jacobi rotation
	Matrix3f J_int; // this is 0x104(r1), what we'll store successive matrix multiplication in
	Matrix3f T;     // this is 0xe0(r1), transpose of Jacobi rotation
	// 0x50, 0xbc = side-products of MM1
	// 0x2c, 0x98 = side-products of MM2
	// 0x8, 0x74 = side-products of MM3

	f32 conv_thresh = 0.01f; // want off-diags to be smaller than this, effectively
	bool hasConverged;

	// actual Jacobi algorithm - repeat this 50x or until convergence threshold is reached
	for (int conv_ctr = 0; conv_ctr < 50; conv_ctr++) {
		hasConverged = D.isDiagonal(conv_thresh);
		// check if elements are sufficient diagonal - if so, make them 0 and end; if not, we get to work
		if (!hasConverged) {
			// time to calculate some Jacobi rotation matrices
			// go through each off-diagonal term and check if it needs work

			// THIS SECTION ONWARD IS STILL DODGY REG-WISE

			// int row_col = 0; // r24
			// f32 *D_r19 = &D.mMatrix[0][0];
			// f32 *J_r25 = &J.mMatrix[0][0];
			// int row_OD = 0; // r3
			// int row_row = row_col; // r23

			// row_OD = row of off-diagonal we're looking at (row 0 for first and second, row 1 for third)
			for (int row_OD = 0; row_OD < 2; row_OD++) {
				// for (row_OD; row_OD < 2; row_OD++) {

				// int col_OD = row_OD + 1; // r6
				// f32 *J_r27 = &J.mMatrix[0][0];
				// int col_row = col_OD * (0xc); // r21
				// int col_col = col_OD; // r22
				// f32 *D_r28 = D_r19 + col_col;
				// f32 *J_r26 = J_r25 + col_col;
				// J_r27 += col_row;

				// col_OD = col of off-diagonal we're looking at (col 1 for first, col 2 for second and third)
				for (int col_OD = row_OD + 1; col_OD < 3; col_OD++) {
					// for (col_OD; col_OD < 3; col_OD++) {
					// f32 D_row_col = *(D_r28);
					if (!(D.mMatrix[row_OD][col_OD] < conv_thresh)) { // if this off-diagonal element is still too big
						// if (!(D_row_col < conv_thresh)) { // if this off-diagonal element is still too big
						J = D; // start with the attempted 'diagonal' matrix

						// Jacobi rotation matrix requires cos(theta) and sin(theta) to be calculated
						// so the rotation is the 'correct' one to get us closer to being diagonal
						// the main things about this calc are c_theta and s_theta, most of this is just
						// to make sure we're not doing dumb complex number math

						// f32 y = (*(J_r27 + col_col) - *(J_r25 + row_col)) / (2.0f * *(&J_r26[0]));
						// f32 y = (J.mMatrix[col_OD][col_OD] - J.mMatrix[row_OD][row_OD]) / (2.0f *
						// J.mMatrix[row_OD][col_OD]);
						f32 y = J.calcJacobi(row_OD, col_OD);
						f32 r, t, d;
						t           = (y > 0.0f) ? 1.0f / (y + pikmin2_sqrtf(y * y + 1.0f)) : (-1.0f / (-y + pikmin2_sqrtf(y * y + 1.0f)));
						d           = pikmin2_sqrtf(t * t + 1.0f);
						f32 c_theta = 1.0f / d;    //  cos(theta), for the diagonals
						f32 s_theta = t * c_theta; // (minus?) sin(theta), for the off-diagonals

						// Construct Jacobi rotation matrix
						// make J identity first
						J.makeIdentity();
						// f32 *J_ptr_row = &J.mMatrix[row_OD][0];
						// f32 *J_ptr_col = &J.mMatrix[col_OD][0];

						// f32 *J_r30 = &J.mMatrix[0][0];
						// f32 *J_r9 = J_r30 + row_row;
						// f32 *J_r10 = J_r30 + col_row;

						// replace 'inset' elements with cos or sin as required
						J.createJacobi(row_OD, col_OD, c_theta, s_theta);
						// createJacobi(J, row_row, row_col, col_row, col_col, c_theta, s_theta);
						// *(J_r9 + row_col) = c_theta;
						// *(J_r10 + col_col) = c_theta;
						// *(J_r9 + col_col) = s_theta;
						// *(J_r10 + row_col) = -s_theta;

						// END DODGY SECTION - HERE OUT SEEMS FINE

						// Matrix multiplication, round 1: M_1 = P * J
						// this creates the updated P matrix, which is just
						// all the Js so far, multiplied in order
						// i.e. P = J1 * J2 * J3 * ... * J50, if we get that far
						J_int = P * J;

						// update P
						P = J_int;

						// make T = transpose of J, i.e. flip it along its diagonal
						// J.makeTranspose(T);
						for (int i = 0; i < 3; i++) {
							for (int j = 0; j < 3; j++) {
								T.mMatrix[i][j] = J.mMatrix[j][i];
							}
						}

						// Matrix multiplication, round 2: M_2 = T * D
						// this creates the left "half" of the multiplication
						//   when updating D, store in M_2
						J_int = T * D;

						// Matrix multiplication, round 3: D = J_int * J!
						// this finishes the right "half" of the multiplication
						//   when updating D
						D = J_int * J;

					} // end if
					  // D_r28 += 1;
					  // col_col += 1;
					  // J_r27 += 3;
					  // J_r26 += 1;
					  // col_row += 3;
				}     // end col loop
				      // J_r25 += 3;
				      // row_col += 1;
				      // row_row += 3;
				      // D_r19 += 3;
			}         // end row loop
			          // if not diagonal, just move on to next one
		} else {      // if diagonals are already sufficiently 0
			break;
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
	FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE;
	FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE;
	FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE;
	FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE;
	FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE;
	FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE;
	FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE;
	FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE;
	FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE;
	FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE;
	FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE;
	FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE; FORCE_DONT_INLINE;
	Quat quat (0.0f, Vector3f(0.0f, 0.0f, 0.0f));
	Quat quat2 (0.0f, Vector3f(0.0f, 0.0f, 0.0f));
	*this = quat * quat2;
	// this needs to spawn the operator* weak function somehow
	// probably is recursive? this will do for now to match it
}

/**
 * @note Address: 0x804124FC
 * @note Size: 0x264
 */
void Quat::set(Vector3f& vec)
{
	Quat q1; // 0x48
	Quat q2; // 0x38
	Quat q3; // 0x28

	f32 cos_x = cos(0.5f * vec.x);
	f32 sin_x = pikmin2_sinf(0.5f * vec.x);
	q1.set(cos_x, sin_x, 0.0f, 0.0f);

	f32 cos_y = cos(0.5f * vec.y);
	f32 sin_y = pikmin2_sinf(0.5f * vec.y);
	q2.set(cos_y, 0.0f, sin_y, 0.0f);

	f32 cos_z = cos(0.5f * vec.z);
	f32 sin_z = pikmin2_sinf(0.5f * vec.z);
	q3.set(cos_z, 0.0f, 0.0f, sin_z);

	*this = q3 * q2;
	*this = *this * q1;
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
	w = quat.w;
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
	w = a;
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
	Quat inv = *this;
	Vector3f inVec = v * -1.0f;
	f32 sq_mag = norm();
	if (sq_mag > 0.0f) {
		f32 sq_norm = 1.0f / sq_mag;
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
	f32 len    = pikmin2_sqrtf(w * w + v.dot(v));
	Vector3f vec (v * (1.0f / len));
	Quat quat((1.0f / len) * w, vec);
	*this = quat;
}

/**
 * @note Address: 0x804128F0
 * @note Size: 0x348
 */
/**
 * Performs Spherical Linear Interpolation (SLERP) between two quaternions.
 * This function calculates a quaternion that represents a rotation from the start point to the end point
 * based on a linear interpolation parameter.
 *
 * @param q1 The end point of the path.
 * @param t The linear interpolation parameter (how far from start to end do we want to be).
 * @param qout The interpolated quaternion on the path, fraction t from start.
 */
void Quat::slerp(Quat& q1, f32 t, Quat& qout)
{
	// take dot product between start and end - this is cos(omega)
	// these inputs really should be unit quats, so this should never be > |1|
	f32 cos_omega = dot(q1);

	// acos is gonna throw errors if we put in > |1|, so don't do that
	if (cos_omega > 1.0f) {
		cos_omega = 1.0f;
	} else if (cos_omega < -1.0f){
		cos_omega = -1.0f;
	}

	// calculate omega based on positive, but need to remember to flip back later if negative
	int flipDirection;
	if (cos_omega < 0.0) {
		cos_omega     = -cos_omega;
		flipDirection = 1;
	} else {
		flipDirection = 0;
	}

	// if something's gone drastically wrong, panic bc we can't do acos math on stuff that's outside -1 to 1
	if (cos_omega < -1.0f || cos_omega > 1.0f) {
		JUT_PANICLINE(65, "acosf %f\n", cos_omega);
	}

	// call acos to get omega
	// [ISSUE HERE] ----------------------------------------------------------------=-=-=-=-=-=-=-=-=-=-HEREHERHEHERHERHE
	// I negated to fix the resgwaps below, which indicates some fuckry
	// Regswaps happen inside this function but once fixed I think it'll solve the ones below
	f32 newOmega = -pikmin2_asinf(cos_omega);

	// calculate sin(omega)
	f32 sinOmega = pikmin2_sinf(newOmega);

	// work out what the linear interpolation factors should be
	// if sin_omega is super tiny, just use an approximation
	f32 a;
	if (FABS(sinOmega) < 0.00001f) {
		a = 1.0f - t;
	} else {
		f32 denom   = (1.0f / sinOmega);
		f32 t_omega = t * newOmega;
		a           = pikmin2_sinf(newOmega - t_omega) * denom;
		t           = pikmin2_sinf(t_omega) * denom;
	}

	// remember to flip back if cos(omega) was negative before!
	if (flipDirection != 0) {
		t = -t;
	}

	// do the actual linear interpolation based on factors above
	qout.v.x = (a * v.x) + (t * q1.v.x);
	qout.v.y = (a * v.y) + (t * q1.v.y);
	qout.v.z = (a * v.z) + (t * q1.v.z);
	qout.w = (a * w) + (t * q1.w);
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stfd      f30, 0x40(r1)
	  psq_st    f30,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  stw       r28, 0x30(r1)
	  mr        r28, r3
	  mr        r29, r4
	  lfs       f2, 0x8(r3)
	  fmr       f31, f1
	  lfs       f0, 0x8(r4)
	  mr        r30, r5
	  lfs       f3, 0x4(r3)
	  fmuls     f0, f2, f0
	  lfs       f1, 0x4(r4)
	  lfs       f4, 0xC(r3)
	  lfs       f2, 0xC(r4)
	  fmadds    f1, f3, f1, f0
	  lfs       f5, 0x0(r3)
	  lfs       f3, 0x0(r4)
	  lfs       f0, 0x1F18(r2)
	  fmadds    f1, f4, f2, f1
	  fmadds    f30, f5, f3, f1
	  fcmpo     cr0, f30, f0
	  ble-      .loc_0x80
	  fmr       f30, f0
	  b         .loc_0x90

	.loc_0x80:
	  lfs       f0, 0x1F14(r2)
	  fcmpo     cr0, f30, f0
	  bge-      .loc_0x90
	  fmr       f30, f0

	.loc_0x90:
	  lfd       f0, 0x1F50(r2)
	  fcmpo     cr0, f30, f0
	  bge-      .loc_0xA8
	  fneg      f30, f30
	  li        r31, 0x1
	  b         .loc_0xAC

	.loc_0xA8:
	  li        r31, 0

	.loc_0xAC:
	  lfs       f0, 0x1F14(r2)
	  fcmpo     cr0, f30, f0
	  blt-      .loc_0xC4
	  lfs       f0, 0x1F18(r2)
	  fcmpo     cr0, f30, f0
	  ble-      .loc_0xE4

	.loc_0xC4:
	  fmr       f1, f30
	  lis       r3, 0x804A
	  lis       r4, 0x804A
	  subi      r5, r4, 0x69AC
	  subi      r3, r3, 0x69B8
	  li        r4, 0x41
	  crset     6, 0x6
	  bl        -0x3E8390

	.loc_0xE4:
	  lfs       f0, 0x1F18(r2)
	  fcmpo     cr0, f30, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xFC
	  lfs       f3, 0x1F10(r2)
	  b         .loc_0x170

	.loc_0xFC:
	  lfs       f0, 0x1F14(r2)
	  fcmpo     cr0, f30, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x114
	  lfs       f3, 0x1F1C(r2)
	  b         .loc_0x170

	.loc_0x114:
	  lfs       f0, 0x1F10(r2)
	  fcmpo     cr0, f30, f0
	  bge-      .loc_0x14C
	  fneg      f0, f30
	  lfs       f1, 0x1F20(r2)
	  fmuls     f1, f1, f0
	  bl        -0x350ED0
	  lis       r4, 0x8051
	  rlwinm    r0,r3,2,0,29
	  subi      r3, r4, 0x1E00
	  lfs       f0, 0x1F24(r2)
	  lfsx      f1, r3, r0
	  fadds     f3, f1, f0
	  b         .loc_0x170

	.loc_0x14C:
	  lfs       f0, 0x1F20(r2)
	  fmuls     f1, f0, f30
	  bl        -0x350EF8
	  lis       r4, 0x8051
	  rlwinm    r0,r3,2,0,29
	  subi      r3, r4, 0x1E00
	  lfs       f0, 0x1F24(r2)
	  lfsx      f1, r3, r0
	  fsubs     f3, f0, f1

	.loc_0x170:
	  lfs       f0, 0x1F10(r2)
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x1A8
	  lfs       f0, 0x1F08(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f2, f0
	  b         .loc_0x1CC

	.loc_0x1A8:
	  lfs       f0, 0x1F0C(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f2, r3, r0

	.loc_0x1CC:
	  fabs      f1, f2
	  lfs       f0, 0x1F58(r2)
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1EC
	  lfs       f0, 0x1F18(r2)
	  fsubs     f2, f0, f31
	  b         .loc_0x2BC

	.loc_0x1EC:
	  lfs       f1, 0x1F18(r2)
	  fmuls     f5, f31, f3
	  lfs       f0, 0x1F10(r2)
	  fdivs     f4, f1, f2
	  fsubs     f1, f3, f5
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x234
	  lfs       f0, 0x1F08(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f1, f0
	  b         .loc_0x258

	.loc_0x234:
	  lfs       f0, 0x1F0C(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r3, r0

	.loc_0x258:
	  lfs       f0, 0x1F10(r2)
	  fmuls     f2, f4, f1
	  fcmpo     cr0, f5, f0
	  bge-      .loc_0x294
	  lfs       f0, 0x1F08(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f5, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0x2B8

	.loc_0x294:
	  lfs       f0, 0x1F0C(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f5, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0x2B8:
	  fmuls     f31, f4, f0

	.loc_0x2BC:
	  cmpwi     r31, 0
	  beq-      .loc_0x2C8
	  fneg      f31, f31

	.loc_0x2C8:
	  lfs       f0, 0x4(r29)
	  lfs       f1, 0x4(r28)
	  fmuls     f0, f31, f0
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x4(r30)
	  lfs       f0, 0x8(r29)
	  lfs       f1, 0x8(r28)
	  fmuls     f0, f31, f0
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x8(r30)
	  lfs       f0, 0xC(r29)
	  lfs       f1, 0xC(r28)
	  fmuls     f0, f31, f0
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0xC(r30)
	  lfs       f0, 0x0(r29)
	  lfs       f1, 0x0(r28)
	  fmuls     f0, f31, f0
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x0(r30)
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  lwz       r0, 0x64(r1)
	  lwz       r28, 0x30(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
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
	int case_var;
	f32 temp_norm;

	f32 avg_elem = 0.25f * (1.0f + (mtx.mMatrix.mtxView[2][2] + (mtx.mMatrix.mtxView[0][0] + mtx.mMatrix.mtxView[1][1])));
	f32 var_00   = -((0.5f * (mtx.mMatrix.mtxView[1][1] + mtx.mMatrix.mtxView[2][2])) - avg_elem);
	f32 var_11   = -((0.5f * (mtx.mMatrix.mtxView[2][2] + mtx.mMatrix.mtxView[0][0])) - avg_elem);
	f32 var_22   = -((0.5f * (mtx.mMatrix.mtxView[0][0] + mtx.mMatrix.mtxView[1][1])) - avg_elem);

	if (avg_elem > var_00) {
		if (avg_elem > var_11) {
			if (avg_elem > var_22) {
				case_var = 0; // w norm
			} else {
				case_var = 3; // z norm
			}
		} else if (var_11 > var_22) {
			case_var = 2; // y norm
		} else {
			case_var = 3; // z norm
		}
	} else if (var_00 > var_11) {
		if (var_00 > var_22) {
			case_var = 1; // x norm
		} else {
			case_var = 3; // z norm
		}
	} else if (var_11 > var_22) {
		case_var = 2; // y norm
	} else {
		case_var = 3; // z norm
	}

	switch (case_var) {
	case 0: // w norm
		w         = pikmin2_sqrtf(avg_elem);
		temp_norm = 0.25f / w;
		v.x         = temp_norm * (mtx.mMatrix.mtxView[2][1] - mtx.mMatrix.mtxView[1][2]);
		v.y         = temp_norm * (mtx.mMatrix.mtxView[0][2] - mtx.mMatrix.mtxView[2][0]);
		v.z         = temp_norm * (mtx.mMatrix.mtxView[1][0] - mtx.mMatrix.mtxView[0][1]);
		break;
	case 1: // x norm
		v.x         = pikmin2_sqrtf(var_00);
		temp_norm = 0.25f / v.x;
		w         = temp_norm * (mtx.mMatrix.mtxView[2][1] - mtx.mMatrix.mtxView[1][2]);
		v.y         = temp_norm * (mtx.mMatrix.mtxView[0][1] + mtx.mMatrix.mtxView[1][0]);
		v.z         = temp_norm * (mtx.mMatrix.mtxView[0][2] + mtx.mMatrix.mtxView[2][0]);
		break;
	case 2: // y norm
		v.y         = pikmin2_sqrtf(var_11);
		temp_norm = 0.25f / v.y;
		w         = temp_norm * (mtx.mMatrix.mtxView[0][2] - mtx.mMatrix.mtxView[2][0]);
		v.z         = temp_norm * (mtx.mMatrix.mtxView[1][2] + mtx.mMatrix.mtxView[2][1]);
		v.x         = temp_norm * (mtx.mMatrix.mtxView[1][0] + mtx.mMatrix.mtxView[0][1]);
		break;
	case 3: // z norm
		v.z         = pikmin2_sqrtf(var_22);
		temp_norm = 0.25f / v.z;
		w         = temp_norm * (mtx.mMatrix.mtxView[1][0] - mtx.mMatrix.mtxView[0][1]);
		v.x         = temp_norm * (mtx.mMatrix.mtxView[2][0] + mtx.mMatrix.mtxView[0][2]);
		v.y         = temp_norm * (mtx.mMatrix.mtxView[2][1] + mtx.mMatrix.mtxView[1][2]);
		break;
	}
	if (w < 0.0f) {
		w = -w;
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
	Vector3f mid = (mMin + mMax) / 2;
	sphere.mPosition = mid;

	f32 len_min = qdist3(mMin.x, mMin.y, mMin.z, mid.x, mid.y, mid.z);
	f32 len_max = qdist3(mMax.x, mMax.y, mMax.z, mid.x, mid.y, mid.z);

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
