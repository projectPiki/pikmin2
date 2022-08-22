#ifndef _MATRIX3F_H
#define _MATRIX3F_H

#include "Vector3.h"
#include "types.h"

struct Matrix3f {
	inline Matrix3f()
	{
		m_matrix[0][0] = 0.0f;
		m_matrix[0][1] = 0.0f;
		m_matrix[0][2] = 0.0f;
		m_matrix[1][0] = 0.0f;
		m_matrix[1][1] = 0.0f;
		m_matrix[1][2] = 0.0f;
		m_matrix[2][0] = 0.0f;
		m_matrix[2][1] = 0.0f;
		m_matrix[2][2] = 0.0f;
	}
	void makeIdentity();
	void calcEigenMatrix(Matrix3f&, Matrix3f&);

	inline Vector3f getRow(int i) { return Vector3f(m_matrix[i][0], m_matrix[i][1], m_matrix[i][2]); }

	f32 m_matrix[3][3];
};

#endif
