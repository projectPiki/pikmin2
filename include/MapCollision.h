#ifndef _MAPCOLLISION_H
#define _MAPCOLLISION_H

#include "BoundBox.h"
#include "CNode.h"
#include "Game/CurrTriInfo.h"
#include "Sys/CreateTriangleArg.h"
#include "Sys/GridDivider.h"
#include "Matrixf.h"

struct MapCollision : public CNode {
	MapCollision() { }

	virtual ~MapCollision() { }                                                                   // _08
	virtual void getBoundBox(BoundBox& bb) { mDivider->getBoundBox(bb); }                         // _10
	virtual void getCurrTri(Game::CurrTriInfo&);                                                  // _14
	virtual void createTriangles(Sys::CreateTriangleArg& arg) { mDivider->createTriangles(arg); } // _18

	void read(Stream&);
	MapCollision* clone(Matrixf&);

	// _00     = VTBL
	// _00-_18 = CNode
	Sys::TriDivider* mDivider; // _18
};

#endif
