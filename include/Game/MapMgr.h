#ifndef _GAME_MAPMGR_H
#define _GAME_MAPMGR_H

#include "GenericObjectMgr.h"
#include "types.h"
#include "Vector3.h"

struct BoundBox;
struct BoundBox2d;

namespace Sys {
struct CreateTriangleArg;
struct RayIntersectInfo;
struct Sphere;
} // namespace Sys

namespace Game {
struct CourseInfo;
struct CurrTriInfo;
struct MoveInfo;
struct RouteMgr;
struct SeaMgr;
struct WaterBox;
// struct GenericObjectMgrReference {
// 	GenericObjectMgr* m_genericObjectMgrPtr;
// };

struct MapMgr : virtual public GenericObjectMgr {
	struct BeamCollisionArg { };

	MapMgr();

	// vtable 1 (MapMgr)
	virtual bool hasHiddenCollision();                        // _00
	virtual void constraintBoundBox(Sys::Sphere&);            // _04
	virtual void getStartPosition(Vector3f&, int);            // _08
	virtual void getDemoMatrix();                             // _0C
	virtual void getBoundBox2d(BoundBox2d&) = 0;              // _10
	virtual void getBoundBox(BoundBox&)     = 0;              // _14
	virtual void findRayIntersection(Sys::RayIntersectInfo&); // _18
	virtual void traceMove(MoveInfo&, float) = 0;             // _1C
	virtual float getMinY(Vector3f&)         = 0;             // _20
	virtual void getCurrTri(CurrTriInfo&)    = 0;             // _24
	virtual void createTriangles(Sys::CreateTriangleArg&);    // _28
	/**
	 * @reifiedAddress{80151530}
	 * @reifiedFile{plugProjectKandoU/baseGameSection.cpp}
	 */
	virtual void setupJUTTextures() {};                      // _2C
	virtual bool frozenable();                               // _30
	virtual void update();                                   // _34
	virtual void do_update();                                // _38
	virtual void drawCollision(Graphics&, Sys::Sphere&) = 0; // _3C
	virtual void doSimulation(float);                        // _40
	virtual void doDirectDraw(Graphics&);                    // _44

	WaterBox* findWater(Sys::Sphere&);

	// _00: ptr to _0x24 (GenericObjectMgr)
	// _04: vtable 1
	RouteMgr* m_routeMgr;     // _08
	CourseInfo* m_courseInfo; // _0C
	SeaMgr* m_seaMgr;         // _10
	u32 _14;                  // _14
	u32 _18;                  // _18
	u32 _1C;                  // _1C
	u32 _20;                  // _20

	// _24: GenericObjectMgr
};

struct ShapeMapMgr : public MapMgr {
	ShapeMapMgr() { }

	virtual void doAnimation();  // _00
	virtual void doEntry();      // _04
	virtual void doSetView(int); // _08
	virtual void doViewCalc();   // _0C

	virtual void getBoundBox2d(BoundBox2d&);             // _10
	virtual void getBoundBox(BoundBox&);                 // _14
	virtual void traceMove(MoveInfo&, float);            // _1C
	virtual float getMinY(Vector3f&);                    // _20
	virtual void getCurrTri(CurrTriInfo&);               // _24
	virtual void drawCollision(Graphics&, Sys::Sphere&); // _3C
};

extern MapMgr* mapMgr;
} // namespace Game

#endif
