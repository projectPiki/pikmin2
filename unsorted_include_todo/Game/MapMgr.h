#ifndef _GAME_MAPMGR_H
#define _GAME_MAPMGR_H

/*
    __vt__Q24Game6MapMgr:
    .4byte 0
    .4byte 0
    .4byte hasHiddenCollision__Q24Game6MapMgrFv
    .4byte constraintBoundBox__Q24Game6MapMgrFRQ23Sys6Sphere
    .4byte "getStartPosition__Q24Game6MapMgrFR10Vector3<f>i"
    .4byte getDemoMatrix__Q24Game6MapMgrFv
    .4byte 0
    .4byte 0
    .4byte findRayIntersection__Q24Game6MapMgrFRQ23Sys16RayIntersectInfo
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte createTriangles__Q24Game6MapMgrFRQ23Sys17CreateTriangleArg
    .4byte setupJUTTextures__Q24Game6MapMgrFv
    .4byte frozenable__Q24Game6MapMgrFv
    .4byte update__Q24Game6MapMgrFv
    .4byte do_update__Q24Game6MapMgrFv
    .4byte 0
    .4byte doSimulation__Q24Game6MapMgrFf
    .4byte doDirectDraw__Q24Game6MapMgrFR8Graphics
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte doEntry__16GenericObjectMgrFv
    .4byte 0
    .4byte 0
    .4byte "@36@4@doSimulation__Q24Game6MapMgrFf"
    .4byte "@36@4@doDirectDraw__Q24Game6MapMgrFR8Graphics"
    .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
    .4byte loadResources__16GenericObjectMgrFv
    .4byte resetMgr__16GenericObjectMgrFv
    .4byte pausable__16GenericObjectMgrFv
    .4byte "@36@4@frozenable__Q24Game6MapMgrFv"
    .4byte getMatrixLoadType__16GenericObjectMgrFv
*/

struct GenericObjectMgr {
	virtual void hasHiddenCollision();                        // _08 (weak)
	virtual void constraintBoundBox(Sys::Sphere&);            // _0C (weak)
	virtual void getStartPosition(Vector3<float>&, int);      // _10
	virtual void getDemoMatrix();                             // _14
	virtual void _18() = 0;                                   // _18
	virtual void _1C() = 0;                                   // _1C
	virtual void findRayIntersection(Sys::RayIntersectInfo&); // _20 (weak)
	virtual void _24() = 0;                                   // _24
	virtual void _28() = 0;                                   // _28
	virtual void _2C() = 0;                                   // _2C
	virtual void createTriangles(Sys::CreateTriangleArg&);    // _30 (weak)
	virtual void setupJUTTextures();                          // _34 (weak)
	virtual void frozenable();                                // _38 (weak)
	virtual void update();                                    // _3C (weak)
	virtual void do_update();                                 // _40 (weak)
	virtual void _44() = 0;                                   // _44
	virtual void doSimulation(float);                         // _48 (weak)
	virtual void doDirectDraw(Graphics&);                     // _4C (weak)
	virtual void _50() = 0;                                   // _50
	virtual void _54() = 0;                                   // _54
	virtual void _58() = 0;                                   // _58
	virtual void doEntry();                                   // _5C (weak)
	virtual void _60() = 0;                                   // _60
	virtual void _64() = 0;                                   // _64
	virtual void _68() = 0;                                   // _68
	virtual void _6C() = 0;                                   // _6C
	virtual void doSimpleDraw(Viewport*);                     // _70 (weak)
	virtual void loadResources();                             // _74 (weak)
	virtual void resetMgr();                                  // _78 (weak)
	virtual void pausable();                                  // _7C (weak)
	virtual void _80() = 0;                                   // _80
	virtual void getMatrixLoadType();                         // _84 (weak)
};

namespace Game {
struct MapMgr : public GenericObjectMgr {
	virtual void hasHiddenCollision();                        // _08 (weak)
	virtual void constraintBoundBox(Sys::Sphere&);            // _0C (weak)
	virtual void getStartPosition(Vector3<float>&, int);      // _10
	virtual void getDemoMatrix();                             // _14
	virtual void _18() = 0;                                   // _18
	virtual void _1C() = 0;                                   // _1C
	virtual void findRayIntersection(Sys::RayIntersectInfo&); // _20 (weak)
	virtual void _24() = 0;                                   // _24
	virtual void _28() = 0;                                   // _28
	virtual void _2C() = 0;                                   // _2C
	virtual void createTriangles(Sys::CreateTriangleArg&);    // _30 (weak)
	virtual void setupJUTTextures();                          // _34 (weak)
	virtual void frozenable();                                // _38 (weak)
	virtual void update();                                    // _3C (weak)
	virtual void do_update();                                 // _40 (weak)
	virtual void _44() = 0;                                   // _44
	virtual void doSimulation(float);                         // _48 (weak)
	virtual void doDirectDraw(Graphics&);                     // _4C (weak)
	virtual void _50() = 0;                                   // _50
	virtual void _54() = 0;                                   // _54
	virtual void _58() = 0;                                   // _58
	virtual void _60() = 0;                                   // _60
	virtual void _64() = 0;                                   // _64

	MapMgr();
	void getMapRotation();
	void getBestAngle(Vector3<float>&, float, float);
	void checkBeamCollision(Game::MapMgr::BeamCollisionArg&);
	void findWater(Sys::Sphere&);
	void clearPerfMonitor();
	void traceMove(MapCollision&, Game::MoveInfo&, float);
	void traceMove_test1203_cylinder(MapCollision&, Game::MoveInfo&, float);
};
} // namespace Game

#endif
