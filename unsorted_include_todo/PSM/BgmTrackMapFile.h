#ifndef _PSM_BGMTRACKMAPFILE_H
#define _PSM_BGMTRACKMAPFILE_H

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
