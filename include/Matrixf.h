#ifndef _MATRIXF_H
#define _MATRIXF_H

#include "Dolphin/mtx.h"
#include "types.h"
#include "Vector3.h"

struct Quat;

/**
 * This class CANNOT have any explicit constructors, due to CollPart::update.
 * If it does, then it loses the implicit default constructor.
 * Explicit constructors show up in recursion. Implicit does not.
 */
struct Matrixf {

	f32& operator()(int p1, int p2) { return mMatrix.mtxView[p1][p2]; }

	Vector3f operator*(Vector3f& vec)
	{
		Vector3f outVec;
		outVec.x = (*this)(0, 0) * vec.x + (*this)(0, 1) * vec.y + (*this)(0, 2) * vec.z;
		outVec.y = (*this)(1, 0) * vec.x + (*this)(1, 1) * vec.y + (*this)(1, 2) * vec.z;
		outVec.z = (*this)(2, 0) * vec.x + (*this)(2, 1) * vec.y + (*this)(2, 2) * vec.z;
		return outVec;
	}

	/**
	 * @reifiedAddress{801372DC}
	 * @reifiedFile{plugProjectKandoU/collinfo.cpp}
	 */
	void getBasis(int p1, Vector3f& p2)
	{
		p2.x = (*this)(0, p1);
		p2.y = (*this)(1, p1);
		p2.z = (*this)(2, p1);
	}
	/**
	 * @reifiedAddress{801372C0}
	 * @reifiedFile{plugProjectKandoU/collinfo.cpp}
	 */
	void getTranslation(Vector3f& translation) { getBasis(3, translation); }

	void getRow(int p1, Vector3f& p2)
	{
		p2.x = (*this)(p1, 0);
		p2.y = (*this)(p1, 1);
		p2.z = (*this)(p1, 2);
	}

	Vector3f getRow(int p1) { return Vector3f((*this)(p1, 0), (*this)(p1, 1), (*this)(p1, 2)); }

	void setRow(int p1, Vector3f& p2)
	{
		(*this)(p1, 0) = p2.x;
		(*this)(p1, 1) = p2.y;
		(*this)(p1, 2) = p2.z;
	}

	inline Vector3f getBasis(int p1) { return Vector3f((*this)(0, p1), (*this)(1, p1), (*this)(2, p1)); }

	inline Vector3f getPosition() { return getBasis(3); }

	/**
	 * @fabricated
	 */
	void setBasis(int p1, Vector3f& p2)
	{
		(*this)(0, p1) = p2.x;
		(*this)(1, p1) = p2.y;
		(*this)(2, p1) = p2.z;
	}

	inline Vector3f mtxMult(Vector3f& vec)
	{
		Vector3f outVec;
		PSMTXMultVec(this->mMatrix.mtxView, (Vec*)&vec, (Vec*)&outVec);
		return outVec;
	}

	/**
	 * @fabricated
	 */
	void setTranslation(Vector3f& translation) { setBasis(3, translation); }
	void newTranslation(Vector3f translation) { setBasis(3, translation); }

	void makeNaturalPosture(Vector3f&, f32);
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

	inline Vector3f multTranspose(Vector3f& vec)
	{
		Vector3f outVec;
		outVec.x = vec.x * (*this)(0, 0) + vec.y * (*this)(1, 0) + vec.z * (*this)(2, 0);
		outVec.y = vec.x * (*this)(0, 1) + vec.y * (*this)(1, 1) + vec.z * (*this)(2, 1);
		outVec.z = vec.x * (*this)(0, 2) + vec.y * (*this)(1, 2) + vec.z * (*this)(2, 2);
		return outVec;
	}

	inline Vector3f mult(Vector3f& vec)
	{
		Vector3f outVec;
		outVec.x = vec.x * (*this)(0, 0) + vec.y * (*this)(0, 1) + vec.z * (*this)(0, 2);
		outVec.y = vec.x * (*this)(1, 0) + vec.y * (*this)(1, 1) + vec.z * (*this)(1, 2);
		outVec.z = vec.x * (*this)(2, 0) + vec.y * (*this)(2, 1) + vec.z * (*this)(2, 2);
		return outVec;
	}

	// this needs a better name - used in TDangoCrash::create
	inline void setAngleMtx(Vector3f& dir, Vector3f& ang, Vector3f& tr)
	{
		Vector3f cross(dir.y * ang.z - dir.z * ang.y, dir.z * ang.x - dir.x * ang.z, dir.x * ang.y - dir.y * ang.x);

		(*this)(0, 0) = cross.x;
		(*this)(0, 1) = dir.x;
		(*this)(0, 2) = ang.x;
		(*this)(0, 3) = tr.x;

		(*this)(1, 0) = cross.y;
		(*this)(1, 1) = dir.y;
		(*this)(1, 2) = ang.y;
		(*this)(1, 3) = tr.y;

		(*this)(2, 0) = cross.z;
		(*this)(2, 1) = dir.z;
		(*this)(2, 2) = ang.z;
		(*this)(2, 3) = tr.z;
	}

	inline Vector3f getScaledTranslation(Vector2f& vec)
	{
		Vector3f result;
		result.x = mMatrix.structView.xx * vec.x + (mMatrix.structView.yx * vec.y + mMatrix.structView.tx);
		result.y = mMatrix.structView.xy * vec.x + (mMatrix.structView.yy * vec.y + mMatrix.structView.ty);
		result.z = mMatrix.structView.xz * vec.x + (mMatrix.structView.yz * vec.y + mMatrix.structView.tz);
		return result;
	}

	inline void getTranslationXY(Vector2f& vec)
	{
		vec.x = (*this)(0, 3);
		vec.y = (*this)(1, 3);
	}

	inline void setTranslationXY(Vector2f& vec)
	{
		(*this)(0, 3) = vec.x;
		(*this)(1, 3) = vec.y;
	}

	inline void translateXY(const Vector2f& vec)
	{
		(*this)(0, 3) += vec.x;
		(*this)(1, 3) += vec.y;
	}

	union {
		Mtx mtxView;
		struct {
			f32 x[4];
			f32 y[4];
			f32 z[4];
		} vecView;
		struct {
			Vec x;
			Vec y;
			Vec z;
			Vec t;
		} flippedVecView;
		// struct {
		// 	Vector3f x;
		// 	Vector3f y;
		// 	Vector3f z;
		// 	Vector3f t;
		// } flippedVectorView;

		struct {
			f32 xx, yx, zx, tx;
			f32 xy, yy, zy, ty;
			f32 xz, yz, zz, tz;
		} structView;
	} mMatrix;
	// f32 mMatrix[3][4];
};
// sizeof is 48

inline Matrixf concatMatrixf(Matrixf& mat1, Matrixf& mat2)
{
	Matrixf concatMtx;
	PSMTXConcat(mat1.mMatrix.mtxView, mat2.mMatrix.mtxView, concatMtx.mMatrix.mtxView);
	return concatMtx;
}

inline void scaleMatrix(Matrixf* mtx, f32 scale)
{
	mtx->mMatrix.structView.xx *= scale;
	mtx->mMatrix.structView.yx *= scale;
	mtx->mMatrix.structView.zx *= scale;

	mtx->mMatrix.structView.xy *= scale;
	mtx->mMatrix.structView.yy *= scale;
	mtx->mMatrix.structView.zy *= scale;

	mtx->mMatrix.structView.xz *= scale;
	mtx->mMatrix.structView.yz *= scale;
	mtx->mMatrix.structView.zz *= scale;
}

inline void scaleMatrix2(Matrixf& mtx, Vector3f& scale)
{
	mtx.mMatrix.structView.xx *= scale.x;
	mtx.mMatrix.structView.xy *= scale.x;
	mtx.mMatrix.structView.xz *= scale.x;

	mtx.mMatrix.structView.yx *= scale.y;
	mtx.mMatrix.structView.yy *= scale.y;
	mtx.mMatrix.structView.yz *= scale.y;

	mtx.mMatrix.structView.zx *= scale.z;
	mtx.mMatrix.structView.zy *= scale.z;
	mtx.mMatrix.structView.zz *= scale.z;
}

inline void MatrixMultiplyVec(Matrixf* mat, Vector3f& vec)
{
	Vector3f resVec;
	PSMTXMultVec(mat->mMatrix.mtxView, (Vec*)&vec, (Vec*)&resVec);

	vec = Vector3f(resVec);
}

inline void setColumnMtx44(Mtx44& mtx, const PSQuaternion& values, int col)
{
	for (int i = 0; i < 4; i++) {
		mtx[i][col] = values[i];
	}
}

inline void getColumnMtx44(Mtx44& mtx, PSQuaternion& returnValues, int col)
{
	for (int i = 0; i < 4; i++) {
		returnValues[i] = mtx[i][col];
	}
}

// copies the 0, 1, and 2 vecs, does not copy vec 3; there's a PSMTX44 function for that
inline void copyMtx44(Mtx44& output, Mtx44& input)
{
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 4; y++) {
			output[x][y] = input[x][y];
		}
	}
}

#endif
