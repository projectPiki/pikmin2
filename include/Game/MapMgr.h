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
#define BEAM_RADIUS (10.0f)
	struct BeamCollisionArg {
		BeamCollisionArg()
		{
			mBeamRadius = BEAM_RADIUS;
			mIndex      = 0;
			mHitSuccess = false;
		}

		inline void setup(int index, const Vector3f& position, const Vector3f& targetPosition)
		{
			mIndex          = index;
			mPosition       = position;
			mTargetPosition = targetPosition;
			mBeamRadius     = BEAM_RADIUS;
		}

		Vector3f mPosition;       // _00
		Vector3f mTargetPosition; // _0C
		f32 mBeamRadius;          // _18
		int mIndex;               // _1C
		bool mHitSuccess;         // _20
		f32 mTargetDistance;      // _24
	};

	static bool traceMoveDebug;
	static u8 mTraceMoveOptLevel;

	MapMgr();

	// vtable 1 (MapMgr)
	virtual bool hasHiddenCollision() // _08 (weak)
	{
		return false;
	}
	virtual void constraintBoundBox(Sys::Sphere&) { }                           // _0C (weak)
	virtual void getStartPosition(Vector3f&, int);                              // _10
	virtual Matrixf* getDemoMatrix();                                           // _14
	virtual void getBoundBox2d(BoundBox2d&) = 0;                                // _18
	virtual void getBoundBox(BoundBox&)     = 0;                                // _1C
	virtual bool findRayIntersection(Sys::RayIntersectInfo&) { return false; }  // _20 (weak)
	virtual Sys::TriIndexList* traceMove(MoveInfo&, f32) = 0;                   // _24
	virtual f32 getMinY(Vector3f&)                       = 0;                   // _28
	virtual void getCurrTri(CurrTriInfo&)                = 0;                   // _2C
	virtual void createTriangles(Sys::CreateTriangleArg& arg) { }               // _30 (weak)
	virtual void setupJUTTextures() { }                                         // _34 (weak)
	virtual bool frozenable() { return false; }                                 // _38 (weak)
	virtual void update();                                                      // _3C (weak)
	virtual void do_update() { }                                                // _40 (weak)
	virtual void drawCollision(Graphics& gfx, Sys::Sphere& boundingSphere) = 0; // _44
	virtual void doSimulation(f32 rate) { }                                     // _48 (weak)
	virtual void doDirectDraw(Graphics& gfx) { }                                // _4C (weak)

	WaterBox* findWater(Sys::Sphere&);
	f32 getMapRotation();
	f32 getBestAngle(Vector3f&, f32, f32);
	void checkBeamCollision(BeamCollisionArg&);
	void clearPerfMonitor();
	Sys::TriIndexList* traceMove(MapCollision&, Game::MoveInfo&, f32);
	Sys::TriIndexList* traceMove_test1203_cylinder(MapCollision&, Game::MoveInfo&, f32);

	// unused/inlined:
	void draw2d(Graphics&);

	// _00 = ptr to _24 (GenericObjectMgr)
	// _04 = VTBL
	RouteMgr* mRouteMgr;          // _08
	CourseInfo* mCourseInfo;      // _0C
	SeaMgr* mSeaMgr;              // _10
	u32 mTotalTraceCount;         // _14
	u32 mTotalStepCount;          // _18
	u32 mTotalTriCount;           // _1C
	u32 mMissedIntersectionCount; // _20
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

	virtual void getBoundBox2d(BoundBox2d& bounds) // _18 (weak)
	{
		BoundBox calc;
		mMapCollision.mDivider->getBoundBox(calc);
		bounds.fromBoundBox(calc);
	}
	virtual void getBoundBox(BoundBox& bounds) // _1C (weak)
	{
		BoundBox calc;
		mMapCollision.mDivider->getBoundBox(calc);
		bounds = calc;
	}
	virtual bool findRayIntersection(Sys::RayIntersectInfo&);               // _20
	virtual Sys::TriIndexList* traceMove(MoveInfo&, f32);                   // _24
	virtual f32 getMinY(Vector3f&);                                         // _28
	virtual void getCurrTri(CurrTriInfo&);                                  // _2C
	virtual void createTriangles(Sys::CreateTriangleArg& arg);              // _30
	virtual void do_update();                                               // _40
	virtual void drawCollision(Graphics& gfx, Sys::Sphere& boundingSphere); // _44
	virtual void doAnimation();                                             // _50 (weak)
	virtual void doSetView(int viewportNumber);                             // _54 (weak)
	virtual void doViewCalc();                                              // _58 (weak)
	virtual void doEntry();                                                 // _5C (weak)

	void load(LoadArg&);

	// _04     = VTBL
	// _00-_24 = MapMgr
	int mTexAnimCount;                   // _24
	Sys::MatTexAnimation* mTexAnims;     // _28
	int mAnimatorCount;                  // _2C
	Sys::MatLoopAnimator* mMatAnimators; // _30
	SysShape::Model* mMapModel;          // _34
	MapCollision mMapCollision;          // _38
};

extern MapMgr* mapMgr;
} // namespace Game

#endif
