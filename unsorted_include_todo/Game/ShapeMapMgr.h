#ifndef _GAME_SHAPEMAPMGR_H
#define _GAME_SHAPEMAPMGR_H

/*
        __vt__Q24Game11ShapeMapMgr:
        .4byte 0
        .4byte 0
        .4byte hasHiddenCollision__Q24Game6MapMgrFv
        .4byte constraintBoundBox__Q24Game6MapMgrFRQ23Sys6Sphere
        .4byte "getStartPosition__Q24Game6MapMgrFR10Vector3<f>i"
        .4byte getDemoMatrix__Q24Game6MapMgrFv
        .4byte getBoundBox2d__Q24Game11ShapeMapMgrFR10BoundBox2d
        .4byte getBoundBox__Q24Game11ShapeMapMgrFR8BoundBox
        .4byte
   findRayIntersection__Q24Game11ShapeMapMgrFRQ23Sys16RayIntersectInfo .4byte
   traceMove__Q24Game11ShapeMapMgrFRQ24Game8MoveInfof .4byte
   "getMinY__Q24Game11ShapeMapMgrFR10Vector3<f>" .4byte
   getCurrTri__Q24Game11ShapeMapMgrFRQ24Game11CurrTriInfo .4byte
   createTriangles__Q24Game11ShapeMapMgrFRQ23Sys17CreateTriangleArg .4byte
   setupJUTTextures__Q24Game6MapMgrFv .4byte frozenable__Q24Game6MapMgrFv .4byte
   update__Q24Game6MapMgrFv .4byte do_update__Q24Game11ShapeMapMgrFv .4byte
   drawCollision__Q24Game11ShapeMapMgrFR8GraphicsRQ23Sys6Sphere .4byte
   doSimulation__Q24Game6MapMgrFf .4byte doDirectDraw__Q24Game6MapMgrFR8Graphics
        .4byte doAnimation__Q24Game11ShapeMapMgrFv
        .4byte doSetView__Q24Game11ShapeMapMgrFi
        .4byte doViewCalc__Q24Game11ShapeMapMgrFv
        .4byte doEntry__Q24Game11ShapeMapMgrFv
        .4byte 0
        .4byte 0
        .4byte "@84@4@doAnimation__Q24Game11ShapeMapMgrFv"
        .4byte "@84@4@doEntry__Q24Game11ShapeMapMgrFv"
        .4byte "@84@4@doSetView__Q24Game11ShapeMapMgrFi"
        .4byte "@84@4@doViewCalc__Q24Game11ShapeMapMgrFv"
        .4byte "@84@4@doSimulation__Q24Game6MapMgrFf"
        .4byte "@84@4@doDirectDraw__Q24Game6MapMgrFR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte "@84@4@frozenable__Q24Game6MapMgrFv"
        .4byte getMatrixLoadType__16GenericObjectMgrFv
*/

namespace Game {
struct MapMgr {
    virtual void hasHiddenCollision();                        // _08 (inline)
    virtual void constraintBoundBox(Sys::Sphere&);            // _0C (inline)
    virtual void getStartPosition(Vector3<float>&, int);      // _10
    virtual void getDemoMatrix();                             // _14
    virtual void getBoundBox2d(BoundBox2d&);                  // _18 (inline)
    virtual void getBoundBox(BoundBox&);                      // _1C (inline)
    virtual void findRayIntersection(Sys::RayIntersectInfo&); // _20
    virtual void traceMove(MoveInfo&, float);                 // _24
    virtual void getMinY(Vector3<float>&);                    // _28
    virtual void getCurrTri(CurrTriInfo&);                    // _2C
    virtual void createTriangles(Sys::CreateTriangleArg&);    // _30
    virtual void setupJUTTextures();                          // _34 (inline)
    virtual void frozenable();                                // _38 (inline)
    virtual void update();                                    // _3C (inline)
    virtual void do_update();                                 // _40
    virtual void drawCollision(Graphics&, Sys::Sphere&);      // _44
    virtual void doSimulation(float);                         // _48 (inline)
    virtual void doDirectDraw(Graphics&);                     // _4C (inline)
};
} // namespace Game

struct GenericObjectMgr {
    virtual void _08() = 0;                                   // _08
    virtual void _0C() = 0;                                   // _0C
    virtual void _10() = 0;                                   // _10
    virtual void _14() = 0;                                   // _14
    virtual void getBoundBox2d(BoundBox2d&);                  // _18 (inline)
    virtual void getBoundBox(BoundBox&);                      // _1C (inline)
    virtual void findRayIntersection(Sys::RayIntersectInfo&); // _20
    virtual void traceMove(MoveInfo&, float);                 // _24
    virtual void getMinY(Vector3<float>&);                    // _28
    virtual void getCurrTri(CurrTriInfo&);                    // _2C
    virtual void createTriangles(Sys::CreateTriangleArg&);    // _30
    virtual void _34() = 0;                                   // _34
    virtual void _38() = 0;                                   // _38
    virtual void _3C() = 0;                                   // _3C
    virtual void do_update();                                 // _40
    virtual void drawCollision(Graphics&, Sys::Sphere&);      // _44
    virtual void _48() = 0;                                   // _48
    virtual void _4C() = 0;                                   // _4C
    virtual void doAnimation();                               // _50 (inline)
    virtual void doSetView(int);                              // _54 (inline)
    virtual void doViewCalc();                                // _58 (inline)
    virtual void doEntry();                                   // _5C (inline)
    virtual void _60() = 0;                                   // _60
    virtual void _64() = 0;                                   // _64
    virtual void @84 @4 @doAnimation();                       // _68 (inline)
    virtual void @84 @4 @doEntry();                           // _6C (inline)
    virtual void @84 @4 @doSetView(int);                      // _70 (inline)
    virtual void @84 @4 @doViewCalc();                        // _74 (inline)
    virtual void _78() = 0;                                   // _78
    virtual void _7C() = 0;                                   // _7C
    virtual void doSimpleDraw(Viewport*);                     // _80 (inline)
    virtual void loadResources();                             // _84 (inline)
    virtual void resetMgr();                                  // _88 (inline)
    virtual void pausable();                                  // _8C (inline)
    virtual void _90() = 0;                                   // _90
    virtual void getMatrixLoadType();                         // _94 (inline)
};

namespace Game {
struct ShapeMapMgr : public MapMgr, public GenericObjectMgr {
    virtual void getBoundBox2d(BoundBox2d&);                  // _18 (inline)
    virtual void getBoundBox(BoundBox&);                      // _1C (inline)
    virtual void findRayIntersection(Sys::RayIntersectInfo&); // _20
    virtual void traceMove(MoveInfo&, float);                 // _24
    virtual void getMinY(Vector3<float>&);                    // _28
    virtual void getCurrTri(CurrTriInfo&);                    // _2C
    virtual void createTriangles(Sys::CreateTriangleArg&);    // _30
    virtual void do_update();                                 // _40
    virtual void drawCollision(Graphics&, Sys::Sphere&);      // _44
    virtual void doAnimation();                               // _50 (inline)
    virtual void doSetView(int);                              // _54 (inline)
    virtual void doViewCalc();                                // _58 (inline)
    virtual void doEntry();                                   // _5C (inline)
    virtual void _60() = 0;                                   // _60
    virtual void _64() = 0;                                   // _64
    virtual void @84 @4 @doAnimation();                       // _68 (inline)
    virtual void @84 @4 @doEntry();                           // _6C (inline)
    virtual void @84 @4 @doSetView(int);                      // _70 (inline)
    virtual void @84 @4 @doViewCalc();                        // _74 (inline)

    void load(Game::ShapeMapMgr::LoadArg&);
};
} // namespace Game

#endif
