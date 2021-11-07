#ifndef _GAME_ROOMMAPMGR_H
#define _GAME_ROOMMAPMGR_H

namespace Game {
struct MapMgr {
    virtual void _00() = 0;    // _00
    virtual void _04() = 0;    // _04
    virtual void _08() = 0;    // _08
    virtual void _0C() = 0;    // _0C
    virtual void _10() = 0;    // _10
    virtual void _14() = 0;    // _14
    virtual void _18() = 0;    // _18
    virtual void _1C() = 0;    // _1C
    virtual void _20() = 0;    // _20
    virtual void _24() = 0;    // _24
    virtual void _28() = 0;    // _28
    virtual void _2C() = 0;    // _2C
    virtual void frozenable(); // _30
    virtual void update();     // _34
    virtual void do_update();  // _38

    // _00 VTBL
};
} // namespace Game

struct GenericObjectMgr {
    virtual void _00() = 0;               // _00
    virtual void _04() = 0;               // _04
    virtual void _08() = 0;               // _08
    virtual void _0C() = 0;               // _0C
    virtual void _10() = 0;               // _10
    virtual void _14() = 0;               // _14
    virtual void _18() = 0;               // _18
    virtual void _1C() = 0;               // _1C
    virtual void _20() = 0;               // _20
    virtual void _24() = 0;               // _24
    virtual void _28() = 0;               // _28
    virtual void _2C() = 0;               // _2C
    virtual void _30() = 0;               // _30
    virtual void _34() = 0;               // _34
    virtual void _38() = 0;               // _38
    virtual void _3C() = 0;               // _3C
    virtual void _40() = 0;               // _40
    virtual void _44() = 0;               // _44
    virtual void _48() = 0;               // _48
    virtual void _4C() = 0;               // _4C
    virtual void _50() = 0;               // _50
    virtual void _54() = 0;               // _54
    virtual void _58() = 0;               // _58
    virtual void _5C() = 0;               // _5C
    virtual void _60() = 0;               // _60
    virtual void _64() = 0;               // _64
    virtual void _68() = 0;               // _68
    virtual void _6C() = 0;               // _6C
    virtual void _70() = 0;               // _70
    virtual void _74() = 0;               // _74
    virtual void _78() = 0;               // _78
    virtual void _7C() = 0;               // _7C
    virtual void doSimpleDraw(Viewport*); // _80
    virtual void loadResources();         // _84
    virtual void resetMgr();              // _88
    virtual void pausable();              // _8C
    virtual void _90() = 0;               // _90
    virtual void getMatrixLoadType();     // _94

    // _00 VTBL
};

namespace Game {
struct RoomMapMgr : public MapMgr, public GenericObjectMgr {
    virtual void hasHiddenCollision();                        // _00
    virtual void constraintBoundBox(Sys::Sphere&);            // _04
    virtual void getStartPosition(Vector3<float>&, int);      // _08
    virtual void getDemoMatrix();                             // _0C
    virtual void getBoundBox2d(BoundBox2d&);                  // _10
    virtual void getBoundBox(BoundBox&);                      // _14
    virtual void findRayIntersection(Sys::RayIntersectInfo&); // _18
    virtual void traceMove(MoveInfo&, float);                 // _1C
    virtual void getMinY(Vector3<float>&);                    // _20
    virtual void getCurrTri(CurrTriInfo&);                    // _24
    virtual void createTriangles(Sys::CreateTriangleArg&);    // _28
    virtual void setupJUTTextures();                          // _2C
    virtual void frozenable();                                // _30
    virtual void update();                                    // _34
    virtual void do_update();                                 // _38
    virtual void drawCollision(Graphics&, Sys::Sphere&);      // _3C
    virtual void doSimulation(float);                         // _40
    virtual void doDirectDraw(Graphics&);                     // _44
    virtual void doAnimation();                               // _48
    virtual void doEntry();                                   // _4C
    virtual void doSetView(int);                              // _50
    virtual void doViewCalc();                                // _54
    virtual void traceMove_new(MoveInfo&, float);             // _58
    virtual void traceMove_original(MoveInfo&, float);        // _5C
    virtual void _60() = 0;                                   // _60
    virtual void _64() = 0;                                   // _64
    virtual void @280 @4 @doAnimation();                      // _68
    virtual void @280 @4 @doEntry();                          // _6C
    virtual void @280 @4 @doSetView(int);                     // _70
    virtual void @280 @4 @doViewCalc();                       // _74
    virtual void @280 @4 @doSimulation(float);                // _78
    virtual void @280 @4 @doDirectDraw(Graphics&);            // _7C
    virtual void doSimpleDraw(Viewport*);                     // _80
    virtual void loadResources();                             // _84
    virtual void resetMgr();                                  // _88
    virtual void pausable();                                  // _8C
    virtual void _90() = 0;                                   // _90
    virtual void getMatrixLoadType();                         // _94

    // _00 VTBL
};
} // namespace Game

#endif
