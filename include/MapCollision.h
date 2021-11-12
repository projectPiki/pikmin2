#ifndef _MAPCOLLISION_H
#define _MAPCOLLISION_H

#include "BoundBox.h"
#include "CNode.h"
#include "Game/CurrTriInfo.h"
#include "Sys/CreateTriangleArg.h"
#include "Sys/GridDivider.h"

struct MapCollision : public CNode {
	virtual ~MapCollision();
	virtual void getBoundBox(BoundBox&);
	virtual void getCurrTri(Game::CurrTriInfo&);
	virtual void createTriangles(Sys::CreateTriangleArg&);

	void read(Stream&);
	MapCollision* clone(Matrixf&);

	Sys::GridDivider* m_divider; // _18
};

#endif
