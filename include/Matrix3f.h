#ifndef _MATRIX3F_H
#define _MATRIX3F_H

#include "types.h"

struct Matrix3f {
	void makeIdentity();
	void calcEigenMatrix(Matrix3f&, Matrix3f&);

	f32 m_matrix[3][3];
};

#endif