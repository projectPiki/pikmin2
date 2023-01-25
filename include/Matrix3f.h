#ifndef _MATRIX3F_H
#define _MATRIX3F_H

#include "Vector3.h"
#include "types.h"

struct Matrix3f {
	inline Matrix3f()
	{
		mMatrix[0][0] = 0.0f;
		mMatrix[0][1] = 0.0f;
		mMatrix[0][2] = 0.0f;
		mMatrix[1][0] = 0.0f;
		mMatrix[1][1] = 0.0f;
		mMatrix[1][2] = 0.0f;
		mMatrix[2][0] = 0.0f;
		mMatrix[2][1] = 0.0f;
		mMatrix[2][2] = 0.0f;
	}
	void makeIdentity();
	inline bool isDiagonal(f32 thresh)
	{
		// TODO: Verify that this is 0xD0 bytes long.
		// sum off-diagonal terms of matrix
		f32 sumOffDiag = 0.0f;
		for (int row_idx = 0; row_idx < 3; row_idx++) {
			for (int col_idx = 0; col_idx < 3; col_idx++) {
				if (row_idx != col_idx) {
					sumOffDiag += mMatrix[row_idx][col_idx];
				}
			}
		}
		// take absolute value of sum
		f32 absOffDiag = FABS(sumOffDiag);
		// check for convergence, i.e. if off-diagonals are sufficiently small yet
		// threshold for convergence is if abs(sum of off-diags) < 0.01
		if (absOffDiag < thresh) {
			// if sum of off-diags is flat 0, we can just exit
			if (sumOffDiag != 0.0f) {
				// if it's not flat zero but IS small enough, we put flat 0 into all the off diagonals
				for (int row_idx = 0; row_idx < 3; row_idx++) {
					for (int col_idx = 0; col_idx < 3; col_idx++) {
						if (row_idx != col_idx) {
							mMatrix[row_idx][col_idx] = 0.0f;
						}
					}
				}
			}
			return true; // kick us out, we're diagonal enough
		} else {
			return false; // try again, we're not fully cooked
		}
	}

	inline f32 calcJacobi(int row, int col)
	{
		f32 x = (2.0f * mMatrix[row][col]);
		f32 y = (mMatrix[col][col] - mMatrix[row][row]) / x;
		return y;
	}

	inline void createJacobi(int row, int col, f32 c_theta, f32 s_theta)
	{
		mMatrix[row][row] = c_theta; // these are especially dodgy
		mMatrix[col][col] = c_theta;
		mMatrix[row][col] = s_theta;
		mMatrix[col][row] = -s_theta;
	}

	void calcEigenMatrix(Matrix3f&, Matrix3f&);

	inline Vector3f getRow(int i) { return Vector3f(mMatrix[i][0], mMatrix[i][1], mMatrix[i][2]); }

	// @fabricated
	inline Matrix3f operator*(const Matrix3f& other) const
	{
		// Basic matrix multiplication function
		// Produces a * c, for some 3x3 matrices a, b
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

	f32 mMatrix[3][3];
};

#endif
