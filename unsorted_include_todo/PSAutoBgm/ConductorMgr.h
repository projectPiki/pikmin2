#ifndef _PSAUTOBGM_CONDUCTORMGR_H
#define _PSAUTOBGM_CONDUCTORMGR_H

/*
        __vt__Q29PSAutoBgm12ConductorMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q29PSAutoBgm12ConductorMgrFv
        .4byte isTempBuffaMode__Q210JADUtility15DataLoadMgrNodeFv
        .4byte init__Q210JADUtility11DataMgrNodeFv
        .4byte getObjHeap__Q29PSAutoBgm12ConductorMgrFv
        .4byte getDataHeap__Q29PSAutoBgm12ConductorMgrFv
        .4byte
   "initInstance__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>FPvl"
        .4byte
   "initInstance__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>Fv"
        .4byte getPath__Q210JADUtility11DataMgrNodeFv
        .4byte setPath__Q210JADUtility11DataMgrNodeFPc
        .4byte getSaveTempHeap__Q29PSAutoBgm12ConductorMgrFv
        .4byte 0
        .4byte 0
        .4byte "@600@28@__dt__Q29PSAutoBgm12ConductorMgrFv"
        .4byte "@600@28@init__Q210JADUtility11DataMgrNodeFv"
*/

namespace JADUtility {
struct DataLoadMgrNode {
    virtual void _08() = 0;         // _08
    virtual void isTempBuffaMode(); // _0C

    // _00 VTBL
};
} // namespace JADUtility

namespace JADUtility {
struct DataMgrNode {
    virtual void _08() = 0;      // _08
    virtual void _0C() = 0;      // _0C
    virtual void init();         // _10
    virtual void _14() = 0;      // _14
    virtual void _18() = 0;      // _18
    virtual void _1C() = 0;      // _1C
    virtual void _20() = 0;      // _20
    virtual void getPath();      // _24
    virtual void setPath(char*); // _28

    // _00 VTBL
};
} // namespace JADUtility

namespace JADUtility {
namespace PrmDataMgrNode < PSAutoBgm
{
    namespace Conductor, PSAutoBgm
    {
        struct AutoBgm >
        {
            virtual void _08() = 0;                 // _08
            virtual void _0C() = 0;                 // _0C
            virtual void _10() = 0;                 // _10
            virtual void _14() = 0;                 // _14
            virtual void _18() = 0;                 // _18
            virtual void initInstance(void*, long); // _1C
            virtual void initInstance();            // _20

            // _00 VTBL
        };
    } // namespace Conductor, PSAutoBgm
} // namespace PrmDataMgrNode<PSAutoBgm
} // namespace JADUtility

namespace PSAutoBgm {
struct ConductorMgr : public DataLoadMgrNode,
                      public DataMgrNode,
                      public AutoBgm > {
    virtual ~ConductorMgr();        // _08
    virtual void getObjHeap();      // _14
    virtual void getDataHeap();     // _18
    virtual void getSaveTempHeap(); // _2C
    virtual void _30() = 0;         // _30
    virtual void _34() = 0;         // _34
    virtual void @600 @28 @__dt();  // _38

    // _00 VTBL
};
} // namespace PSAutoBgm

#endif
