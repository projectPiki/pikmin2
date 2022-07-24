#ifndef _GAME_PELLETOTAKARA_MGR_H
#define _GAME_PELLETOTAKARA_MGR_H

/*
        __vt__Q34Game13PelletOtakara3Mgr:
        .4byte 0
        .4byte 0
        .4byte
   "doAnimation__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
        .4byte
   "doEntry__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
        .4byte
   "doSetView__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fi"
        .4byte
   "doViewCalc__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
        .4byte
   "doSimulation__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Ff"
        .4byte
   "doDirectDraw__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte
   "resetMgr__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte
   "resetMgrAndResources__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
        .4byte
   "birth__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv" .4byte
   "kill__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game6Pellet"
        .4byte setupResources__Q34Game13PelletOtakara3MgrFv
        .4byte
   "birthFromTeki__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game12PelletConfig"
        .4byte
   "setComeAlive__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fi"
        .4byte
   "setComeAlive__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game6Pellet"
        .4byte
   "onCreateModel__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ28SysShape5Model"
        .4byte getMgrName__Q34Game13PelletOtakara3MgrFv
        .4byte getMgrID__Q34Game13PelletOtakara3MgrFv
        .4byte
   "setRevival__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game6Pellet"
        .4byte
   "setFromTeki__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game6Pellet"
        .4byte
   "getFlag__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPQ24Game6Pellet"
        .4byte createShape__Q24Game13BasePelletMgrFii
        .4byte
   "generatorBirth__Q34Game13PelletOtakara3MgrFR10Vector3<f>R10Vector3<f>PQ24Game13GenPelletParm"
        .4byte
   generatorWrite__Q34Game13PelletOtakara3MgrFR6StreamPQ24Game13GenPelletParm
        .4byte
   generatorRead__Q34Game13PelletOtakara3MgrFR6StreamPQ24Game13GenPelletParmUl
        .4byte generatorLocalVersion__Q34Game13PelletOtakara3MgrFv
        .4byte generatorGetShape__Q24Game13BasePelletMgrFPQ24Game13GenPelletParm
        .4byte generatorNewPelletParm__Q34Game13PelletOtakara3MgrFv
        .4byte
   "getObjectPtr__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPv"
        .4byte
   "getNext__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPv"
        .4byte
   "getStart__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
        .4byte
   "getEnd__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv" .4byte
   0 .4byte 0 .4byte "@84@__dt__Q34Game13PelletOtakara3MgrFv" .4byte
   getChildCount__5CNodeFv .4byte
   "getObject__40Container<Q34Game13PelletOtakara6Object>FPv" .4byte
   "@84@getNext__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPv"
        .4byte
   "@84@getStart__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
        .4byte
   "@84@getEnd__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"
        .4byte
   "@84@get__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPv"
        .4byte "getAt__40Container<Q34Game13PelletOtakara6Object>Fi"
        .4byte "getTo__40Container<Q34Game13PelletOtakara6Object>Fv"
        .4byte
   "get__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>FPv" .4byte
   __dt__Q34Game13PelletOtakara3MgrFv
*/

namespace Game {
namespace FixedSizePelletMgr < Game
{
    namespace PelletOtakara {
        struct Object >
        {
            virtual void FixedSizePelletMgr < doAnimation();  // _08 (inline)
            virtual void FixedSizePelletMgr < doEntry();      // _0C (inline)
            virtual void FixedSizePelletMgr < doSetView(int); // _10 (inline)
            virtual void FixedSizePelletMgr < doViewCalc();   // _14 (inline)
            virtual void FixedSizePelletMgr
                < doSimulation(float); // _18 (inline)
            virtual void FixedSizePelletMgr
                < doDirectDraw(Graphics&);                // _1C (inline)
            virtual void _20() = 0;                       // _20
            virtual void _24() = 0;                       // _24
            virtual void FixedSizePelletMgr < resetMgr(); // _28 (inline)
            virtual void _2C() = 0;                       // _2C
            virtual void _30() = 0;                       // _30
            virtual void _34() = 0;                       // _34
            virtual void FixedSizePelletMgr
                < resetMgrAndResources();                    // _38 (inline)
            virtual void FixedSizePelletMgr < birth();       // _3C (inline)
            virtual void FixedSizePelletMgr < kill(Pellet*); // _40 (inline)
            virtual void setupResources();                   // _44
            virtual void FixedSizePelletMgr
                < birthFromTeki(PelletConfig*);                  // _48 (inline)
            virtual void FixedSizePelletMgr < setComeAlive(int); // _4C (inline)
            virtual void FixedSizePelletMgr
                < setComeAlive(Pellet*); // _50 (inline)
            virtual void FixedSizePelletMgr
                < onCreateModel(SysShape::Model*); // _54 (inline)
            virtual void getMgrName();             // _58 (inline)
            virtual void getMgrID();               // _5C (inline)
            virtual void FixedSizePelletMgr
                < setRevival(Pellet*); // _60 (inline)
            virtual void FixedSizePelletMgr
                < setFromTeki(Pellet*);                         // _64 (inline)
            virtual void FixedSizePelletMgr < getFlag(Pellet*); // _68 (inline)
            virtual void _6C() = 0;                             // _6C
            virtual void generatorBirth(Vector3<float>&, Vector3<float>&,
                                        GenPelletParm*);          // _70
            virtual void generatorWrite(Stream&, GenPelletParm*); // _74
            virtual void generatorRead(Stream&, GenPelletParm*,
                                       unsigned long); // _78
            virtual void generatorLocalVersion();      // _7C (inline)
            virtual void _80() = 0;                    // _80
            virtual void generatorNewPelletParm();     // _84
            virtual void FixedSizePelletMgr
                < getObjectPtr(void*);                        // _88 (inline)
            virtual void FixedSizePelletMgr < getNext(void*); // _8C (inline)
            virtual void FixedSizePelletMgr < getStart();     // _90 (inline)
            virtual void FixedSizePelletMgr < getEnd();       // _94 (inline)
            virtual void _98() = 0;                           // _98
            virtual void _9C() = 0;                           // _9C
            virtual void @84 @__dt();                         // _A0 (inline)
            virtual void _A4() = 0;                           // _A4
            virtual void getObject(void*);                    // _A8 (inline)
            virtual void _AC() = 0;                           // _AC
            virtual void _B0() = 0;                           // _B0
            virtual void _B4() = 0;                           // _B4
            virtual void _B8() = 0;                           // _B8
            virtual void getAt(int);                          // _BC (inline)
            virtual void getTo();                             // _C0 (inline)
            virtual void FixedSizePelletMgr < get(void*);     // _C4 (inline)
        };
    } // namespace PelletOtakara
} // namespace FixedSizePelletMgr<Game
} // namespace Game

struct GenericObjectMgr {
    virtual void _08() = 0;               // _08
    virtual void _0C() = 0;               // _0C
    virtual void _10() = 0;               // _10
    virtual void _14() = 0;               // _14
    virtual void _18() = 0;               // _18
    virtual void _1C() = 0;               // _1C
    virtual void doSimpleDraw(Viewport*); // _20 (inline)
    virtual void loadResources();         // _24 (inline)
    virtual void _28() = 0;               // _28
    virtual void pausable();              // _2C (inline)
    virtual void frozenable();            // _30 (inline)
    virtual void getMatrixLoadType();     // _34 (inline)
};

namespace Game {
struct BasePelletMgr {
    virtual void _08() = 0;             // _08
    virtual void _0C() = 0;             // _0C
    virtual void _10() = 0;             // _10
    virtual void _14() = 0;             // _14
    virtual void _18() = 0;             // _18
    virtual void _1C() = 0;             // _1C
    virtual void _20() = 0;             // _20
    virtual void _24() = 0;             // _24
    virtual void _28() = 0;             // _28
    virtual void _2C() = 0;             // _2C
    virtual void _30() = 0;             // _30
    virtual void _34() = 0;             // _34
    virtual void _38() = 0;             // _38
    virtual void _3C() = 0;             // _3C
    virtual void _40() = 0;             // _40
    virtual void setupResources();      // _44
    virtual void _48() = 0;             // _48
    virtual void _4C() = 0;             // _4C
    virtual void _50() = 0;             // _50
    virtual void _54() = 0;             // _54
    virtual void getMgrName();          // _58 (inline)
    virtual void getMgrID();            // _5C (inline)
    virtual void _60() = 0;             // _60
    virtual void _64() = 0;             // _64
    virtual void _68() = 0;             // _68
    virtual void createShape(int, int); // _6C
    virtual void generatorBirth(Vector3<float>&, Vector3<float>&,
                                GenPelletParm*);                        // _70
    virtual void generatorWrite(Stream&, GenPelletParm*);               // _74
    virtual void generatorRead(Stream&, GenPelletParm*, unsigned long); // _78
    virtual void generatorLocalVersion();           // _7C (inline)
    virtual void generatorGetShape(GenPelletParm*); // _80
};
} // namespace Game

struct CNode {
    virtual void _08() = 0;        // _08
    virtual void _0C() = 0;        // _0C
    virtual void _10() = 0;        // _10
    virtual void _14() = 0;        // _14
    virtual void _18() = 0;        // _18
    virtual void _1C() = 0;        // _1C
    virtual void _20() = 0;        // _20
    virtual void _24() = 0;        // _24
    virtual void _28() = 0;        // _28
    virtual void _2C() = 0;        // _2C
    virtual void _30() = 0;        // _30
    virtual void _34() = 0;        // _34
    virtual void _38() = 0;        // _38
    virtual void _3C() = 0;        // _3C
    virtual void _40() = 0;        // _40
    virtual void setupResources(); // _44
    virtual void _48() = 0;        // _48
    virtual void _4C() = 0;        // _4C
    virtual void _50() = 0;        // _50
    virtual void _54() = 0;        // _54
    virtual void getMgrName();     // _58 (inline)
    virtual void getMgrID();       // _5C (inline)
    virtual void _60() = 0;        // _60
    virtual void _64() = 0;        // _64
    virtual void _68() = 0;        // _68
    virtual void _6C() = 0;        // _6C
    virtual void generatorBirth(Vector3<float>&, Vector3<float>&,
                                GenPelletParm*);                        // _70
    virtual void generatorWrite(Stream&, GenPelletParm*);               // _74
    virtual void generatorRead(Stream&, GenPelletParm*, unsigned long); // _78
    virtual void generatorLocalVersion();  // _7C (inline)
    virtual void _80() = 0;                // _80
    virtual void generatorNewPelletParm(); // _84
    virtual void _88() = 0;                // _88
    virtual void _8C() = 0;                // _8C
    virtual void _90() = 0;                // _90
    virtual void _94() = 0;                // _94
    virtual void _98() = 0;                // _98
    virtual void _9C() = 0;                // _9C
    virtual void @84 @__dt();              // _A0 (inline)
    virtual void getChildCount();          // _A4
};

namespace Game {
namespace PelletOtakara {
    struct Mgr : public Object >, public GenericObjectMgr, public BasePelletMgr,
        public CNode {
        virtual void setupResources(); // _44
        virtual void getMgrName();     // _58 (inline)
        virtual void getMgrID();       // _5C (inline)
        virtual void generatorBirth(Vector3<float>&, Vector3<float>&,
                                    GenPelletParm*);          // _70
        virtual void generatorWrite(Stream&, GenPelletParm*); // _74
        virtual void generatorRead(Stream&, GenPelletParm*,
                                   unsigned long); // _78
        virtual void generatorLocalVersion();      // _7C (inline)
        virtual void generatorNewPelletParm();     // _84
        virtual void _98() = 0;                    // _98
        virtual void _9C() = 0;                    // _9C
        virtual void @84 @__dt();                  // _A0 (inline)
        virtual ~Mgr();                            // _C8 (inline)

        Mgr();
    };
} // namespace PelletOtakara
} // namespace Game

#endif
