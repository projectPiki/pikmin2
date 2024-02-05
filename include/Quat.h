#ifndef _QUAT_H
#define _QUAT_H

#include "types.h"
#include "Vector3.h"
#include "Matrixf.h"
#include "Matrix3f.h"

/**
 * @struct RPY
 * @brief Represents roll, pitch, and yaw angles in radians.
 */
struct RPY {
	f32 mRoll;  // _00
	f32 mPitch; // _04
	f32 mYaw;   // _08
};

/**
 * @brief Represents a quaternion.
 */
struct Quat {
	/**
	 * @brief Default constructor.
	 */
	Quat();

	/**
	 * @brief Copy constructor.
	 * @param other The quaternion to copy from.
	 */
	Quat(Quat& other);

	/**
	 * @brief Constructor that initializes the quaternion with a scalar and a vector.
	 * @param w The scalar component of the quaternion.
	 * @param xyz The vector component of the quaternion.
	 */
	Quat(f32 w, Vector3f xyz);

	/**
	 * @brief Constructor that initializes the quaternion from roll, pitch, and yaw angles.
	 * @param rpy The roll, pitch, and yaw angles.
	 * @note This constructor is unused and inlined.
	 */
	Quat(RPY& rpy);

	/**
	 * @brief Sets the quaternion using a vector.
	 * @param xyz The vector to set the quaternion.
	 */
	void set(Vector3f& xyz);

	/**
	 * @brief Sets the values of the quaternion.
	 *
	 * @param w The w component of the quaternion.
	 * @param x The x component of the quaternion.
	 * @param y The y component of the quaternion.
	 * @param z The z component of the quaternion.
	 */
	void set(f32 w, f32 x, f32 y, f32 z);

	/**
	 * @brief Sets the quaternion using a scalar and a vector.
	 * @param w The scalar component of the quaternion.
	 * @param xyz The vector component of the quaternion.
	 */
	inline void set(f32 w, Vector3f& xyz);

	/**
	 * @brief Sets the quaternion using roll, pitch, and yaw angles.
	 * @param rpy The roll, pitch, and yaw angles.
	 */
	void set(RPY& rpy);

	/**
	 * @brief Normalizes the quaternion.
	 * @note Inlined, and is currently a stub.
	 */
	void norm();

	/**
	 * @brief Computes the conjugate of the quaternion.
	 * @note Inlined, and is currently a stub.
	 */
	void conjugate();

	/**
	 * @brief Computes the inverse of the quaternion.
	 * @return The inverse quaternion.
	 */
	Quat inverse();

	/**
	 * @brief Normalizes the quaternion.
	 * @note This function is an alias for the `norm()` function.
	 */
	void normalise();

	/**
	 * @brief Performs spherical linear interpolation between two quaternions.
	 * @param a The first quaternion.
	 * @param t The interpolation factor.
	 * @param b The second quaternion.
	 */
	void slerp(Quat& a, f32 t, Quat& b);

	/**
	 * @brief Sets the quaternion to represent a rotation around an axis.
	 * @param axis The axis of rotation.
	 * @param angle The angle of rotation.
	 * @note Inline, and is currently a stub.
	 */
	void setAxisRotation(Vector3f& axis, f32 angle);

	/**
	 * @brief Converts the quaternion to a rotation matrix.
	 * @param out The output rotation matrix.
	 */
	void toMatrix(Matrix3f& out);

	/**
	 * @brief Converts a rotation matrix to a quaternion.
	 * @param out The input rotation matrix.
	 */
	void fromMatrixf(Matrixf& out);

	/**
	 * @brief Multiplies the quaternion by a scalar.
	 * @param other The scalar to multiply by.
	 * @return The resulting quaternion.
	 */
	inline Quat operator*(f32 other)
	{
		Quat result;
		result.w = other * w;
		result.x = other * x;
		result.y = other * y;
		result.z = other * z;
		return result;
	}

	/**
	 * @brief Assignment operator.
	 * @param other The quaternion to assign from.
	 * @return The assigned quaternion.
	 */
	inline Quat& operator=(const Quat& other)
	{
		w = other.w;
		x = other.x;
		y = other.y;
		z = other.z;
		return *this;
	}

	/**
	 * @brief Assignment operator.
	 * @param other The quaternion to assign from.
	 */
	inline void operator=(Quat& other)
	{
		w = other.w;
		x = other.x;
		y = other.y;
		z = other.z;
	}

	f32 w, x, y, z;
};

Quat operator*(Quat& q1, Quat& q2)
{
	//   v5 = a2[3];
	//   v6 = *a3;
	//   v7 = ((a2[1] * a3[2]) - (a2[2] * a3[1]));
	//   v8 = (a3[3] * *a2);
	//   v9 = (((a2[3] * a3[1]) - (a2[1] * a3[3])) + (a3[2] * *a2));
	//   v10 = (a2[2] * *a3);
	//   v13 = (((a2[2] * a3[3]) - (a2[3] * a3[2])) + (a3[1] * *a2)) + (a2[1] * *a3);
	//   *result = (*a2 * *a3) - ((a2[3] * a3[3]) + ((a2[1] * a3[1]) + (a2[2] * a3[2])));
	//   result[1] = v13;
	//   result[2] = v9 + v10;
	//   result[3] = (v7 + v8) + (v5 * v6);

	Quat result;
	result.w = (q1.w * q2.w) - ((q1.x * q2.x) + (q1.y * q2.y) + (q1.z * q2.z));
	result.x = (((q1.y * q2.z) - (q1.z * q2.y)) + (q2.x * q1.w)) + (q1.x * q2.w);
	result.y = (((q1.z * q2.x) - (q1.x * q2.z)) + (q2.y * q1.w)) + (q1.y * q2.w);
	result.z = (((q1.x * q2.y) - (q1.y * q2.x)) + (q2.z * q1.w)) + (q1.z * q2.w);
	return result;
}

#endif
