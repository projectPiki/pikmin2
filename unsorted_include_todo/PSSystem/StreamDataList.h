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
    virtual ~StreamDataList();  // _08 (inline)
    virtual void read(Stream&); // _0C (inline)
    virtual void _10() = 0;     // _10
    virtual void _14() = 0;     // _14
    virtual void @28 @__dt();   // _18 (inline)

    StreamDataList();
    void getStreamVolume(unsigned long);
};
} // namespace PSSystem

#endif
