#include "Dolphin/mtx.h"
#include "Sys/GridDivider.h"
#include "Sys/TriangleTable.h"
#include "Sys/TriDivider.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23Sys10TriDivider
    __vt__Q23Sys10TriDivider:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23Sys10TriDividerFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte createTriangles__Q23Sys10TriDividerFRQ23Sys17CreateTriangleArg
        .4byte 0
        .4byte clone__Q23Sys10TriDividerFR7Matrixf
        .4byte
   do_clone__Q23Sys10TriDividerFR7MatrixfPQ23Sys11VertexTablePQ23Sys13TriangleTable

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805203F8
    lbl_805203F8:
        .float 32768.0
    .global lbl_805203FC
    lbl_805203FC:
        .float -32768.0
*/

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
