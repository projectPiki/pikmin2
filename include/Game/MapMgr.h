#ifndef _GAME_MAPMGR_H
#define _GAME_MAPMGR_H

#include "Sys/MatBaseAnimation.h"
#include "Sys/MatBaseAnimator.h"
#include "SysShape/Model.h"

#include "GenericObjectMgr.h"
#include "MapCollision.h"
#include "Game/MoveInfo.h"
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
// 	GenericObjectMgr* mGenericObjectMgrPtr;
// };

struct MapMgr : virtual public GenericObjectMgr {
	struct BeamCollisionArg {
	};

	static bool traceMoveDebug;

	MapMgr();

	// vtable 1 (MapMgr)
	virtual bool hasHiddenCollision() // _08 (weak)
	{
		return false;
	}
	virtual void constraintBoundBox(Sys::Sphere&) { }         // _0C (weak)
	virtual void getStartPosition(Vector3f&, int);            // _10
	virtual void getDemoMatrix();                             // _14
	virtual void getBoundBox2d(BoundBox2d&) = 0;              // _18
	virtual void getBoundBox(BoundBox&)     = 0;              // _1C
	virtual void findRayIntersection(Sys::RayIntersectInfo&); // _20 (weak)
	virtual void traceMove(MoveInfo&, f32) = 0;               // _24
	virtual f32 getMinY(Vector3f&)         = 0;               // _28
	virtual void getCurrTri(CurrTriInfo&)  = 0;               // _2C
	virtual void createTriangles(Sys::CreateTriangleArg&);    // _30 (weak)
	virtual void setupJUTTextures() {};                       // _34 (weak)
	virtual bool frozenable();                                // _38 (weak)
	virtual void update();                                    // _3C (weak)
	virtual void do_update();                                 // _40 (weak)
	virtual void drawCollision(Graphics&, Sys::Sphere&) = 0;  // _44
	virtual void doSimulation(f32 rate);                      // _48 (weak)
	virtual void doDirectDraw(Graphics& gfx);                 // _4C (weak)

	WaterBox* findWater(Sys::Sphere&);
	void getMapRotation();
	void getBestAngle(Vector3f&, f32, f32);
	void checkBeamCollision(BeamCollisionArg&);
	void clearPerfMonitor();
	void traceMove(MapCollision&, Game::MoveInfo&, f32);
	void traceMove_test1203_cylinder(MapCollision&, Game::MoveInfo&, f32);

	// _00: ptr to _0x24 (GenericObjectMgr)
	// _04: vtable 1
	RouteMgr* mRouteMgr;     // _08
	CourseInfo* mCourseInfo; // _0C
	SeaMgr* mSeaMgr;         // _10
	u32 _14;                 // _14
	u32 _18;                 // _18
	u32 _1C;                 // _1C
	u32 _20;                 // _20

	// _24: GenericObjectMgr
};

struct ShapeMapMgr : public MapMgr {
	struct LoadArg {
		LoadArg(char* modelPath, char* collisionPath, char* routePath)
		{
			mRoutePath     = routePath;
			mModelPath     = modelPath;
			mCollisionPath = collisionPath;

			mWaterboxPath = 0;
			_18           = 0;
		}

		char* mFolder;        // _00
		char* mAbeFolder;     // _04
		char* mModelPath;     // _08
		char* mCollisionPath; // _0C
		char* mWaterboxPath;  // _10
		char* mMapcodePath;   // _14
		char* _18;            // _18
		char* mRoutePath;     // _1C
	};

	ShapeMapMgr() { }

	virtual void getBoundBox2d(BoundBox2d&);                  // _18 (weak)
	virtual void getBoundBox(BoundBox&);                      // _1C (weak)
	virtual void findRayIntersection(Sys::RayIntersectInfo&); // _20
	virtual void traceMove(MoveInfo&, f32);                   // _24
	virtual f32 getMinY(Vector3f&);                           // _28
	virtual void getCurrTri(CurrTriInfo&);                    // _2C
	virtual void createTriangles(Sys::CreateTriangleArg&);    // _30
	virtual void do_update();                                 // _40
	virtual void drawCollision(Graphics&, Sys::Sphere&);      // _44
	virtual void doAnimation();                               // _50 (weak)
	virtual void doSetView(int);                              // _54 (weak)
	virtual void doViewCalc();                                // _58 (weak)
	virtual void doEntry();                                   // _5C (weak)

	void load(LoadArg&);

	u32 mTexAnimCount;               // _24
	Sys::MatTexAnimation* mTexAnims; // _28
	Sys::MatTexAnimation* _2C;       // _2C
	Sys::MatLoopAnimator* _30;       // _30
	SysShape::Model* mMapModel;      // _34
	MapCollision _38;                // _38
};

extern MapMgr* mapMgr;
} // namespace Game

#endif
