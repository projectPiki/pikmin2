#ifndef _SYS_TRIANGLETABLE_H
#define _SYS_TRIANGLETABLE_H

#include "BoundBox.h"
#include "Vector3.h"
#include "types.h"
#include "Container.h"
#include "Sys/Triangle.h"

namespace Sys {
struct VertexTable;
/**
 * @size{0x28}
 */
struct TriangleTable : public ArrayContainer<Sys::Triangle> {
	TriangleTable();

	virtual ~TriangleTable();                     // _00
	virtual void writeObject(Stream&, Triangle&); // _24
	virtual void readObject(Stream&, Triangle&);  // _28

	void createTriangleSphere(VertexTable&);
	void cloneFrom(Matrixf&, TriangleTable*, VertexTable*);

	inline void doClone(Sys::TriangleTable* triTable, Sys::VertexTable* vtxTable, int i) 
	{
		Triangle* currTriangle = &m_objects[i];
		Triangle* refTriangle = &triTable->m_objects[i];

		currTriangle->m_vertices = refTriangle->m_vertices;
		currTriangle->m_code     = refTriangle->m_code;
		currTriangle->makePlanes(*vtxTable);
		currTriangle->createSphere(*vtxTable);
	}

	// Unused/inlined:
	void findMaxVertexIndex();
};

/**
 * @size{0x50}
 */
struct VertexTable : public ArrayContainer<Vector3f> {
	inline VertexTable()
	    : ArrayContainer()
	    , m_boundBox()
	{
	}

	virtual ~VertexTable();                       // _00
	virtual void writeObject(Stream&, Vector3f&); // _24
	virtual void readObject(Stream&, Vector3f&);  // _28
	virtual void write(Stream&);                  // _2C
	virtual void addOne(Vector3f&);               // _38

	void cloneFrom(Matrixf&, VertexTable*);
	void transform(Matrixf&);

	inline void includeVertices() 
    {
        for (int i = 0; i < m_count; i++) {
		    m_boundBox.include(m_objects[i]);
	    }
    }

	BoundBox m_boundBox; 		// _28
	u8 _40[0x10]; 				// _40
};
} // namespace Sys

#endif
