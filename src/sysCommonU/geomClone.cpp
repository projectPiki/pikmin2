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
TriDivider* TriDivider::clone(Matrixf& p1)
{
	VertexTable* vtxTable = new VertexTable();
	vtxTable->cloneFrom(p1, m_vertexTable);

	TriangleTable* triTable = new TriangleTable();
	triTable->cloneFrom(p1, m_triangleTable, vtxTable);

	return do_clone(p1, vtxTable, triTable);
}

/*
 * --INFO--
 * Address:	80421BEC
 * Size:	000160
 */
void VertexTable::cloneFrom(Matrixf& p1, VertexTable* vtxTable)
{
	alloc(vtxTable->m_limit);
	m_count = vtxTable->m_count;

	for (int i = 0; i < m_limit; i++) {

		Vector3f v1;
		PSMTXMultVec(p1.m_matrix.mtxView, (Vec*)&vtxTable->m_objects[i], (Vec*)&v1);
		m_objects[i] = Vector3f(v1);
	}

	m_boundBox.m_min = 32768.0f;
	m_boundBox.m_max = -32768.0f;
	includeVertices();
}

/*
 * --INFO--
 * Address:	80421D4C
 * Size:	0000B4
 */
void TriangleTable::cloneFrom(Matrixf& p1, TriangleTable* triTable, VertexTable* vtxTable)
{
	alloc(triTable->m_limit);
	m_count = triTable->m_count;
	for (int i = 0; i < m_limit; i++) {
		doClone(triTable, vtxTable, i);
	}
}

/*
 * --INFO--
 * Address:	80421E00
 * Size:	0000C4
 */
TriDivider* GridDivider::do_clone(Matrixf& p1, VertexTable* vtxTable, TriangleTable* triTable)
{
	GridDivider* copy = new GridDivider();
	copy->create(vtxTable->m_boundBox, m_maxX, m_maxZ, vtxTable, triTable);
	return copy;
}
} // namespace Sys
