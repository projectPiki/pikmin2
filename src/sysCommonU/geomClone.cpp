#include "Dolphin/mtx.h"
#include "Sys/GridDivider.h"
#include "Sys/TriangleTable.h"
#include "Sys/TriDivider.h"
#include "types.h"

namespace Sys {

/*
 * --INFO--
 * Address:	80421ACC
 * Size:	000120
 */
TriDivider* TriDivider::clone(Matrixf& transformationMtx)
{
	VertexTable* vtxTable = new VertexTable();
	vtxTable->cloneFrom(transformationMtx, mVertexTable);

	TriangleTable* triTable = new TriangleTable();
	triTable->cloneFrom(transformationMtx, mTriangleTable, vtxTable);

	return do_clone(transformationMtx, vtxTable, triTable);
}

/*
 * --INFO--
 * Address:	80421BEC
 * Size:	000160
 */
void VertexTable::cloneFrom(Matrixf& transformationMtx, VertexTable* vtxTable)
{
	alloc(vtxTable->mLimit);
	mCount = vtxTable->mCount;

	for (int i = 0; i < mLimit; i++) {
		Vector3f transformed;
		PSMTXMultVec(transformationMtx.mMatrix.mtxView, (Vec*)&vtxTable->mObjects[i], (Vec*)&transformed);
		mObjects[i] = Vector3f(transformed);
	}

	mBoundBox.mMin = 32768.0f;
	mBoundBox.mMax = -32768.0f;
	includeVertices();
}

/*
 * --INFO--
 * Address:	80421D4C
 * Size:	0000B4
 */
void TriangleTable::cloneFrom(Matrixf& transformationMtx, TriangleTable* triTable, VertexTable* vtxTable)
{
	alloc(triTable->mLimit);
	mCount = triTable->mCount;
	for (int i = 0; i < mLimit; i++) {
		doClone(triTable, vtxTable, i);
	}
}

/*
 * --INFO--
 * Address:	80421E00
 * Size:	0000C4
 */
TriDivider* GridDivider::do_clone(Matrixf& transformationMtx, VertexTable* vtxTable, TriangleTable* triTable)
{
	GridDivider* copy = new GridDivider();
	copy->create(vtxTable->mBoundBox, mMaxX, mMaxZ, vtxTable, triTable);
	return copy;
}
} // namespace Sys
