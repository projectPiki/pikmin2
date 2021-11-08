#ifndef _MATRIXF_H
#define _MATRIXF_H

#include "types.h"
#include "Vector3.h"

struct Matrixf {
	void getBasis(int, Vector3f&);
	void getTranslation(Vector3f&);
	void operator()(int, int);

	f32 m_matrix[3][4];
};

#endif
