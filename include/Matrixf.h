#ifndef _MATRIXF_H
#define _MATRIXF_H

#include "Dolphin/mtx.h"
#include "types.h"
#include "Vector3.h"

struct Quat;

struct Matrixf {
	inline Matrixf() {};
	// TODO: Determine if this could've actually existed, or if I'm just making
	// it up.
	inline Matrixf(const Mtx mtx)
	{
		m_matrix.mtxView[0][0] = mtx[0][0];
		m_matrix.mtxView[0][1] = mtx[0][1];
		m_matrix.mtxView[0][2] = mtx[0][2];
		m_matrix.mtxView[0][3] = mtx[0][3];
		m_matrix.mtxView[1][0] = mtx[1][0];
		m_matrix.mtxView[1][1] = mtx[1][1];
		m_matrix.mtxView[1][2] = mtx[1][2];
		m_matrix.mtxView[1][3] = mtx[1][3];
		m_matrix.mtxView[2][0] = mtx[2][0];
		m_matrix.mtxView[2][1] = mtx[2][1];
		m_matrix.mtxView[2][2] = mtx[2][2];
		m_matrix.mtxView[2][3] = mtx[2][3];
	}
	void getBasis(int, Vector3f&);
	void getTranslation(Vector3f&);
	void operator()(int, int);

	void makeNaturalPosture(Vector3f&, float);
	void print(char*);
	void makeST(Vector3f&, Vector3f&);
	void makeSR(Vector3f&, Vector3f&);
	void makeSRT(Vector3f&, Vector3f&, Vector3f&);
	void makeT(Vector3f&);
	void makeTR(Vector3f&, Vector3f&);
	void makeTQ(Vector3f&, Quat&);
	void makeQ(Quat&);

	// Unused/inlined:
	void makeSQT(Vector3f&, Quat&, Vector3f&);
	void makeNaturalPosture(Vector3f&);

	union {
		Mtx mtxView;
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
