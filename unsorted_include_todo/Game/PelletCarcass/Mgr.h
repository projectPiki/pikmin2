#ifndef _GAME_PELLETCARCASS_MGR_H
#define _GAME_PELLETCARCASS_MGR_H

/*
        __vt__Q34Game13PelletCarcass3Mgr:
        .4byte 0
        .4byte 0
        .4byte
   "doAnimation__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte
   "doEntry__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte
   "doSetView__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fi"
        .4byte
   "doViewCalc__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte
   "doSimulation__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Ff"
        .4byte
   "doDirectDraw__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte
   "resetMgr__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte
   "resetMgrAndResources__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte
   "birth__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv" .4byte
   "kill__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPQ24Game6Pellet"
        .4byte setupResources__Q34Game13PelletCarcass3MgrFv
        .4byte
   "birthFromTeki__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPQ24Game12PelletConfig"
        .4byte
   "setComeAlive__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fi"
        .4byte
   "setComeAlive__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPQ24Game6Pellet"
        .4byte
   "onCreateModel__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPQ28SysShape5Model"
        .4byte getMgrName__Q34Game13PelletCarcass3MgrFv
        .4byte getMgrID__Q34Game13PelletCarcass3MgrFv
        .4byte
   "setRevival__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPQ24Game6Pellet"
        .4byte
   "setFromTeki__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPQ24Game6Pellet"
        .4byte
   "getFlag__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPQ24Game6Pellet"
        .4byte createShape__Q34Game13PelletCarcass3MgrFii
        .4byte
   "generatorBirth__Q24Game13BasePelletMgrFR10Vector3<f>R10Vector3<f>PQ24Game13GenPelletParm"
        .4byte
   generatorWrite__Q24Game13BasePelletMgrFR6StreamPQ24Game13GenPelletParm .4byte
   generatorRead__Q24Game13BasePelletMgrFR6StreamPQ24Game13GenPelletParmUl
        .4byte generatorLocalVersion__Q24Game13BasePelletMgrFv
        .4byte generatorGetShape__Q24Game13BasePelletMgrFPQ24Game13GenPelletParm
        .4byte generatorNewPelletParm__Q24Game13BasePelletMgrFv
        .4byte
   "getObjectPtr__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPv"
        .4byte
   "getNext__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPv"
        .4byte
   "getStart__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte
   "getEnd__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv" .4byte
   0 .4byte 0 .4byte "@84@__dt__Q34Game13PelletCarcass3MgrFv" .4byte
   getChildCount__5CNodeFv .4byte
   "getObject__40Container<Q34Game13PelletCarcass6Object>FPv" .4byte
   "@84@getNext__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPv"
        .4byte
   "@84@getStart__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte
   "@84@getEnd__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv"
        .4byte
   "@84@get__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPv"
        .4byte "getAt__40Container<Q34Game13PelletCarcass6Object>Fi"
        .4byte "getTo__40Container<Q34Game13PelletCarcass6Object>Fv"
        .4byte
   "get__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>FPv" .4byte
   __dt__Q34Game13PelletCarcass3MgrFv
*/

namespace Game {
namespace FixedSizePelletMgr < Game
{
    namespace PelletCarcass {
        struct Object >
        {
            virtual void FixedSizePelletMgr < doAnimation();           // _00
            virtual void FixedSizePelletMgr < doEntry();               // _04
            virtual void FixedSizePelletMgr < doSetView(int);          // _08
            virtual void FixedSizePelletMgr < doViewCalc();            // _0C
            virtual void FixedSizePelletMgr < doSimulation(float);     // _10
            virtual void FixedSizePelletMgr < doDirectDraw(Graphics&); // _14
            virtual void _18() = 0;                                    // _18
            virtual void _1C() = 0;                                    // _1C
            virtual void FixedSizePelletMgr < resetMgr();              // _20
            virtual void _24() = 0;                                    // _24
            virtual void _28() = 0;                                    // _28
            virtual void _2C() = 0;                                    // _2C
            virtual void FixedSizePelletMgr < resetMgrAndResources();  // _30
            virtual void FixedSizePelletMgr < birth();                 // _34
            virtual void FixedSizePelletMgr < kill(Pellet*);           // _38
            virtual void _3C() = 0;                                    // _3C
            virtual void FixedSizePelletMgr
                < birthFromTeki(PelletConfig*);                      // _40
            virtual void FixedSizePelletMgr < setComeAlive(int);     // _44
            virtual void FixedSizePelletMgr < setComeAlive(Pellet*); // _48
            virtual void FixedSizePelletMgr
                < onCreateModel(SysShape::Model*);                  // _4C
            virtual void _50() = 0;                                 // _50
            virtual void _54() = 0;                                 // _54
            virtual void FixedSizePelletMgr < setRevival(Pellet*);  // _58
            virtual void FixedSizePelletMgr < setFromTeki(Pellet*); // _5C
            virtual void FixedSizePelletMgr < getFlag(Pellet*);     // _60
            virtual void _64() = 0;                                 // _64
            virtual void _68() = 0;                                 // _68
            virtual void _6C() = 0;                                 // _6C
            virtual void _70() = 0;                                 // _70
            virtual void _74() = 0;                                 // _74
            virtual void _78() = 0;                                 // _78
            virtual void _7C() = 0;                                 // _7C
            virtual void FixedSizePelletMgr < getObjectPtr(void*);  // _80
            virtual void FixedSizePelletMgr < getNext(void*);       // _84
            virtual void FixedSizePelletMgr < getStart();           // _88
            virtual void FixedSizePelletMgr < getEnd();             // _8C
            virtual void _90() = 0;                                 // _90
            virtual void _94() = 0;                                 // _94
            virtual void _98() = 0;                                 // _98
            virtual void _9C() = 0;                                 // _9C
            virtual void getObject(void*);                          // _A0
            virtual void _A4() = 0;                                 // _A4
            virtual void _A8() = 0;                                 // _A8
            virtual void _AC() = 0;                                 // _AC
            virtual void _B0() = 0;                                 // _B0
            virtual void getAt(int);                                // _B4
            virtual void getTo();                                   // _B8
            virtual void FixedSizePelletMgr < get(void*);           // _BC

            // _00 VTBL
        };
    } // namespace PelletCarcass
} // namespace FixedSizePelletMgr<Game
} // namespace Game

struct GenericObjectMgr {
    virtual void _00() = 0;               // _00
    virtual void _04() = 0;               // _04
    virtual void _08() = 0;               // _08
    virtual void _0C() = 0;               // _0C
    virtual void _10() = 0;               // _10
    virtual void _14() = 0;               // _14
    virtual void doSimpleDraw(Viewport*); // _18
    virtual void loadResources();         // _1C
    virtual void _20() = 0;               // _20
    virtual void pausable();              // _24
    virtual void frozenable();            // _28
    virtual void getMatrixLoadType();     // _2C

    // _00 VTBL
};

namespace Game {
struct BasePelletMgr {
    virtual void _00() = 0; // _00
    virtual void _04() = 0; // _04
    virtual void _08() = 0; // _08
    virtual void _0C() = 0; // _0C
    virtual void _10() = 0; // _10
    virtual void _14() = 0; // _14
    virtual void _18() = 0; // _18
    virtual void _1C() = 0; // _1C
    virtual void _20() = 0; // _20
    virtual void _24() = 0; // _24
    virtual void _28() = 0; // _28
    virtual void _2C() = 0; // _2C
    virtual void _30() = 0; // _30
    virtual void _34() = 0; // _34
    virtual void _38() = 0; // _38
    virtual void _3C() = 0; // _3C
    virtual void _40() = 0; // _40
    virtual void _44() = 0; // _44
    virtual void _48() = 0; // _48
    virtual void _4C() = 0; // _4C
    virtual void _50() = 0; // _50
    virtual void _54() = 0; // _54
    virtual void _58() = 0; // _58
    virtual void _5C() = 0; // _5C
    virtual void _60() = 0; // _60
    virtual void _64() = 0; // _64
    virtual void generatorBirth(Vector3<float>&, Vector3<float>&,
                                GenPelletParm*);                        // _68
    virtual void generatorWrite(Stream&, GenPelletParm*);               // _6C
    virtual void generatorRead(Stream&, GenPelletParm*, unsigned long); // _70
    virtual void generatorLocalVersion();                               // _74
    virtual void generatorGetShape(GenPelletParm*);                     // _78
    virtual void generatorNewPelletParm();                              // _7C

    // _00 VTBL
};
} // namespace Game

struct CNode {
    virtual void _00() = 0;       // _00
    virtual void _04() = 0;       // _04
    virtual void _08() = 0;       // _08
    virtual void _0C() = 0;       // _0C
    virtual void _10() = 0;       // _10
    virtual void _14() = 0;       // _14
    virtual void _18() = 0;       // _18
    virtual void _1C() = 0;       // _1C
    virtual void _20() = 0;       // _20
    virtual void _24() = 0;       // _24
    virtual void _28() = 0;       // _28
    virtual void _2C() = 0;       // _2C
    virtual void _30() = 0;       // _30
    virtual void _34() = 0;       // _34
    virtual void _38() = 0;       // _38
    virtual void _3C() = 0;       // _3C
    virtual void _40() = 0;       // _40
    virtual void _44() = 0;       // _44
    virtual void _48() = 0;       // _48
    virtual void _4C() = 0;       // _4C
    virtual void _50() = 0;       // _50
    virtual void _54() = 0;       // _54
    virtual void _58() = 0;       // _58
    virtual void _5C() = 0;       // _5C
    virtual void _60() = 0;       // _60
    virtual void _64() = 0;       // _64
    virtual void _68() = 0;       // _68
    virtual void _6C() = 0;       // _6C
    virtual void _70() = 0;       // _70
    virtual void _74() = 0;       // _74
    virtual void _78() = 0;       // _78
    virtual void _7C() = 0;       // _7C
    virtual void _80() = 0;       // _80
    virtual void _84() = 0;       // _84
    virtual void _88() = 0;       // _88
    virtual void _8C() = 0;       // _8C
    virtual void _90() = 0;       // _90
    virtual void _94() = 0;       // _94
    virtual void _98() = 0;       // _98
    virtual void getChildCount(); // _9C

    // _00 VTBL
};

namespace Game {
namespace PelletCarcass {
    struct Mgr : public Object >, public GenericObjectMgr, public BasePelletMgr,
        public CNode {
        virtual void FixedSizePelletMgr < doAnimation();                // _00
        virtual void FixedSizePelletMgr < doEntry();                    // _04
        virtual void FixedSizePelletMgr < doSetView(int);               // _08
        virtual void FixedSizePelletMgr < doViewCalc();                 // _0C
        virtual void FixedSizePelletMgr < doSimulation(float);          // _10
        virtual void FixedSizePelletMgr < doDirectDraw(Graphics&);      // _14
        virtual void doSimpleDraw(Viewport*);                           // _18
        virtual void loadResources();                                   // _1C
        virtual void FixedSizePelletMgr < resetMgr();                   // _20
        virtual void pausable();                                        // _24
        virtual void frozenable();                                      // _28
        virtual void getMatrixLoadType();                               // _2C
        virtual void FixedSizePelletMgr < resetMgrAndResources();       // _30
        virtual void FixedSizePelletMgr < birth();                      // _34
        virtual void FixedSizePelletMgr < kill(Pellet*);                // _38
        virtual void setupResources();                                  // _3C
        virtual void FixedSizePelletMgr < birthFromTeki(PelletConfig*); // _40
        virtual void FixedSizePelletMgr < setComeAlive(int);            // _44
        virtual void FixedSizePelletMgr < setComeAlive(Pellet*);        // _48
        virtual void FixedSizePelletMgr
            < onCreateModel(SysShape::Model*);                  // _4C
        virtual void getMgrName();                              // _50
        virtual void getMgrID();                                // _54
        virtual void FixedSizePelletMgr < setRevival(Pellet*);  // _58
        virtual void FixedSizePelletMgr < setFromTeki(Pellet*); // _5C
        virtual void FixedSizePelletMgr < getFlag(Pellet*);     // _60
        virtual void createShape(int, int);                     // _64
        virtual void generatorBirth(Vector3<float>&, Vector3<float>&,
                                    GenPelletParm*);          // _68
        virtual void generatorWrite(Stream&, GenPelletParm*); // _6C
        virtual void generatorRead(Stream&, GenPelletParm*,
                                   unsigned long);             // _70
        virtual void generatorLocalVersion();                  // _74
        virtual void generatorGetShape(GenPelletParm*);        // _78
        virtual void generatorNewPelletParm();                 // _7C
        virtual void FixedSizePelletMgr < getObjectPtr(void*); // _80
        virtual void FixedSizePelletMgr < getNext(void*);      // _84
        virtual void FixedSizePelletMgr < getStart();          // _88
        virtual void FixedSizePelletMgr < getEnd();            // _8C
        virtual void _90() = 0;                                // _90
        virtual void _94() = 0;                                // _94
        virtual void @84 @__dt();                              // _98
        virtual void getChildCount();                          // _9C
        virtual void getObject(void*);                         // _A0
        virtual void getAt(int);                               // _B4
        virtual void getTo();                                  // _B8
        virtual void FixedSizePelletMgr < get(void*);          // _BC
        virtual ~Mgr();                                        // _C0

        // _00 VTBL
    };
} // namespace PelletCarcass
} // namespace Game

#endif
