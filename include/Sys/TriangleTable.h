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

	virtual ~TriangleTable() { }                                 // _08 (weak)
	virtual void writeObject(Stream& output, Triangle& triangle) // _2C (weak)
	{
		output.writeInt(triangle.mVertices[0]);
		output.writeInt(triangle.mVertices[1]);
		output.writeInt(triangle.mVertices[2]);

		triangle.mTrianglePlane.write(output);
		triangle.mEdgePlanes[0].write(output);
		triangle.mEdgePlanes[1].write(output);
		triangle.mEdgePlanes[2].write(output);
	}
	virtual void readObject(Stream& input, Triangle& triangle) // _30 (weak)
	{
		triangle.mVertices[0] = input.readInt();
		triangle.mVertices[1] = input.readInt();
		triangle.mVertices[2] = input.readInt();
		triangle.mTrianglePlane.read(input);
		triangle.mEdgePlanes[0].read(input);
		triangle.mEdgePlanes[1].read(input);
		triangle.mEdgePlanes[2].read(input);
	}

	void createTriangleSphere(VertexTable&);
	void cloneFrom(Matrixf&, TriangleTable*, VertexTable*);

	inline void doClone(Sys::TriangleTable* triTable, Sys::VertexTable* vtxTable, int i)
	{
		Triangle* currTriangle = &mObjects[i];
		Triangle* refTriangle  = &triTable->mObjects[i];

		currTriangle->mVertices[0] = refTriangle->mVertices[0];
		currTriangle->mVertices[1] = refTriangle->mVertices[1];
		currTriangle->mVertices[2] = refTriangle->mVertices[2];
		currTriangle->mCode        = refTriangle->mCode;
		currTriangle->makePlanes(*vtxTable);
		currTriangle->createSphere(*vtxTable);
	}

	inline Triangle* getTriangle(int i) { return &mObjects[i]; }

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

	virtual ~VertexTable() { }                                                       // _08 (weak)
	virtual void writeObject(Stream&, Vector3f&);                                    // _2C
	virtual void readObject(Stream& input, Vector3f& vertex) { vertex.read(input); } // _30 (weak)
	virtual void write(Stream&);                                                     // _34
	virtual void addOne(Vector3f& vert)                                              // _40 (weak)
	{
		if (mCount < mLimit) {
			mObjects[mCount++] = vert;
		}
		mBoundBox.include(vert);
	}

	void transform(Matrixf&);
	void cloneFrom(Matrixf&, VertexTable*);

	inline void includeVertices()
	{
		for (int i = 0; i < mCount; i++) {
			mBoundBox.include(mObjects[i]);
		}
	}

	inline Vector3f* getVertex(int i) { return &mObjects[i]; }
	inline Vector3f& getVertexAt(int i) { return mObjects[i]; }

	BoundBox mBoundBox; // _28
	u8 _40[0x10];       // _40
};
} // namespace Sys

#endif
