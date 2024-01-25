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
	inline bool isDiagonal(f32 thresh)
	{
		// Sum off-diagonal terms of matrix
		f32 sumOffDiag = 0.0f;
		for (int row_idx = 0; row_idx < 3; row_idx++) {
			for (int col_idx = 0; col_idx < 3; col_idx++) {
				if (row_idx != col_idx) {
					sumOffDiag += mMatrix[row_idx][col_idx];
				}
			}
		}

		// Take absolute value of sum
		f32 absOffDiag = FABS(sumOffDiag);

		// Check for convergence, i.e. if off-diagonals are sufficiently small yet
		if (absOffDiag < thresh) {
			// If sum of off-diags is not exactly zero but IS small enough, we put zero into all the off diagonals
			if (sumOffDiag != 0.0f) {
				for (int row_idx = 0; row_idx < 3; row_idx++) {
					for (int col_idx = 0; col_idx < 3; col_idx++) {
						if (row_idx != col_idx) {
							mMatrix[row_idx][col_idx] = 0.0f;
						}
					}
				}
			}

			return true; // The matrix is diagonal enough
		}

		return false; // The matrix is not diagonal enough
	}

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
		f32 y = (mMatrix[col][col] - mMatrix[row][row]) / x;
		return y;
	}

	/**
	 * @brief Creates a Jacobi matrix.
	 *
	 * @param row The row index of the Jacobi matrix.
	 * @param col The column index of the Jacobi matrix.
	 * @param c_theta The cosine of the rotation angle.
	 * @param s_theta The sine of the rotation angle.
	 */
	inline void createJacobi(int row, int col, f32 c_theta, f32 s_theta)
	{
		mMatrix[row][row] = c_theta; // these are especially dodgy
		mMatrix[col][col] = c_theta;
		mMatrix[row][col] = s_theta;
		mMatrix[col][row] = -s_theta;
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
