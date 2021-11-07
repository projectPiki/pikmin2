#ifndef _MAPCOLLISION_H
#define _MAPCOLLISION_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

struct MapCollision : public CNode {
	virtual ~MapCollision();                               // _00
	virtual void getChildCount();                          // _04
	virtual void getBoundBox(BoundBox&);                   // _08
	virtual void getCurrTri(Game::CurrTriInfo&);           // _0C
	virtual void createTriangles(Sys::CreateTriangleArg&); // _10
	virtual void _14() = 0;                                // _14

	// _00 VTBL
};

#endif
