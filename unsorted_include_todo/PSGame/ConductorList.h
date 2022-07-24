#ifndef _PSGAME_CONDUCTORLIST_H
#define _PSGAME_CONDUCTORLIST_H

/*
        __vt__Q26PSGame13ConductorList:
        .4byte 0
        .4byte 0
        .4byte __dt__Q26PSGame13ConductorListFv
        .4byte read__Q26PSGame13ConductorListFR6Stream
        .4byte 0
        .4byte 0
        .4byte "@28@__dt__Q26PSGame13ConductorListFv"
*/

namespace PSGame {
struct ConductorList {
    virtual ~ConductorList();   // _08 (inline)
    virtual void read(Stream&); // _0C
    virtual void _10() = 0;     // _10
    virtual void _14() = 0;     // _14
    virtual void @28 @__dt();   // _18 (inline)

    void getSeqAndWaveFromConductor(const char*, unsigned char*, char**);
};
} // namespace PSGame

#endif
