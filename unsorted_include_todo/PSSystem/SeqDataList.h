#ifndef _PSSYSTEM_SEQDATALIST_H
#define _PSSYSTEM_SEQDATALIST_H

/*
        __vt__Q28PSSystem11SeqDataList:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28PSSystem11SeqDataListFv
        .4byte read__Q28PSSystem11SeqDataListFR6Stream
        .4byte 0
        .4byte 0
        .4byte "@28@__dt__Q28PSSystem11SeqDataListFv"
*/

namespace PSSystem {
struct SeqDataList {
    virtual ~SeqDataList();     // _00
    virtual void read(Stream&); // _04
    virtual void _08() = 0;     // _08
    virtual void _0C() = 0;     // _0C
    virtual void @28 @__dt();   // _10

    // _00 VTBL
};
} // namespace PSSystem

#endif
