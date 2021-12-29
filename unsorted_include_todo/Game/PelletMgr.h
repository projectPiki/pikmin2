#ifndef _GAME_PELLETMGR_H
#define _GAME_PELLETMGR_H

/*
        __vt__Q24Game9PelletMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game9PelletMgrFv
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__29Container<16GenericObjectMgr>FPv"
        .4byte "getNext__33NodeObjectMgr<16GenericObjectMgr>FPv"
        .4byte "getStart__33NodeObjectMgr<16GenericObjectMgr>Fv"
        .4byte "getEnd__33NodeObjectMgr<16GenericObjectMgr>Fv"
        .4byte "get__33NodeObjectMgr<16GenericObjectMgr>FPv"
        .4byte "getAt__29Container<16GenericObjectMgr>Fi"
        .4byte "getTo__29Container<16GenericObjectMgr>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__Q24Game9PelletMgrFv"
        .4byte "@28@doEntry__Q24Game9PelletMgrFv"
        .4byte "@28@doSetView__Q24Game9PelletMgrFi"
        .4byte "@28@doViewCalc__Q24Game9PelletMgrFv"
        .4byte "@28@doSimulation__Q24Game9PelletMgrFf"
        .4byte "@28@doDirectDraw__Q24Game9PelletMgrFR8Graphics"
        .4byte "@28@doSimpleDraw__Q24Game9PelletMgrFP8Viewport"
        .4byte loadResources__16GenericObjectMgrFv
        .4byte "@28@resetMgr__33NodeObjectMgr<16GenericObjectMgr>Fv"
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte doAnimation__Q24Game9PelletMgrFv
        .4byte doEntry__Q24Game9PelletMgrFv
        .4byte doSetView__Q24Game9PelletMgrFi
        .4byte doViewCalc__Q24Game9PelletMgrFv
        .4byte doSimulation__Q24Game9PelletMgrFf
        .4byte doDirectDraw__Q24Game9PelletMgrFR8Graphics
        .4byte "resetMgr__33NodeObjectMgr<16GenericObjectMgr>Fv"
        .4byte getMgrName__Q24Game9PelletMgrFv
        .4byte getCaveName__Q24Game9PelletMgrFi
        .4byte getCaveID__Q24Game9PelletMgrFPc
        .4byte doSimpleDraw__Q24Game9PelletMgrFP8Viewport
*/

struct CNode {
    virtual void _00() = 0;       // _00
    virtual void getChildCount(); // _04

    // _00 VTBL
};

struct Container<GenericObjectMgr> {
    virtual void _00() = 0;        // _00
    virtual void _04() = 0;        // _04
    virtual void getObject(void*); // _08
    virtual void _0C() = 0;        // _0C
    virtual void _10() = 0;        // _10
    virtual void _14() = 0;        // _14
    virtual void _18() = 0;        // _18
    virtual void getAt(int);       // _1C
    virtual void getTo();          // _20

    // _00 VTBL
};

struct NodeObjectMgr<GenericObjectMgr> {
    virtual void _00() = 0;      // _00
    virtual void _04() = 0;      // _04
    virtual void _08() = 0;      // _08
    virtual void getNext(void*); // _0C
    virtual void getStart();     // _10
    virtual void getEnd();       // _14
    virtual void get(void*);     // _18
    virtual void _1C() = 0;      // _1C
    virtual void _20() = 0;      // _20
    virtual void _24() = 0;      // _24
    virtual void _28() = 0;      // _28
    virtual void _2C() = 0;      // _2C
    virtual void _30() = 0;      // _30
    virtual void _34() = 0;      // _34
    virtual void _38() = 0;      // _38
    virtual void _3C() = 0;      // _3C
    virtual void _40() = 0;      // _40
    virtual void _44() = 0;      // _44
    virtual void _48() = 0;      // _48
    virtual void _4C() = 0;      // _4C
    virtual void _50() = 0;      // _50
    virtual void _54() = 0;      // _54
    virtual void _58() = 0;      // _58
    virtual void _5C() = 0;      // _5C
    virtual void _60() = 0;      // _60
    virtual void _64() = 0;      // _64
    virtual void _68() = 0;      // _68
    virtual void _6C() = 0;      // _6C
    virtual void _70() = 0;      // _70
    virtual void resetMgr();     // _74

    // _00 VTBL
};

struct GenericObjectMgr {
    virtual void _00() = 0;           // _00
    virtual void _04() = 0;           // _04
    virtual void _08() = 0;           // _08
    virtual void _0C() = 0;           // _0C
    virtual void _10() = 0;           // _10
    virtual void _14() = 0;           // _14
    virtual void _18() = 0;           // _18
    virtual void _1C() = 0;           // _1C
    virtual void _20() = 0;           // _20
    virtual void _24() = 0;           // _24
    virtual void _28() = 0;           // _28
    virtual void _2C() = 0;           // _2C
    virtual void _30() = 0;           // _30
    virtual void _34() = 0;           // _34
    virtual void _38() = 0;           // _38
    virtual void _3C() = 0;           // _3C
    virtual void _40() = 0;           // _40
    virtual void _44() = 0;           // _44
    virtual void loadResources();     // _48
    virtual void _4C() = 0;           // _4C
    virtual void pausable();          // _50
    virtual void frozenable();        // _54
    virtual void getMatrixLoadType(); // _58

    // _00 VTBL
};

namespace Game {
struct PelletMgr : public CNode,
                   public Container<GenericObjectMgr>,
                   public NodeObjectMgr<GenericObjectMgr>,
                   public GenericObjectMgr {
    virtual ~PelletMgr();                      // _00
    virtual void getChildCount();              // _04
    virtual void getObject(void*);             // _08
    virtual void getNext(void*);               // _0C
    virtual void getStart();                   // _10
    virtual void getEnd();                     // _14
    virtual void get(void*);                   // _18
    virtual void getAt(int);                   // _1C
    virtual void getTo();                      // _20
    virtual void _24() = 0;                    // _24
    virtual void _28() = 0;                    // _28
    virtual void @28 @doAnimation();           // _2C
    virtual void @28 @doEntry();               // _30
    virtual void @28 @doSetView(int);          // _34
    virtual void @28 @doViewCalc();            // _38
    virtual void @28 @doSimulation(float);     // _3C
    virtual void @28 @doDirectDraw(Graphics&); // _40
    virtual void @28 @doSimpleDraw(Viewport*); // _44
    virtual void loadResources();              // _48
    virtual void pausable();                   // _50
    virtual void frozenable();                 // _54
    virtual void getMatrixLoadType();          // _58
    virtual void doAnimation();                // _5C
    virtual void doEntry();                    // _60
    virtual void doSetView(int);               // _64
    virtual void doViewCalc();                 // _68
    virtual void doSimulation(float);          // _6C
    virtual void doDirectDraw(Graphics&);      // _70
    virtual void resetMgr();                   // _74
    virtual void getMgrName();                 // _78
    virtual void getCaveName(int);             // _7C
    virtual void getCaveID(char*);             // _80
    virtual void doSimpleDraw(Viewport*);      // _84

    // _00 VTBL
};
} // namespace Game

#endif
