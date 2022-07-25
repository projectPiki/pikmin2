#ifndef _GAME_ROOMMAPMGR_H
#define _GAME_ROOMMAPMGR_H

/*
    __vt__Q24Game10RoomMapMgr:
    .4byte 0
    .4byte 0
    .4byte hasHiddenCollision__Q24Game10RoomMapMgrFv
    .4byte constraintBoundBox__Q24Game10RoomMapMgrFRQ23Sys6Sphere
    .4byte "getStartPosition__Q24Game10RoomMapMgrFR10Vector3<f>i"
    .4byte getDemoMatrix__Q24Game10RoomMapMgrFv
    .4byte getBoundBox2d__Q24Game10RoomMapMgrFR10BoundBox2d
    .4byte getBoundBox__Q24Game10RoomMapMgrFR8BoundBox
    .4byte findRayIntersection__Q24Game10RoomMapMgrFRQ23Sys16RayIntersectInfo
    .4byte traceMove__Q24Game10RoomMapMgrFRQ24Game8MoveInfof
    .4byte "getMinY__Q24Game10RoomMapMgrFR10Vector3<f>"
    .4byte getCurrTri__Q24Game10RoomMapMgrFRQ24Game11CurrTriInfo
    .4byte createTriangles__Q24Game10RoomMapMgrFRQ23Sys17CreateTriangleArg
    .4byte setupJUTTextures__Q24Game10RoomMapMgrFv
    .4byte frozenable__Q24Game6MapMgrFv
    .4byte update__Q24Game6MapMgrFv
    .4byte do_update__Q24Game6MapMgrFv
    .4byte drawCollision__Q24Game10RoomMapMgrFR8GraphicsRQ23Sys6Sphere
    .4byte doSimulation__Q24Game10RoomMapMgrFf
    .4byte doDirectDraw__Q24Game10RoomMapMgrFR8Graphics
    .4byte doAnimation__Q24Game10RoomMapMgrFv
    .4byte doEntry__Q24Game10RoomMapMgrFv
    .4byte doSetView__Q24Game10RoomMapMgrFi
    .4byte doViewCalc__Q24Game10RoomMapMgrFv
    .4byte traceMove_new__Q24Game10RoomMapMgrFRQ24Game8MoveInfof
    .4byte traceMove_original__Q24Game10RoomMapMgrFRQ24Game8MoveInfof
    .4byte 0
    .4byte 0
    .4byte "@280@4@doAnimation__Q24Game10RoomMapMgrFv"
    .4byte "@280@4@doEntry__Q24Game10RoomMapMgrFv"
    .4byte "@280@4@doSetView__Q24Game10RoomMapMgrFi"
    .4byte "@280@4@doViewCalc__Q24Game10RoomMapMgrFv"
    .4byte "@280@4@doSimulation__Q24Game10RoomMapMgrFf"
    .4byte "@280@4@doDirectDraw__Q24Game10RoomMapMgrFR8Graphics"
    .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
    .4byte loadResources__16GenericObjectMgrFv
    .4byte resetMgr__16GenericObjectMgrFv
    .4byte pausable__16GenericObjectMgrFv
    .4byte "@280@4@frozenable__Q24Game6MapMgrFv"
    .4byte getMatrixLoadType__16GenericObjectMgrFv
*/

namespace Game {
struct MapMgr {
	virtual void hasHiddenCollision();                        // _08
	virtual void constraintBoundBox(Sys::Sphere&);            // _0C
	virtual void getStartPosition(Vector3<float>&, int);      // _10 (weak)
	virtual void getDemoMatrix();                             // _14 (weak)
	virtual void getBoundBox2d(BoundBox2d&);                  // _18
	virtual void getBoundBox(BoundBox&);                      // _1C
	virtual void findRayIntersection(Sys::RayIntersectInfo&); // _20
	virtual void traceMove(MoveInfo&, float);                 // _24
	virtual void getMinY(Vector3<float>&);                    // _28
	virtual void getCurrTri(CurrTriInfo&);                    // _2C
	virtual void createTriangles(Sys::CreateTriangleArg&);    // _30
	virtual void setupJUTTextures();                          // _34
	virtual void frozenable();                                // _38 (weak)
	virtual void update();                                    // _3C (weak)
	virtual void do_update();                                 // _40 (weak)
};
} // namespace Game

struct GenericObjectMgr {
	virtual void hasHiddenCollision();                        // _08
	virtual void constraintBoundBox(Sys::Sphere&);            // _0C
	virtual void getStartPosition(Vector3<float>&, int);      // _10 (weak)
	virtual void getDemoMatrix();                             // _14 (weak)
	virtual void getBoundBox2d(BoundBox2d&);                  // _18
	virtual void getBoundBox(BoundBox&);                      // _1C
	virtual void findRayIntersection(Sys::RayIntersectInfo&); // _20
	virtual void traceMove(MoveInfo&, float);                 // _24
	virtual void getMinY(Vector3<float>&);                    // _28
	virtual void getCurrTri(CurrTriInfo&);                    // _2C
	virtual void createTriangles(Sys::CreateTriangleArg&);    // _30
	virtual void setupJUTTextures();                          // _34
	virtual void _38() = 0;                                   // _38
	virtual void _3C() = 0;                                   // _3C
	virtual void _40() = 0;                                   // _40
	virtual void drawCollision(Graphics&, Sys::Sphere&);      // _44
	virtual void doSimulation(float);                         // _48 (weak)
	virtual void doDirectDraw(Graphics&);                     // _4C (weak)
	virtual void doAnimation();                               // _50 (weak)
	virtual void doEntry();                                   // _54 (weak)
	virtual void doSetView(int);                              // _58 (weak)
	virtual void doViewCalc();                                // _5C (weak)
	virtual void traceMove_new(MoveInfo&, float);             // _60
	virtual void traceMove_original(MoveInfo&, float);        // _64
	virtual void _68() = 0;                                   // _68
	virtual void _6C() = 0;                                   // _6C
	virtual void _70() = 0;                                   // _70
	virtual void _74() = 0;                                   // _74
	virtual void _78() = 0;                                   // _78
	virtual void _7C() = 0;                                   // _7C
	virtual void _80() = 0;                                   // _80
	virtual void _84() = 0;                                   // _84
	virtual void doSimpleDraw(Viewport*);                     // _88 (weak)
	virtual void loadResources();                             // _8C (weak)
	virtual void resetMgr();                                  // _90 (weak)
	virtual void pausable();                                  // _94 (weak)
	virtual void _98() = 0;                                   // _98
	virtual void getMatrixLoadType();                         // _9C (weak)
};

namespace Game {
struct RoomMapMgr : public MapMgr, public GenericObjectMgr {
	virtual void hasHiddenCollision();                        // _08
	virtual void constraintBoundBox(Sys::Sphere&);            // _0C
	virtual void getStartPosition(Vector3<float>&, int);      // _10 (weak)
	virtual void getDemoMatrix();                             // _14 (weak)
	virtual void getBoundBox2d(BoundBox2d&);                  // _18
	virtual void getBoundBox(BoundBox&);                      // _1C
	virtual void findRayIntersection(Sys::RayIntersectInfo&); // _20
	virtual void traceMove(MoveInfo&, float);                 // _24
	virtual void getMinY(Vector3<float>&);                    // _28
	virtual void getCurrTri(CurrTriInfo&);                    // _2C
	virtual void createTriangles(Sys::CreateTriangleArg&);    // _30
	virtual void setupJUTTextures();                          // _34
	virtual void drawCollision(Graphics&, Sys::Sphere&);      // _44
	virtual void doSimulation(float);                         // _48 (weak)
	virtual void doDirectDraw(Graphics&);                     // _4C (weak)
	virtual void doAnimation();                               // _50 (weak)
	virtual void doEntry();                                   // _54 (weak)
	virtual void doSetView(int);                              // _58 (weak)
	virtual void doViewCalc();                                // _5C (weak)
	virtual void traceMove_new(MoveInfo&, float);             // _60
	virtual void traceMove_original(MoveInfo&, float);        // _64
	virtual void _68() = 0;                                   // _68
	virtual void _6C() = 0;                                   // _6C

	RoomMapMgr(Game::Cave::CaveInfo*);
	void getMapRoom(short);
	void createRandomMap(int, Game::Cave::EditMapUnit*);
	void completeUnitData();
	void useUnit(char*);
	void getTexture(char*);
	void allocRooms(int);
	void makeRoom(char*, float, float, int, int, Game::RoomLink*, Game::ObjectLayoutInfo*);
	void placeObjects();
	void entryToMapRoomCellMgr();
	void findRoomIndex(Sys::Sphere&);
	void createGlobalCollision();
	void makeOneRoom(float, float, float, char*, short, Game::RoomLink*, Game::ObjectLayoutInfo*);
	void deleteTemp();
	void getMUI(Game::MapUnit*);
	void nishimuraCreateRandomMap(Game::MapUnitInterface*, int, Game::Cave::FloorInfo*, bool, Game::Cave::EditMapUnit*);
	void nishimuraPlaceRooms();
	void nishimuraSetTexture();
};
} // namespace Game

#endif
