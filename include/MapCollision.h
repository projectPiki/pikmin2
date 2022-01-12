#ifndef _MAPCOLLISION_H
#define _MAPCOLLISION_H

#include "BoundBox.h"
#include "CNode.h"
#include "Game/CurrTriInfo.h"
#include "Sys/CreateTriangleArg.h"
#include "Sys/GridDivider.h"
#include "Matrixf.h"

struct MapCollision : public CNode {
	virtual ~MapCollision() { } // _08

	virtual void getBoundBox(BoundBox& boundingBox) { m_divider->getBoundBox(boundingBox); } // _0C

	virtual void getCurrTri(Game::CurrTriInfo&);           // _10
	virtual void createTriangles(Sys::CreateTriangleArg&); // _14

	void read(Stream&);
	MapCollision* clone(Matrixf&);

	Sys::GridDivider* m_divider; // _18
};

#endif
