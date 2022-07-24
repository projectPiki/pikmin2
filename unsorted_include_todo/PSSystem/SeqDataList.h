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
    virtual ~SeqDataList();     // _08
    virtual void read(Stream&); // _0C
    virtual void _10() = 0;     // _10
    virtual void _14() = 0;     // _14
    virtual void @28 @__dt();   // _18

    // _00 VTBL
};
} // namespace PSSystem

#endif
