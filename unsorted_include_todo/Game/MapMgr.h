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
    virtual void hasHiddenCollision();                        // _00
    virtual void constraintBoundBox(Sys::Sphere&);            // _04
    virtual void getStartPosition(Vector3<float>&, int);      // _08
    virtual void getDemoMatrix();                             // _0C
    virtual void _10() = 0;                                   // _10
    virtual void _14() = 0;                                   // _14
    virtual void findRayIntersection(Sys::RayIntersectInfo&); // _18
    virtual void _1C() = 0;                                   // _1C
    virtual void _20() = 0;                                   // _20
    virtual void _24() = 0;                                   // _24
    virtual void createTriangles(Sys::CreateTriangleArg&);    // _28
    virtual void setupJUTTextures();                          // _2C
    virtual void frozenable();                                // _30
    virtual void update();                                    // _34
    virtual void do_update();                                 // _38
    virtual void _3C() = 0;                                   // _3C
    virtual void doSimulation(float);                         // _40
    virtual void doDirectDraw(Graphics&);                     // _44
    virtual void _48() = 0;                                   // _48
    virtual void _4C() = 0;                                   // _4C
    virtual void _50() = 0;                                   // _50
    virtual void doEntry();                                   // _54
    virtual void _58() = 0;                                   // _58
    virtual void _5C() = 0;                                   // _5C
    virtual void @36 @4 @doSimulation(float);                 // _60
    virtual void @36 @4 @doDirectDraw(Graphics&);             // _64
    virtual void doSimpleDraw(Viewport*);                     // _68
    virtual void loadResources();                             // _6C
    virtual void resetMgr();                                  // _70
    virtual void pausable();                                  // _74
    virtual void @36 @4 @frozenable();                        // _78
    virtual void getMatrixLoadType();                         // _7C

    // _00 VTBL
};

namespace Game {
struct MapMgr : public GenericObjectMgr {
    virtual void hasHiddenCollision();                        // _00
    virtual void constraintBoundBox(Sys::Sphere&);            // _04
    virtual void getStartPosition(Vector3<float>&, int);      // _08
    virtual void getDemoMatrix();                             // _0C
    virtual void _10() = 0;                                   // _10
    virtual void _14() = 0;                                   // _14
    virtual void findRayIntersection(Sys::RayIntersectInfo&); // _18
    virtual void _1C() = 0;                                   // _1C
    virtual void _20() = 0;                                   // _20
    virtual void _24() = 0;                                   // _24
    virtual void createTriangles(Sys::CreateTriangleArg&);    // _28
    virtual void setupJUTTextures();                          // _2C
    virtual void frozenable();                                // _30
    virtual void update();                                    // _34
    virtual void do_update();                                 // _38
    virtual void _3C() = 0;                                   // _3C
    virtual void doSimulation(float);                         // _40
    virtual void doDirectDraw(Graphics&);                     // _44
    virtual void _48() = 0;                                   // _48
    virtual void _4C() = 0;                                   // _4C
    virtual void _50() = 0;                                   // _50
    virtual void doEntry();                                   // _54
    virtual void _58() = 0;                                   // _58
    virtual void _5C() = 0;                                   // _5C
    virtual void @36 @4 @doSimulation(float);                 // _60
    virtual void @36 @4 @doDirectDraw(Graphics&);             // _64
    virtual void doSimpleDraw(Viewport*);                     // _68
    virtual void loadResources();                             // _6C
    virtual void resetMgr();                                  // _70
    virtual void pausable();                                  // _74
    virtual void @36 @4 @frozenable();                        // _78
    virtual void getMatrixLoadType();                         // _7C

    // _00 VTBL
};
} // namespace Game

#endif
