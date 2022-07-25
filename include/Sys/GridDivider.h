#ifndef _SYS_GRIDDIVIDER_H
#define _SYS_GRIDDIVIDER_H

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

struct GridInfo {
	// Unused/inlined:
	~GridInfo();
	void write(Stream&);
};

/**
 * @size{0x4C}
 */
struct GridDivider : public TriDivider {
	GridDivider()
	    : m_boundingBox()
	{
		m_triIndexLists = nullptr;
		m_maxZ          = 0;
		m_maxX          = 0;
	}

	virtual ~GridDivider();                                                          // _08 (weak)
	virtual float getMinY(Vector3f&);                                                // _10
	virtual TriIndexList* findTriLists(Sys::Sphere&);                                // _14
	virtual void read(Stream&);                                                      // _18
	virtual void getCurrTri(Game::CurrTriInfo&);                                     // _1C
	virtual void createTriangles(Sys::CreateTriangleArg&);                           // _20
	virtual void getBoundBox(BoundBox&);                                             // _24 (weak)
	virtual GridDivider* do_clone(Matrixf&, Sys::VertexTable*, Sys::TriangleTable*); // _2C
	// virtual void _30() = 0;														  // _30 - need to work out what this is

	void create(BoundBox&, int, int, Sys::VertexTable*, Sys::TriangleTable*);

	// Unused/inlined:
	void write(Stream&); // TODO: I wonder if this was declared virtual and then removed when unused somehow...

	int m_maxX;
	int m_maxZ;
	TriIndexList* m_triIndexLists;
	BoundBox m_boundingBox;
	float m_scaleX;
	float m_scaleZ;
};
} // namespace Sys

#endif
