#ifndef _PSM_BGMTRACKMAPFILE_H
#define _PSM_BGMTRACKMAPFILE_H

/*
        __vt__Q23PSM15BgmTrackMapFile:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM15BgmTrackMapFileFv
        .4byte read__Q23PSM15BgmTrackMapFileFR6Stream
        .4byte 0
        .4byte 0
        .4byte "@28@__dt__Q23PSM15BgmTrackMapFileFv"
        .4byte 0
*/

namespace PSM {
struct BgmTrackMapFile {
    virtual ~BgmTrackMapFile(); // _00
    virtual void read(Stream&); // _04
    virtual void _08() = 0;     // _08
    virtual void _0C() = 0;     // _0C
    virtual void @28 @__dt();   // _10
    virtual void _14() = 0;     // _14

    // _00 VTBL
};
} // namespace PSM

#endif
