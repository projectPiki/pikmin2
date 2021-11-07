#ifndef _JADUTILITY_DATALOADMGRNODE_H
#define _JADUTILITY_DATALOADMGRNODE_H

namespace JADUtility {
struct DataLoadMgrNode {
    virtual ~DataLoadMgrNode();     // _00
    virtual void isTempBuffaMode(); // _04
    virtual void init();            // _08
    virtual void _0C() = 0;         // _0C
    virtual void _10() = 0;         // _10
    virtual void _14() = 0;         // _14
    virtual void _18() = 0;         // _18
    virtual void _1C() = 0;         // _1C
    virtual void _20() = 0;         // _20
    virtual void @532 @28 @__dt();  // _24
    virtual void @532 @28 @init();  // _28

    // _00 VTBL
};
} // namespace JADUtility

#endif
