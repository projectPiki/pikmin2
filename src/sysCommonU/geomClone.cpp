#include "Dolphin/mtx.h"
#include "Sys/GridDivider.h"
#include "Sys/TriangleTable.h"
#include "Sys/TriDivider.h"
#include "types.h"

namespace Sys {

/**
 * @note Address: 0x80421ACC
 * @note Size: 0x120
 */
TriDivider* TriDivider::clone(Matrixf& transformationMtx)
{
	VertexTable* vtxTable = new VertexTable();
	vtxTable->cloneFrom(transformationMtx, mVertexTable);

	TriangleTable* triTable = new TriangleTable();
	triTable->cloneFrom(transformationMtx, mTriangleTable, vtxTable);

	return do_clone(transformationMtx, vtxTable, triTable);
}

/**
 * @note Address: 0x80421BEC
 * @note Size: 0x160
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

	mBoundBox.mMin = SHORT_FLOAT_MAX;
	mBoundBox.mMax = -SHORT_FLOAT_MAX;
	includeVertices();
}

/**
 * @note Address: 0x80421D4C
 * @note Size: 0xB4
 */
void TriangleTable::cloneFrom(Matrixf& transformationMtx, TriangleTable* triTable, VertexTable* vtxTable)
{
	alloc(triTable->mLimit);
	mCount = triTable->mCount;
	for (int i = 0; i < mLimit; i++) {
		doClone(triTable, vtxTable, i);
	}
}

/**
 * @note Address: 0x80421E00
 * @note Size: 0xC4
 */
TriDivider* GridDivider::do_clone(Matrixf& transformationMtx, VertexTable* vtxTable, TriangleTable* triTable)
{
	GridDivider* copy = new GridDivider();
	copy->create(vtxTable->mBoundBox, mMaxX, mMaxZ, vtxTable, triTable);
	return copy;
}
} // namespace Sys
