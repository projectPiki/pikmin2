#ifndef _PSM_OBJMGR_H
#define _PSM_OBJMGR_H

namespace PSM {
struct ObjMgr {
    virtual void _00() = 0;   // _00
    virtual void _04() = 0;   // _04
    virtual void @12 @__dt(); // _08
    virtual void _0C() = 0;   // _0C
    virtual void _10() = 0;   // _10
    virtual void @16 @__dt(); // _14
    virtual ~ObjMgr();        // _18

    // _00 VTBL
};
} // namespace PSM

#endif
