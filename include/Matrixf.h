#ifndef _MATRIXF_H
#define _MATRIXF_H

#include "types.h"
#include "Vector3.h"

struct Matrixf {
	void getBasis(int, Vector3f&);
	void getTranslation(Vector3f&);
	void operator()(int, int);

	void makeSRT(Vector3f&, Vector3f&, Vector3f&);

	union {
		f32 mtxView[3][4];
		struct {
			f32 x[4];
			f32 y[4];
			f32 z[4];
		} vecView;
		struct {
			float xx, yx, zx, tx;
			float xy, yy, zy, ty;
			float xz, yz, zz, tz;
		} structView;
	} m_matrix;
	// f32 m_matrix[3][4];
};
// sizeof is 48
#endif
