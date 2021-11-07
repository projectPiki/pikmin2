#ifndef _PSAUTOBGM_CONDUCTORMGR_H
#define _PSAUTOBGM_CONDUCTORMGR_H

namespace JADUtility {
struct DataLoadMgrNode {
    virtual void _00() = 0;         // _00
    virtual void isTempBuffaMode(); // _04

    // _00 VTBL
};
} // namespace JADUtility

namespace JADUtility {
struct DataMgrNode {
    virtual void _00() = 0;      // _00
    virtual void _04() = 0;      // _04
    virtual void init();         // _08
    virtual void _0C() = 0;      // _0C
    virtual void _10() = 0;      // _10
    virtual void _14() = 0;      // _14
    virtual void _18() = 0;      // _18
    virtual void getPath();      // _1C
    virtual void setPath(char*); // _20

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
            virtual void _00() = 0;                 // _00
            virtual void _04() = 0;                 // _04
            virtual void _08() = 0;                 // _08
            virtual void _0C() = 0;                 // _0C
            virtual void _10() = 0;                 // _10
            virtual void initInstance(void*, long); // _14
            virtual void initInstance();            // _18

            // _00 VTBL
        };
    } // namespace Conductor, PSAutoBgm
} // namespace PrmDataMgrNode<PSAutoBgm
} // namespace JADUtility

namespace PSAutoBgm {
struct ConductorMgr : public DataLoadMgrNode,
                      public DataMgrNode,
                      public AutoBgm > {
    virtual ~ConductorMgr();                // _00
    virtual void isTempBuffaMode();         // _04
    virtual void init();                    // _08
    virtual void getObjHeap();              // _0C
    virtual void getDataHeap();             // _10
    virtual void initInstance(void*, long); // _14
    virtual void initInstance();            // _18
    virtual void getPath();                 // _1C
    virtual void setPath(char*);            // _20
    virtual void getSaveTempHeap();         // _24
    virtual void _28() = 0;                 // _28
    virtual void _2C() = 0;                 // _2C
    virtual void @600 @28 @__dt();          // _30

    // _00 VTBL
};
} // namespace PSAutoBgm

#endif
