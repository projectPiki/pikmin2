#ifndef _MATRIXF_H
#define _MATRIXF_H

#include "Dolphin/mtx.h"
#include "types.h"
#include "Vector3.h"

struct Quat;

struct Matrixf {
	/**
	 * @brief Prints the matrix.
	 *
	 * @param label The label to display before printing the matrix.
	 */
	void print(char* label);

	/**
	 * @brief Sets the matrix to a natural posture based on the given vector and angle.
	 *
	 * @param direction The direction vector.
	 * @param angle The angle in radians.
	 */
	void makeNaturalPosture(Vector3f& direction, f32 angle);

	/**
	 * @brief Sets the matrix to a natural posture based on the given vector.
	 *
	 * @note Is only available in the debug build. Therefore it's a stub in the release build.
	 * @param direction The direction vector.
	 */
	void makeNaturalPosture(Vector3f& direction);

	/**
	 * @brief Creates a scaling and translation matrix.
	 *
	 * This function creates a scaling and translation matrix based on the given scaling and translation vectors.
	 *
	 * @param scale The scaling vector.
	 * @param translation The translation vector.
	 */
	void makeST(Vector3f& scale, Vector3f& translation);

	/**
	 * @brief Creates a scaling and rotation matrix.
	 *
	 * @param scale The scaling vector.
	 * @param rotation The rotation vector.
	 */
	void makeSR(Vector3f& scale, Vector3f& rotation);

	/**
	 * @brief Creates a scaling, rotation, and translation matrix.
	 *
	 * @param scale The scaling vector.
	 * @param rotation The rotation vector.
	 * @param translation The translation vector.
	 */
	void makeSRT(Vector3f& scale, Vector3f& rotation, Vector3f& translation);

	/**
	 * @brief Creates a scaling, quaternion, and translation matrix.
	 *
	 * @note This function is only available in the debug build. Therefore it's a stub in the release build.
	 * @param scale The scaling vector.
	 * @param quaternion The quaternion.
	 * @param translation The translation vector.
	 */
	void makeSQT(Vector3f& scale, Quat& quaternion, Vector3f& translation);

	/**
	 * @brief Creates a translation matrix.
	 *
	 * @param translation The translation vector.
	 */
	void makeT(Vector3f& translation);

	/**
	 * @brief Creates a translation and rotation matrix.
	 *
	 * @param translation The translation vector.
	 * @param rotation The rotation vector.
	 */
	void makeTR(Vector3f& translation, Vector3f& rotation);

	/**
	 * @brief Creates a translation and quaternion matrix.
	 *
	 * @param translation The translation vector.
	 * @param quaternion The quaternion.
	 */
	void makeTQ(Vector3f& translation, Quat& quaternion);

	/**
	 * @brief Creates a quaternion matrix.
	 *
	 * @param quaternion The quaternion.
	 */
	void makeQ(Quat& quaternion);

	/**
	 * @brief Accesses the element at the specified row and column of the matrix.
	 *
	 * @param row The row index of the element.
	 * @param column The column index of the element.
	 * @return A reference to the element at the specified position.
	 */
	inline f32& operator()(int row, int column) { return mMatrix.mtxView[row][column]; }

	/**
	 * @brief Multiplies a Matrix by a Vector3f.
	 *
	 * @param other The Vector3f to multiply with.
	 * @return The result of the multiplication.
	 */
	inline Vector3f operator*(Vector3f& other)
	{
		Vector3f outVec;
		outVec.x = (*this)(0, 0) * other.x + (*this)(0, 1) * other.y + (*this)(0, 2) * other.z;
		outVec.y = (*this)(1, 0) * other.x + (*this)(1, 1) * other.y + (*this)(1, 2) * other.z;
		outVec.z = (*this)(2, 0) * other.x + (*this)(2, 1) * other.y + (*this)(2, 2) * other.z;
		return outVec;
	}

	/**
	 * @brief Multiplies the matrix by a scalar value and assigns the result to the matrix.
	 *
	 * @param scale The scalar value to multiply the matrix by.
	 * @return A reference to the modified matrix.
	 */
	inline Matrixf& operator*=(f32& scale)
	{
		mMatrix.structView.xx *= scale;
		mMatrix.structView.yx *= scale;
		mMatrix.structView.zx *= scale;

		mMatrix.structView.xy *= scale;
		mMatrix.structView.yy *= scale;
		mMatrix.structView.zy *= scale;

		mMatrix.structView.xz *= scale;
		mMatrix.structView.yz *= scale;
		mMatrix.structView.zz *= scale;

		return *this;
	}

	/**
	 * @brief Multiplies the matrix by a Vector3f and assigns the result to the matrix.
	 *
	 * @param other The Vector3f to multiply with.
	 * @return A reference to the modified Matrixf.
	 */
	inline Matrixf& operator*=(Vector3f& other)
	{
		mMatrix.structView.xx *= other.x;
		mMatrix.structView.xy *= other.x;
		mMatrix.structView.xz *= other.x;

		mMatrix.structView.yx *= other.y;
		mMatrix.structView.yy *= other.y;
		mMatrix.structView.yz *= other.y;

		mMatrix.structView.zx *= other.z;
		mMatrix.structView.zy *= other.z;
		mMatrix.structView.zz *= other.z;

		return *this;
	}

	/**
	 * @brief Overloads the '+' operator to perform matrix addition.
	 *
	 * This function adds the elements of the current matrix with the elements of another matrix.
	 * The result is stored in the current matrix itself.
	 *
	 * @param other The matrix to be added.
	 * @return A reference to the current matrix after addition.
	 */
	inline Matrixf operator+(Matrixf& other)
	{
		Matrixf concatMtx;
		PSMTXConcat(mMatrix.mtxView, other.mMatrix.mtxView, concatMtx.mMatrix.mtxView);
		return concatMtx;
	}

	/**
	 * @brief Subtracts the given matrix from the current matrix.
	 *
	 * @param other The matrix to subtract.
	 * @return A reference to the current matrix after subtraction.
	 */
	inline Matrixf operator-(Matrixf& other)
	{
		Matrixf result;
		result.mMatrix.structView.xx = mMatrix.structView.xx - other.mMatrix.structView.xx;
		result.mMatrix.structView.yx = mMatrix.structView.yx - other.mMatrix.structView.yx;
		result.mMatrix.structView.zx = mMatrix.structView.zx - other.mMatrix.structView.zx;

		result.mMatrix.structView.xy = mMatrix.structView.xy - other.mMatrix.structView.xy;
		result.mMatrix.structView.yy = mMatrix.structView.yy - other.mMatrix.structView.yy;
		result.mMatrix.structView.zy = mMatrix.structView.zy - other.mMatrix.structView.zy;

		result.mMatrix.structView.xz = mMatrix.structView.xz - other.mMatrix.structView.xz;
		result.mMatrix.structView.yz = mMatrix.structView.yz - other.mMatrix.structView.yz;
		result.mMatrix.structView.zz = mMatrix.structView.zz - other.mMatrix.structView.zz;
		return result;
	}

	/**
	 * @brief Retrieves the specified column from the matrix and stores it in the given Vector3f object.
	 *
	 * @param index The index of the column to retrieve.
	 * @param out The Vector3f object to store the retrieved column.
	 */
	inline void getColumn(int index, Vector3f& out)
	{
		out.x = operator()(0, index);
		out.y = operator()(1, index);
		out.z = operator()(2, index);
	}

	// for navi_demoCheck.cpp
	// getBasis(0) is for the Right Vector
	// getBasis(1) is for the Up Vector
	// getBasis(2) is for the Forward Vector
	inline void getBasis(int index, Vector3f& out)
	{
		out.x = operator()(0, index);
		out.y = operator()(1, index);
		out.z = operator()(2, index);
	}

	inline Vector3f getBasis(int index) { return Vector3f(operator()(0, index), operator()(1, index), operator()(2, index)); }

	/**
	 * @brief Retrieves the column vector at the specified index.
	 *
	 * @param index The index of the column vector to retrieve.
	 * @return The column vector at the specified index.
	 */
	inline Vector3f getColumn(int index)
	{
		return Vector3f(mMatrix.mtxView[0][index], mMatrix.mtxView[1][index], mMatrix.mtxView[2][index]);
	}

	/**
	 * @brief Sets the specified column of the matrix to the given vector.
	 *
	 * @param index The index of the column to set.
	 * @param in The vector to set the column to.
	 */
	inline void setColumn(int index, Vector3f& in)
	{
		mMatrix.mtxView[0][index] = in.x;
		mMatrix.mtxView[1][index] = in.y;
		mMatrix.mtxView[2][index] = in.z;
	}

	inline void setColumn(int index, const Vector3f& in)
	{
		mMatrix.mtxView[0][index] = in.x;
		mMatrix.mtxView[1][index] = in.y;
		mMatrix.mtxView[2][index] = in.z;
	}

	/**
	 * @brief Sets the values of a specific column in the matrix.
	 *
	 * @param index The index of the column to set.
	 * @param x The value to set for the x component of the column.
	 * @param y The value to set for the y component of the column.
	 * @param z The value to set for the z component of the column.
	 */
	inline void setColumn(int index, f32 x, f32 y, f32 z)
	{
		mMatrix.mtxView[0][index] = x;
		mMatrix.mtxView[1][index] = y;
		mMatrix.mtxView[2][index] = z;
	}

	/**
	 * @brief Retrieves the specified row from the matrix.
	 *
	 * @param index The index of the row to retrieve.
	 * @param out   The output vector where the row will be stored.
	 */
	inline void getRow(int index, Vector3f& out)
	{
		out.x = mMatrix.mtxView[index][0];
		out.y = mMatrix.mtxView[index][1];
		out.z = mMatrix.mtxView[index][2];
	}

	/**
	 * @brief Returns the specified row of the matrix as a Vector3f object.
	 *
	 * @param index The index of the row to retrieve.
	 * @return The row of the matrix as a Vector3f object.
	 */
	inline Vector3f getRow(int index) { return Vector3f(mMatrix.mtxView[index][0], mMatrix.mtxView[index][1], mMatrix.mtxView[index][2]); }

	inline f32 getRowLength(int index)
	{
		Vector3f row = getRow(index);
		return row.length();
	}

	/**
	 * @brief Sets the values of a specific row in the matrix.
	 *
	 * @param index The index of the row to set.
	 * @param in The vector containing the values to set for the row.
	 */
	inline void setRow(int index, Vector3f& in)
	{
		mMatrix.mtxView[index][0] = in.x;
		mMatrix.mtxView[index][1] = in.y;
		mMatrix.mtxView[index][2] = in.z;
	}

	/**
	 * @brief Sets the values of a specific row in the matrix.
	 *
	 * @param index The index of the row to set.
	 * @param x The value for the first element of the row.
	 * @param y The value for the second element of the row.
	 * @param z The value for the third element of the row.
	 */
	inline void setRow(int index, f32 x, f32 y, f32 z)
	{
		mMatrix.mtxView[index][0] = x;
		mMatrix.mtxView[index][1] = y;
		mMatrix.mtxView[index][2] = z;
	}

	/**
	 * @brief Retrieves the translation vector from the matrix.
	 *
	 * @param out The output vector to store the translation.
	 */
	inline void getTranslation(Vector3f& out) { getBasis(3, out); }

	/**
	 * Returns the translation vector of the matrix.
	 *
	 * @return The translation vector.
	 */
	inline Vector3f getTranslation() { return getColumn(3); }

	/**
	 * @brief Sets the translation component of the matrix.
	 *
	 * @param in The translation vector.
	 */
	inline void setTranslation(Vector3f& in) { setColumn(3, in); }

	/**
	 * @brief Sets the translation component of the matrix to the specified vector.
	 *
	 * @param in The vector representing the translation.
	 * @note Different from setTranslation(Vector3f&) in that it takes a Vector3f by value.
	 */
	inline void newTranslation(Vector3f in) { setColumn(3, in); }

	inline void getSoundPosition(Vector3f& soundPos, Vector3f& newPos)
	{
		newPos.set(-(soundPos.x * mMatrix.mtxView[0][0] + soundPos.y * mMatrix.mtxView[0][1] + soundPos.z * mMatrix.mtxView[0][2]),
		           -(soundPos.x * mMatrix.mtxView[1][0] + soundPos.y * mMatrix.mtxView[1][1] + soundPos.z * mMatrix.mtxView[1][2]),
		           -(soundPos.x * mMatrix.mtxView[2][0] + soundPos.y * mMatrix.mtxView[2][1] + soundPos.z * mMatrix.mtxView[2][2]));
	}

	/**
	 * @brief Scales the matrix by a scalar value.
	 *
	 * This function multiplies each element of the matrix by the given scalar value.
	 *
	 * @param other The scalar value to scale the matrix by.
	 */
	inline void scale(f32 other) { *this *= other; }

	/**
	 * @brief Multiplies the matrix by a vector using the PSMTXMultVec function.
	 *
	 * @param other The vector to be multiplied.
	 * @return The resulting vector after multiplication.
	 */
	inline Vector3f mtxMult(const Vector3f& other)
	{
		Vector3f outVec;
		PSMTXMultVec(this->mMatrix.mtxView, (Vec*)&other, (Vec*)&outVec);
		return outVec;
	}

	/**
	 * @brief Multiplies this vector by the transpose of a matrix.
	 *
	 * @param other The vector to be multiplied.
	 * @return The resulting vector.
	 * @note Surprisingly enough, this is a Vector3f function, from Pikmin 1: Vector3f::rotateTranspose(Matrix4f&)
	 */
	inline Vector3f multTranspose(Vector3f& other)
	{
		Vector3f outVec;
		outVec.x = other.x * (*this)(0, 0) + other.y * (*this)(1, 0) + other.z * (*this)(2, 0);
		outVec.y = other.x * (*this)(0, 1) + other.y * (*this)(1, 1) + other.z * (*this)(2, 1);
		outVec.z = other.x * (*this)(0, 2) + other.y * (*this)(1, 2) + other.z * (*this)(2, 2);
		return outVec;
	}

	/**
	 * @brief Sets the transformation matrix based on the given direction, angle, and translation.
	 *
	 * @param direction The direction vector.
	 * @param angle The angle vector.
	 * @param translation The translation vector.
	 */
	inline void setTransformationMtx(Vector3f& direction, Vector3f& angle, Vector3f& translation)
	{
		Vector3f cross(direction.y * angle.z - direction.z * angle.y, direction.z * angle.x - direction.x * angle.z,
		               direction.x * angle.y - direction.y * angle.x);

		(*this)(0, 0) = cross.x;
		(*this)(0, 1) = direction.x;
		(*this)(0, 2) = angle.x;
		(*this)(0, 3) = translation.x;

		(*this)(1, 0) = cross.y;
		(*this)(1, 1) = direction.y;
		(*this)(1, 2) = angle.y;
		(*this)(1, 3) = translation.y;

		(*this)(2, 0) = cross.z;
		(*this)(2, 1) = direction.z;
		(*this)(2, 2) = angle.z;
		(*this)(2, 3) = translation.z;
	}

	/**
	 * @brief Sets the values of the matrix using the given scale, position, and view matrix.
	 *
	 * @param scale The scale factor to apply to the matrix.
	 * @param pos The position vector to set in the matrix.
	 * @param viewMtx The view matrix to retrieve values from.
	 */
	inline void set(f32 scale, Vector3f& pos, Matrixf* viewMtx)
	{
		f32 yScale    = -scale;
		(*this)(0, 0) = viewMtx->mMatrix.mtxView[0][0] * scale;
		(*this)(1, 0) = viewMtx->mMatrix.mtxView[0][1] * scale;
		(*this)(2, 0) = viewMtx->mMatrix.mtxView[0][2] * scale;

		(*this)(0, 1) = viewMtx->mMatrix.mtxView[1][0] * yScale;
		(*this)(1, 1) = viewMtx->mMatrix.mtxView[1][1] * yScale;
		(*this)(2, 1) = viewMtx->mMatrix.mtxView[1][2] * yScale;

		(*this)(0, 2) = viewMtx->mMatrix.mtxView[2][0] * scale;
		(*this)(1, 2) = viewMtx->mMatrix.mtxView[2][1] * scale;
		(*this)(2, 2) = viewMtx->mMatrix.mtxView[2][2] * scale;

		(*this)(0, 3) = pos.x;
		(*this)(1, 3) = pos.y;
		(*this)(2, 3) = pos.z;
	}

	inline void setTransformationMtx2(Vector3f& angle, Vector3f& translation)
	{
		Vector3f direction(1.0f, 0.0f, 0.0f);
		Vector3f cross;
		cross.x = direction.y * angle.z - direction.z * angle.y;
		cross.y = direction.z * angle.x - direction.x * angle.z;
		cross.z = direction.x * angle.y - direction.y * angle.x;

		Vector3f cross2;
		cross2.x = angle.y * cross.z - angle.z * cross.y;
		cross2.y = angle.z * cross.x - angle.x * cross.z;
		cross2.z = angle.x * cross.y - angle.y * cross.x;

		(*this)(0, 0) = cross2.x;
		(*this)(0, 1) = angle.x;
		(*this)(0, 2) = cross.x;
		(*this)(0, 3) = translation.x;

		(*this)(1, 0) = cross2.y;
		(*this)(1, 1) = angle.y;
		(*this)(1, 2) = cross.y;
		(*this)(1, 3) = translation.y;

		(*this)(2, 0) = cross2.z;
		(*this)(2, 1) = angle.z;
		(*this)(2, 2) = cross.z;
		(*this)(2, 3) = translation.z;
	}

	/**
	 * @brief Calculates the scaled translation of a 2D vector using the current matrix.
	 *
	 * @param other The 2D vector to be scaled and translated.
	 * @return The resulting 3D vector after scaling and translation.
	 */
	inline Vector3f getScaledTranslation(Vector2f& other)
	{
		Vector3f result;
		result.x = mMatrix.structView.xx * other.x + (mMatrix.structView.yx * other.y + mMatrix.structView.tx);
		result.y = mMatrix.structView.xy * other.x + (mMatrix.structView.yy * other.y + mMatrix.structView.ty);
		result.z = mMatrix.structView.xz * other.x + (mMatrix.structView.yz * other.y + mMatrix.structView.tz);
		return result;
	}

	/**
	 * @brief A union representing the matrix in different views.
	 */
	union {
		Mtx mtxView; ///< A view of the matrix as a Mtx object.

		struct {
			f32 xx, yx, zx, tx;
			f32 xy, yy, zy, ty;
			f32 xz, yz, zz, tz;
		} structView; ///< A view of the matrix as a struct with individual elements.
	} mMatrix;
};

/**
 * Multiplies the current Vector3f object with the given Matrixf object and assigns the result to the current object.
 *
 * @note Very very dirty hack to get around circular inclusion. Because in order to call this function, Matrixf must be linked...
 * Muahahahaha
 *
 * @param other The Matrixf object to multiply with.
 */
inline void Vector3f::operator*=(Matrixf& other) { *this = other * *this; }

#endif
