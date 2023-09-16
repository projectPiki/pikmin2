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
	virtual ~MapCollision() {};

	virtual void getBoundBox(BoundBox& bb) { mDivider->getBoundBox(bb); }
	virtual void getCurrTri(Game::CurrTriInfo&);
	virtual void createTriangles(Sys::CreateTriangleArg& arg);

	void read(Stream&);
	MapCollision* clone(Matrixf&);

	Sys::GridDivider* mDivider; // _18
};

#endif
