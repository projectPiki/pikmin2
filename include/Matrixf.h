#ifndef _MATRIXF_H
#define _MATRIXF_H

#include "types.h"
#include "Vector3.h"

struct Matrixf {
	void getBasis(int, Vector3f&);
	void getTranslation(Vector3f&);
	void operator()(int, int);

	void makeSRT(Vector3f&, Vector3f&, Vector3f&);

	f32 m_matrix[3][4];
};
// sizeof is 48
#endif
