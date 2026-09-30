#ifndef _MATRIX3F_H
#define _MATRIX3F_H

#include "Vector3.h"
#include "types.h"

/**
 * @struct Matrix3f
 * @brief Represents a 3x3 matrix of floating-point values.
 */
struct Matrix3f {
	/**
	 * @brief Sets the matrix to the identity matrix.
	 */
	void makeIdentity();

	/**
	 * @brief Checks if the matrix is diagonal within a given threshold.
	 *
	 * @param thresh The threshold value for determining diagonal elements.
	 * @return True if the matrix is diagonal, false otherwise.
	 */
	bool isDiagonal(f32 thresh);

	/**
	 * @brief Calculates the Jacobi value at the specified row and column.
	 *
	 * @param row The row index.
	 * @param col The column index.
	 * @return The Jacobi value at the specified row and column.
	 */
	inline f32 calcJacobi(int row, int col)
	{
		f32 x = (2.0f * mMatrix[row][col]);
		f32 y = (getAt(col, col) - getAt(row, row)) / x;
		return y;
	}

	inline void updateJacobiDiagonal(int row, int col, f32 cosTheta)
	{
		getAt(col, col) = cosTheta;
		getAt(row, row) = cosTheta;
	}

	inline void updateJacobiOffDiagonal(int row, int col, f32 sinTheta)
	{
		getAt(row, col) = sinTheta;
		getAt(col, row) = -sinTheta;
	}

	/**
	 * @brief Calculates the eigen matrix of a 3x3 matrix.
	 *
	 * @param D The output eigenvalue matrix.
	 * @param P The output eigenvector matrix.
	 */
	void calcEigenMatrix(Matrix3f& D, Matrix3f& P);

	/**
	 * @brief Returns the specified row of the matrix as a Vector3f object.
	 *
	 * @param i The index of the row to retrieve.
	 * @return The row of the matrix as a Vector3f object.
	 */
	inline Vector3f getRow(int i) { return Vector3f(mMatrix[i][0], mMatrix[i][1], mMatrix[i][2]); }

	inline f32& getAt(int row, int col)
	{
		f32* values = mMatrix[row];
		return values[col];
	}

	/**
	 * @brief Multiplies this matrix with another matrix.
	 *
	 * @param other The matrix to multiply with.
	 * @return The resulting matrix.
	 */
	inline Matrix3f operator*(const Matrix3f& other) const
	{
		Matrix3f result;
		for (int row = 0; row < 3; row++) {
			for (int col = 0; col < 3; col++) {
				result.mMatrix[row][col] = 0.0f;
				for (int i = 0; i < 3; i++) {
					result.mMatrix[row][col] += mMatrix[row][i] * other.mMatrix[i][col];
				}
			}
		}
		return result;
	}

	f32 mMatrix[3][3]; // _00
};

#endif
