#ifndef _SYS_GRIDDIVIDER_H
#define _SYS_GRIDDIVIDER_H

#include "Sys/TriDivider.h"
#include "Sys/TriIndexList.h"
#include "Vector3.h"
#include "Vector2.h"

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

	virtual ~GridDivider() // _08 (weak)
	{
		if (&m_maxX)
			delete[] m_triIndexLists;
	}
	virtual f32 getMinY(Vector3f&);                                       // _10
	virtual TriIndexList* findTriLists(Sphere&);                          // _14
	virtual void read(Stream&);                                           // _18
	virtual void getCurrTri(Game::CurrTriInfo&);                          // _1C
	virtual void createTriangles(CreateTriangleArg&);                     // _20
	virtual void getBoundBox(BoundBox&);                                  // _24 (weak)
	virtual TriDivider* do_clone(Matrixf&, VertexTable*, TriangleTable*); // _2C

	void create(BoundBox&, int, int, VertexTable*, TriangleTable*);

	// Unused/inlined:
	void write(Stream&);

	inline void readIndexList(Stream& stream)
	{
		for (int i = 0; i < (m_maxX * m_maxZ); i++) {
			m_triIndexLists[i].read(stream);
		}
	}

	int m_maxX;                    // _20
	int m_maxZ;                    // _24
	TriIndexList* m_triIndexLists; // _28
	BoundBox m_boundingBox;        // _2C
	f32 m_scaleX;                  // _44
	f32 m_scaleZ;                  // _48
};
} // namespace Sys

#endif
