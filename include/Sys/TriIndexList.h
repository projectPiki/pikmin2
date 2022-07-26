#ifndef _SYS_TRIINDEXLIST_H
#define _SYS_TRIINDEXLIST_H

#include "Matrix3f.h"
#include "stream.h"
#include "Sys/IndexList.h"
#include "Vector3.h"

struct Graphics;

namespace Sys {
struct TriangleTable;
struct VertexTable;

struct TriIndexList : public IndexList {
	TriIndexList();

	/**
	 * @reifiedAddress{80133E64}
	 * @reifiedFile{plugProjectKandoU/collinfo.cpp}
	 */
	virtual ~TriIndexList() { } 	// _08 (weak)

	void constructClone(TriangleTable&);
	void getMinMax(VertexTable&, TriangleTable&, Vector3f&, Vector3f&, float&, float&);
	void makeCovarianceMatrix(VertexTable&, TriangleTable&, Matrix3f&, Vector3f&);
	void draw(Graphics&, VertexTable&, TriangleTable&, bool);
};
} // namespace Sys

#endif
