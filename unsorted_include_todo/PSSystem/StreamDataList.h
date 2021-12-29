#ifndef _PSSYSTEM_STREAMDATALIST_H
#define _PSSYSTEM_STREAMDATALIST_H

/*
        __vt__Q28PSSystem14StreamDataList:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28PSSystem14StreamDataListFv
        .4byte read__Q28PSSystem14StreamDataListFR6Stream
        .4byte 0
        .4byte 0
        .4byte "@28@__dt__Q28PSSystem14StreamDataListFv"
*/

namespace PSSystem {
struct StreamDataList {
    virtual ~StreamDataList();  // _00
    virtual void read(Stream&); // _04
    virtual void _08() = 0;     // _08
    virtual void _0C() = 0;     // _0C
    virtual void @28 @__dt();   // _10

    // _00 VTBL
};
} // namespace PSSystem

#endif
