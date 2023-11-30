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
	    : mBoundingBox()
	{
		mTriIndexLists = nullptr;
		mMaxZ          = 0;
		mMaxX          = 0;
	}

	virtual ~GridDivider() // _08 (weak)
	{
		if (&mMaxX)
			delete[] mTriIndexLists;
	}
	virtual f32 getMinY(Vector3f&);                                       // _10
	virtual TriIndexList* findTriLists(Sphere&);                          // _14
	virtual void read(Stream&);                                           // _18
	virtual void getCurrTri(Game::CurrTriInfo&);                          // _1C
	virtual void createTriangles(CreateTriangleArg& arg);                 // _20
	virtual void getBoundBox(BoundBox& box) { box = mBoundingBox; }       // _24 (weak)
	virtual TriDivider* do_clone(Matrixf&, VertexTable*, TriangleTable*); // _2C

	void create(BoundBox&, int, int, VertexTable*, TriangleTable*);

	// Unused/inlined:
	void write(Stream&);

	inline void readIndexList(Stream& stream)
	{
		for (int i = 0; i < (mMaxX * mMaxZ); i++) {
			mTriIndexLists[i].read(stream);
		}
	}

	int mMaxX;                    // _20
	int mMaxZ;                    // _24
	TriIndexList* mTriIndexLists; // _28
	BoundBox mBoundingBox;        // _2C
	f32 mScaleX;                  // _44
	f32 mScaleZ;                  // _48
};
} // namespace Sys

#endif
