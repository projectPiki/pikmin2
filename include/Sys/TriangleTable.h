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
struct TriangleTable : public ArrayContainer<Triangle> {
	TriangleTable();

	virtual ~TriangleTable();                     // _08 (weak)
	virtual void writeObject(Stream&, Triangle&); // _2C (weak)
	virtual void readObject(Stream&, Triangle&);  // _30 (weak)

	void createTriangleSphere(VertexTable&);
	void cloneFrom(Matrixf&, TriangleTable*, VertexTable*);

	inline void doClone(Sys::TriangleTable* triTable, Sys::VertexTable* vtxTable, int i)
	{
		Triangle* currTriangle = &mObjects[i];
		Triangle* refTriangle  = &triTable->mObjects[i];

		currTriangle->mVertices = refTriangle->mVertices;
		currTriangle->mCode     = refTriangle->mCode;
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
	    , mBoundBox()
	{
	}

	virtual ~VertexTable();                       // _08 (weak)
	virtual void writeObject(Stream&, Vector3f&); // _2C
	virtual void readObject(Stream&, Vector3f&);  // _30 (weak)
	virtual void write(Stream&);                  // _34
	virtual void addOne(Vector3f&);               // _40 (weak)

	void transform(Matrixf&);
	void cloneFrom(Matrixf&, VertexTable*);

	inline void includeVertices()
	{
		for (int i = 0; i < mCount; i++) {
			mBoundBox.include(mObjects[i]);
		}
	}

	BoundBox mBoundBox; // _28
	u8 _40[0x10];       // _40
};
} // namespace Sys

#endif
