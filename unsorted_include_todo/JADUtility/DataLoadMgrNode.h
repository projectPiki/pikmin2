#ifndef _JADUTILITY_DATALOADMGRNODE_H
#define _JADUTILITY_DATALOADMGRNODE_H

/*
        __vt__Q210JADUtility15DataLoadMgrNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q210JADUtility15DataLoadMgrNodeFv
        .4byte isTempBuffaMode__Q210JADUtility15DataLoadMgrNodeFv
        .4byte init__Q210JADUtility15DataLoadMgrNodeFv
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "@532@28@__dt__Q210JADUtility15DataLoadMgrNodeFv"
        .4byte "@532@28@init__Q210JADUtility15DataLoadMgrNodeFv"
*/

namespace JADUtility {
struct DataLoadMgrNode {
    virtual ~DataLoadMgrNode();     // _08 (inline)
    virtual void isTempBuffaMode(); // _0C (inline)
    virtual void init();            // _10 (inline)
    virtual void _14() = 0;         // _14
    virtual void _18() = 0;         // _18
    virtual void _1C() = 0;         // _1C
    virtual void _20() = 0;         // _20
    virtual void _24() = 0;         // _24
    virtual void _28() = 0;         // _28
    virtual void @532 @28 @__dt();  // _2C (inline)
    virtual void @532 @28 @init();  // _30 (inline)

    void initInstanceExt(void*, long);
    void setFlagsAsExternal(void*);
};
} // namespace JADUtility

#endif
