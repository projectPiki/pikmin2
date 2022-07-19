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
		_24             = 0;
		_20             = 0;
	}

	virtual ~GridDivider();                                                         // _00
	virtual float getMinY(Vector3f&);                                               // _08
	virtual TriIndexList* findTriLists(Sys::Sphere&);                               // _0C
	virtual void read(Stream&);                                                     // _10
	virtual void getCurrTri(Game::CurrTriInfo&);                                    // _14
	virtual void createTriangles(Sys::CreateTriangleArg&);                          // _18
	virtual void getBoundBox(BoundBox&);                                            // _1C
	virtual TriDivider* do_clone(Matrixf&, Sys::VertexTable*, Sys::TriangleTable*); // _24

	void create(BoundBox&, int, int, Sys::VertexTable*, Sys::TriangleTable*);

	// Unused/inlined:
	void write(Stream&); // TODO: I wonder if this was declared virtual and then removed when unused somehow...

	int _20;
	int _24;
	TriIndexList* m_triIndexLists;
	BoundBox m_boundingBox;
	float _44;
	float _48;
};
} // namespace Sys

#endif
