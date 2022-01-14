#ifndef _SYS_GRIDDIVIDER_H
#define _SYS_GRIDDIVIDER_H

#include "BoundBox.h"
#include "Sys/TriDivider.h"
#include "Vector3.h"
namespace Game {
struct CurrTriInfo;
} // namespace Game

namespace Sys {
struct VertexTable;
struct TriangleTable;
struct CreateTriangleArg;
struct Sphere;

struct GridDivider : public TriDivider {
	GridDivider()
	{
		m_boundingBox.m_min.x = 32768.0f;
		m_boundingBox.m_min.y = 32768.0f;
		m_boundingBox.m_min.z = 32768.0f;
		m_boundingBox.m_max.x = -32768.0f;
		m_boundingBox.m_max.y = -32768.0f;
		m_boundingBox.m_max.z = -32768.0f;
		m_triIndexLists       = nullptr;
		_24                   = 0;
		_20                   = 0;
	}
	~GridDivider();

	void create(BoundBox&, int, int, Sys::VertexTable*, Sys::TriangleTable*);
	void createTriangles(Sys::CreateTriangleArg&);
	void do_clone(Matrixf&, Sys::VertexTable*, Sys::TriangleTable*);
	// virtual TriIndexList* findTriLists(Sys::Sphere&);
	// virtual void getBoundBox(BoundBox&);
	// virtual void getCurrTri(Game::CurrTriInfo&);
	// virtual float getMinY(Vector3f&);
	// virtual void read(Stream&);

	VertexTable* m_vertexTable;
	TriangleTable* m_triangleTable;
	u32 _20;
	u32 _24;
	TriIndexList* m_triIndexLists;
	BoundBox m_boundingBox;
	float _44;
	float _48;
};
} // namespace Sys

#endif
