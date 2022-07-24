#ifndef _JADUTILITY_DATAMGRNODE_H
#define _JADUTILITY_DATAMGRNODE_H

/*
        __vt__Q210JADUtility11DataMgrNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q210JADUtility11DataMgrNodeFv
        .4byte isTempBuffaMode__Q210JADUtility15DataLoadMgrNodeFv
        .4byte init__Q210JADUtility11DataMgrNodeFv
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte getPath__Q210JADUtility11DataMgrNodeFv
        .4byte setPath__Q210JADUtility11DataMgrNodeFPc
        .4byte 0
        .4byte 0
        .4byte "@592@28@__dt__Q210JADUtility11DataMgrNodeFv"
        .4byte "@592@28@init__Q210JADUtility11DataMgrNodeFv"
*/

namespace JADUtility {
struct DataLoadMgrNode {
    virtual ~DataLoadMgrNode();     // _08
    virtual void isTempBuffaMode(); // _0C

    // _00 VTBL
};
} // namespace JADUtility

namespace JADUtility {
struct DataMgrNode : public DataLoadMgrNode {
    virtual ~DataMgrNode();        // _08
    virtual void init();           // _10
    virtual void _14() = 0;        // _14
    virtual void _18() = 0;        // _18
    virtual void _1C() = 0;        // _1C
    virtual void _20() = 0;        // _20
    virtual void getPath();        // _24
    virtual void setPath(char*);   // _28
    virtual void _2C() = 0;        // _2C
    virtual void _30() = 0;        // _30
    virtual void @592 @28 @__dt(); // _34
    virtual void @592 @28 @init(); // _38

    // _00 VTBL
};
} // namespace JADUtility

#endif
