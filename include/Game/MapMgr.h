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
// 	GenericObjectMgr* m_genericObjectMgrPtr;
// };

struct MapMgr : virtual public GenericObjectMgr {
	struct BeamCollisionArg {
	};

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
	virtual void traceMove(MoveInfo&, float) = 0;             // _24
	virtual float getMinY(Vector3f&)         = 0;             // _28
	virtual void getCurrTri(CurrTriInfo&)    = 0;             // _2C
	virtual void createTriangles(Sys::CreateTriangleArg&);    // _30 (weak)
	virtual void setupJUTTextures() {};                       // _34 (weak)
	virtual bool frozenable();                                // _38 (weak)
	virtual void update();                                    // _3C (weak)
	virtual void do_update();                                 // _40 (weak)
	virtual void drawCollision(Graphics&, Sys::Sphere&) = 0;  // _44
	virtual void doSimulation(float rate);                    // _48 (weak)
	virtual void doDirectDraw(Graphics& gfx);                 // _4C (weak)

	WaterBox* findWater(Sys::Sphere&);
	void getMapRotation();
	void getBestAngle(Vector3f&, float, float);
	void checkBeamCollision(BeamCollisionArg&);
	void clearPerfMonitor();
	void traceMove(MapCollision&, Game::MoveInfo&, float);
	void traceMove_test1203_cylinder(MapCollision&, Game::MoveInfo&, float);

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
	struct LoadArg {
		LoadArg(char* modelPath, char* collisionPath, char* routePath)
		{
			m_routePath     = routePath;
			m_modelPath     = modelPath;
			m_collisionPath = collisionPath;

			m_waterboxPath = 0;
			_18            = 0;
		}

		char* m_folder;        // _00
		char* m_abeFolder;     // _04
		char* m_modelPath;     // _08
		char* m_collisionPath; // _0C
		char* m_waterboxPath;  // _10
		char* m_mapcodePath;   // _14
		char* _18;             // _18
		char* m_routePath;     // _1C
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

	u32 m_texAnimCount;               // _24
	Sys::MatTexAnimation* m_texAnims; // _28
	Sys::MatTexAnimation* _2C;        // _2C
	Sys::MatLoopAnimator* _30;        // _30
	SysShape::Model* m_mapModel;      // _34
	MapCollision _38;                 // _38
};

extern MapMgr* mapMgr;
} // namespace Game

#endif
