#ifndef _GAME_TDISPTRIANGLE_H
#define _GAME_TDISPTRIANGLE_H

#include "BitFlag.h"
#include "Sys/Triangle.h"
#include "Sys/TriDivider.h"

namespace Game {

struct TDispTriangle {
	TDispTriangle(); // unused/inlined
	void store(Sys::Triangle&, Sys::VertexTable&, int);
	void store(Matrixf&, Sys::Triangle&, Sys::VertexTable&, int);

	// unused/inlined:
	void draw(Graphics& gfx);

	Sys::Triangle* mSysTriangle; // _00
	Vector3f mVertices[3];       // _04
	BitFlag<u16> mFlags;         // _28
	int mIndex;                  // _2C
	Matrixf mMatrix;             // _30
};

struct TDispTriangleArray {
	TDispTriangleArray(); // unused/inlined

	void store(Sys::Triangle&, Sys::VertexTable&, int);
	void store(Matrixf&, Sys::Triangle&, Sys::VertexTable&, int);

	// unused/inlined:
	void alloc(int);
	void clear();
	void draw(Graphics& gfx);

	int mUsedCount;        // _00
	int mTotalCount;       // _04
	TDispTriangle* mItems; // _08
};

} // namespace Game

#endif
